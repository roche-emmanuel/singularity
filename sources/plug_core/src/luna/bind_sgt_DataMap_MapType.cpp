#include <plug_common.h>

class luna_wrapper_sgt_DataMap_MapType {
public:
	typedef Luna< sgt::DataMap::MapType > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::DataMap::MapType* self=(Luna< sgt::DataMap::MapType >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::DataMap::MapType");
		
		return luna_dynamicCast(L,converters,"sgt::DataMap::MapType",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::DataMap::MapType* LunaTraits< sgt::DataMap::MapType >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::DataMap::MapType >::_bind_dtor(sgt::DataMap::MapType* obj) {
	delete obj;
}

const char LunaTraits< sgt::DataMap::MapType >::className[] = "MapType";
const char LunaTraits< sgt::DataMap::MapType >::fullName[] = "sgt::DataMap::MapType";
const char LunaTraits< sgt::DataMap::MapType >::moduleName[] = "core";
const char* LunaTraits< sgt::DataMap::MapType >::parents[] = {0};
const int LunaTraits< sgt::DataMap::MapType >::hash = 55377211;
const int LunaTraits< sgt::DataMap::MapType >::uniqueIDs[] = {55377211,0};

luna_RegType LunaTraits< sgt::DataMap::MapType >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_DataMap_MapType::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::DataMap::MapType >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::DataMap::MapType >::enumValues[] = {
	{0,0}
};


