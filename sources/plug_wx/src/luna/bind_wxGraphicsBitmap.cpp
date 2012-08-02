#include <plug_common.h>

class luna_wrapper_wxGraphicsBitmap {
public:
	typedef Luna< wxGraphicsBitmap > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsBitmap* ptr= dynamic_cast< wxGraphicsBitmap* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsBitmap >::push(L,ptr,false);
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

wxGraphicsBitmap* LunaTraits< wxGraphicsBitmap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsBitmap >::_bind_dtor(wxGraphicsBitmap* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsBitmap >::className[] = "wxGraphicsBitmap";
const char LunaTraits< wxGraphicsBitmap >::fullName[] = "wxGraphicsBitmap";
const char LunaTraits< wxGraphicsBitmap >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsBitmap >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsBitmap >::hash = 28912115;
const int LunaTraits< wxGraphicsBitmap >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsBitmap >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsBitmap >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsBitmap::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsBitmap >::enumValues[] = {
	{0,0}
};


