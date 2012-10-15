#! /bin/sh

. `pwd`/tools.sh

DEFINE_string 'target' '' 'specify which library to build wrapper for' 't'
DEFINE_string 'flags' '' 'specify the flags to pass to doxygen' 'f'
DEFINE_string 'excludes' '' 'specify the patterns to exclude from generation' 'x'

DEFINE_boolean 'verbose' false 'vrebose wrapping outputs' 'v'
DEFINE_boolean 'delete' false 'Delete the previous files' 'd'

# parse the command-line
FLAGS "$@" || exit 1
eval set -- "${FLAGS_ARGV}"

flavor=${1:-linux64}

target=${FLAGS_target}
flags=${FLAGS_flags}
excludes=${FLAGS_excludes}

DOX_INPUT=""
addDoxInput()
{
	DOX_INPUT="\"$1\" $DOX_INPUT"
}

if [ -d $SOURCES_DIR/$target/interface ]; then
    addDoxInput $SOURCES_DIR/$target/interface
else
    addDoxInput $SOURCES_DIR/$target/include
fi

if [ -e $SOURCES_DIR/$target/wrapping.sh ]; then
	echo "Loading additional inputs from file $SOURCES_DIR/$target/wrapping.sh..."
	. $SOURCES_DIR/$target/wrapping.sh
fi

echo "Generating xml reflection for $target..."

if [ ${FLAGS_delete} -eq ${FLAGS_TRUE} ]; then
	rm -rf $XML_WRAPPING_DIR/$target/
fi

mkdir -p $XML_WRAPPING_DIR/$target/
cd $XML_WRAPPING_DIR/$target/

echo INPUT=$DOX_INPUT > temp.doxyfile
echo PREDEFINED="LINUX_BOX=1 _DOXYGEN=1 __DOXYGEN__=1 $flags" >> temp.doxyfile
echo INCLUDE_PATH=$DOX_INPUT >> temp.doxyfile
echo EXCLUDE_PATTERNS="$excludes" >> temp.doxyfile
cat $SCRIPTS_DIR/doxygen/Doxyfile_template >> temp.doxyfile

if [ ${FLAGS_verbose} -eq ${FLAGS_TRUE} ]; then
	$DOXYGEN temp.doxyfile 2>&1
    rm temp.doxyfile
else
	$DOXYGEN temp.doxyfile > /dev/null 2>&1
    rm temp.doxyfile
fi
