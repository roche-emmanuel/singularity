#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_proj4

addFlag "--enable-static --enable-shared" 

if [ "$flavor" == "mingw32" -o "$flavor" == "mingw64" ]; then
    export CFLAGS="-D_WIN32"
fi

buildStdPackage
