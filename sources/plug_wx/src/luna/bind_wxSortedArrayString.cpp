#include <plug_common.h>

class luna_wrapper_wxSortedArrayString {
public:
	typedef Luna< wxSortedArrayString > luna_t;

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxSortedArrayString* LunaTraits< wxSortedArrayString >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSortedArrayString >::_bind_dtor(wxSortedArrayString* obj) {
	delete obj;
}

const char LunaTraits< wxSortedArrayString >::className[] = "wxSortedArrayString";
const char LunaTraits< wxSortedArrayString >::fullName[] = "wxSortedArrayString";
const char LunaTraits< wxSortedArrayString >::moduleName[] = "wx";
const char* LunaTraits< wxSortedArrayString >::parents[] = {"wx.wxArrayString", 0};
const int LunaTraits< wxSortedArrayString >::hash = 74743139;
const int LunaTraits< wxSortedArrayString >::uniqueIDs[] = {59507769,0};

luna_RegType LunaTraits< wxSortedArrayString >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSortedArrayString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSortedArrayString >::enumValues[] = {
	{0,0}
};


