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
#include <mgl2/mgl.h>

#include "lunaCommon.h"

#ifdef WIN32
namespace sgt {

// string conversion helper functions:
//std::wstring SGTCORE_EXPORT s2ws(const std::string& s);
//std::string SGTCORE_EXPORT ws2s(const std::wstring& s);
inline std::wstring s2ws(const std::string& s)
{
    int slength = (int)s.length() + 1;
    int len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0); 
    std::wstring r(len, L'\0');
    MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, &r[0], len);
    return r;
}

inline std::string ws2s(const std::wstring& s)
{
    int slength = (int)s.length() + 1;
    int len = WideCharToMultiByte(CP_ACP, 0, s.c_str(), slength, 0, 0, 0, 0); 
    std::string r(len, '\0');
    WideCharToMultiByte(CP_ACP, 0, s.c_str(), slength, &r[0], len, 0, 0); 
    return r;
}

};

#endif

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
