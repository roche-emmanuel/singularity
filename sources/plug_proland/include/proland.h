#ifndef PROLAND_COMMON_
#define PROLAND_COMMON_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( PROLAND_LIB_STATIC )
    #    define PROLAND_API
    #  elif defined( PROLAND_LIB )
    #    define PROLAND_API   __declspec(dllexport)
    #  else
    #    define PROLAND_API   __declspec(dllimport)
    #  endif
#else
    #  define PROLAND_API
#endif  

#if defined(_MSC_VER)
    #pragma warning( disable : 4251 )
	#pragma warning( disable : 4091 )	
	#pragma warning( disable : 4244 )	
#endif

#include <OpenThreads/Mutex>
#include <OpenThreads/ReentrantMutex>
#include <OpenThreads/ScopedLock>
#include <OpenThreads/Condition>
#include <OpenThreads/Thread>

#define ORK_API PROLAND_API

#include "pmath.h"

#endif
