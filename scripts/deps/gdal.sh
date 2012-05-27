#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_gdal

addFlag "--enable-shared --enable-static" 
#addFlag "--with-expat=$DEPS_DIR/$flavor/$dep_expat"
addFlag "--with-png=internal"
addFlag "--with-libz=internal"
addFlag "--with-jpeg=internal"
addFlag "--with-libtiff=internal"
addFlag "--with-geotiff=internal"
addFlag "--with-gif=internal"
addFlag "--with-static-proj4=$DEPS_DIR/$flavor/$dep_proj4"

buildStdPackage
