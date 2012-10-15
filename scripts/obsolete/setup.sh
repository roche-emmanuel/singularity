#! /bin/sh

PROJECT_NAME="Singularity"

BUILD_PLATFORM=amd64-linux
#BUILD_PLATFORM=i686-linux
BUILD_FLAVOR=linux64

PATH_MINGW32=/station/mingw32/bin
PATH_MINGW64=/station/mingw64/bin

# There should be no need to change the following variables when 
# creating a new project as a copy of an existing template

PROJECT_DIR=`pwd -P`/..
DEPS_DIR=$PROJECT_DIR/deps
SCRIPTS_DIR=$PROJECT_DIR/scripts
SOURCES_DIR=$PROJECT_DIR/sources
BUILD_DIR=$PROJECT_DIR/build
DEVTOOLS_DIR=$PROJECT_DIR/devtools
SOFTWARE_DIR=$PROJECT_DIR/software
XML_WRAPPING_DIR=$BUILD_DIR/xml_wrapping

HOST_MINGW32=i686-w64-mingw32
HOST_MINGW64=x86_64-w64-mingw32

dep_doxygen=doxygen-1.7.6.1

DOXYGEN=$SOFTWARE_DIR/tools/$BUILD_FLAVOR/$dep_doxygen/doxygen
UPX=$DEVTOOLS_DIR/upx
PEXPORTS=$DEVTOOLS_DIR/pexports

# dependencies:
dep_boost=boost-1.47.0
dep_bzip2=bzip2-1.0.6
dep_collada=collada-dom-2.3.1
dep_curl=curl-7.23.1
dep_freetype=freetype-2.4.8
dep_gdal=gdal-1.9.0
dep_jasper=jasper-1.900.1
dep_iconv=libiconv-1.13.1
dep_xml2=libxml2-2.7.7
dep_luabind=luabind-0.9.1
dep_luafilesystem=luafilesystem-1.5.0
dep_lua=LuaJIT-2.0.0-beta8
dep_osg=OpenSceneGraph-3.0.1
dep_ssl=openssl-0.9.8k
dep_proj4=proj-4.7.0
dep_tiff=tiff-4.0.0
dep_wxstedit=wxstedit-1.2.5
dep_wx=wxWidgets-2.9.3
dep_zlib=zlib-1.2.5


