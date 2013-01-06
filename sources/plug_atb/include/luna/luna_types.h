#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <AntTweakBar.h>
#include <plug_extensions.h>

template<>
class LunaTraits< TwBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TwBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(TwBar* obj);
	typedef TwBar parent_t;
	typedef TwBar base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< TwEnumVal > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TwEnumVal* _bind_ctor(lua_State *L);
	static void _bind_dtor(TwEnumVal* obj);
	typedef TwEnumVal parent_t;
	typedef TwEnumVal base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< TwStructMember > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TwStructMember* _bind_ctor(lua_State *L);
	static void _bind_dtor(TwStructMember* obj);
	typedef TwStructMember parent_t;
	typedef TwStructMember base_t;
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
class LunaTraits< atb::TwBoolCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static atb::TwBoolCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(atb::TwBoolCallback* obj);
	typedef osg::Referenced parent_t;
	typedef atb::TwBoolCallback base_t;
	static luna_ConverterType converters[];
};



template<>
class LunaType< 81187440 > {
public:
	typedef TwBar type;
	
};

template<>
class LunaType< 42065624 > {
public:
	typedef TwEnumVal type;
	
};

template<>
class LunaType< 50602391 > {
public:
	typedef TwStructMember type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};


#endif

