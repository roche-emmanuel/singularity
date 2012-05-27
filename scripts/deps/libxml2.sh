#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_xml2

addFlag "--enable-static --enable-shared" 

addFlag "--with-zlib=$DEPS_DIR/$flavor/$dep_zlib"
addFlag "--with-iconv=$DEPS_DIR/$flavor/$dep_iconv"

buildStdPackage
