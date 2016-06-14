#!/bin/bash

case $1 in
    get)
        rsync -a -e 'ssh -p 2201 -i /root/.ssh/id_rsa' \
            qtranslator.org:/var/www/backup /var/www/
        ;;
    put)
        rsync -a -e 'ssh -p 2201 -i /root/.ssh/id_rsa' \
            /var/www/backup qtranslator.org:/var/www/
        ;;
    *)
        echo " * Usage: $0 [get|put]"
        ;;
esac