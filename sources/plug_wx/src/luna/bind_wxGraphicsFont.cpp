#include <plug_common.h>

class luna_wrapper_wxGraphicsFont {
public:
	typedef Luna< wxGraphicsFont > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsFont* ptr= dynamic_cast< wxGraphicsFont* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsFont >::push(L,ptr,false);
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

wxGraphicsFont* LunaTraits< wxGraphicsFont >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsFont >::_bind_dtor(wxGraphicsFont* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsFont >::className[] = "wxGraphicsFont";
const char LunaTraits< wxGraphicsFont >::fullName[] = "wxGraphicsFont";
const char LunaTraits< wxGraphicsFont >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsFont >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsFont >::hash = 26793755;
const int LunaTraits< wxGraphicsFont >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsFont >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsFont >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsFont::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsFont >::enumValues[] = {
	{0,0}
};


