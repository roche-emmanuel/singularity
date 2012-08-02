#include <plug_common.h>

class luna_wrapper_wxGraphicsBrush {
public:
	typedef Luna< wxGraphicsBrush > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsBrush* ptr= dynamic_cast< wxGraphicsBrush* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsBrush >::push(L,ptr,false);
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

wxGraphicsBrush* LunaTraits< wxGraphicsBrush >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsBrush >::_bind_dtor(wxGraphicsBrush* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsBrush >::className[] = "wxGraphicsBrush";
const char LunaTraits< wxGraphicsBrush >::fullName[] = "wxGraphicsBrush";
const char LunaTraits< wxGraphicsBrush >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsBrush >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsBrush >::hash = 27008374;
const int LunaTraits< wxGraphicsBrush >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsBrush >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsBrush >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsBrush::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsBrush >::enumValues[] = {
	{0,0}
};


