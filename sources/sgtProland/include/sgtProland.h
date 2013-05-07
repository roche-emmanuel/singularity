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

#include <GL/glew.h>

#include "sgtCommon.h"

// #include <OpenThreads/ScopedLock>
// #include <OpenThreads/Mutex>
// #include <OpenThreads/ReentrantMutex>
// #include <OpenThreads/Condition>
// #include <OpenThreads/Thread>

// #include "pmath.h"
// #include "core/Types.h"

// #define sgtCast(point,targetClass) (dynamic_cast<targetClass*>(point))


#endif
