#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <plug_extensions.h>

// Class: proland::ProlandTest
template<>
class LunaTraits< proland::ProlandTest > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ProlandTest* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ProlandTest* obj);
	typedef proland::ProlandTest parent_t;
	typedef proland::ProlandTest base_t;
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
class LunaType< 84089864 > {
public:
	typedef proland::ProlandTest type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};


#endif

