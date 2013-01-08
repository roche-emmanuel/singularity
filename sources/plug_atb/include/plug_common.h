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

#include <AntTweakBar.h>

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif

#include "lua/LuaObject.h"

namespace sgt {

inline void pushValue(lua_State* L, const osg::Vec3d& arg) {
	Luna<osg::Vec3d>::push(L,(osg::Vec3d*)(&arg),false);
}

inline void pushValue(lua_State* L, const osg::Vec4f& arg) {
	Luna<osg::Vec4f>::push(L,(osg::Vec4f*)(&arg),false);
}

inline void pushValue(lua_State* L, const osg::Quat& arg) {
	Luna<osg::Quat>::push(L,(osg::Quat*)(&arg),false);
}

template <>
inline osg::Vec3d getValue(lua_State* L, int index) {
	osg::Vec3d* res = Luna< osg::Vec3d >::check(L,index);
	CHECK_RET(res,osg::Vec3d(),"Invalid Vec3d result.");
	
	return *res;
};

template <>
inline osg::Vec4f getValue(lua_State* L, int index) {
	osg::Vec4f* res = Luna< osg::Vec4f >::check(L,index);
	CHECK_RET(res,osg::Vec4f(),"Invalid Vec4f result.");
	
	return *res;
};

template <>
inline osg::Quat getValue(lua_State* L, int index) {
	osg::Quat* res = Luna< osg::Quat >::check(L,index);
	CHECK_RET(res,osg::Quat(),"Invalid Quat result.");
	
	return *res;
};

};

#endif
