#include <plug_common.h>

class luna_wrapper_sgt_LogManager_TraceFlagMap {
public:
	typedef Luna< sgt::LogManager::TraceFlagMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65247664) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::LogManager::TraceFlagMap*)");
		}

		sgt::LogManager::TraceFlagMap* rhs =(Luna< sgt::LogManager::TraceFlagMap >::check(L,2));
		sgt::LogManager::TraceFlagMap* self=(Luna< sgt::LogManager::TraceFlagMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		sgt::LogManager::TraceFlagMap* self=(Luna< sgt::LogManager::TraceFlagMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogManager::TraceFlagMap");
		
		return luna_dynamicCast(L,converters,"sgt::LogManager::TraceFlagMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

sgt::LogManager::TraceFlagMap* LunaTraits< sgt::LogManager::TraceFlagMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::LogManager::TraceFlagMap >::_bind_dtor(sgt::LogManager::TraceFlagMap* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogManager::TraceFlagMap >::className[] = "TraceFlagMap";
const char LunaTraits< sgt::LogManager::TraceFlagMap >::fullName[] = "sgt::LogManager::TraceFlagMap";
const char LunaTraits< sgt::LogManager::TraceFlagMap >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogManager::TraceFlagMap >::parents[] = {0};
const int LunaTraits< sgt::LogManager::TraceFlagMap >::hash = 65247664;
const int LunaTraits< sgt::LogManager::TraceFlagMap >::uniqueIDs[] = {65247664,0};

luna_RegType LunaTraits< sgt::LogManager::TraceFlagMap >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_LogManager_TraceFlagMap::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_LogManager_TraceFlagMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogManager::TraceFlagMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogManager::TraceFlagMap >::enumValues[] = {
	{0,0}
};


