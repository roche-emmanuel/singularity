#include <plug_common.h>

class luna_wrapper_wxRichTextStyleOrganiserDialog {
public:
	typedef Luna< wxRichTextStyleOrganiserDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStyleOrganiserDialog* ptr= dynamic_cast< wxRichTextStyleOrganiserDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleOrganiserDialog >::push(L,ptr,false);
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

wxRichTextStyleOrganiserDialog* LunaTraits< wxRichTextStyleOrganiserDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleOrganiserDialog >::_bind_dtor(wxRichTextStyleOrganiserDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleOrganiserDialog >::className[] = "wxRichTextStyleOrganiserDialog";
const char LunaTraits< wxRichTextStyleOrganiserDialog >::fullName[] = "wxRichTextStyleOrganiserDialog";
const char LunaTraits< wxRichTextStyleOrganiserDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleOrganiserDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxRichTextStyleOrganiserDialog >::hash = 70181438;
const int LunaTraits< wxRichTextStyleOrganiserDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextStyleOrganiserDialog >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleOrganiserDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleOrganiserDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleOrganiserDialog >::enumValues[] = {
	{0,0}
};


