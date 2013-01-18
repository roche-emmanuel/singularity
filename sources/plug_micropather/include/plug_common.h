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

#include "plug_extensions.h"

#include <luna/luna.h>
#include <luna/luna_types.h>

#include "lua/LuaObject.h"

#include <luna/luna_casters.h>


/*
template <typename dstType>
struct luna_caster<btDbvt::ICollide,dstType> {
	static inline dstType* cast(btDbvt::ICollide* ptr) {
		return (dstType*)(ptr);
	};
};

template <>
struct luna_caster<btTypedObject,luna_wrapper_base> {
	static inline luna_wrapper_base* cast(btTypedObject* ptr) {
		return (luna_wrapper_base*)(ptr);
	};
};
*/

#endif
