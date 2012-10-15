#!/bin/sh

# Just copy the file instead of creating a symbolic link:
while getopts fs o
do	case "$o" in
	f)	force=1;;
	s)	sym=1;;
	[?])	print >&2 "Could not parse ln command line!"
		exit 1;;
	esac
done
shift $((OPTIND-1))

if [ "$1" != "" ]; then
	echo "Copying $1 to $2"
	cp -R "$1" "$2"
else
	echo "Invalid source file in 'no_ln' script."
fi
