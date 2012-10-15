#! /bin/sh

. `pwd`/tools.sh

DEFINE_string 'exclude' 'aaaaaa' 'pattern to exclude' 'x'
DEFINE_string 'pattern' '' 'pattern to include' 'p'
DEFINE_boolean 'compress' false 'compress the binaries after sttripping' 'c'

# parse the command-line
FLAGS "$@" || exit 1
eval set -- "${FLAGS_ARGV}"

flavor=$1

pattern=${FLAGS_pattern}
exclude=${FLAGS_exclude}

platform=$flavor

stripper=strip
if [ "$flavor" == "mingw32" ]; then
	stripper=$PATH_MINGW32/$HOST_MINGW32-strip
elif [ "$flavor" == "mingw64" ]; then
	stripper=$PATH_MINGW64/$HOST_MINGW64-strip
fi

find $SOFTWARE_DIR/bin/$platform | egrep -v '\.svn' | egrep -e "$pattern" | egrep -v -e "$exclude" | egrep -e '\.ngp|\.exe|\.dll|\.so' | xargs -t $stripper --strip-all --remove-section=.note --remove-section=.comment

if [ ${FLAGS_compress} -eq ${FLAGS_TRUE} ]; then
	$SCRIPTS_DIR/compress_binaries.sh $flavor --pattern "$pattern" --exclude "$exclude"
fi
