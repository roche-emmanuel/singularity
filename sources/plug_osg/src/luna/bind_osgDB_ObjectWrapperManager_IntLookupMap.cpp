#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapperManager_IntLookupMap {
public:
	typedef Luna< osgDB::ObjectWrapperManager::IntLookupMap > luna_t;

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

		osgDB::ObjectWrapperManager::IntLookupMap* self=(Luna< osgDB::ObjectWrapperManager::IntLookupMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectWrapperManager::IntLookupMap");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectWrapperManager::IntLookupMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ObjectWrapperManager::IntLookupMap* LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::_bind_dtor(osgDB::ObjectWrapperManager::IntLookupMap* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::className[] = "IntLookupMap";
const char LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::fullName[] = "osgDB::ObjectWrapperManager::IntLookupMap";
const char LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::parents[] = {0};
const int LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::hash = 42677985;
const int LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::uniqueIDs[] = {42677985,0};

luna_RegType LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ObjectWrapperManager_IntLookupMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapperManager::IntLookupMap >::enumValues[] = {
	{0,0}
};

