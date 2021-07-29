#!/bin/sh
cat -e /etc/passwd | grep -v '^#' | sed -n 'n;p' | sort -r | awk -F: -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR>= FT_USER1 && NR<=FT_LINE2 {print $1}' | awk '$1=$1' ORS=', ' | sed '$ s/..$/./' | tr -d '\n'
