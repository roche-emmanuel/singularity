#include <plug_common.h>

class luna_wrapper_wxRichTextBox {
public:
	typedef Luna< wxRichTextBox > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextBox* ptr= dynamic_cast< wxRichTextBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextBox >::push(L,ptr,false);
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

wxRichTextBox* LunaTraits< wxRichTextBox >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextBox >::_bind_dtor(wxRichTextBox* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextBox >::className[] = "wxRichTextBox";
const char LunaTraits< wxRichTextBox >::fullName[] = "wxRichTextBox";
const char LunaTraits< wxRichTextBox >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextBox >::parents[] = {"wx.wxRichTextParagraphLayoutBox", 0};
const int LunaTraits< wxRichTextBox >::hash = 54394402;
const int LunaTraits< wxRichTextBox >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextBox >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextBox::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextBox >::enumValues[] = {
	{0,0}
};


