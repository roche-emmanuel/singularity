#include <plug_common.h>

class luna_wrapper_wxStreamToTextRedirector {
public:
	typedef Luna< wxStreamToTextRedirector > luna_t;

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

		wxStreamToTextRedirector* self=(Luna< wxStreamToTextRedirector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStreamToTextRedirector");
		
		return luna_dynamicCast(L,converters,"wxStreamToTextRedirector",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxStreamToTextRedirector* LunaTraits< wxStreamToTextRedirector >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStreamToTextRedirector >::_bind_dtor(wxStreamToTextRedirector* obj) {
	delete obj;
}

const char LunaTraits< wxStreamToTextRedirector >::className[] = "wxStreamToTextRedirector";
const char LunaTraits< wxStreamToTextRedirector >::fullName[] = "wxStreamToTextRedirector";
const char LunaTraits< wxStreamToTextRedirector >::moduleName[] = "wx";
const char* LunaTraits< wxStreamToTextRedirector >::parents[] = {0};
const int LunaTraits< wxStreamToTextRedirector >::hash = 62616014;
const int LunaTraits< wxStreamToTextRedirector >::uniqueIDs[] = {62616014,0};

luna_RegType LunaTraits< wxStreamToTextRedirector >::methods[] = {
	{"dynCast", &luna_wrapper_wxStreamToTextRedirector::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxStreamToTextRedirector >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStreamToTextRedirector >::enumValues[] = {
	{0,0}
};


