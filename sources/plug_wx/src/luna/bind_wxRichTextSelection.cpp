#include <plug_common.h>

class luna_wrapper_wxRichTextSelection {
public:
	typedef Luna< wxRichTextSelection > luna_t;

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

		wxRichTextSelection* self=(Luna< wxRichTextSelection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextSelection");
		
		return luna_dynamicCast(L,converters,"wxRichTextSelection",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextSelection* LunaTraits< wxRichTextSelection >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextSelection >::_bind_dtor(wxRichTextSelection* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextSelection >::className[] = "wxRichTextSelection";
const char LunaTraits< wxRichTextSelection >::fullName[] = "wxRichTextSelection";
const char LunaTraits< wxRichTextSelection >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextSelection >::parents[] = {0};
const int LunaTraits< wxRichTextSelection >::hash = 72599091;
const int LunaTraits< wxRichTextSelection >::uniqueIDs[] = {72599091,0};

luna_RegType LunaTraits< wxRichTextSelection >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextSelection::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextSelection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextSelection >::enumValues[] = {
	{0,0}
};

