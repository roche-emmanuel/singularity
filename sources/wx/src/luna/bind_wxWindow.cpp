#include <plug_common.h>

class luna_wrapper_wxWindow {
public:
	typedef Luna< wxWindow > luna_t;

	// Constructor checkers:

	// Function checkers:

	// Constructor binds:

	// Function binds:
};

wxWindow* LunaTraits< wxWindow >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< wxWindow >::_bind_dtor(wxWindow* obj) {
	delete obj;
}

const char LunaTraits< wxWindow >::className[] = "wxWindow";
const char LunaTraits< wxWindow >::moduleName[] = "wx";
const int LunaTraits< wxWindow >::uniqueIDs = {92430048,0};

luna_RegType LunaTraits< wxWindow >::methods[] = {
	{0,0}
};


