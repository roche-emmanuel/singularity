#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <plug_extensions.h>
#include <osg/Referenced>
#include <osg/Object>
#include <sgtCommon.h>
#include <base/Object.h>
#include <base/Referenced.h>
#include <base/TimeProvider.h>
#include <lua/ModuleProvider.h>
#include <log/LogSink.h>
#include <log/FileLogger.h>
#include <log/LogManager.h>
#include <log/LogRecord.h>
#include <log/StdLogger.h>

// Class: __int64
template<>
class LunaTraits< __int64 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static __int64* _bind_ctor(lua_State *L);
	static void _bind_dtor(__int64* obj);
	typedef __int64 parent_t;
	typedef __int64 base_t;
	static luna_ConverterType converters[];
};

// Class: BaseClass
template<>
class LunaTraits< BaseClass > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static BaseClass* _bind_ctor(lua_State *L);
	static void _bind_dtor(BaseClass* obj);
	typedef BaseClass parent_t;
	typedef BaseClass base_t;
	static luna_ConverterType converters[];
};

// Class: uintptr_t
template<>
class LunaTraits< uintptr_t > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static uintptr_t* _bind_ctor(lua_State *L);
	static void _bind_dtor(uintptr_t* obj);
	typedef uintptr_t parent_t;
	typedef uintptr_t base_t;
	static luna_ConverterType converters[];
};

// Class: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Class: boost::posix_time::ptime
template<>
class LunaTraits< boost::posix_time::ptime > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static boost::posix_time::ptime* _bind_ctor(lua_State *L);
	static void _bind_dtor(boost::posix_time::ptime* obj);
	typedef boost::posix_time::ptime parent_t;
	typedef boost::posix_time::ptime base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Mutex
template<>
class LunaTraits< OpenThreads::Mutex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Mutex* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Mutex* obj);
	typedef OpenThreads::Mutex parent_t;
	typedef OpenThreads::Mutex base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Object
template<>
class LunaTraits< osg::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Object* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Object base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DeleteHandler
template<>
class LunaTraits< osg::DeleteHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DeleteHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DeleteHandler* obj);
	typedef osg::DeleteHandler parent_t;
	typedef osg::DeleteHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Observer
template<>
class LunaTraits< osg::Observer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Observer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Observer* obj);
	typedef osg::Observer parent_t;
	typedef osg::Observer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ObserverSet
template<>
class LunaTraits< osg::ObserverSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ObserverSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ObserverSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ObserverSet base_t;
	static luna_ConverterType converters[];
};

// Class: osg::UserDataContainer
template<>
class LunaTraits< osg::UserDataContainer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::UserDataContainer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::UserDataContainer* obj);
	typedef osg::Referenced parent_t;
	typedef osg::UserDataContainer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CopyOp
template<>
class LunaTraits< osg::CopyOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CopyOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CopyOp* obj);
	typedef osg::CopyOp parent_t;
	typedef osg::CopyOp base_t;
	static luna_ConverterType converters[];
};

// Class: osg::State
template<>
class LunaTraits< osg::State > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::State* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::State* obj);
	typedef osg::Referenced parent_t;
	typedef osg::State base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ref_ptr< osg::Referenced >
template<>
class LunaTraits< osg::ref_ptr< osg::Referenced > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ref_ptr< osg::Referenced >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ref_ptr< osg::Referenced >* obj);
	typedef osg::ref_ptr< osg::Referenced > parent_t;
	typedef osg::ref_ptr< osg::Referenced > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Object
template<>
class LunaTraits< sgt::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Object* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Object base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Referenced
template<>
class LunaTraits< sgt::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Referenced base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TimeProvider
template<>
class LunaTraits< sgt::TimeProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TimeProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TimeProvider* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TimeProvider base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TimeManager
template<>
class LunaTraits< sgt::TimeManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TimeManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TimeManager* obj);
	typedef sgt::TimeManager parent_t;
	typedef sgt::TimeManager base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::ModuleProvider
template<>
class LunaTraits< sgt::ModuleProvider > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::ModuleProvider* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::ModuleProvider* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::ModuleProvider base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::ModuleManager
template<>
class LunaTraits< sgt::ModuleManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::ModuleManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::ModuleManager* obj);
	typedef sgt::ModuleManager parent_t;
	typedef sgt::ModuleManager base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::LogSink
template<>
class LunaTraits< sgt::LogSink > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::LogSink* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::LogSink* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::LogSink base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::FileLogger
template<>
class LunaTraits< sgt::FileLogger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::FileLogger* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::FileLogger* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::FileLogger base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::LogManager
template<>
class LunaTraits< sgt::LogManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::LogManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::LogManager* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::LogManager base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< sgt::LogSink > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< sgt::LogSink > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< sgt::LogSink > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< sgt::LogSink > >* obj);
	typedef std::vector< osg::ref_ptr< sgt::LogSink > > parent_t;
	typedef std::vector< osg::ref_ptr< sgt::LogSink > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< int, int >
template<>
class LunaTraits< std::map< int, int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< int, int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< int, int >* obj);
	typedef std::map< int, int > parent_t;
	typedef std::map< int, int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, int >
template<>
class LunaTraits< std::map< std::string, int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, int >* obj);
	typedef std::map< std::string, int > parent_t;
	typedef std::map< std::string, int > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::LogRecord
