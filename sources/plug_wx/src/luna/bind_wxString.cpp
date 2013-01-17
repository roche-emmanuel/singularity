#include <plug_common.h>

class luna_wrapper_wxString {
public:
	typedef Luna< wxString > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88196105) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxString*)");
		}

		wxString* rhs =(Luna< wxString >::check(L,2));
		wxString* self=(Luna< wxString >::check(L,1));
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

		wxString* self=(Luna< wxString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxString");
		
		return luna_dynamicCast(L,converters,"wxString",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxString* LunaTraits< wxString >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxString >::_bind_dtor(wxString* obj) {
	delete obj;
}

const char LunaTraits< wxString >::className[] = "wxString";
const char LunaTraits< wxString >::fullName[] = "wxString";
const char LunaTraits< wxString >::moduleName[] = "wx";
const char* LunaTraits< wxString >::parents[] = {0};
const int LunaTraits< wxString >::hash = 88196105;
const int LunaTraits< wxString >::uniqueIDs[] = {88196105,0};

luna_RegType LunaTraits< wxString >::methods[] = {
	{"dynCast", &luna_wrapper_wxString::_bind_dynCast},
	{"__eq", &luna_wrapper_wxString::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxString >::enumValues[] = {
	{0,0}
};


