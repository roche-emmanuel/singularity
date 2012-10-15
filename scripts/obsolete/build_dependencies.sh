#! /bin/sh

performBuild()
{
    flavor=$1

    ./deps/zlib.sh $flavor
    ./deps/bzip2.sh $flavor
    ./deps/jpeg.sh $flavor
    ./deps/tiff.sh $flavor
    ./deps/freetype.sh $flavor
    ./deps/jasper.sh $flavor
    ./deps/iconv.sh $flavor
    ./deps/openssl.sh $flavor
    ./deps/curl.sh $flavor
    ./deps/proj4.sh $flavor
    ./deps/gdal.sh $flavor
    ./deps/boost.sh $flavor
    ./deps/libxml2.sh $flavor
    ./deps/collada.sh $flavor
    ./deps/luajit.sh $flavor
    ./deps/luabind.sh $flavor
    ./deps/osg.sh $flavor
    ./deps/pcre.sh $flavor
    ./deps/swig.sh $flavor
    ./deps/luafilesystem.sh $flavor

    ./deps/wx.sh $flavor
}

if [ "$1" == "" ]; then
    performBuild linux64
    performBuild mingw32
    performBuild mingw64
else
    performBuild $1
fi
