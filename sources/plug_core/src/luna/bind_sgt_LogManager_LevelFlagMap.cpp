#include <plug_common.h>

class luna_wrapper_sgt_LogManager_LevelFlagMap {
public:
	typedef Luna< sgt::LogManager::LevelFlagMap > luna_t;

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

		sgt::LogManager::LevelFlagMap* self=(Luna< sgt::LogManager::LevelFlagMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogManager::LevelFlagMap");
		
		return luna_dynamicCast(L,converters,"sgt::LogManager::LevelFlagMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::LogManager::LevelFlagMap* LunaTraits< sgt::LogManager::LevelFlagMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::LogManager::LevelFlagMap >::_bind_dtor(sgt::LogManager::LevelFlagMap* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogManager::LevelFlagMap >::className[] = "LevelFlagMap";
const char LunaTraits< sgt::LogManager::LevelFlagMap >::fullName[] = "sgt::LogManager::LevelFlagMap";
const char LunaTraits< sgt::LogManager::LevelFlagMap >::moduleName[] = "core";
const char* LunaTraits< sgt::LogManager::LevelFlagMap >::parents[] = {0};
const int LunaTraits< sgt::LogManager::LevelFlagMap >::hash = 47213589;
const int LunaTraits< sgt::LogManager::LevelFlagMap >::uniqueIDs[] = {47213589,0};

luna_RegType LunaTraits< sgt::LogManager::LevelFlagMap >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_LogManager_LevelFlagMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogManager::LevelFlagMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogManager::LevelFlagMap >::enumValues[] = {
	{0,0}
};


