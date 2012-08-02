#include <plug_common.h>

class luna_wrapper_osgDB_IntLookup_StringToValue {
public:
	typedef Luna< osgDB::IntLookup::StringToValue > luna_t;

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

		osgDB::IntLookup::StringToValue* self=(Luna< osgDB::IntLookup::StringToValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::IntLookup::StringToValue");
		
		return luna_dynamicCast(L,converters,"osgDB::IntLookup::StringToValue",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::IntLookup::StringToValue* LunaTraits< osgDB::IntLookup::StringToValue >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::IntLookup::StringToValue >::_bind_dtor(osgDB::IntLookup::StringToValue* obj) {
	delete obj;
}

const char LunaTraits< osgDB::IntLookup::StringToValue >::className[] = "StringToValue";
const char LunaTraits< osgDB::IntLookup::StringToValue >::fullName[] = "osgDB::IntLookup::StringToValue";
const char LunaTraits< osgDB::IntLookup::StringToValue >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::IntLookup::StringToValue >::parents[] = {0};
const int LunaTraits< osgDB::IntLookup::StringToValue >::hash = 34334607;
const int LunaTraits< osgDB::IntLookup::StringToValue >::uniqueIDs[] = {34334607,0};

luna_RegType LunaTraits< osgDB::IntLookup::StringToValue >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_IntLookup_StringToValue::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::IntLookup::StringToValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::IntLookup::StringToValue >::enumValues[] = {
	{0,0}
};


