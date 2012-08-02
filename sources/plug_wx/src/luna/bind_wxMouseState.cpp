#include <plug_common.h>

class luna_wrapper_wxMouseState {
public:
	typedef Luna< wxMouseState > luna_t;

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxMouseState* LunaTraits< wxMouseState >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMouseState >::_bind_dtor(wxMouseState* obj) {
	delete obj;
}

const char LunaTraits< wxMouseState >::className[] = "wxMouseState";
const char LunaTraits< wxMouseState >::fullName[] = "wxMouseState";
const char LunaTraits< wxMouseState >::moduleName[] = "wx";
const char* LunaTraits< wxMouseState >::parents[] = {"wx.wxKeyboardState", 0};
const int LunaTraits< wxMouseState >::hash = 13611458;
const int LunaTraits< wxMouseState >::uniqueIDs[] = {92036952,0};

luna_RegType LunaTraits< wxMouseState >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseState >::enumValues[] = {
	{0,0}
};


