#include <plug_common.h>

class luna_wrapper_wxTreeListItems {
public:
	typedef Luna< wxTreeListItems > luna_t;

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

		wxTreeListItems* self=(Luna< wxTreeListItems >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeListItems");
		
		return luna_dynamicCast(L,converters,"wxTreeListItems",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxTreeListItems* LunaTraits< wxTreeListItems >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTreeListItems >::_bind_dtor(wxTreeListItems* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListItems >::className[] = "wxTreeListItems";
const char LunaTraits< wxTreeListItems >::fullName[] = "wxTreeListItems";
const char LunaTraits< wxTreeListItems >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListItems >::parents[] = {0};
const int LunaTraits< wxTreeListItems >::hash = 33321875;
const int LunaTraits< wxTreeListItems >::uniqueIDs[] = {33321875,0};

luna_RegType LunaTraits< wxTreeListItems >::methods[] = {
	{"dynCast", &luna_wrapper_wxTreeListItems::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListItems >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListItems >::enumValues[] = {
	{0,0}
};


