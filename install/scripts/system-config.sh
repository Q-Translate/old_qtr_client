#!/bin/bash -x

### go to the script directory
cd $(dirname $0)

### copy overlay files over to the system
cp -TdR $code_dir/install/overlay/ /

### put the cache on RAM (to improve efficiency)
sed -i /etc/fstab \
    -e '/appended by installation scripts/,$ d'
cat <<EOF >> /etc/fstab
##### appended by installation scripts
tmpfs		/dev/shm	tmpfs	defaults,noexec,nosuid	0	0
tmpfs		/var/www/qcl/cache	tmpfs	defaults,size=5M,mode=0777,noexec,nosuid	0	0
devpts		/dev/pts	devpts	rw,noexec,nosuid,gid=5,mode=620		0	0
# mount /tmp on RAM for better performance
tmpfs /tmp tmpfs defaults,noatime,mode=1777,nosuid 0 0
EOF

### change the prompt to display the chroot name, the git branch etc
echo $target > /etc/debian_chroot
sed -i /root/.bashrc \
    -e '/^#force_color_prompt=/c force_color_prompt=yes' \
    -e '/^# get the git branch/,+4 d'
cat <<EOF >> /root/.bashrc
# get the git branch (used in the prompt below)
function parse_git_branch {
    git branch --no-color 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/'
}
EOF
PS1='\\n\\[\\033[01;32m\\]${debian_chroot:+($debian_chroot)}\\[\\033[00m\\]\\u@\\h\\[\\033[00m\\]:\\[\\033[01;34m\\]\\w\\[\\e[32m\\]$(parse_git_branch)\\n==> \\$ \\[\\033[00m\\]'
sed -i /root/.bashrc \
    -e "/^if \[ \"\$color_prompt\" = yes \]/,+2 s/PS1=.*/PS1='$PS1'/"

### configure apache2
a2enmod ssl
a2dissite 000-default
a2ensite qcl qcl-ssl
a2enmod headers rewrite
ln -sf /etc/phpmyadmin/apache.conf /etc/apache2/conf-available/phpmyadmin.conf
a2enconf downloads phpmyadmin

sed -i /etc/php/7.0/apache2/php.ini \
    -e '/^\[PHP\]/ a apc.rfc1867 = 1' \
    -e '/^display_errors/ c display_errors = On'

sed -i /etc/apache2/mods-available/mpm_prefork.conf \
    -e '/^<IfModule/,+5 s/StartServers.*/StartServers 2/' \
    -e '/^<IfModule/,+5 s/MinSpareServers.*/MinSpareServers 2/' \
    -e '/^<IfModule/,+5 s/MaxSpareServers.*/MaxSpareServers 4/' \
    -e '/^<IfModule/,+5 s/MaxRequestWorkers.*/MaxRequestWorkers 50/'

### modify the configuration of php
cat <<EOF > /etc/php/7.0/mods-available/apcu.ini
extension=apcu.so
apcu.mmap_file_mask=/tmp/apcu.XXXXXX
apcu.shm_size=96M
EOF

sed -i /etc/php/7.0/apache2/php.ini \
    -e '/^;\?memory_limit/ c memory_limit = 200M' \
    -e '/^;\?max_execution_time/ c max_execution_time = 90' \
    -e '/^;\?display_errors/ c display_errors = On' \
    -e '/^;\?post_max_size/ c post_max_size = 16M' \
    -e '/^;\?cgi\.fix_pathinfo/ c cgi.fix_pathinfo = 1' \
    -e '/^;\?upload_max_filesize/ c upload_max_filesize = 16M' \
    -e '/^;\?default_socket_timeout/ c default_socket_timeout = 90'

### generates the file /etc/defaults/locale
update-locale

### customize the configuration of sshd
sed -i /etc/ssh/sshd_config \
    -e 's/^Port/#Port/' \
    -e 's/^PasswordAuthentication/#PasswordAuthentication/' \
    -e 's/^X11Forwarding/#X11Forwarding/'

sed -i /etc/ssh/sshd_config \
    -e '/^### custom config/,$ d'

sshd_port=${sshd_port:-2201}
cat <<EOF >> /etc/ssh/sshd_config
### custom config
Port $sshd_port
PasswordAuthentication no
X11Forwarding no
EOF

### config phpmyadmin
if [ "$development" = 'true' ]
then
    ### make login expiration time longer
    sed -i /etc/phpmyadmin/config.inc.php \
        -e "/Don't expire login quickly/,$ d"
    cat <<EOF >> /etc/phpmyadmin/config.inc.php
// Don't expire login quickly
\$sessionDuration = 60*60*24*7; // 60*60*24*7 = one week
ini_set('session.gc_maxlifetime', \$sessionDuration);
\$cfg['LoginCookieValidity'] = \$sessionDuration;
EOF
fi
