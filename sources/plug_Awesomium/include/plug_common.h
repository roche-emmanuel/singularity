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

//#include <Awesomium/awesomium_capi.h>
#include <Awesomium/JSValue.h>
#include <Awesomium/WebView.h>
#include <Awesomium/WebCore.h>
#include <Awesomium/STLHelpers.h>

using namespace Awesomium;

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif


template <typename dstType>
struct luna_caster<Awesomium::Surface, dstType> {
	static inline dstType* cast(Awesomium::Surface* ptr) {
		return (dstType*)(ptr);
	};
};

namespace sgt {

inline void pushValue(lua_State* L, const WebString* arg) {
	if (!arg) {
		lua_pushnil(L);
		return;
	}
	
	std::string lret_str = Awesomium::ToString(*arg);
	lua_pushlstring(L,lret_str.data(),lret_str.size());
}

inline void pushValue(lua_State* L, const WebString& arg) {
	std::string lret_str = Awesomium::ToString(arg);
	lua_pushlstring(L,lret_str.data(),lret_str.size());
}

template <>
inline WebString getValue(lua_State* L, int index) {
	std::string str = lua_tostring(L,index);
	return Awesomium::ToWebString(str);
};

};

#endif
