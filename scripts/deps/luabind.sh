#!/bin/sh

# WARNING: this must be built just after the boost library for the target platform as the boost build folder is used for
# the Bjam configuration.

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_luabind


os="linux"

mode="release"
# mode="debug"

linkmode=static
# linkmode=shared

comp_1="-sBOOST_ROOT=$BUILD_DIR/$dep_boost -sLUA_PATH=$DEPS_DIR/$flavor/$dep_lua"
comp_2="-sUSE_DL=YES"
job="install test"

added=" : <compileflags>-fPIC ;"

# Infos on bjam gcc config:
# http://www.boost.org/boost-build2/doc/html/bbv2/reference/tools.html#bbv2.reference.tools.compiler.gcc

if [ "$flavor" == "linux64" ]; then
	compiler=g++
elif [ "$flavor" == "linux32" ]; then
	compiler=g++
elif [ "$flavor" == "mingw32" ]; then
	compiler="$PATH_MINGW32/${HOST_MINGW32}-g++"
	os="windows"
	job="install"
	added=" : <compileflags>-DBOOST_USE_WINDOWS_H <linkflags>-static-libstdc++ <linkflags>-static-libgcc ;"
	comp_2="-sUSE_DL=NO"
elif [ "$flavor" == "mingw64" ]; then
	compiler="$PATH_MINGW64/${HOST_MINGW64}-g++"
	os="windows"
	job="install"
	added=" : <compileflags>-DBOOST_USE_WINDOWS_H <compileflags>-DBUILDING_BOOST_MINGW64 <linkflags>-static-libstdc++ <linkflags>-static-libgcc <linkflags>-lkernel32 ;"
	comp_2="-sUSE_DL=NO"
else
	echo "Unknown compilation platform."
	exit 1
fi

PRECONFIG_CMD="echo \"using gcc : $flavor : $compiler $added\" > boost-config.jam"
MAKE_CMD="$DEPS_DIR/$flavor/$dep_boost/bjam -d+2 --user-config=boost-config.jam variant=$mode link=$linkmode --toolset=gcc-$flavor target-os=$os --prefix=$DEPS_DIR/$flavor/$PACKAGENAME $comp_1 $comp_2 $job"
DO_MAKE_INSTALL=0

buildStdPackage
