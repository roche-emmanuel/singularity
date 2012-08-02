#include <plug_common.h>

class luna_wrapper_wxLogStderr {
public:
	typedef Luna< wxLogStderr > luna_t;

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLogStderr* ptr= dynamic_cast< wxLogStderr* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogStderr >::push(L,ptr,false);
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

wxLogStderr* LunaTraits< wxLogStderr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLogStderr >::_bind_dtor(wxLogStderr* obj) {
	delete obj;
}

const char LunaTraits< wxLogStderr >::className[] = "wxLogStderr";
const char LunaTraits< wxLogStderr >::fullName[] = "wxLogStderr";
const char LunaTraits< wxLogStderr >::moduleName[] = "wx";
const char* LunaTraits< wxLogStderr >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogStderr >::hash = 63255974;
const int LunaTraits< wxLogStderr >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogStderr >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxLogStderr >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogStderr::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogStderr >::enumValues[] = {
	{0,0}
};


