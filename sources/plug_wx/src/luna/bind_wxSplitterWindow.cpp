#include <plug_common.h>

class luna_wrapper_wxSplitterWindow {
public:
	typedef Luna< wxSplitterWindow > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSplitterWindow* ptr= dynamic_cast< wxSplitterWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSplitterWindow >::push(L,ptr,false);
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

wxSplitterWindow* LunaTraits< wxSplitterWindow >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSplitterWindow >::_bind_dtor(wxSplitterWindow* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterWindow >::className[] = "wxSplitterWindow";
const char LunaTraits< wxSplitterWindow >::fullName[] = "wxSplitterWindow";
const char LunaTraits< wxSplitterWindow >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxSplitterWindow >::hash = 51250253;
const int LunaTraits< wxSplitterWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSplitterWindow >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxSplitterWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterWindow >::enumValues[] = {
	{0,0}
};


