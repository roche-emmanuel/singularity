#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_doxygen
USE_CROSS_FLAGS=0
REMOVE_CONFIG_PREFIX=1

addFlag "--shared --release --prefix $DEPS_DIR/$flavor/$dep_doxygen --with-doxyapp"

buildStdPackage
