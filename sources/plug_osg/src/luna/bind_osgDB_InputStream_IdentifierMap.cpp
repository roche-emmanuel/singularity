#include <plug_common.h>

class luna_wrapper_osgDB_InputStream_IdentifierMap {
public:
	typedef Luna< osgDB::InputStream::IdentifierMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35514121) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::InputStream::IdentifierMap*)");
		}

		osgDB::InputStream::IdentifierMap* rhs =(Luna< osgDB::InputStream::IdentifierMap >::check(L,2));
		osgDB::InputStream::IdentifierMap* self=(Luna< osgDB::InputStream::IdentifierMap >::check(L,1));
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

		osgDB::InputStream::IdentifierMap* self=(Luna< osgDB::InputStream::IdentifierMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::InputStream::IdentifierMap");
		
		return luna_dynamicCast(L,converters,"osgDB::InputStream::IdentifierMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::InputStream::IdentifierMap* LunaTraits< osgDB::InputStream::IdentifierMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::InputStream::IdentifierMap >::_bind_dtor(osgDB::InputStream::IdentifierMap* obj) {
	delete obj;
}

const char LunaTraits< osgDB::InputStream::IdentifierMap >::className[] = "IdentifierMap";
const char LunaTraits< osgDB::InputStream::IdentifierMap >::fullName[] = "osgDB::InputStream::IdentifierMap";
const char LunaTraits< osgDB::InputStream::IdentifierMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputStream::IdentifierMap >::parents[] = {0};
const int LunaTraits< osgDB::InputStream::IdentifierMap >::hash = 35514121;
const int LunaTraits< osgDB::InputStream::IdentifierMap >::uniqueIDs[] = {35514121,0};

luna_RegType LunaTraits< osgDB::InputStream::IdentifierMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_InputStream_IdentifierMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_InputStream_IdentifierMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputStream::IdentifierMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputStream::IdentifierMap >::enumValues[] = {
	{0,0}
};


