#include <plug_common.h>

class luna_wrapper_wxPrintData {
public:
	typedef Luna< wxPrintData > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPrintData* ptr= dynamic_cast< wxPrintData* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPrintData >::push(L,ptr,false);
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

wxPrintData* LunaTraits< wxPrintData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPrintData >::_bind_dtor(wxPrintData* obj) {
	delete obj;
}

const char LunaTraits< wxPrintData >::className[] = "wxPrintData";
const char LunaTraits< wxPrintData >::fullName[] = "wxPrintData";
const char LunaTraits< wxPrintData >::moduleName[] = "wx";
const char* LunaTraits< wxPrintData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPrintData >::hash = 12030869;
const int LunaTraits< wxPrintData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPrintData >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPrintData >::converters[] = {
	{"wxObject", &luna_wrapper_wxPrintData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPrintData >::enumValues[] = {
	{0,0}
};


