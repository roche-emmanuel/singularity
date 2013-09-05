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
#pragma warning( disable: 4996 )

#include <lua.hpp>
#include <iostream> 

#include "sgtCommon.h"
#include <d3d9.h>
#include <d3dx9.h>
#include <DxErr.h>

#define CHECK_RESULT(val,msg) { HRESULT hr = (val); if(FAILED(hr)) { logERROR(msg << ", err=" << DXGetErrorString(hr) << ", desc=" << DXGetErrorDescription(hr)); return; } }
#define CHECK_RESULT_RET(val,ret,msg) { HRESULT hr = (val); if(FAILED(hr)) { logERROR(msg << ", err=" << DXGetErrorString(hr) << ", desc=" << DXGetErrorDescription(hr)); return ret; } }
#define SafeRelease(x) if(x) x->Release();

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif

#endif
