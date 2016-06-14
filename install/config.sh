#!/bin/bash

### get config settings from a file
if [ "$1" != '' ]
then
    settings=$1
    set -a
    source  $settings
    set +a
fi

qcl=/usr/local/src/qtr_client/install

test -d /var/www/qcl_dev && $qcl/../dev/clone_rm.sh qcl_dev

$qcl/config/domain.sh
$qcl/config/mysql_passwords.sh
$qcl/config/mysql_qtrclient.sh
$qcl/config/gmailsmtp.sh
$qcl/config/drupalpass.sh
$qcl/config/oauth2_login.sh
$qcl/config/translation_lng.sh
$qcl/config/ssh_keys.sh

if [ "$development" = 'true' ]
then
    $qcl/../dev/make-dev-clone.sh
fi

### drush may create some css/js files with wrong permissions
$qcl/config/fix_file_permissions.sh
