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
#include <boost/chrono.hpp>
#include <boost/foreach.hpp>
#include <boost/tokenizer.hpp>
#include <boost/variant.hpp>

#include <osg/Object>
#include <osg/ref_ptr>
#include <osg/observer_ptr>
#include <osg/Math>
#include <osgDB/ObjectWrapper>
#include <osgDB/Registry>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <OpenThreads/Mutex>

// Smart pointers definitions:
#define sgtPtr osg::ref_ptr
#define sgtObserver osg::observer_ptr
#define AnyCast boost::any_cast 

typedef osg::CopyOp sgtCopyOp;
typedef osg::Referenced sgtReferencedBase; 
typedef osg::Object sgtObjectBase; // it is assumed that the object base class is derived from sgtReferenced.

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

typedef sgtPtr<sgtReferencedBase> RefPtr;

typedef OpenThreads::Mutex sgtMutex;

//typedef boost::any Any;

}; // namespace sgt

typedef sgt::RefPtr sgtRefPtr;

#include "base/Referenced.h"
#include "base/Object.h"
#include "base/Exception.h"
#include "sgtLogging.h"

// Helper macros:
#define FOREACH BOOST_FOREACH

#define REMOVE(cont,item) cont.erase(std::remove(cont.begin(), cont.end(), item), cont.end());

// Removes only if predicate returns true:
#define REMOVE_IF(cont,pred) cont.erase(std::remove_if(cont.begin(), cont.end(), pred), cont.end());

// Debugging macros:
#define THROW_IF(cond,msg) if(cond) { std::ostringstream os; os << msg; logERROR("Throwing exception: " << msg); throw sgtException(os.str()); }
#define CHECK_EQ(val,expected,msg) if((val)!=(expected)) { logERROR(msg << " (Expected: " << (expected) << " and got: " << (val) << ")"); return; }
#define CHECK_EQ_RET(val,expected,ret,msg) if((val)!=(expected)) { logERROR(msg << " (Expected: " << (expected) << " and got: " << (val) << ")"); return ret; }

#define CHECK(val,msg) if(!(val)) { logERROR(msg); return; }
#define CHECK_RET(val,ret,msg) if(!(val)) { logERROR(msg); return ret; }

#define DEPRECATED(msg) { logWARN("Deprecated: " << msg); }

#define TRY try
#define CATCH(msg) catch(const std::exception& e) { \
		logERROR("Std exception " << msg << ": " << e.what()); \
	} \
		catch(...) { \
		logERROR("Unknown exception " << msg << "."); \
	}

#endif
