#include <plug_common.h>

class luna_wrapper_wxRichTextPrintout {
public:
	typedef Luna< wxRichTextPrintout > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextPrintout* ptr= dynamic_cast< wxRichTextPrintout* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextPrintout >::push(L,ptr,false);
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

wxRichTextPrintout* LunaTraits< wxRichTextPrintout >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextPrintout >::_bind_dtor(wxRichTextPrintout* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextPrintout >::className[] = "wxRichTextPrintout";
const char LunaTraits< wxRichTextPrintout >::fullName[] = "wxRichTextPrintout";
const char LunaTraits< wxRichTextPrintout >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextPrintout >::parents[] = {"wx.wxPrintout", 0};
const int LunaTraits< wxRichTextPrintout >::hash = 44339644;
const int LunaTraits< wxRichTextPrintout >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextPrintout >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextPrintout >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextPrintout::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextPrintout >::enumValues[] = {
	{0,0}
};


