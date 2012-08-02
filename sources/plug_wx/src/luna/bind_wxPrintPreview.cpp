#include <plug_common.h>

class luna_wrapper_wxPrintPreview {
public:
	typedef Luna< wxPrintPreview > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPrintPreview* ptr= dynamic_cast< wxPrintPreview* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintPreview >::push(L,ptr,false);
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

wxPrintPreview* LunaTraits< wxPrintPreview >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrintPreview >::_bind_dtor(wxPrintPreview* obj) {
	delete obj;
}

const char LunaTraits< wxPrintPreview >::className[] = "wxPrintPreview";
const char LunaTraits< wxPrintPreview >::fullName[] = "wxPrintPreview";
const char LunaTraits< wxPrintPreview >::moduleName[] = "wx";
const char* LunaTraits< wxPrintPreview >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPrintPreview >::hash = 35189911;
const int LunaTraits< wxPrintPreview >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrintPreview >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintPreview >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintPreview::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintPreview >::enumValues[] = {
	{0,0}
};


