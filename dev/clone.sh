#!/bin/bash
### Create a local clone of the main drupal
### application (/var/www/qcl).

if [ $# -ne 2 ]
then
    echo " * Usage: $0 src dst

      Makes a clone from /var/www/<src> to /var/www/<dst>
      The database <src> will also be cloned to <dst>.
      <dst> can be something like 'qcl_dev', 'qcl_test', 'qcl_01', etc.

      Note: Using something like 'qcl-dev' is not suitable
      for the name of the database.

      Caution: The root directory and the DB of the destination
      will be erased, if they exist.
"
    exit 1
fi
src=$1
dst=$2
src_dir=/var/www/$src
dst_dir=/var/www/$dst

### copy the root directory
rm -rf $dst_dir
cp -a $src_dir $dst_dir

### modify settings.php
qcl_domain=$(head -n 1 /etc/hosts.conf | cut -d' ' -f2)
sub=${dst#*_}
hostname=$sub.$qcl_domain
sed -i $dst_dir/sites/default/settings.php \
    -e "/^\\\$databases = array/,+10  s/'database' => .*/'database' => '$dst',/" \
    -e "/^\\\$base_url/c \$base_url = \"https://$hostname\";"

### add to /etc/hosts
sed -i /etc/hosts.conf -e "/^127.0.0.1 $hostname/d"
echo "127.0.0.1 $hostname" >> /etc/hosts.conf
/etc/hosts_update.sh

### create a drush alias
sed -i /etc/drush/local_qcl.aliases.drushrc.php \
    -e "/^\\\$aliases\['$dst'\] = /,+5 d"
cat <<EOF >> /etc/drush/local_qcl.aliases.drushrc.php
\$aliases['$dst'] = array (
  'parent' => '@qcl',
  'root' => '$dst_dir',
  'uri' => 'http://$hostname',
);

EOF

### create a new database
mysql --defaults-file=/etc/mysql/debian.cnf -e "
    DROP DATABASE IF EXISTS $dst;
    CREATE DATABASE $dst;
    GRANT ALL ON $dst.* TO qcl@localhost;
"

### copy the database
drush --yes sql-sync @$src @$dst

### clear the cache
drush @$dst cc all

### copy and modify the configuration of apache2
rm -f /etc/apache2/sites-{available,enabled}/$dst{,-ssl}.conf
cp /etc/apache2/sites-available/{$src,$dst}.conf
cp /etc/apache2/sites-available/{$src-ssl,$dst-ssl}.conf
sed -i /etc/apache2/sites-available/$dst.conf \
    -e "s#ServerName .*#ServerName $hostname#" \
    -e "s#RedirectPermanent .*#RedirectPermanent / https://$hostname/#" \
    -e "s#$src_dir#$dst_dir#g"
sed -i /etc/apache2/sites-available/$dst-ssl.conf \
    -e "s#ServerName .*#ServerName $hostname#" \
    -e "s#$src_dir#$dst_dir#g"
a2ensite $dst $dst-ssl

### fix permissions
chown www-data: -R $dst_dir/sites/default/files/*
chown root: $dst_dir/sites/default/files/.htaccess

### restart services
/etc/init.d/mysql restart
/etc/init.d/apache2 restart
