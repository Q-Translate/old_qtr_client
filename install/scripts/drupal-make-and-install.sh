#!/bin/bash -x

### make sure that we have the right git branch on the make file
makefile="$code_dir/build-qtrclient.make"
sed -i $makefile \
    -e "/qtr_client..download..branch/ c projects[qtr_client][download][branch] = $qcl_git_branch"

### retrieve all the projects/modules and build the application directory
rm -rf $drupal_dir
drush make --prepare-install --force-complete \
           --contrib-destination=profiles/qtr_client \
           $makefile $drupal_dir

### copy the bootstrap library to the custom theme, etc.
cd $drupal_dir/profiles/qtr_client/
cp -a libraries/bootstrap themes/contrib/bootstrap/
cp -a libraries/bootstrap themes/qtr_client/
cp libraries/bootstrap/less/variables.less themes/qtr_client/less/

### copy hybriauth provider DrupalOAuth2.php to the right place
cd $drupal_dir/profiles/qtr_client/libraries/
cp hybridauth-drupaloauth2/DrupalOAuth2.php \
   hybridauth/hybridauth/Hybrid/Providers/

### Replace the profile qtr_client with a version
### that is a git clone, so that any updates
### can be retrieved easily (without having to
### reinstall the whole application).
cd $drupal_dir/profiles/
mv qtr_client qtr_client-bak
cp -a $code_dir .
### copy contrib libraries and modules
cp -a qtr_client-bak/libraries/ qtr_client/
cp -a qtr_client-bak/modules/contrib/ qtr_client/modules/
cp -a qtr_client-bak/themes/contrib/ qtr_client/themes/
### cleanup
rm -rf qtr_client-bak/

### get a clone of qtrclient from github
if [ "$development" = 'true' ]
then
    cd $drupal_dir/profiles/qtr_client/modules/contrib/qtrclient
    git clone https://github.com/Q-Translate/qtrclient.git
    cp -a qtrclient/.git .
    rm -rf qtrclient/
fi

### create the downloads dir
mkdir -p /var/www/downloads/
chown www-data /var/www/downloads/

### settings for the database and the drupal site
db_name=qcl
db_user=qcl
db_pass=qcl
site_name="Q-Translate"
site_mail="$gmail_account"
account_name=admin
account_pass="$qcl_admin_passwd"
account_mail="$gmail_account"

### create the database and user
mysql='mysql --defaults-file=/etc/mysql/debian.cnf'
$mysql -e "
    DROP DATABASE IF EXISTS $db_name;
    CREATE DATABASE $db_name;
    GRANT ALL ON $db_name.* TO $db_user@localhost IDENTIFIED BY '$db_pass';
"

### start site installation
#sed -e '/memory_limit/ c memory_limit = -1' -i /etc/php/7.0/cli/php.ini
cd $drupal_dir
drush site-install --verbose --yes qtr_client \
      --db-url="mysql://$db_user:$db_pass@localhost/$db_name" \
      --site-name="$site_name" --site-mail="$site_mail" \
      --account-name="$account_name" --account-pass="$account_pass" --account-mail="$account_mail"

### set drupal variable qtrClient_translation_lng
drush --root=$drupal_dir --yes --exact vset qtrClient_translation_lng $translation_lng

### install also multi-language support
mkdir -p $drupal_dir/sites/all/translations
chown -R www-data: $drupal_dir/sites/all/translations

### add $translation_lng as a drupal language
drush dl drush_language
if [ "$translation_lng" != 'all' ]
then
    drush --root=$drupal_dir language-add $translation_lng
fi

### set propper directory permissions
mkdir -p sites/default/files/
chown -R www-data: sites/default/files/
mkdir -p cache/
chown -R www-data: cache/
