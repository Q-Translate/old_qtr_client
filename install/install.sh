#!/bin/bash -x
### Install and config the system inside a docker container.

### get options and settings
set -a
source options.sh
set +a

### start mysql, in case it is not running
/etc/init.d/mysql start

### go to the directory of scripts
cd $code_dir/install/scripts/

### make and install the drupal profile
export DEBIAN_FRONTEND=noninteractive
export drupal_dir=/var/www/qcl
export drush="drush --root=$drupal_dir"
./drupal-make-and-install.sh

### additional configurations related to drupal
./drupal-config.sh

### system level configuration (services etc.)
./system-config.sh

### qtr_client configuration
$code_dir/install/config.sh
