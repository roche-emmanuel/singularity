#include <plug_common.h>

class luna_wrapper_wxObjectRefData {
public:
	typedef Luna< wxObjectRefData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60960840) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObjectRefData*)");
		}

		wxObjectRefData* rhs =(Luna< wxObjectRefData >::check(L,2));
		wxObjectRefData* self=(Luna< wxObjectRefData >::check(L,1));
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

		wxObjectRefData* self=(Luna< wxObjectRefData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxObjectRefData");
		
		return luna_dynamicCast(L,converters,"wxObjectRefData",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxObjectRefData* LunaTraits< wxObjectRefData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxObjectRefData >::_bind_dtor(wxObjectRefData* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxObjectRefData >::className[] = "wxObjectRefData";
const char LunaTraits< wxObjectRefData >::fullName[] = "wxObjectRefData";
const char LunaTraits< wxObjectRefData >::moduleName[] = "wx";
const char* LunaTraits< wxObjectRefData >::parents[] = {0};
const int LunaTraits< wxObjectRefData >::hash = 60960840;
const int LunaTraits< wxObjectRefData >::uniqueIDs[] = {60960840,0};

luna_RegType LunaTraits< wxObjectRefData >::methods[] = {
	{"dynCast", &luna_wrapper_wxObjectRefData::_bind_dynCast},
	{"__eq", &luna_wrapper_wxObjectRefData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxObjectRefData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxObjectRefData >::enumValues[] = {
	{0,0}
};


