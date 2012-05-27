#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_zlib

if [ "$flavor" == "linux32" -o "$flavor" == "linux64" ]; then
	POSTMAKE_CMD="make test"
else
    export EXTRALDFLAGS="-Wl,--out-implib=libz.dll.a"
    POSTINSTALL_CMD="cp libz.dll.a $DEPS_DIR/$flavor/$PACKAGENAME/lib/ && mkdir $DEPS_DIR/$flavor/$PACKAGENAME/bin && mv $DEPS_DIR/$flavor/$PACKAGENAME/lib/libz.dll $DEPS_DIR/$flavor/$PACKAGENAME/bin/libz.dll"
fi

USE_CROSS_FLAGS=0

buildStdPackage
