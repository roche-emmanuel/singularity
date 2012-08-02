#include <plug_common.h>

class luna_wrapper_wxEvent {
public:
	typedef Luna< wxEvent > luna_t;

	// Constructor checkers:

	// Function checkers:

	// Constructor binds:

	// Function binds:
};

wxEvent* LunaTraits< wxEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< wxEvent >::_bind_dtor(wxEvent* obj) {
	delete obj;
}

const char LunaTraits< wxEvent >::className[] = "wxEvent";
const char LunaTraits< wxEvent >::moduleName[] = "wx";
const int LunaTraits< wxEvent >::uniqueIDs = {15769442,0};

luna_RegType LunaTraits< wxEvent >::methods[] = {
	{0,0}
};


