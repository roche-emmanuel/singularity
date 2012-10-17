#include <plug_common.h>

class luna_wrapper_osgDB_IntLookup_ValueToString {
public:
	typedef Luna< osgDB::IntLookup::ValueToString > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27498346) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::IntLookup::ValueToString*)");
		}

		osgDB::IntLookup::ValueToString* rhs =(Luna< osgDB::IntLookup::ValueToString >::check(L,2));
		osgDB::IntLookup::ValueToString* self=(Luna< osgDB::IntLookup::ValueToString >::check(L,1));
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

		osgDB::IntLookup::ValueToString* self=(Luna< osgDB::IntLookup::ValueToString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::IntLookup::ValueToString");
		
		return luna_dynamicCast(L,converters,"osgDB::IntLookup::ValueToString",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgDB::IntLookup::ValueToString* LunaTraits< osgDB::IntLookup::ValueToString >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::IntLookup::ValueToString >::_bind_dtor(osgDB::IntLookup::ValueToString* obj) {
	delete obj;
}

const char LunaTraits< osgDB::IntLookup::ValueToString >::className[] = "ValueToString";
const char LunaTraits< osgDB::IntLookup::ValueToString >::fullName[] = "osgDB::IntLookup::ValueToString";
const char LunaTraits< osgDB::IntLookup::ValueToString >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::IntLookup::ValueToString >::parents[] = {0};
const int LunaTraits< osgDB::IntLookup::ValueToString >::hash = 27498346;
const int LunaTraits< osgDB::IntLookup::ValueToString >::uniqueIDs[] = {27498346,0};

luna_RegType LunaTraits< osgDB::IntLookup::ValueToString >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_IntLookup_ValueToString::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_IntLookup_ValueToString::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::IntLookup::ValueToString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::IntLookup::ValueToString >::enumValues[] = {
	{0,0}
};


