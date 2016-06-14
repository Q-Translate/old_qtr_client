#!/bin/bash

### read $translation_lng
echo "
===> Translation language of Q-Translate Client

This is the code of the translation language
of your client site (something like 'fr' or 'fr_FR').
"
if [ -z "${translation_lng+xxx}" -o "$translation_lng" = '' ]
then
    translation_lng='all'
    read -p "Enter the language code [$translation_lng]: " input
    translation_lng=${input:-$translation_lng}
fi

### set drupal variable qtrClient_translation_lng
drush @local_qcl --yes --exact vset qtrClient_translation_lng $translation_lng

### add $translation_lng as a drupal language
if [ "$translation_lng" != 'all' ]
then
    drush @local_qcl --yes language-add $translation_lng
    drush @local_qcl --yes l10n-update-refresh
    drush @local_qcl --yes l10n-update
fi
