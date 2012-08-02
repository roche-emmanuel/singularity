#include <plug_common.h>

class luna_wrapper_wxRichTextFormattingDialogFactory {
public:
	typedef Luna< wxRichTextFormattingDialogFactory > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextFormattingDialogFactory* ptr= dynamic_cast< wxRichTextFormattingDialogFactory* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextFormattingDialogFactory >::push(L,ptr,false);
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

wxRichTextFormattingDialogFactory* LunaTraits< wxRichTextFormattingDialogFactory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextFormattingDialogFactory >::_bind_dtor(wxRichTextFormattingDialogFactory* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFormattingDialogFactory >::className[] = "wxRichTextFormattingDialogFactory";
const char LunaTraits< wxRichTextFormattingDialogFactory >::fullName[] = "wxRichTextFormattingDialogFactory";
const char LunaTraits< wxRichTextFormattingDialogFactory >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFormattingDialogFactory >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextFormattingDialogFactory >::hash = 58804138;
const int LunaTraits< wxRichTextFormattingDialogFactory >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextFormattingDialogFactory >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFormattingDialogFactory >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFormattingDialogFactory::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFormattingDialogFactory >::enumValues[] = {
	{0,0}
};


