#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1/include/osg/Referenced>
#include <W:/Shared/Dev/Deps/win32/OpenSceneGraph-3.0.1/include/osg/Object>
#include <sgtCommon.h>
#include <base/TimeProvider.h>
#include <base/Object.h>
#include <log/LogSink.h>
#include <log/FileLogger.h>
#include <log/LogManager.h>
#include <log/LogRecord.h>
#include <log/StdLogger.h>

template<>
class LunaTraits< posix_time::ptime > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static posix_time::ptime* _bind_ctor(lua_State *L);
    static void _bind_dtor(posix_time::ptime* obj);
    typedef posix_time::ptime parent_t;
    typedef posix_time::ptime base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::RefPtr parent_t;
    typedef osg::ref_ptr< osg::Referenced > base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogSink parent_t;
    typedef sgt::LogSink base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogSink parent_t;
    typedef sgt::FileLogger base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogManager parent_t;
    typedef sgt::LogManager base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogManager::SinkVector parent_t;
    typedef std::vector< osg::ref_ptr< sgt::LogSink > > base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogManager::LevelFlagMap parent_t;
    typedef std::map< int, int > base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogManager::TraceFlagMap parent_t;
    typedef std::map< std::string, int > base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogSink::StringSet parent_t;
    typedef std::set< std::string > base_t;
	static luna_ConverterType converters[];
};

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
    typedef sgt::LogSink parent_t;
    typedef sgt::StdLogger base_t;
	static luna_ConverterType converters[];
};

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


template<>
class LunaType< 12269219 > {
public:
    typedef posix_time::ptime type;
    
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
class LunaType< 81755923 > {
public:
    typedef sgt::LogSink type;
    
};

template<>
class LunaType< 36134915 > {
public:
    typedef sgt::LogManager type;
    
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


#endif

