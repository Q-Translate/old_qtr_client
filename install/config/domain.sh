#!/bin/bash

echo "
===> Set the domain name (fqdn)

This is the domain that you have (or plan to get)
for the qtr_client.

It will modify the files:
 1) /etc/hostname
 2) /etc/hosts
 3) /etc/nginx/sites-available/qcl*
 4) /etc/apache2/sites-available/qcl*
 5) /var/www/qcl*/sites/default/settings.php
"

### get the old domain
old_qcl_domain=$(head -n 1 /etc/hosts.conf | cut -d' ' -f2)
old_qcl_domain=${old_qcl_domain:-example.org}

### get the new domain
if [ -z "${qcl_domain+xxx}" -o "$qcl_domain" = '' ]
then
    read -p "Enter the domain name for qtr_client [$old_qcl_domain]: " input
    qcl_domain=${input:-$old_qcl_domain}
fi

### update /etc/hostname and /etc/hosts
echo $qcl_domain > /etc/hostname
sed -i /etc/hosts.conf \
    -e "/127.0.0.1 $old_qcl_domain/c 127.0.0.1 $qcl_domain/" \
    -e "/127.0.0.1 dev.$old_qcl_domain/c 127.0.0.1 dev.$qcl_domain/"
/etc/hosts_update.sh

### update config files
for file in $(ls /etc/nginx/sites-available/qcl*)
do
    sed -i $file -e "/server_name/ s/$old_qcl_domain/$qcl_domain/"
done
for file in $(ls /etc/apache2/sites-available/qcl*)
do
    sed -i $file \
        -e "/ServerName/ s/$old_qcl_domain/$qcl_domain/" \
        -e "/RedirectPermanent/ s/$old_qcl_domain/$qcl_domain/"
done
for file in $(ls /var/www/qcl*/sites/default/settings.php)
do
    sed -i $file -e "/^\\\$base_url/ s/$old_qcl_domain/$qcl_domain/"
done

### update uri on drush aliases
sed -i /etc/drush/local_qcl.aliases.drushrc.php \
    -e "/'uri'/ s/$old_qcl_domain/$qcl_domain/"