template<>
class LunaTraits< sgt::LogRecord > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::LogRecord* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::LogRecord* obj);
	typedef sgt::LogRecord parent_t;
	typedef sgt::LogRecord base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< std::string >
template<>
class LunaTraits< std::set< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< std::string >* obj);
	typedef std::set< std::string > parent_t;
	typedef std::set< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::StdLogger
template<>
class LunaTraits< sgt::StdLogger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::StdLogger* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::StdLogger* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::StdLogger base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::AnyVector
template<>
class LunaTraits< sgt::AnyVector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::AnyVector* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::AnyVector* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::AnyVector base_t;
	static luna_ConverterType converters[];
};

// Class: std::istream
template<>
class LunaTraits< std::istream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::istream* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::istream* obj);
	typedef std::istream parent_t;
	typedef std::istream base_t;
	static luna_ConverterType converters[];
};

// Class: std::ostream
template<>
class LunaTraits< std::ostream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::ostream* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::ostream* obj);
	typedef std::ostream parent_t;
	typedef std::ostream base_t;
	static luna_ConverterType converters[];
};


// Mapped type: unsigned __int64
template<>
class LunaTraits< unsigned __int64 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static unsigned __int64* _bind_ctor(lua_State *L);
	static void _bind_dtor(unsigned __int64* obj);
	typedef unsigned __int64 parent_t;
	typedef unsigned __int64 base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< int >
template<>
class LunaTraits< std::vector< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< int >* obj);
	typedef std::vector< int > parent_t;
	typedef std::vector< int > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< float >
template<>
class LunaTraits< std::vector< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< float >* obj);
	typedef std::vector< float > parent_t;
	typedef std::vector< float > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< double >
template<>
class LunaTraits< std::vector< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< double >* obj);
	typedef std::vector< double > parent_t;
	typedef std::vector< double > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< void * >
template<>
class LunaTraits< std::vector< void * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< void * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< void * >* obj);
	typedef std::vector< void * > parent_t;
	typedef std::vector< void * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::map< std::string, unsigned int >
template<>
class LunaTraits< std::map< std::string, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, unsigned int >* obj);
	typedef std::map< std::string, unsigned int > parent_t;
	typedef std::map< std::string, unsigned int > base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 32973728 > {
public:
	typedef __int64 type;
	
};

template<>
class LunaType< 48128592 > {
public:
	typedef BaseClass type;
	
};

template<>
class LunaType< 23992870 > {
public:
	typedef uintptr_t type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 16567808 > {
public:
	typedef boost::posix_time::ptime type;
	
};

template<>
class LunaType< 3168391 > {
public:
	typedef OpenThreads::Mutex type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 1576447 > {
public:
	typedef osg::DeleteHandler type;
	
};

template<>
class LunaType< 58375525 > {
public:
	typedef osg::Observer type;
	
};

template<>
class LunaType< 27134364 > {
public:
	typedef osg::CopyOp type;
	
};

template<>
class LunaType< 32886573 > {
public:
	typedef sgt::RefPtr type;
	
};

template<>
class LunaType< 10949480 > {
public:
	typedef sgt::TimeManager type;
	
};

template<>
class LunaType< 37264461 > {
public:
	typedef sgt::ModuleManager type;
	
};

template<>
class LunaType< 79167517 > {
public:
	typedef sgt::LogManager::SinkVector type;
	
};

template<>
class LunaType< 47213589 > {
public:
	typedef sgt::LogManager::LevelFlagMap type;
	
};

template<>
class LunaType< 65247664 > {
public:
	typedef sgt::LogManager::TraceFlagMap type;
	
};

template<>
class LunaType< 34788330 > {
public:
	typedef sgt::LogRecord type;
	
};

template<>
class LunaType< 59964048 > {
public:
	typedef sgt::LogSink::StringSet type;
	
};

template<>
class LunaType< 77972206 > {
public:
	typedef std::istream type;
	
};

template<>
class LunaType< 2993706 > {
public:
	typedef std::ostream type;
	
};

template<>
class LunaType< 84351388 > {
public:
	typedef unsigned __int64 type;
	
};

template<>
class LunaType< 92299338 > {
public:
	typedef std::vector< int > type;
	
};

template<>
class LunaType< 77249888 > {
public:
	typedef std::vector< float > type;
	
};

template<>
class LunaType< 4564820 > {
public:
	typedef std::vector< double > type;
	
};

template<>
class LunaType< 87530881 > {
public:
	typedef std::vector< void * > type;
	
};

template<>
class LunaType< 27704170 > {
public:
	typedef std::map< std::string, int > type;
	
};

template<>
class LunaType< 72783721 > {
public:
	typedef std::map< std::string, unsigned int > type;
	
};

template<>
class LunaType< 84922662 > {
public:
	typedef osg::ref_ptr< osg::Referenced > type;
	
};

template<>
class LunaType< 20265607 > {
public:
	typedef std::vector< osg::ref_ptr< sgt::LogSink > > type;
	
};

template<>
class LunaType< 79429939 > {
public:
	typedef std::map< int, int > type;
	
};

template<>
class LunaType< 74170402 > {
public:
	typedef std::set< std::string > type;
	
};


#endif

