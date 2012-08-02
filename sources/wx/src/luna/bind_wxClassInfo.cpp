#include <plug_common.h>

class luna_wrapper_wxClassInfo {
public:
	typedef Luna< wxClassInfo > luna_t;

	// Constructor checkers:

	// Function checkers:

	// Constructor binds:

	// Function binds:
};

wxClassInfo* LunaTraits< wxClassInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No default constructor.
}

void LunaTraits< wxClassInfo >::_bind_dtor(wxClassInfo* obj) {
	delete obj;
}

const char LunaTraits< wxClassInfo >::className[] = "wxClassInfo";
const char LunaTraits< wxClassInfo >::moduleName[] = "wx";
const int LunaTraits< wxClassInfo >::uniqueIDs = {96106697,0};

luna_RegType LunaTraits< wxClassInfo >::methods[] = {
	{0,0}
};


