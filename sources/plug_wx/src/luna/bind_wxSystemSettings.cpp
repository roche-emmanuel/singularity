#include <plug_common.h>

class luna_wrapper_wxSystemSettings {
public:
	typedef Luna< wxSystemSettings > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSystemSettings* ptr= dynamic_cast< wxSystemSettings* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSystemSettings >::push(L,ptr,false);
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

wxSystemSettings* LunaTraits< wxSystemSettings >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSystemSettings >::_bind_dtor(wxSystemSettings* obj) {
	delete obj;
}

const char LunaTraits< wxSystemSettings >::className[] = "wxSystemSettings";
const char LunaTraits< wxSystemSettings >::fullName[] = "wxSystemSettings";
const char LunaTraits< wxSystemSettings >::moduleName[] = "wx";
const char* LunaTraits< wxSystemSettings >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSystemSettings >::hash = 9867684;
const int LunaTraits< wxSystemSettings >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSystemSettings >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSystemSettings >::converters[] = {
	{"wxObject", &luna_wrapper_wxSystemSettings::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSystemSettings >::enumValues[] = {
	{0,0}
};


