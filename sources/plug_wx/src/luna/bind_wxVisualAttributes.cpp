#include <plug_common.h>

class luna_wrapper_wxVisualAttributes {
public:
	typedef Luna< wxVisualAttributes > luna_t;

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

		wxVisualAttributes* self=(Luna< wxVisualAttributes >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxVisualAttributes");
		
		return luna_dynamicCast(L,converters,"wxVisualAttributes",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxVisualAttributes* LunaTraits< wxVisualAttributes >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxVisualAttributes >::_bind_dtor(wxVisualAttributes* obj) {
	delete obj;
}

const char LunaTraits< wxVisualAttributes >::className[] = "wxVisualAttributes";
const char LunaTraits< wxVisualAttributes >::fullName[] = "wxVisualAttributes";
const char LunaTraits< wxVisualAttributes >::moduleName[] = "wx";
const char* LunaTraits< wxVisualAttributes >::parents[] = {0};
const int LunaTraits< wxVisualAttributes >::hash = 97172082;
const int LunaTraits< wxVisualAttributes >::uniqueIDs[] = {97172082,0};

luna_RegType LunaTraits< wxVisualAttributes >::methods[] = {
	{"dynCast", &luna_wrapper_wxVisualAttributes::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxVisualAttributes >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxVisualAttributes >::enumValues[] = {
	{0,0}
};


