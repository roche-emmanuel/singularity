#ifndef _PLUG_COMMON_H_
#define _PLUG_COMMON_H_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( PLUG_LIBRARY_STATIC )
#    define PLUG_EXPORT
#  elif defined( PLUG_LIBRARY )
#    define PLUG_EXPORT   __declspec(dllexport)
#  else
#    define PLUG_EXPORT   __declspec(dllimport)
#  endif
#else
#  define PLUG_EXPORT
#endif

#pragma warning( disable: 4251 )

#include <lua.hpp>

#include  <SPK.h>
#include <RenderingAPIs/OpenGL/SPK_GLExtHandler.h>

#include <osg/Node>
#include <SparkUpdatingHandler.h>

using namespace SPK;

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif

#include "lua/LuaObject.h"

template <typename dstType>
struct luna_caster<SPK::GL::GLExtHandler,dstType> {
	static inline dstType* cast(SPK::GL::GLExtHandler* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

/*template <>
struct luna_caster<osg::Referenced,spark::SparkUpdatingHandler> {
	static inline spark::SparkUpdatingHandler* cast(osg::Referenced* ptr) {
		return (spark::SparkUpdatingHandler*)(ptr);
	};
};*/

namespace sgt {

template <>
inline osg::BoundingBox getValue(lua_State* L, int index) {	
	return *(Luna< osg::BoundingBox >::check(L,index));
};

};

#endif
