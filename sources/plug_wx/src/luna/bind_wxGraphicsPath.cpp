#include <plug_common.h>

class luna_wrapper_wxGraphicsPath {
public:
	typedef Luna< wxGraphicsPath > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsPath* ptr= dynamic_cast< wxGraphicsPath* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsPath >::push(L,ptr,false);
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

wxGraphicsPath* LunaTraits< wxGraphicsPath >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsPath >::_bind_dtor(wxGraphicsPath* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsPath >::className[] = "wxGraphicsPath";
const char LunaTraits< wxGraphicsPath >::fullName[] = "wxGraphicsPath";
const char LunaTraits< wxGraphicsPath >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsPath >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsPath >::hash = 27078385;
const int LunaTraits< wxGraphicsPath >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsPath >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsPath >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsPath::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsPath >::enumValues[] = {
	{0,0}
};


