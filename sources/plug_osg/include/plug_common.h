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
#include <iostream> 

#include <osg/Vec3d>
#include <osg/RenderInfo>

#include "plug_extensions.h"


#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>

template <typename dstType>
struct luna_caster<osg::RenderInfo,dstType> {
	static inline dstType* cast(osg::RenderInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <>
struct luna_caster<osg::RenderInfo,osg::RenderInfo> {
	static inline osg::RenderInfo* cast(osg::RenderInfo* ptr) {
		return ptr;
	};
};

#endif


#endif
