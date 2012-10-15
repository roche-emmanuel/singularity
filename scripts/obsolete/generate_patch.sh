#!/bin/sh

. `pwd`/tools.sh

NAME=$1
VERSION=$2

FULLNAME=$NAME
if [ "$VERSION" != "" ]; then
    FULLNAME=$NAME-$VERSION
fi

echo "Generating patch for $FULLNAME"

if [ -d "$BUILD_DIR/$FULLNAME.orig" -a -d "$BUILD_DIR/$FULLNAME.mod" ]; then
	cd $BUILD_DIR/
	diff -crB $FULLNAME.orig $FULLNAME.mod > $SCRIPTS_DIR/patches/$FULLNAME.patch
else
	echo "Error: invalid patch env directories."
fi
