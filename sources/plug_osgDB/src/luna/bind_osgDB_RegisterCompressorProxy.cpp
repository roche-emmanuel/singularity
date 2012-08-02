#include <plug_common.h>

class luna_wrapper_osgDB_RegisterCompressorProxy {
public:
	typedef Luna< osgDB::RegisterCompressorProxy > luna_t;

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

		osgDB::RegisterCompressorProxy* self=(Luna< osgDB::RegisterCompressorProxy >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::RegisterCompressorProxy");
		
		return luna_dynamicCast(L,converters,"osgDB::RegisterCompressorProxy",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::RegisterCompressorProxy* LunaTraits< osgDB::RegisterCompressorProxy >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::RegisterCompressorProxy >::_bind_dtor(osgDB::RegisterCompressorProxy* obj) {
	delete obj;
}

const char LunaTraits< osgDB::RegisterCompressorProxy >::className[] = "RegisterCompressorProxy";
const char LunaTraits< osgDB::RegisterCompressorProxy >::fullName[] = "osgDB::RegisterCompressorProxy";
const char LunaTraits< osgDB::RegisterCompressorProxy >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::RegisterCompressorProxy >::parents[] = {0};
const int LunaTraits< osgDB::RegisterCompressorProxy >::hash = 26799771;
const int LunaTraits< osgDB::RegisterCompressorProxy >::uniqueIDs[] = {26799771,0};

luna_RegType LunaTraits< osgDB::RegisterCompressorProxy >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_RegisterCompressorProxy::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::RegisterCompressorProxy >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::RegisterCompressorProxy >::enumValues[] = {
	{0,0}
};


