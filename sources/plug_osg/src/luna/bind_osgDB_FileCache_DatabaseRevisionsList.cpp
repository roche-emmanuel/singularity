#include <plug_common.h>

class luna_wrapper_osgDB_FileCache_DatabaseRevisionsList {
public:
	typedef Luna< osgDB::FileCache::DatabaseRevisionsList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2520362) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::FileCache::DatabaseRevisionsList*)");
		}

		osgDB::FileCache::DatabaseRevisionsList* rhs =(Luna< osgDB::FileCache::DatabaseRevisionsList >::check(L,2));
		osgDB::FileCache::DatabaseRevisionsList* self=(Luna< osgDB::FileCache::DatabaseRevisionsList >::check(L,1));
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

		osgDB::FileCache::DatabaseRevisionsList* self=(Luna< osgDB::FileCache::DatabaseRevisionsList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FileCache::DatabaseRevisionsList");
		
		return luna_dynamicCast(L,converters,"osgDB::FileCache::DatabaseRevisionsList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::FileCache::DatabaseRevisionsList* LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::_bind_dtor(osgDB::FileCache::DatabaseRevisionsList* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::className[] = "DatabaseRevisionsList";
const char LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::fullName[] = "osgDB::FileCache::DatabaseRevisionsList";
const char LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::parents[] = {0};
const int LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::hash = 2520362;
const int LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::uniqueIDs[] = {2520362,0};

luna_RegType LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_FileCache_DatabaseRevisionsList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_FileCache_DatabaseRevisionsList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileCache::DatabaseRevisionsList >::enumValues[] = {
	{0,0}
};


