#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_pcre
# CLEAN=0

# addDepPkgPath $dep_lua

# addFlag --with-boost=$DEPS_DIR/$flavor/$dep_boost
# addFlag --with-luaincl=$DEPS_DIR/$flavor/$dep_lua/include/luajit-2.0
# addFlag --with-lualib=$DEPS_DIR/$flavor/$dep_lua/lib/liblua5.1.a
# addFlag --with-lua=$DEPS_DIR/$flavor/$dep_lua/bin/luajit

buildStdPackage
