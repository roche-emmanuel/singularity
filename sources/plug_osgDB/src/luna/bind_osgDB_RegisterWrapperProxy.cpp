#include <plug_common.h>

class luna_wrapper_osgDB_RegisterWrapperProxy {
public:
	typedef Luna< osgDB::RegisterWrapperProxy > luna_t;

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

		osgDB::RegisterWrapperProxy* self=(Luna< osgDB::RegisterWrapperProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::RegisterWrapperProxy");
		
		return luna_dynamicCast(L,converters,"osgDB::RegisterWrapperProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::RegisterWrapperProxy* LunaTraits< osgDB::RegisterWrapperProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::RegisterWrapperProxy >::_bind_dtor(osgDB::RegisterWrapperProxy* obj) {
	delete obj;
}

const char LunaTraits< osgDB::RegisterWrapperProxy >::className[] = "RegisterWrapperProxy";
const char LunaTraits< osgDB::RegisterWrapperProxy >::fullName[] = "osgDB::RegisterWrapperProxy";
const char LunaTraits< osgDB::RegisterWrapperProxy >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::RegisterWrapperProxy >::parents[] = {0};
const int LunaTraits< osgDB::RegisterWrapperProxy >::hash = 23508632;
const int LunaTraits< osgDB::RegisterWrapperProxy >::uniqueIDs[] = {23508632,0};

luna_RegType LunaTraits< osgDB::RegisterWrapperProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_RegisterWrapperProxy::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::RegisterWrapperProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::RegisterWrapperProxy >::enumValues[] = {
	{0,0}
};


