#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_iconv

addFlag "--enable-static --enable-shared" 

buildStdPackage
