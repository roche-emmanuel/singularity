#include <plug_common.h>

class luna_wrapper_wxStringInputStream {
public:
	typedef Luna< wxStringInputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStringInputStream* ptr= dynamic_cast< wxStringInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStringInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxStringInputStream* LunaTraits< wxStringInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxStringInputStream >::_bind_dtor(wxStringInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStringInputStream >::className[] = "wxStringInputStream";
const char LunaTraits< wxStringInputStream >::fullName[] = "wxStringInputStream";
const char LunaTraits< wxStringInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStringInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxStringInputStream >::hash = 38630818;
const int LunaTraits< wxStringInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStringInputStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxStringInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxStringInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStringInputStream >::enumValues[] = {
	{0,0}
};


