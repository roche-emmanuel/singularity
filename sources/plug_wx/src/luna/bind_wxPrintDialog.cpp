#include <plug_common.h>

class luna_wrapper_wxPrintDialog {
public:
	typedef Luna< wxPrintDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPrintDialog* ptr= dynamic_cast< wxPrintDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintDialog >::push(L,ptr,false);
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

wxPrintDialog* LunaTraits< wxPrintDialog >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrintDialog >::_bind_dtor(wxPrintDialog* obj) {
	delete obj;
}

const char LunaTraits< wxPrintDialog >::className[] = "wxPrintDialog";
const char LunaTraits< wxPrintDialog >::fullName[] = "wxPrintDialog";
const char LunaTraits< wxPrintDialog >::moduleName[] = "wx";
const char* LunaTraits< wxPrintDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxPrintDialog >::hash = 68499961;
const int LunaTraits< wxPrintDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPrintDialog >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintDialog >::enumValues[] = {
	{0,0}
};


