#!/bin/sh

. `pwd`/tools.sh

flavor=$1

PACKAGENAME=$dep_wx
CLEAN=0

addFlag "--enable-static --disable-shared"
addFlag "--enable-monolithic --enable-stl --enable-intl --enable-aui --with-opengl --enable-stc --enable-richtext --enable-backtrace"
addFlag "--with-libpng=builtin --with-libjpeg=builtin --with-libtiff=builtin"
addFlag "--with-xpm=builtin --with-expat=builtin --with-regex=builtin --with-zlib=builtin"
addFlag "--enable-mediactrl --enable-graphics_ctx"
addFlag "--enable-ipv6"


if [ "$flavor" == "mingw32" -o "$flavor" == "mingw64" ]; then
    export LDFLAGS="-lws2_32"
fi

addFlavorFlag mingw32 --with-msw
addFlavorFlag mingw64 --with-msw
addFlavorFlag linux32 --with-gtk
addFlavorFlag linux64 --with-gtk

POSTMAKE_CMD="cd samples && make && cd .."

buildStdPackage
