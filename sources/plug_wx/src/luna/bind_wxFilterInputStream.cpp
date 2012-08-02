#include <plug_common.h>

class luna_wrapper_wxFilterInputStream {
public:
	typedef Luna< wxFilterInputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFilterInputStream* ptr= dynamic_cast< wxFilterInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilterInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxFilterInputStream* LunaTraits< wxFilterInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxFilterInputStream >::_bind_dtor(wxFilterInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFilterInputStream >::className[] = "wxFilterInputStream";
const char LunaTraits< wxFilterInputStream >::fullName[] = "wxFilterInputStream";
const char LunaTraits< wxFilterInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFilterInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxFilterInputStream >::hash = 56070844;
const int LunaTraits< wxFilterInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFilterInputStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxFilterInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFilterInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFilterInputStream >::enumValues[] = {
	{0,0}
};


