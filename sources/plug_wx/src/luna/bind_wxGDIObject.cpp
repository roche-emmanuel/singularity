#include <plug_common.h>

class luna_wrapper_wxGDIObject {
public:
	typedef Luna< wxGDIObject > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGDIObject* ptr= dynamic_cast< wxGDIObject* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGDIObject >::push(L,ptr,false);
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

wxGDIObject* LunaTraits< wxGDIObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGDIObject >::_bind_dtor(wxGDIObject* obj) {
	delete obj;
}

const char LunaTraits< wxGDIObject >::className[] = "wxGDIObject";
const char LunaTraits< wxGDIObject >::fullName[] = "wxGDIObject";
const char LunaTraits< wxGDIObject >::moduleName[] = "wx";
const char* LunaTraits< wxGDIObject >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGDIObject >::hash = 10022955;
const int LunaTraits< wxGDIObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGDIObject >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGDIObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxGDIObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGDIObject >::enumValues[] = {
	{0,0}
};


