#!/bin/bash -x

# Copy the logo file to the drupal dir.
cp $drupal_dir/profiles/qtr_client/qcl_logo.png $qrupal_dir/logo.png

# Protect Drupal settings from prying eyes
drupal_settings=$drupal_dir/sites/default/settings.php
chown root:www-data $drupal_settings
chmod 640 $drupal_settings

### Modify Drupal settings

# diable poor man's cron
cat >> $drupal_settings << EOF
/**
 * Disable Poor Man's Cron:
 *
 * Drupal 7 enables the built-in Poor Man's Cron by default.
 * Poor Man's Cron relies on site activity to trigger Drupal's cron,
 * and is not well suited for low activity websites.
 *
 * We will use the Linux system cron and override Poor Man's Cron
 * by setting the cron_safe_threshold to 0.
 *
 * To re-enable Poor Man's Cron:
 *    Comment out (add a leading hash sign) the line below,
 *    and the system cron in /etc/cron.d/drupal7.
 */
\$conf['cron_safe_threshold'] = 0;

EOF

# set base_url
cat >> $drupal_settings << EOF
\$base_url = "https://$qcl_domain";

EOF


### install additional features
### $drush is an alias for 'drush --root=/var/www/qcl'
$drush --yes pm-enable qcl_qtrClient
$drush --yes features-revert qcl_qtrClient

$drush --yes pm-enable qcl_misc
$drush --yes features-revert qcl_misc

$drush --yes pm-enable qcl_layout
$drush --yes features-revert qcl_layout

$drush --yes pm-enable qcl_content

#$drush --yes pm-enable qcl_captcha
#$drush --yes features-revert qcl_captcha

$drush --yes pm-enable qcl_permissions
$drush --yes features-revert qcl_permissions

#$drush --yes pm-enable qcl_discus
#$drush --yes features-revert qcl_discus
#$drush --yes pm-enable qcl_invite
#$drush --yes pm-enable qcl_simplenews
#$drush --yes pm-enable qcl_mass_contact
#$drush --yes pm-enable qcl_googleanalytics
#$drush --yes pm-enable qcl_drupalchat

### update to the latest version of core and modules
#$drush --yes pm-refresh
#$drush --yes pm-update

### refresh and update translations
if [ "$development" != 'true' ]
then
    $drush --yes l10n-update-refresh
    $drush --yes l10n-update
fi
