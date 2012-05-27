#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_bzip2
# VERBOSE=1
# CLEAN=0
    
INSTALL_CMD="make install PREFIX=$DEPS_DIR/$flavor/$PACKAGENAME"

buildStdPackage
