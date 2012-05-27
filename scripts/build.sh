#! /bin/sh

. `pwd`/tools.sh

flavor=$1
SHOWGUI=$3

VERBOSE=1

PACKAGENAME=$PROJECT_NAME
INSTALL_FOLDER=$SOFTWARE_DIR
SOURCE_FOLDER=$PROJECT_DIR


addFlag -DDEPS_DIR=$DEPS_DIR
addFlag -DDEP_WX=$dep_wx
addFlag -DDEP_LUA=$dep_lua
addFlag -DDEP_LUABIND=$dep_luabind
addFlag -DDEP_BOOST=$dep_boost
addFlag -DDEP_LUAFILESYSTEM=$dep_luafilesystem

REMOVE_INSTALL_FOLDER=0 # keep the software folder.
EXTRACT_SOURCE_PACKAGE=0 # no extraction to perform here.
CLEAN=0 # keep this to 0 to use make only operation

# build the project:
buildCmakePackage $2


