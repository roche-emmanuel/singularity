#!/bin/sh

. `pwd`/tools.sh

flavor=$1
SHOWGUI=$2

PACKAGENAME=$dep_wxlua
# VERBOSE=1
CLEAN=0

addFlag -DwxWidgets_CONFIG_EXECUTABLE=$DEPS_DIR/$flavor/$dep_wx/bin/wx-config
addFlag -DwxWidgets_LIB_DIR=$DEPS_DIR/$flavor/$dep_wx/lib
addFlag -DwxWidgets_ROOT_DIR=$DEPS_DIR/$flavor/$dep_wx
addFlag -DwxWidgets_wxrc_EXECUTABLE=$DEPS_DIR/$flavor/$dep_wx/bin/

addFlag -DwxStEdit_ROOT_DIR=$DEPS_DIR/$flavor/$dep_wxstedit

buildCmakePackage 
