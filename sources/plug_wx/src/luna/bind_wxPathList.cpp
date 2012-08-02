#include <plug_common.h>

class luna_wrapper_wxPathList {
public:
	typedef Luna< wxPathList > luna_t;

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxPathList* LunaTraits< wxPathList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPathList >::_bind_dtor(wxPathList* obj) {
	delete obj;
}

const char LunaTraits< wxPathList >::className[] = "wxPathList";
const char LunaTraits< wxPathList >::fullName[] = "wxPathList";
const char LunaTraits< wxPathList >::moduleName[] = "wx";
const char* LunaTraits< wxPathList >::parents[] = {"wx.wxArrayString", 0};
const int LunaTraits< wxPathList >::hash = 11372467;
const int LunaTraits< wxPathList >::uniqueIDs[] = {59507769,0};

luna_RegType LunaTraits< wxPathList >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxPathList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPathList >::enumValues[] = {
	{0,0}
};


