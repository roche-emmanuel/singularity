#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <math/vec2.h>
#include <math/vec3.h>
#include <math/half.h>

// Class: sgt::half
template<>
class LunaTraits< sgt::half > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::half* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::half* obj);
	typedef sgt::half parent_t;
	typedef sgt::half base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2h
template<>
class LunaTraits< sgt::vec2h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2h* obj);
	typedef sgt::vec2h parent_t;
	typedef sgt::vec2h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2f
template<>
class LunaTraits< sgt::vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2f* obj);
	typedef sgt::vec2f parent_t;
	typedef sgt::vec2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2d
template<>
class LunaTraits< sgt::vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2d* obj);
	typedef sgt::vec2d parent_t;
	typedef sgt::vec2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2i
template<>
class LunaTraits< sgt::vec2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2i* obj);
	typedef sgt::vec2i parent_t;
	typedef sgt::vec2i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3h
template<>
class LunaTraits< sgt::vec3h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3h* obj);
	typedef sgt::vec3h parent_t;
	typedef sgt::vec3h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3f
template<>
class LunaTraits< sgt::vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3f* obj);
	typedef sgt::vec3f parent_t;
	typedef sgt::vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3d
template<>
class LunaTraits< sgt::vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3d* obj);
	typedef sgt::vec3d parent_t;
	typedef sgt::vec3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3i
template<>
class LunaTraits< sgt::vec3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3i* obj);
	typedef sgt::vec3i parent_t;
	typedef sgt::vec3i base_t;
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

template<>
class LunaType< 76239273 > {
public:
	typedef sgt::vec2h type;
	
};

template<>
class LunaType< 76239271 > {
public:
	typedef sgt::vec2f type;
	
};

template<>
class LunaType< 76239269 > {
public:
	typedef sgt::vec2d type;
	
};

template<>
class LunaType< 76239274 > {
public:
	typedef sgt::vec2i type;
	
};

template<>
class LunaType< 76239304 > {
public:
	typedef sgt::vec3h type;
	
};

template<>
class LunaType< 76239302 > {
public:
	typedef sgt::vec3f type;
	
};

template<>
class LunaType< 76239300 > {
public:
	typedef sgt::vec3d type;
	
};

template<>
class LunaType< 76239305 > {
public:
	typedef sgt::vec3i type;
	
};

template<>
class LunaType< 31071002 > {
public:
	typedef sgt::half type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};


#endif

