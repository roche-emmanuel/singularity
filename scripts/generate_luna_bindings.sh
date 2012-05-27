#! /bin/sh

. `pwd`/tools.sh

DEFINE_string 'target' '' 'specify which library to build wrapper for' 't'

# parse the command-line
FLAGS "$@" || exit 1
eval set -- "${FLAGS_ARGV}"

target=${FLAGS_target}

cd  $SOURCES_DIR/$target
$DEPS_DIR/$BUILD_FLAVOR/$dep_lua/bin/luajit -e "sgt_path='$PROJECT_DIR/'; project='$target'; flavor='$BUILD_FLAVOR';" generate_reflection.lua

