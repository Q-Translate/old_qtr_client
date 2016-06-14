#!/bin/bash
### Set the admin password of Drupal.

### get a password for the Drupal user 'admin'
if [ -z "${qcl_admin_passwd+xxx}" -o "$qcl_admin_passwd" = '' ]
then
    base_url=$(drush @qcl eval 'print $GLOBALS["base_url"]')
    echo
    echo "===> Password for Drupal 'admin' on $base_url."
    echo
    stty -echo
    read -p "Enter the password: " qcl_admin_passwd
    stty echo
    echo
fi

### set the password
drush @qcl user-password admin --password="$qcl_admin_passwd"
