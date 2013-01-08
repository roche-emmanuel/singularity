#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <plug_extensions.h>
#include <AntTweakBar.h>

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
class LunaTraits< BasicVariableCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static BasicVariableCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(BasicVariableCallback* obj);
	typedef osg::Referenced parent_t;
	typedef BasicVariableCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< BoolCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static BoolCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(BoolCallback* obj);
	typedef osg::Referenced parent_t;
	typedef BoolCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< ButtonCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ButtonCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(ButtonCallback* obj);
	typedef osg::Referenced parent_t;
	typedef ButtonCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< ColorCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ColorCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(ColorCallback* obj);
	typedef osg::Referenced parent_t;
	typedef ColorCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< DirCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static DirCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(DirCallback* obj);
	typedef osg::Referenced parent_t;
	typedef DirCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< DoubleCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static DoubleCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(DoubleCallback* obj);
	typedef osg::Referenced parent_t;
	typedef DoubleCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< EnumCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static EnumCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(EnumCallback* obj);
	typedef osg::Referenced parent_t;
	typedef EnumCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< IntCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IntCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(IntCallback* obj);
	typedef osg::Referenced parent_t;
	typedef IntCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< QuatCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static QuatCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(QuatCallback* obj);
	typedef osg::Referenced parent_t;
	typedef QuatCallback base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< StringCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static StringCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(StringCallback* obj);
	typedef osg::Referenced parent_t;
	typedef StringCallback base_t;
	static luna_ConverterType converters[];
};

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
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
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


#endif

