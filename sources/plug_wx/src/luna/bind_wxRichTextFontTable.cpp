#include <plug_common.h>

class luna_wrapper_wxRichTextFontTable {
public:
	typedef Luna< wxRichTextFontTable > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextFontTable* ptr= dynamic_cast< wxRichTextFontTable* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextFontTable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextFontTable* LunaTraits< wxRichTextFontTable >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextFontTable >::_bind_dtor(wxRichTextFontTable* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFontTable >::className[] = "wxRichTextFontTable";
const char LunaTraits< wxRichTextFontTable >::fullName[] = "wxRichTextFontTable";
const char LunaTraits< wxRichTextFontTable >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFontTable >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextFontTable >::hash = 6991467;
const int LunaTraits< wxRichTextFontTable >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextFontTable >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFontTable >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFontTable::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFontTable >::enumValues[] = {
	{0,0}
};


