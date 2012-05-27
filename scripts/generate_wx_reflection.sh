#! /bin/sh

# First need to setup patch env for wxWidgets to call this script.
# After calling this script, regenerate the bindings file with the lua bindings module
# then rebuild the bindings.

. `pwd`/tools.sh

OLDPATH=$PATH
export PATH=$PROJECT_DIR/tools/$dep_doxygen/bin:$PATH

# setup_patch_env.sh $dep_wx
cd $BUILD_DIR/$dep_wx.mod/docs/doxygen
./regen.sh xml

rm -Rf $BUILD_DIR/xml_wrapping/wx/
mkdir -p $BUILD_DIR/xml_wrapping/wx/

mv out/xml $BUILD_DIR/xml_wrapping/wx/

export PATH=$OLDPATH
