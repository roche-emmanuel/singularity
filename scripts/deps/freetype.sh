#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_freetype

addFlag "--enable-static --enable-shared" 
addFlag "--without-zlib"

buildStdPackage
