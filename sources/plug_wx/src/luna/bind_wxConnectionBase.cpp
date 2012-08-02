#include <plug_common.h>

class luna_wrapper_wxConnectionBase {
public:
	typedef Luna< wxConnectionBase > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxConnectionBase* ptr= dynamic_cast< wxConnectionBase* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxConnectionBase >::push(L,ptr,false);
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

wxConnectionBase* LunaTraits< wxConnectionBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxConnectionBase >::_bind_dtor(wxConnectionBase* obj) {
	delete obj;
}

const char LunaTraits< wxConnectionBase >::className[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::fullName[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::moduleName[] = "wx";
const char* LunaTraits< wxConnectionBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxConnectionBase >::hash = 67238063;
const int LunaTraits< wxConnectionBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxConnectionBase >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxConnectionBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxConnectionBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxConnectionBase >::enumValues[] = {
	{0,0}
};


