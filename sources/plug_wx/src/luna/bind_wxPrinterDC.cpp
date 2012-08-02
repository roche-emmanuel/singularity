#include <plug_common.h>

class luna_wrapper_wxPrinterDC {
public:
	typedef Luna< wxPrinterDC > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPrinterDC* ptr= dynamic_cast< wxPrinterDC* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrinterDC >::push(L,ptr,false);
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

wxPrinterDC* LunaTraits< wxPrinterDC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrinterDC >::_bind_dtor(wxPrinterDC* obj) {
	delete obj;
}

const char LunaTraits< wxPrinterDC >::className[] = "wxPrinterDC";
const char LunaTraits< wxPrinterDC >::fullName[] = "wxPrinterDC";
const char LunaTraits< wxPrinterDC >::moduleName[] = "wx";
const char* LunaTraits< wxPrinterDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxPrinterDC >::hash = 13028791;
const int LunaTraits< wxPrinterDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrinterDC >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPrinterDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrinterDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrinterDC >::enumValues[] = {
	{0,0}
};


