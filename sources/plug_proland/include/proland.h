#ifndef PROLAND_COMMON_
#define PROLAND_COMMON_

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

#if defined(_MSC_VER)
    #pragma warning( disable : 4251 )
	#pragma warning( disable : 4091 )	
	#pragma warning( disable : 4244 )	
#endif

#include <GL/glew.h>
#include <stdint.h>


#include <OpenThreads/Mutex>
#include <OpenThreads/ReentrantMutex>
#include <OpenThreads/ScopedLock>
#include <OpenThreads/Condition>
#include <OpenThreads/Thread>



#define ORK_API
#define PROLAND_API

// #define ORK_API PROLAND_API
// #define PLUG_EXPORT PROLAND_API

#ifdef max
#undef max
#endif

#ifdef min
#undef min
#endif

#include "pmath.h"

#include <lua.hpp>
#include <iostream> 

// include the SimCore library:
#include "sgtCommon.h"

#include "ProlandDrawable.h"

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif

//#include "assert.h"
//#undef assert
//#define assert(x) if(!(x)){logERROR("Assertion " #x " failed.");};

#endif
