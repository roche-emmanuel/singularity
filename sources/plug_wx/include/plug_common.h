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

#include "wx_headers.h"
#include "sgtApp.h"
#include "wx_extensions.h"
#include <wx/ribbon/art.h>
#include <wx/ribbon/buttonbar.h>

#include "sgtCommon.h"


#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>

#include "lua/LuaObject.h"

template <typename dstType>
struct luna_caster<wxKeyboardState,dstType> {
	static inline dstType* cast(wxKeyboardState* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <>
struct luna_caster<wxKeyboardState,wxKeyboardState> {
	static inline wxKeyboardState* cast(wxKeyboardState* ptr) {
		return ptr;
	};
};

template <typename dstType>
struct luna_caster<wxArrayString,dstType> {
	static inline dstType* cast(wxArrayString* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <>
struct luna_caster<wxArrayString,wxArrayString> {
	static inline wxArrayString* cast(wxArrayString* ptr) {
		return ptr;
	};
};

template <typename dstType>
struct luna_caster<wxTextAttr,dstType> {
	static inline dstType* cast(wxTextAttr* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <>
struct luna_caster<wxTextAttr,wxTextAttr> {
	static inline wxTextAttr* cast(wxTextAttr* ptr) {
		return ptr;
	};
};

namespace sgt {

inline void pushValue(lua_State* L, const wxString& arg) {
	std::string str = arg.ToStdString();
	lua_pushlstring(L,str.data(),str.size());
}

inline void pushValue(lua_State* L, const wxRect& arg) {
	sgt::pushValue<wxRect>(L,(wxRect*)(&arg));
}

#ifdef WIN32
inline void pushValue(lua_State* L, struct HWND__ * arg) {
	Luna< void >::push(L,(void*)arg,false);
}
#endif

};

#endif

#endif
