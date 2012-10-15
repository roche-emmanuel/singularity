#!/bin/sh

. `pwd`/tools.sh

NAME=$1
VERSION=$2

PACKAGENAME=$NAME
if [ "$VERSION" != "" ]; then
    PACKAGENAME=$NAME-$VERSION
fi

echo "Setting up patch env for $PACKAGENAME"

echo "Removing previous folders..."
rm -Rf $BUILD_DIR/$PACKAGENAME
rm -Rf $BUILD_DIR/$PACKAGENAME.orig
rm -Rf $BUILD_DIR/$PACKAGENAME.mod

echo "Extracting archive..."
cd $BUILD_DIR
extractFile $DEPS_DIR/sources/$PACKAGENAME

mv $BUILD_DIR/$PACKAGENAME $BUILD_DIR/$PACKAGENAME.orig
cp -R $BUILD_DIR/$PACKAGENAME.orig $BUILD_DIR/$PACKAGENAME.mod

if [ -e "$SCRIPTS_DIR/patches/$PACKAGENAME.patch" ]; then
	echo -n "Found existing patch, do you want to apply it ?  (yes/no)[yes]: "
	read answer
	if [ "$answer" == "" ]; then
	  answer="yes";  
	fi
	if [ $answer == "yes" ]; then
		cd $BUILD_DIR/$PACKAGENAME.mod
		applyPatch
	else
		#rename the previous patch
		mv $SCRIPTS_DIR/patches/$PACKAGENAME.patch $SCRIPTS_DIR/patches/$PACKAGENAME.patch.old
	fi
fi
