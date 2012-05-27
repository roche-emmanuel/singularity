#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_curl

addDepPkgPath $dep_zlib
addDepPkgPath $dep_ssl

addFlag "--enable-static --enable-shared" 
addFlag "--without-random"

buildStdPackage
