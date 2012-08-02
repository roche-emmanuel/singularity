#include <plug_common.h>

class luna_wrapper_wxLogStream {
public:
	typedef Luna< wxLogStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLogStream* ptr= dynamic_cast< wxLogStream* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogStream >::push(L,ptr,false);
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

wxLogStream* LunaTraits< wxLogStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLogStream >::_bind_dtor(wxLogStream* obj) {
	delete obj;
}

const char LunaTraits< wxLogStream >::className[] = "wxLogStream";
const char LunaTraits< wxLogStream >::fullName[] = "wxLogStream";
const char LunaTraits< wxLogStream >::moduleName[] = "wx";
const char* LunaTraits< wxLogStream >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogStream >::hash = 63672516;
const int LunaTraits< wxLogStream >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxLogStream >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogStream::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogStream >::enumValues[] = {
	{0,0}
};


