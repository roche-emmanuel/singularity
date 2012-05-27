#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_boost
# VERBOSE=1
CLEAN=0

os="linux"
threadingapi=""

# linkmode=$3
# linkmode=shared
linkmode=static

# mode=$2
mode=release

comp_1="-sNO_BZIP2=0 -sNO_COMPRESSION=0 -sBZIP2_BINARY=bz2 -sBZIP2_INCLUDE=$DEPS_DIR/$flavor/$dep_bzip2/include -sBZIP2_LIBPATH=$DEPS_DIR/$flavor/$dep_bzip2/lib"
comp_2="-sNO_ZLIB=0 -sZLIB_BINARY=z -sZLIB_INCLUDE=$DEPS_DIR/$flavor/$dep_zlib/include -sZLIB_LIBPATH=$DEPS_DIR/$flavor/$dep_zlib/lib"

added=" : <compileflags>-fPIC ;"

bjam_src_dir="$BUILD_DIR/$PACKAGENAME/tools/build/v2/engine"
bjam="$BUILD_DIR/$PACKAGENAME/tools/build/v2/engine/bin.linuxx86_64/bjam"

# Infos on bjam gcc config:
# http://www.boost.org/boost-build2/doc/html/bbv2/reference/tools.html#bbv2.reference.tools.compiler.gcc

if [ "$flavor" == "linux64" ]; then
	compiler=g++
elif [ "$flavor" == "linux32" ]; then
	compiler=g++
elif [ "$flavor" == "mingw32" ]; then
	compiler="$PATH_MINGW32/${HOST_MINGW32}-g++"
	os="windows"
	threadingapi="threadapi=win32"
	added=" : <compileflags>-DBOOST_USE_WINDOWS_H <compileflags>-mthreads <linkflags>-mthreads ;"
elif [ "$flavor" == "mingw64" ]; then
	compiler="$PATH_MINGW32/${HOST_MINGW32}-g++"
	os="windows"
	threadingapi="threadapi=win32"
	added=" : <compileflags>-DBOOST_USE_WINDOWS_H <compileflags>-DBUILDING_BOOST_MINGW64 <compileflags>-mthreads <linkflags>-lkernel32 <linkflags>-mthreads ;"
else
	echo "Unknown compilation platform."
	exit 1
fi

PRECONFIG_CMD="echo \"using gcc : $flavor : $compiler $added\" > boost-config.jam && cd $bjam_src_dir && ./build.sh"
MAKE_CMD="cd $BUILD_DIR/$PACKAGENAME/ && $bjam -d+2 --user-config=boost-config.jam variant=$mode link=$linkmode threading=multi --without-mpi --without-python toolset=gcc-$flavor target-os=$os $threadingapi --prefix=$DEPS_DIR/$flavor/$PACKAGENAME $comp_1 $comp_2 install && cp $bjam $DEPS_DIR/$flavor/$PACKAGENAME"
DO_MAKE_INSTALL=0

buildStdPackage 

# post installation additions:
cd $BUILD_DIR
unzip $DEPS_DIR/sources/endian-0.8.zip
mv -i endian-0.8/boost/integer/* $DEPS_DIR/$flavor/$PACKAGENAME/include/boost/integer/
rm -Rf endian-0.8/

unzip $DEPS_DIR/sources/floating_point_utilities_v3.zip
mv -i floating_point_utilities_v3/boost/math/* $DEPS_DIR/$flavor/$PACKAGENAME/include/boost/math/
rm -Rf floating_point_utilities_v3/

tar xvzf $DEPS_DIR/sources/boost.atomic.tar.gz
mv -i boost.atomic/boost/* $DEPS_DIR/$flavor/$PACKAGENAME/include/boost/
rm -Rf boost.atomic/

