#include <plug_common.h>

class luna_wrapper_wxRichTextFormattingDialog {
public:
	typedef Luna< wxRichTextFormattingDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextFormattingDialog* ptr= dynamic_cast< wxRichTextFormattingDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextFormattingDialog >::push(L,ptr,false);
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

wxRichTextFormattingDialog* LunaTraits< wxRichTextFormattingDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextFormattingDialog >::_bind_dtor(wxRichTextFormattingDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFormattingDialog >::className[] = "wxRichTextFormattingDialog";
const char LunaTraits< wxRichTextFormattingDialog >::fullName[] = "wxRichTextFormattingDialog";
const char LunaTraits< wxRichTextFormattingDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFormattingDialog >::parents[] = {"wx.wxPropertySheetDialog", 0};
const int LunaTraits< wxRichTextFormattingDialog >::hash = 39951274;
const int LunaTraits< wxRichTextFormattingDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextFormattingDialog >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFormattingDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFormattingDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFormattingDialog >::enumValues[] = {
	{0,0}
};


