#include <plug_common.h>

class luna_wrapper_wxSplitterRenderParams {
public:
	typedef Luna< wxSplitterRenderParams > luna_t;

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

		wxSplitterRenderParams* self=(Luna< wxSplitterRenderParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSplitterRenderParams");
		
		return luna_dynamicCast(L,converters,"wxSplitterRenderParams",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxSplitterRenderParams* LunaTraits< wxSplitterRenderParams >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSplitterRenderParams >::_bind_dtor(wxSplitterRenderParams* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterRenderParams >::className[] = "wxSplitterRenderParams";
const char LunaTraits< wxSplitterRenderParams >::fullName[] = "wxSplitterRenderParams";
const char LunaTraits< wxSplitterRenderParams >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterRenderParams >::parents[] = {0};
const int LunaTraits< wxSplitterRenderParams >::hash = 3273090;
const int LunaTraits< wxSplitterRenderParams >::uniqueIDs[] = {3273090,0};

luna_RegType LunaTraits< wxSplitterRenderParams >::methods[] = {
	{"dynCast", &luna_wrapper_wxSplitterRenderParams::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterRenderParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterRenderParams >::enumValues[] = {
	{0,0}
};


