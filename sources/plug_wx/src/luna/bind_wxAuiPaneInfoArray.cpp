#include <plug_common.h>

class luna_wrapper_wxAuiPaneInfoArray {
public:
	typedef Luna< wxAuiPaneInfoArray > luna_t;

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

		wxAuiPaneInfoArray* self=(Luna< wxAuiPaneInfoArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiPaneInfoArray");
		
		return luna_dynamicCast(L,converters,"wxAuiPaneInfoArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxAuiPaneInfoArray* LunaTraits< wxAuiPaneInfoArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAuiPaneInfoArray >::_bind_dtor(wxAuiPaneInfoArray* obj) {
	delete obj;
}

const char LunaTraits< wxAuiPaneInfoArray >::className[] = "wxAuiPaneInfoArray";
const char LunaTraits< wxAuiPaneInfoArray >::fullName[] = "wxAuiPaneInfoArray";
const char LunaTraits< wxAuiPaneInfoArray >::moduleName[] = "wx";
const char* LunaTraits< wxAuiPaneInfoArray >::parents[] = {0};
const int LunaTraits< wxAuiPaneInfoArray >::hash = 87205471;
const int LunaTraits< wxAuiPaneInfoArray >::uniqueIDs[] = {87205471,0};

luna_RegType LunaTraits< wxAuiPaneInfoArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxAuiPaneInfoArray::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiPaneInfoArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiPaneInfoArray >::enumValues[] = {
	{0,0}
};


