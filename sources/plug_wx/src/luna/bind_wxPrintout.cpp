#include <plug_common.h>

class luna_wrapper_wxPrintout {
public:
	typedef Luna< wxPrintout > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPrintout* ptr= dynamic_cast< wxPrintout* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintout >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxPrintout* LunaTraits< wxPrintout >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxPrintout::OnPrintPage(int pageNum)

	// Abstract operators:
}

void LunaTraits< wxPrintout >::_bind_dtor(wxPrintout* obj) {
	delete obj;
}

const char LunaTraits< wxPrintout >::className[] = "wxPrintout";
const char LunaTraits< wxPrintout >::fullName[] = "wxPrintout";
const char LunaTraits< wxPrintout >::moduleName[] = "wx";
const char* LunaTraits< wxPrintout >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPrintout >::hash = 90752623;
const int LunaTraits< wxPrintout >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrintout >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintout >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintout::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintout >::enumValues[] = {
	{0,0}
};


