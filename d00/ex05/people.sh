ldapsearch 2> /dev/null | grep -A1 uid=z | grep cn: | sed 's/cn://' | sort -r