#include <plug_common.h>

class luna_wrapper_osgDB_InputStream_ArrayMap {
public:
	typedef Luna< osgDB::InputStream::ArrayMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9226650) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::InputStream::ArrayMap*)");
		}

		osgDB::InputStream::ArrayMap* rhs =(Luna< osgDB::InputStream::ArrayMap >::check(L,2));
		osgDB::InputStream::ArrayMap* self=(Luna< osgDB::InputStream::ArrayMap >::check(L,1));
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

		osgDB::InputStream::ArrayMap* self=(Luna< osgDB::InputStream::ArrayMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::InputStream::ArrayMap");
		
		return luna_dynamicCast(L,converters,"osgDB::InputStream::ArrayMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::InputStream::ArrayMap* LunaTraits< osgDB::InputStream::ArrayMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::InputStream::ArrayMap >::_bind_dtor(osgDB::InputStream::ArrayMap* obj) {
	delete obj;
}

const char LunaTraits< osgDB::InputStream::ArrayMap >::className[] = "ArrayMap";
const char LunaTraits< osgDB::InputStream::ArrayMap >::fullName[] = "osgDB::InputStream::ArrayMap";
const char LunaTraits< osgDB::InputStream::ArrayMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputStream::ArrayMap >::parents[] = {0};
const int LunaTraits< osgDB::InputStream::ArrayMap >::hash = 9226650;
const int LunaTraits< osgDB::InputStream::ArrayMap >::uniqueIDs[] = {9226650,0};

luna_RegType LunaTraits< osgDB::InputStream::ArrayMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_InputStream_ArrayMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_InputStream_ArrayMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputStream::ArrayMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputStream::ArrayMap >::enumValues[] = {
	{0,0}
};


