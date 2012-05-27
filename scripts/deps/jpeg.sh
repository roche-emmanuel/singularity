#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_jpeg

addFlag "--enable-static --enable-shared"

buildStdPackage

