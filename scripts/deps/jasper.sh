#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_jasper

export CFLAGS="-I${DEPS_DIR}/$flavor/$dep_jpeg/include"
export CXXFLAGS="-I${DEPS_DIR}/$flavor/$dep_jpeg/include"
export LDFLAGS="-L${DEPS_DIR}/$flavor/$dep_jpeg/lib"

addFlag "--enable-static --disable-shared" 

buildStdPackage
