#include <plug_common.h>

class luna_wrapper_wxStringTokenizer {
public:
	typedef Luna< wxStringTokenizer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStringTokenizer* ptr= dynamic_cast< wxStringTokenizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStringTokenizer >::push(L,ptr,false);
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

wxStringTokenizer* LunaTraits< wxStringTokenizer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStringTokenizer >::_bind_dtor(wxStringTokenizer* obj) {
	delete obj;
}

const char LunaTraits< wxStringTokenizer >::className[] = "wxStringTokenizer";
const char LunaTraits< wxStringTokenizer >::fullName[] = "wxStringTokenizer";
const char LunaTraits< wxStringTokenizer >::moduleName[] = "wx";
const char* LunaTraits< wxStringTokenizer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxStringTokenizer >::hash = 85016560;
const int LunaTraits< wxStringTokenizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStringTokenizer >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxStringTokenizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxStringTokenizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStringTokenizer >::enumValues[] = {
	{0,0}
};


