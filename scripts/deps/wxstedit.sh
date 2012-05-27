#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_wxstedit
CLEAN=0

# addFlag "--enable-static --disable-shared"
addFlag "--with-wx-config=$DEPS_DIR/$flavor/$dep_wx/bin/wx-config" 
# addFlag "--with-wx-prefix=$DEPS_DIR/$flavor/$dep_wx" 

exesuffix=""
if [ "$flavor" == "mingw32" -o "$flavor" == "mingw64" ]; then
	exesuffix=".exe"
fi

INSTALL_CMD="mkdir -p $DEPS_DIR/$flavor/$PACKAGENAME/{bin,lib} && cp samples/stedit/wxstedit $DEPS_DIR/$flavor/$PACKAGENAME/bin/wxstedit${exesuffix} && cp -R include $DEPS_DIR/$flavor/$PACKAGENAME/ && mv $DEPS_DIR/$flavor/$dep_wx/lib/*stedit-2.9.a $DEPS_DIR/$flavor/$PACKAGENAME/lib/"
    
PRECONFIG_CMD="cp include/wx/stedit/setup0.h include/wx/stedit/setup.h" # && mv configure configure.old"
MAKE_CMD="cd src && make -j 8 && cd ../samples/stedit && make -j 8 && cd ../.."
export WXCONFIG=$DEPS_DIR/$flavor/$dep_wx/bin/wx-config

if [ "$flavor" == "mingw32" ]; then
    export WXSCINTILLA_LIBRARY=wxscintilla-2.9-$HOST_MINGW32
elif [ "$flavor" == "mingw64" ]; then
    export WXSCINTILLA_LIBRARY=wxscintilla-2.9-$HOST_MINGW64
else
    export WXSCINTILLA_LIBRARY=wxscintilla-2.9
fi

buildStdPackage

unset WXCONFIG
unset WXSCINTILLA_LIBRARY
