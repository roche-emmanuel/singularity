#include <plug_common.h>

class luna_wrapper_wxString {
public:
	typedef Luna< wxString > luna_t;

	// Constructor checkers:

	// Function checkers:

	// Constructor binds:

	// Function binds:
};

wxString* LunaTraits< wxString >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< wxString >::_bind_dtor(wxString* obj) {
	delete obj;
}

const char LunaTraits< wxString >::className[] = "wxString";
const char LunaTraits< wxString >::moduleName[] = "wx";
const int LunaTraits< wxString >::uniqueIDs = {88196105,0};

luna_RegType LunaTraits< wxString >::methods[] = {
	{0,0}
};


