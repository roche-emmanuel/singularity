#include <plug_common.h>

class luna_wrapper_osgDB_OutputStream_ObjectMap {
public:
	typedef Luna< osgDB::OutputStream::ObjectMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38014942) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::OutputStream::ObjectMap*)");
		}

		osgDB::OutputStream::ObjectMap* rhs =(Luna< osgDB::OutputStream::ObjectMap >::check(L,2));
		osgDB::OutputStream::ObjectMap* self=(Luna< osgDB::OutputStream::ObjectMap >::check(L,1));
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

		osgDB::OutputStream::ObjectMap* self=(Luna< osgDB::OutputStream::ObjectMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::OutputStream::ObjectMap");
		
		return luna_dynamicCast(L,converters,"osgDB::OutputStream::ObjectMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::OutputStream::ObjectMap* LunaTraits< osgDB::OutputStream::ObjectMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::OutputStream::ObjectMap >::_bind_dtor(osgDB::OutputStream::ObjectMap* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgDB::OutputStream::ObjectMap >::className[] = "ObjectMap";
const char LunaTraits< osgDB::OutputStream::ObjectMap >::fullName[] = "osgDB::OutputStream::ObjectMap";
const char LunaTraits< osgDB::OutputStream::ObjectMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::OutputStream::ObjectMap >::parents[] = {0};
const int LunaTraits< osgDB::OutputStream::ObjectMap >::hash = 38014942;
const int LunaTraits< osgDB::OutputStream::ObjectMap >::uniqueIDs[] = {38014942,0};

luna_RegType LunaTraits< osgDB::OutputStream::ObjectMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_OutputStream_ObjectMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_OutputStream_ObjectMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::OutputStream::ObjectMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::OutputStream::ObjectMap >::enumValues[] = {
	{0,0}
};


