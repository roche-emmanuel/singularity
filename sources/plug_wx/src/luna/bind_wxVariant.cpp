#include <plug_common.h>

class luna_wrapper_wxVariant {
public:
	typedef Luna< wxVariant > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxVariant* ptr= dynamic_cast< wxVariant* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVariant >::push(L,ptr,false);
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

wxVariant* LunaTraits< wxVariant >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxVariant >::_bind_dtor(wxVariant* obj) {
	delete obj;
}

const char LunaTraits< wxVariant >::className[] = "wxVariant";
const char LunaTraits< wxVariant >::fullName[] = "wxVariant";
const char LunaTraits< wxVariant >::moduleName[] = "wx";
const char* LunaTraits< wxVariant >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxVariant >::hash = 52623868;
const int LunaTraits< wxVariant >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxVariant >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxVariant >::converters[] = {
	{"wxObject", &luna_wrapper_wxVariant::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVariant >::enumValues[] = {
	{0,0}
};


