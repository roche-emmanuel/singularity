#! /bin/sh

. `pwd`/tools.sh

flavor=$1

DEFINE_string 'exclude' 'aaaaaa' 'pattern to exclude' 'x'
DEFINE_string 'pattern' '' 'pattern to include' 'p'

# parse the command-line
FLAGS "$@" || exit 1
eval set -- "${FLAGS_ARGV}"

pattern=${FLAGS_pattern}
exclude=${FLAGS_exclude}

options="--best"

# $UPX $options $files
packer=$UPX
if [ "$flavor" == "mingw64" ]; then
	packer="wineconsole --backend=curses $MPRESS"
	options=""
	for filename in `find $SOFTWARE_DIR/bin/$flavor | egrep -v '\.svn' | egrep -e "$pattern" | egrep -v -e "$exclude" | egrep -e '\.ngp|\.exe|\.dll|\.so\.'`
	do
		$packer $options $filename
	done
else
	find $SOFTWARE_DIR/bin/$flavor | egrep -v '\.svn' | egrep -e "$pattern" | egrep -v -e "$exclude" | egrep -e '\.ngp|\.exe|\.dll|\.so\.' | xargs $packer $options
fi


