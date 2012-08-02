#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <sgtCommon.h>
#include <base/Object.h>
#include <log/LogSink.h>
#include <log/FileLogger.h>
#include <log/LogManager.h>
#include <log/LogRecord.h>
#include <log/StdLogger.h>

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
class LunaTraits< osg::ref_ptr< osg::Object > > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static osg::ref_ptr< osg::Object >* _bind_ctor(lua_State *L);
    static void _bind_dtor(osg::ref_ptr< osg::Object >* obj);
    typedef sgt::RefPtr parent_t;
    typedef osg::ref_ptr< osg::Object > base_t;
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
    typedef sgt::Object parent_t;
    typedef sgt::Object base_t;
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
    typedef sgt::Object parent_t;
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
    typedef sgt::Object parent_t;
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
    typedef sgt::Object parent_t;
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
    typedef sgt::Object parent_t;
    typedef sgt::StdLogger base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 50169651 > {
public:
    typedef osg::Referenced type;
    
};

template<>
class LunaType< 32886573 > {
public:
    typedef sgt::RefPtr type;
    
};

template<>
class LunaType< 44367388 > {
public:
    typedef sgt::Object type;
    
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

