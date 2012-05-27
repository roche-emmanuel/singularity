#!/bin/sh

. `pwd`/tools.sh

flavor=$1
SHOWGUI=$2

PACKAGENAME=$dep_collada
VERBOSE=1
# CLEAN=0
    
addFlag -DBoost_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_boost/include
addFlag -DBoost_FILESYSTEM_LIBRARY_RELEASE=$DEPS_DIR/$flavor/$dep_boost/lib/libboost_filesystem.a
addFlag -DBoost_SYSTEM_LIBRARY_RELEASE=$DEPS_DIR/$flavor/$dep_boost/lib/libboost_system.a

addFlag -DLIBXML2_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_xml2/include/libxml2
addFlag -DLIBXML2_LIBRARIES=$DEPS_DIR/$flavor/$dep_xml2/lib/libxml2.a

addFlag -DICONV_LIBRARIES=$DEPS_DIR/$flavor/$dep_iconv/lib/libiconv.a

addFlag -DZLIB_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_zlib/include
addFlag -DZLIB_LIBRARY=$DEPS_DIR/$flavor/$dep_zlib/lib/libz.a

# addFlag -DBZIP2_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_bzip2/include
# addFlag -DBZIP2_LIBRARIES=$DEPS_DIR/$flavor/$dep_bzip2/lib/libbz2.a

export CFLAGS="-I$DEPS_DIR/$flavor/$dep_iconv/include"
export CXXFLAGS="-I$DEPS_DIR/$flavor/$dep_iconv/include"

if [ "$flavor" == "mingw32" -o "$flavor" == "mingw64" ]; then
    addFlag -DSOCKET_LIBRARIES=ws2_32
fi

buildCmakePackage 
