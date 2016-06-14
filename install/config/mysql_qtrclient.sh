#!/bin/bash
### set password for the mysql user qcl

### get a new password for the mysql user 'qcl'
if [ "$mysql_passwd_qcl" = 'random' ]
then
    mysql_passwd_qcl=$(mcookie | head -c 16)
elif [ -z "${mysql_passwd_qcl+xxx}" -o "$mysql_passwd_qcl" = '' ]
then
    echo
    echo "===> Please enter new password for the MySQL 'qcl' account. "
    echo
    mysql_passwd_qcl=$(mcookie | head -c 16)
    stty -echo
    read -p "Enter password [$mysql_passwd_qcl]: " passwd
    stty echo
    echo
    mysql_passwd_qcl=${passwd:-$mysql_passwd_qcl}
fi

### set password
source $(dirname $0)/set_mysql_passwd.sh
set_mysql_passwd qcl $mysql_passwd_qcl

### modify the configuration file of Drupal (settings.php)
for file in $(ls /var/www/qcl*/sites/default/settings.php)
do
    sed -i $file \
	-e "/^\\\$databases = array/,+10  s/'password' => .*/'password' => '$mysql_passwd_qcl',/"
done
