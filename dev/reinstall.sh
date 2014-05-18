#!/bin/bash
### Reinstall btr_client from scratch.
### Useful for testing installation scripts.

### get config settings from a file
if [ "$1" = '' ]
then
    echo "Usage: $0 settings.sh"
    exit 1
fi
settings=$1
set -a
source  $settings
set +a

export drupal_dir=/var/www/bcl
export drush="drush --root=$drupal_dir"

rm -rf $drupal_dir-bak
mv $drupal_dir $drupal_dir-bak

cd /var/www/code/btr_client/install/install-scripts/
./20-make-and-install.sh
./30-git-clone.sh
./40-configure.sh

### configure
cd /var/www/code/btr_client/install/
./config.sh
