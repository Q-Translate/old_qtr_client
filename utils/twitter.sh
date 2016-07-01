#!/bin/bash
### Send tweets from command line.
### For installation instructions see:
### http://xmodulo.com/2013/12/access-twitter-command-line-linux.html

t='/usr/local/bin/t'
base_url=https://en.qtranslate.net
tweet=$(curl -k $base_url/qtr/tweet)
mention=$( ( $t followings ; $t followers ) | uniq | sort -R | tail -1)
$t update "$tweet @$mention"
