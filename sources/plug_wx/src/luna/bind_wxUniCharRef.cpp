#include <plug_common.h>

class luna_wrapper_wxUniCharRef {
public:
	typedef Luna< wxUniCharRef > luna_t;

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

		wxUniCharRef* self=(Luna< wxUniCharRef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxUniCharRef");
		
		return luna_dynamicCast(L,converters,"wxUniCharRef",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxUniCharRef* LunaTraits< wxUniCharRef >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxUniCharRef >::_bind_dtor(wxUniCharRef* obj) {
	delete obj;
}

const char LunaTraits< wxUniCharRef >::className[] = "wxUniCharRef";
const char LunaTraits< wxUniCharRef >::fullName[] = "wxUniCharRef";
const char LunaTraits< wxUniCharRef >::moduleName[] = "wx";
const char* LunaTraits< wxUniCharRef >::parents[] = {0};
const int LunaTraits< wxUniCharRef >::hash = 29988470;
const int LunaTraits< wxUniCharRef >::uniqueIDs[] = {29988470,0};

luna_RegType LunaTraits< wxUniCharRef >::methods[] = {
	{"dynCast", &luna_wrapper_wxUniCharRef::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxUniCharRef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxUniCharRef >::enumValues[] = {
	{0,0}
};


