#/bin/bash
### Extract translatable strings of qtr_client
### and update the file 'qtrclient.pot'.
###
### Run it on a copy of qtr_client that is just
### cloned from git, don't run it on an installed
### copy of qtr_client, otherwise 'potx-cli.php'
### will scan also the other modules that are on
### the directory 'modules/'.

### go to the qtr_client directory
cd $(dirname $0)
cd ..

### extract translatable strings
utils/potx-cli.php

### concatenate files 'general.pot' and 'installer.pot' into 'qtrclient.pot'
msgcat --output-file=qtrclient.pot general.pot installer.pot
rm -f general.pot installer.pot
mv -f qtrclient.pot l10n/

### merge/update with previous translations
for po_file in $(ls l10n/qtrclient.*.po)
do
    msgmerge --update --previous $po_file l10n/qtrclient.pot
done

