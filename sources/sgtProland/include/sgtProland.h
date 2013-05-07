#ifndef SGTPROLAND_COMMON_
#define SGTPROLAND_COMMON_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( SGTPROLAND_LIB_STATIC )
    #    define SGTPROLAND_EXPORT
    #  elif defined( SGTPROLAND_LIB )
    #    define SGTPROLAND_EXPORT   __declspec(dllexport)
    #  else
    #    define SGTPROLAND_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define SGTPROLAND_EXPORT
#endif  

#if defined(_MSC_VER)
    #pragma warning( disable : 4251 )
	#pragma warning( disable : 4091 )	
	#pragma warning( disable : 4244 )	
#endif

#define ORK_API SGTPROLAND_EXPORT
#define PROLAND_API SGTPROLAND_EXPORT

#include <GL/glew.h>
#undef GL_PATCHES

#include "stdint.h"

#include "sgtCommon.h"

// #include <OpenThreads/ScopedLock>
// #include <OpenThreads/Mutex>
// #include <OpenThreads/ReentrantMutex>
// #include <OpenThreads/Condition>
// #include <OpenThreads/Thread>

#include "pmath.h"

#include <osg/Math>

// #include "core/Types.h"

// #define sgtCast(point,targetClass) (dynamic_cast<targetClass*>(point))


#endif
