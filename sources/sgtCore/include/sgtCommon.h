#ifndef MINDCORE_COMMON_
#define MINDCORE_COMMON_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( SGTCORE_LIB_STATIC )
    #    define SGTCORE_EXPORT
    #  elif defined( SGTCORE_LIB )
    #    define SGTCORE_EXPORT   __declspec(dllexport)
	#    define EXPIMP_TEMPLATE 
    #  else
    #    define SGTCORE_EXPORT   __declspec(dllimport)
	#    define EXPIMP_TEMPLATE extern
    #  endif
#else
    #  define SGTCORE_EXPORT
	#  define EXPIMP_TEMPLATE
#endif  

#include "sgtConfig.h"

#ifdef WIN32
#include <windows.h>
#endif

// Default includes:
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

#include <boost/any.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/cstdint.hpp>
#include <boost/type_traits.hpp>
#include <boost/thread.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

#include <osg/Referenced>
#include <osg/ref_ptr>
#include <osg/observer_ptr>

// Core definitions and classes:

namespace sgt {

/**
 * String class for the MindSeed project.
 * The MindSeed project defines its own string class to be as "type agnostic" as possible
 * so that, if needed we could quickly change the underlying class used without too much changes in the
 * code itself. Current the standard string class std::string is used.
 */
typedef std::string String;

typedef boost::posix_time::ptime Time;

typedef void Void;
typedef bool Bool;

typedef boost::int8_t Int8;
typedef boost::uint8_t UInt8;

typedef boost::int16_t Int16;
typedef boost::uint16_t UInt16;

typedef boost::int32_t Int32;
typedef boost::uint32_t UInt32;

typedef boost::int64_t Int64;
typedef boost::uint64_t UInt64;

typedef Int8 Char;
typedef UInt8 UChar;

typedef Int16 Short;
typedef UInt16 UShort;

typedef float Float;
typedef double Double;

}; // namespace sgt


// Smart pointers definitions:
#define sgtPtr osg::ref_ptr
#define sgtObserver osg::observer_ptr

#include "base/Object.h"
#include "sgtLogging.h"

#endif
