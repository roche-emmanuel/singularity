#include <plug_common.h>

class luna_wrapper_wxRichTextTable {
public:
	typedef Luna< wxRichTextTable > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextTable* ptr= dynamic_cast< wxRichTextTable* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextTable >::push(L,ptr,false);
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

wxRichTextTable* LunaTraits< wxRichTextTable >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextTable >::_bind_dtor(wxRichTextTable* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextTable >::className[] = "wxRichTextTable";
const char LunaTraits< wxRichTextTable >::fullName[] = "wxRichTextTable";
const char LunaTraits< wxRichTextTable >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextTable >::parents[] = {"wx.wxRichTextBox", 0};
const int LunaTraits< wxRichTextTable >::hash = 89201599;
const int LunaTraits< wxRichTextTable >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextTable >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextTable >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextTable::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextTable >::enumValues[] = {
	{0,0}
};


