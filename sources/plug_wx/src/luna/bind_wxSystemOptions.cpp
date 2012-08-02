#include <plug_common.h>

class luna_wrapper_wxSystemOptions {
public:
	typedef Luna< wxSystemOptions > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSystemOptions* ptr= dynamic_cast< wxSystemOptions* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSystemOptions >::push(L,ptr,false);
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

wxSystemOptions* LunaTraits< wxSystemOptions >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSystemOptions >::_bind_dtor(wxSystemOptions* obj) {
	delete obj;
}

const char LunaTraits< wxSystemOptions >::className[] = "wxSystemOptions";
const char LunaTraits< wxSystemOptions >::fullName[] = "wxSystemOptions";
const char LunaTraits< wxSystemOptions >::moduleName[] = "wx";
const char* LunaTraits< wxSystemOptions >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSystemOptions >::hash = 32644718;
const int LunaTraits< wxSystemOptions >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSystemOptions >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSystemOptions >::converters[] = {
	{"wxObject", &luna_wrapper_wxSystemOptions::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSystemOptions >::enumValues[] = {
	{0,0}
};


