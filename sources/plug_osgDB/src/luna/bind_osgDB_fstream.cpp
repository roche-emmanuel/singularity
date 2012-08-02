#include <plug_common.h>

class luna_wrapper_osgDB_fstream {
public:
	typedef Luna< osgDB::fstream > luna_t;

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

		osgDB::fstream* self=(Luna< osgDB::fstream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::fstream");
		
		return luna_dynamicCast(L,converters,"osgDB::fstream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::fstream::fstream()
	static osgDB::fstream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::fstream::fstream() function, expected prototype:\nosgDB::fstream::fstream()\nClass arguments details:\n");
		}


		return new osgDB::fstream();
	}


	// Function binds:

	// Operator binds:

};

osgDB::fstream* LunaTraits< osgDB::fstream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_fstream::_bind_ctor(L);
}

void LunaTraits< osgDB::fstream >::_bind_dtor(osgDB::fstream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::fstream >::className[] = "fstream";
const char LunaTraits< osgDB::fstream >::fullName[] = "osgDB::fstream";
const char LunaTraits< osgDB::fstream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::fstream >::parents[] = {0};
const int LunaTraits< osgDB::fstream >::hash = 52537382;
const int LunaTraits< osgDB::fstream >::uniqueIDs[] = {52537382,0};

luna_RegType LunaTraits< osgDB::fstream >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_fstream::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::fstream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::fstream >::enumValues[] = {
	{0,0}
};


