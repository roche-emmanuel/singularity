#ifndef SGTLAND_COMMON_
#define SGTLAND_COMMON_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( SGTLAND_LIB_STATIC )
    #    define SGTLAND_EXPORT
    #  elif defined( SGTLAND_LIB )
    #    define SGTLAND_EXPORT   __declspec(dllexport)
    #  else
    #    define SGTLAND_EXPORT   __declspec(dllimport)
    #  endif
#else
    #  define SGTLAND_EXPORT
#endif  

#include "sgtCommon.h"

#include <OpenThreads/ScopedLock>
#include <OpenThreads/Mutex>
#include <OpenThreads/ReentrantMutex>
#include <OpenThreads/Condition>
#include <OpenThreads/Thread>

#include "pmath.h"

#define sgtCast(ptr,targetClass) (dynamic_cast<targetClass*>(ptr))


#endif
