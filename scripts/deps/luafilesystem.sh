#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_luafilesystem

export LUA_LIBDIR=$DEPS_DIR/$flavor/$dep_lua/lib
export LUA_INC=$DEPS_DIR/$flavor/$dep_lua/include/luajit-2.0
export PREFIX=$DEPS_DIR/$flavor/$PACKAGENAME
    
buildStdPackage

unset LUA_LIBDIR
unset LUA_INC
