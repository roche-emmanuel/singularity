#include <plug_common.h>

class luna_wrapper_wxSocketInputStream {
public:
	typedef Luna< wxSocketInputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSocketInputStream* ptr= dynamic_cast< wxSocketInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxSocketInputStream* LunaTraits< wxSocketInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxSocketInputStream >::_bind_dtor(wxSocketInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxSocketInputStream >::className[] = "wxSocketInputStream";
const char LunaTraits< wxSocketInputStream >::fullName[] = "wxSocketInputStream";
const char LunaTraits< wxSocketInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxSocketInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxSocketInputStream >::hash = 65159907;
const int LunaTraits< wxSocketInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketInputStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketInputStream >::enumValues[] = {
	{0,0}
};


