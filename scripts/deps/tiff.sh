#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_tiff

addFlag "--enable-static --enable-shared" 
addFlag "--with-zlib-include-dir=$DEPS_DIR/$flavor/$dep_zlib/include"
addFlag "--with-zlib-lib-dir=$DEPS_DIR/$flavor/$dep_zlib/lib"
addFlag "--with-jpeg-include-dir=$DEPS_DIR/$flavor/$dep_jpeg/include"
addFlag "--with-jpeg-lib-dir=$DEPS_DIR/$flavor/$dep_jpeg/lib"

buildStdPackage
