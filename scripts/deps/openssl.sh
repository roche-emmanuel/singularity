#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_openssl

#WARNING: when building the Mingw64 version, the user must manually
#run the commands:
# x86_64-w64-mingw32-ranlib libssl.a
# x86_64-w64-mingw32-ranlib libcrypto.a
#after the first failed make, (see PREMAKE_CMD below, so this script must be runned twice).

if [ "$flavor" == "mingw64" ]; then
	echo Using mingw64b cross-compiler
	addFlag "mingw64 no-asm no-hw"
	export CC=x86_64-w64-mingw32-gcc
	export CXX=x86_64-w64-mingw32-g++
	export CPP=x86_64-w64-mingw32-cpp
	export RANLIB=x86_64-w64-mingw32-ranlib
	# OLD_PATH="$PATH"
	# export PATH="/station/mingw64/bin:$PATH"
	POSTMAKE_CMD="if [ -e libssl.a ]; then x86_64-w64-mingw32-ranlib libssl.a; fi && if [ -e libcrypto.a ]; then x86_64-w64-mingw32-ranlib libcrypto.a; fi && make"
	EXIT_ON_FAILED_MAKE=0	
elif [ "$flavor" == "mingw32" ]; then
	echo Using mingw32b cross-compiler
	addFlag "mingw"
	export CC=i686-w64-mingw32-gcc
	export CXX=i686-w64-mingw32-g++
	export CPP=i686-w64-mingw32-cpp
	export RANLIB=i686-w64-mingw32-ranlib
	# OLD_PATH="$PATH"
	# export PATH="/station/mingw32/bin:$PATH"
	POSTMAKE_CMD="if [ -e libssl.a ]; then i686-w64-mingw32-ranlib libssl.a; fi && if [ -e libcrypto.a ]; then i686-w64-mingw32-ranlib libcrypto.a; fi && make"
	EXIT_ON_FAILED_MAKE=0	
elif [ "$flavor" == "linux32" ]; then
	addFlag "linux-elf shared"
	export CC=
	export CXX=
	export CPP=
	export RANLIB=
    addFlag "-fPIC"
	# OLD_PATH="$PATH"
elif [ "$flavor" == "linux64" ]; then
	addFlag "linux-x86_64 shared"
	export CC=gcc
	export CXX=gcc
	export CPP=gcc
	export RANLIB=
    addFlag "-fPIC"
fi

PRECONFIG_CMD="unset EXE && ln -s Configure configure"
USE_CROSS_FLAGS=0
CPU_CORES=" " #avoid multi core compilation issues.
BUILD_DIR=/home/kenshin/build_tmp #Needed because of symbolic links in the source package.


addFlag "--openssldir=$DEPS_DIR/$flavor/$PACKAGENAME"

buildStdPackage

# remove static files on linux compilation:
# if [ "$flavor" == "linux32" -o "$flavor" == "linux64" ]; then
	# rm -Rf $DEPS_DIR/$flavor/$PACKAGENAME/lib/*.a
# fi

unset CC
unset CXX
unset CPP
unset RANLIB


