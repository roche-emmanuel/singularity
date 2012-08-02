#include <plug_common.h>

class luna_wrapper_wxToolBarToolBase {
public:
	typedef Luna< wxToolBarToolBase > luna_t;

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

		wxToolBarToolBase* self=(Luna< wxToolBarToolBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxToolBarToolBase");
		
		return luna_dynamicCast(L,converters,"wxToolBarToolBase",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxToolBarToolBase* LunaTraits< wxToolBarToolBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxToolBarToolBase >::_bind_dtor(wxToolBarToolBase* obj) {
	delete obj;
}

const char LunaTraits< wxToolBarToolBase >::className[] = "wxToolBarToolBase";
const char LunaTraits< wxToolBarToolBase >::fullName[] = "wxToolBarToolBase";
const char LunaTraits< wxToolBarToolBase >::moduleName[] = "wx";
const char* LunaTraits< wxToolBarToolBase >::parents[] = {0};
const int LunaTraits< wxToolBarToolBase >::hash = 49669417;
const int LunaTraits< wxToolBarToolBase >::uniqueIDs[] = {49669417,0};

luna_RegType LunaTraits< wxToolBarToolBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxToolBarToolBase::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxToolBarToolBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxToolBarToolBase >::enumValues[] = {
	{0,0}
};


