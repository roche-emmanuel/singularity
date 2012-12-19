#include <plug_common.h>

class luna_wrapper_osgDB_OutputStream_ArrayMap {
public:
	typedef Luna< osgDB::OutputStream::ArrayMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44293694) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::OutputStream::ArrayMap*)");
		}

		osgDB::OutputStream::ArrayMap* rhs =(Luna< osgDB::OutputStream::ArrayMap >::check(L,2));
		osgDB::OutputStream::ArrayMap* self=(Luna< osgDB::OutputStream::ArrayMap >::check(L,1));
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

		osgDB::OutputStream::ArrayMap* self=(Luna< osgDB::OutputStream::ArrayMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::OutputStream::ArrayMap");
		
		return luna_dynamicCast(L,converters,"osgDB::OutputStream::ArrayMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::OutputStream::ArrayMap* LunaTraits< osgDB::OutputStream::ArrayMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::OutputStream::ArrayMap >::_bind_dtor(osgDB::OutputStream::ArrayMap* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgDB::OutputStream::ArrayMap >::className[] = "ArrayMap";
const char LunaTraits< osgDB::OutputStream::ArrayMap >::fullName[] = "osgDB::OutputStream::ArrayMap";
const char LunaTraits< osgDB::OutputStream::ArrayMap >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::OutputStream::ArrayMap >::parents[] = {0};
const int LunaTraits< osgDB::OutputStream::ArrayMap >::hash = 44293694;
const int LunaTraits< osgDB::OutputStream::ArrayMap >::uniqueIDs[] = {44293694,0};

luna_RegType LunaTraits< osgDB::OutputStream::ArrayMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_OutputStream_ArrayMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_OutputStream_ArrayMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::OutputStream::ArrayMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::OutputStream::ArrayMap >::enumValues[] = {
	{0,0}
};


