#!/bin/bash -x

### make a clone of /var/www/qcl to /var/www/qcl_dev
/usr/local/src/qtr_client/dev/clone.sh qcl qcl_dev

### add a test user
drush @qcl_dev user-create user1 --password=pass1 \
      --mail='user1@example.org' > /dev/null 2>&1
