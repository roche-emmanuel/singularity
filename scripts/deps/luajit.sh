#!/bin/bash

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_lua

addFlag "--enable-static --enable-shared" 



if [ "$flavor" == "mingw32" -o "$flavor" == "mingw64" ]; then
	export TARGET_SYS=Windows
else
	export TARGET_SYS=Linux
fi

PREFIX=$DEPS_DIR/$flavor/$PACKAGENAME

instdir=$PREFIX

if [ "$flavor" == "mingw32" -o "$flavor" == "mingw64" ]; then
	echo "Using precomipled LuaJIT release for $flavor"
	rm -Rf $DEPS_DIR/$flavor/$PACKAGENAME
	cd $DEPS_DIR/$flavor/
	tar xvjf $DEPS_DIR/sources/$PACKAGENAME-$flavor.tar.bz2
	mv $PACKAGENAME-$flavor $PACKAGENAME
	
    # generate the def file:
    cd $DEPS_DIR/$flavor/$PACKAGENAME/bin
    generateDef lua51jit.dll

	# now prepare the .a file:
	cd $DEPS_DIR/$flavor/$PACKAGENAME/lib
    compiler=$PATH_MINGW32/$HOST_MINGW32
    if [ "$flavor" == "mingw64" ]; then
        cp $DEPS_DIR/mingw32/$PACKAGENAME/bin/lua51jit.def ../bin
        compiler=$PATH_MINGW64/$HOST_MINGW64
    fi
    
	$compiler-dlltool -D ../bin/lua51jit.dll -d ../bin/lua51jit.def -l libluajit-5.1.a
	$compiler-ranlib libluajit-5.1.a
	echo "Library generation done."
else
	INSTALL_CMD="make install PREFIX=$PREFIX"
    buildStdPackage
fi

# post install process: duplicate the header files, and rename library (for wxLua compilation mainly):
cd $instdir
cp -R include/luajit-2.0/ include/lua5.1
cp lib/libluajit-5.1.a lib/liblua5.1.a

if [ "$flavor" == "linux32" -o "$flavor" == "linux64" ]; then
	mv bin/luajit-* bin/luajit
fi

unset TARGET_SYS
