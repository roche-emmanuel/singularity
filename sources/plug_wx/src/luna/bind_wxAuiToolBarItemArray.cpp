#include <plug_common.h>

class luna_wrapper_wxAuiToolBarItemArray {
public:
	typedef Luna< wxAuiToolBarItemArray > luna_t;

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

		wxAuiToolBarItemArray* self=(Luna< wxAuiToolBarItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiToolBarItemArray");
		
		return luna_dynamicCast(L,converters,"wxAuiToolBarItemArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxAuiToolBarItemArray* LunaTraits< wxAuiToolBarItemArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAuiToolBarItemArray >::_bind_dtor(wxAuiToolBarItemArray* obj) {
	delete obj;
}

const char LunaTraits< wxAuiToolBarItemArray >::className[] = "wxAuiToolBarItemArray";
const char LunaTraits< wxAuiToolBarItemArray >::fullName[] = "wxAuiToolBarItemArray";
const char LunaTraits< wxAuiToolBarItemArray >::moduleName[] = "wx";
const char* LunaTraits< wxAuiToolBarItemArray >::parents[] = {0};
const int LunaTraits< wxAuiToolBarItemArray >::hash = 29562974;
const int LunaTraits< wxAuiToolBarItemArray >::uniqueIDs[] = {29562974,0};

luna_RegType LunaTraits< wxAuiToolBarItemArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxAuiToolBarItemArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiToolBarItemArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiToolBarItemArray >::enumValues[] = {
	{0,0}
};


