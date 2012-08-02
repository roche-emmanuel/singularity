#include <plug_common.h>

class luna_wrapper_wxGraphicsObject {
public:
	typedef Luna< wxGraphicsObject > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsObject* ptr= dynamic_cast< wxGraphicsObject* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsObject >::push(L,ptr,false);
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

wxGraphicsObject* LunaTraits< wxGraphicsObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsObject >::_bind_dtor(wxGraphicsObject* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsObject >::className[] = "wxGraphicsObject";
const char LunaTraits< wxGraphicsObject >::fullName[] = "wxGraphicsObject";
const char LunaTraits< wxGraphicsObject >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsObject >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGraphicsObject >::hash = 94320851;
const int LunaTraits< wxGraphicsObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsObject >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsObject >::enumValues[] = {
	{0,0}
};


