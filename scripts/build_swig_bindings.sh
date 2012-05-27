#! /bin/sh

. `pwd`/tools.sh
export LD_LIBRARY_PATH=$DEPS_DIR/$BUILD_FLAVOR/$dep_pcre/lib:$LD_LIBRARY_PATH

flavor=$1

# cd $SOURCES_DIR/doxmlparser/src
# $SWIG -v -Wall -c++ -lua -I$SOURCES_DIR/doxmlparser/include doxmlparser.i #-xmlout dowmlparser.xml

cd $SOURCES_DIR/wx/src/swig
$SWIG -v -Wall -c++ -lua -nodefaultctor -nodefaultdtor -I$DEPS_DIR/${flavor}/${dep_wx}/include/wx-2.9 wx.i
