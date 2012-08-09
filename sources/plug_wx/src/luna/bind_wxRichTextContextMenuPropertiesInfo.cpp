#include <plug_common.h>

class luna_wrapper_wxRichTextContextMenuPropertiesInfo {
public:
	typedef Luna< wxRichTextContextMenuPropertiesInfo > luna_t;

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

		wxRichTextContextMenuPropertiesInfo* self=(Luna< wxRichTextContextMenuPropertiesInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRichTextContextMenuPropertiesInfo");
		
		return luna_dynamicCast(L,converters,"wxRichTextContextMenuPropertiesInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextContextMenuPropertiesInfo* LunaTraits< wxRichTextContextMenuPropertiesInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextContextMenuPropertiesInfo >::_bind_dtor(wxRichTextContextMenuPropertiesInfo* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextContextMenuPropertiesInfo >::className[] = "wxRichTextContextMenuPropertiesInfo";
const char LunaTraits< wxRichTextContextMenuPropertiesInfo >::fullName[] = "wxRichTextContextMenuPropertiesInfo";
const char LunaTraits< wxRichTextContextMenuPropertiesInfo >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextContextMenuPropertiesInfo >::parents[] = {0};
const int LunaTraits< wxRichTextContextMenuPropertiesInfo >::hash = 98505670;
const int LunaTraits< wxRichTextContextMenuPropertiesInfo >::uniqueIDs[] = {98505670,0};

luna_RegType LunaTraits< wxRichTextContextMenuPropertiesInfo >::methods[] = {
	{"dynCast", &luna_wrapper_wxRichTextContextMenuPropertiesInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextContextMenuPropertiesInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextContextMenuPropertiesInfo >::enumValues[] = {
	{0,0}
};

