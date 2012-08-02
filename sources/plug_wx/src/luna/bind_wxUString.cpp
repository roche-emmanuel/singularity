#include <plug_common.h>

class luna_wrapper_wxUString {
public:
	typedef Luna< wxUString > luna_t;

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

		wxUString* self=(Luna< wxUString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxUString");
		
		return luna_dynamicCast(L,converters,"wxUString",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxUString* LunaTraits< wxUString >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxUString >::_bind_dtor(wxUString* obj) {
	delete obj;
}

const char LunaTraits< wxUString >::className[] = "wxUString";
const char LunaTraits< wxUString >::fullName[] = "wxUString";
const char LunaTraits< wxUString >::moduleName[] = "wx";
const char* LunaTraits< wxUString >::parents[] = {0};
const int LunaTraits< wxUString >::hash = 66435026;
const int LunaTraits< wxUString >::uniqueIDs[] = {66435026,0};

luna_RegType LunaTraits< wxUString >::methods[] = {
	{"dynCast", &luna_wrapper_wxUString::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxUString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxUString >::enumValues[] = {
	{0,0}
};


