#include <plug_common.h>

class luna_wrapper_wxGraphicsMatrix {
public:
	typedef Luna< wxGraphicsMatrix > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxGraphicsMatrix* ptr= dynamic_cast< wxGraphicsMatrix* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsMatrix >::push(L,ptr,false);
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

wxGraphicsMatrix* LunaTraits< wxGraphicsMatrix >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsMatrix >::_bind_dtor(wxGraphicsMatrix* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsMatrix >::className[] = "wxGraphicsMatrix";
const char LunaTraits< wxGraphicsMatrix >::fullName[] = "wxGraphicsMatrix";
const char LunaTraits< wxGraphicsMatrix >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsMatrix >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsMatrix >::hash = 36449621;
const int LunaTraits< wxGraphicsMatrix >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsMatrix >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsMatrix >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsMatrix::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsMatrix >::enumValues[] = {
	{0,0}
};


