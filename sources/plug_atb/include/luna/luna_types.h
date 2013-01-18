#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <plug_extensions.h>
#include <AntTweakBar.h>

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

// Class: BasicVariableCallback
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

// Class: BoolCallback
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

// Class: ButtonCallback
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

// Class: ColorCallback
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

// Class: DirCallback
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

// Class: DoubleCallback
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

// Class: EnumCallback
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

// Class: IntCallback
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

// Class: QuatCallback
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

// Class: StringCallback
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

// Class: TwBar
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

// Class: TwEnumVal
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

// Class: TwStructMember
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



// Referenced external: void
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

// Referenced external: osg::Vec4f
template<>
class LunaTraits< osg::Vec4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4f* obj);
	typedef osg::Vec4f parent_t;
	typedef osg::Vec4f base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec3d
template<>
class LunaTraits< osg::Vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3d* obj);
	typedef osg::Vec3d parent_t;
	typedef osg::Vec3d base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Quat
template<>
class LunaTraits< osg::Quat > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Quat* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Quat* obj);
	typedef osg::Quat parent_t;
	typedef osg::Quat base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec2d
template<>
class LunaTraits< osg::Vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2d* obj);
	typedef osg::Vec2d parent_t;
	typedef osg::Vec2d base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec2f
template<>
class LunaTraits< osg::Vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2f* obj);
	typedef osg::Vec2f parent_t;
	typedef osg::Vec2f base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec3f
template<>
class LunaTraits< osg::Vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3f* obj);
	typedef osg::Vec3f parent_t;
	typedef osg::Vec3f base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec4d
template<>
class LunaTraits< osg::Vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4d* obj);
	typedef osg::Vec4d parent_t;
	typedef osg::Vec4d base_t;
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

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 92303235 > {
public:
	typedef osg::Vec4f type;
	
};

template<>
class LunaType< 92303202 > {
public:
	typedef osg::Vec3d type;
	
};

template<>
class LunaType< 80263306 > {
public:
	typedef osg::Quat type;
	
};

template<>
class LunaType< 92303171 > {
public:
	typedef osg::Vec2d type;
	
};

template<>
class LunaType< 92303173 > {
public:
	typedef osg::Vec2f type;
	
};

template<>
class LunaType< 92303204 > {
public:
	typedef osg::Vec3f type;
	
};

template<>
class LunaType< 92303233 > {
public:
	typedef osg::Vec4d type;
	
};


#endif

