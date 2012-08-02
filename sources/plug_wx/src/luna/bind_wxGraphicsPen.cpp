#include <plug_common.h>

class luna_wrapper_wxGraphicsPen {
public:
	typedef Luna< wxGraphicsPen > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsPen* ptr= dynamic_cast< wxGraphicsPen* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsPen >::push(L,ptr,false);
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

wxGraphicsPen* LunaTraits< wxGraphicsPen >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsPen >::_bind_dtor(wxGraphicsPen* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsPen >::className[] = "wxGraphicsPen";
const char LunaTraits< wxGraphicsPen >::fullName[] = "wxGraphicsPen";
const char LunaTraits< wxGraphicsPen >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsPen >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsPen >::hash = 65389749;
const int LunaTraits< wxGraphicsPen >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsPen >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsPen >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsPen::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsPen >::enumValues[] = {
	{0,0}
};


