#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapperManager_WrapperMap {
public:
	typedef Luna< osgDB::ObjectWrapperManager::WrapperMap > luna_t;

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

		osgDB::ObjectWrapperManager::WrapperMap* self=(Luna< osgDB::ObjectWrapperManager::WrapperMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectWrapperManager::WrapperMap");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectWrapperManager::WrapperMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ObjectWrapperManager::WrapperMap* LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::_bind_dtor(osgDB::ObjectWrapperManager::WrapperMap* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::className[] = "WrapperMap";
const char LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::fullName[] = "osgDB::ObjectWrapperManager::WrapperMap";
const char LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::parents[] = {0};
const int LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::hash = 48773478;
const int LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::uniqueIDs[] = {48773478,0};

luna_RegType LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ObjectWrapperManager_WrapperMap::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapperManager::WrapperMap >::enumValues[] = {
	{0,0}
};


