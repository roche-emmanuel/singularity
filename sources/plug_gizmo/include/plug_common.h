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

#define __BT_SKIP_UINT64_H

#include <lua.hpp>

#include <osg/Node>
#include "ZBaseMaths.h"

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif

#include "lua/LuaObject.h"

#endif