#include <plug_common.h>

class luna_wrapper_osgDB_ifstream {
public:
	typedef Luna< osgDB::ifstream > luna_t;

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

		osgDB::ifstream* self=(Luna< osgDB::ifstream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ifstream");
		
		return luna_dynamicCast(L,converters,"osgDB::ifstream",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::ifstream* LunaTraits< osgDB::ifstream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ifstream >::_bind_dtor(osgDB::ifstream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ifstream >::className[] = "ifstream";
const char LunaTraits< osgDB::ifstream >::fullName[] = "osgDB::ifstream";
const char LunaTraits< osgDB::ifstream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ifstream >::parents[] = {0};
const int LunaTraits< osgDB::ifstream >::hash = 2552861;
const int LunaTraits< osgDB::ifstream >::uniqueIDs[] = {2552861,0};

luna_RegType LunaTraits< osgDB::ifstream >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ifstream::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ifstream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ifstream >::enumValues[] = {
	{0,0}
};


