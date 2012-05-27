#!/bin/sh

. `pwd`/tools.sh

flavor=$1
SHOWGUI=$2

PACKAGENAME=$dep_osg
# VERBOSE=1
CLEAN=0

addFlavorFlag mingw64 "-D_OPENTHREADS_ATOMIC_USE_GCC_BUILTINS_EXITCODE=1 -DCMAKE_CXX_FLAGS='-DHAVE_STDINT_H' -DCMAKE_C_FLAGS='-DHAVE_STDINT_H'" 
addFlavorFlag mingw32 "-D_OPENTHREADS_ATOMIC_USE_GCC_BUILTINS_EXITCODE=1 -D_OPENTHREADS_ATOMIC_USE_WIN32_INTERLOCKED_EXITCODE=0 -DCMAKE_CXX_FLAGS='-DHAVE_STDINT_H' -DCMAKE_C_FLAGS='-DHAVE_STDINT_H'" 


addFlag -DBUILD_OSG_EXAMPLES=ON
addFlag -DBUILD_DASHBOARD_REPORTS=OFF
addFlag -DBUILD_DOCUMENTATION=ON
addFlag -DBUILD_REF_DOCS_SEARCHENGINE=ON
addFlag -DBUILD_REF_DOCS_TAGFILE=ON
addFlag -DDOCUMENTATION_HTML_HELP=ON
addFlag -DHTML_HELP_COMPILER=chmcmd
addFlag -DHTML_HELP_INCLUDE_PATH=
addFlag -DHTML_HELP_LIBRARY=
addFlag -DBUILD_OSG_PACKAGES=OFF
addFlag -DBUILD_OSG_WRAPPERS=OFF
addFlag -DOSG_USE_AGGRESSIVE_WARNINGS=ON 
addFlag -DOSG_FORCE_QUERY_RESULT_AVAILABLE_BEFORE_RETRIEVAL=ON # this is a workaround.
addFlag -DOSG_PLUGIN_SEARCH_INSTALL_DIR_FOR_PLUGINS=OFF
addFlag -DOSG_USE_FLOAT_BOUNDINGBOX=OFF
addFlag -DOSG_USE_FLOAT_BOUNDINGSPHERE=OFF

# build static version:
addFlag -DDYNAMIC_OPENSCENEGRAPH=OFF
addFlag -DDYNAMIC_OPENTHREADS=OFF


#dependencies:
ext=a

addFlag -DFREETYPE_INCLUDE_DIR_freetype2=$DEPS_DIR/$flavor/$dep_freetype/include/freetype2
addFlag -DFREETYPE_INCLUDE_DIR_ft2build=$DEPS_DIR/$flavor/$dep_freetype/include
addFlag -DFREETYPE_LIBRARY=$DEPS_DIR/$flavor/$dep_freetype/lib/libfreetype.${ext}

addFlag -DJASPER_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_jasper/include
addFlag -DJASPER_LIBRARY=$DEPS_DIR/$flavor/$dep_jasper/lib/libjasper.${ext}

addFlag -DJPEG_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_jpeg/include
addFlag -DJPEG_LIBRARY=$DEPS_DIR/$flavor/$dep_jpeg/lib/libjpeg.${ext}

addFlag -DTIFF_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_tiff/include
addFlag -DTIFF_LIBRARY=$DEPS_DIR/$flavor/$dep_tiff/lib/libtiff.${ext}

addFlag -DCURL_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_curl/include
addFlag -DCURL_LIBRARY=$DEPS_DIR/$flavor/$dep_curl/lib/libcurl.${ext}

addFlag -DZLIB_LIBRARY=$DEPS_DIR/$flavor/$dep_zlib/lib/libz.${ext}

addFlag -DSSL_LIBRARY=$DEPS_DIR/$flavor/$dep_openssl/lib/libssl.${ext}
addFlag -DCRYPTO_LIBRARY=$DEPS_DIR/$flavor/$dep_openssl/lib/libcrypto.${ext}

addFlag -DGDAL_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_gdal/include
addFlag -DGDAL_LIBRARY=$DEPS_DIR/$flavor/$dep_gdal/lib/libgdal.${ext}

addFlag -DPROJ4_LIBRARY=$DEPS_DIR/$flavor/$dep_proj4/lib/libproj.${ext}
# addFlag -DEXPAT_LIBRARY=$DEPS_DIR/$flavor/$dep_expat/lib/libexpat.${ext}
    
addFlag -DCOLLADA_DYNAMIC_LIBRARY=$DEPS_DIR/$flavor/$dep_collada/lib/libcollada14dom.dll.${ext}
addFlag -DCOLLADA_DOM_ROOT=$DEPS_DIR/$flavor/$dep_collada/include/collada-dom/1.4/dom
addFlag -DCOLLADA_INCLUDE_DIR=$DEPS_DIR/$flavor/$dep_collada/include/collada-dom

# addFlag -DCOLLADA_BOOST_FILESYSTEM_LIBRARY=$DEPS_DIR/$flavor/$dep_boost/lib/libboost_filesystem.${ext}
# addFlag -DCOLLADA_BOOST_SYSTEM_LIBRARY=$DEPS_DIR/$flavor/$dep_boost/lib/libboost_system.${ext}


buildCmakePackage 
