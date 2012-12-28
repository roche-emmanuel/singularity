#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapperManager_CompressorMap {
public:
	typedef Luna< osgDB::ObjectWrapperManager::CompressorMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70763649) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectWrapperManager::CompressorMap*)");
		}

		osgDB::ObjectWrapperManager::CompressorMap* rhs =(Luna< osgDB::ObjectWrapperManager::CompressorMap >::check(L,2));
		osgDB::ObjectWrapperManager::CompressorMap* self=(Luna< osgDB::ObjectWrapperManager::CompressorMap >::check(L,1));
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

		osgDB::ObjectWrapperManager::CompressorMap* self=(Luna< osgDB::ObjectWrapperManager::CompressorMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectWrapperManager::CompressorMap");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectWrapperManager::CompressorMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ObjectWrapperManager::CompressorMap* LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::_bind_dtor(osgDB::ObjectWrapperManager::CompressorMap* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::className[] = "CompressorMap";
const char LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::fullName[] = "osgDB::ObjectWrapperManager::CompressorMap";
const char LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::moduleName[] = "osg";
const char* LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::parents[] = {0};
const int LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::hash = 70763649;
const int LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::uniqueIDs[] = {70763649,0};

luna_RegType LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ObjectWrapperManager_CompressorMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectWrapperManager_CompressorMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapperManager::CompressorMap >::enumValues[] = {
	{0,0}
};


