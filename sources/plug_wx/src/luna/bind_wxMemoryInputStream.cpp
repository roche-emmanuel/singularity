#include <plug_common.h>

class luna_wrapper_wxMemoryInputStream {
public:
	typedef Luna< wxMemoryInputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMemoryInputStream* ptr= dynamic_cast< wxMemoryInputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryInputStream >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMemoryInputStream* LunaTraits< wxMemoryInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)

	// Abstract operators:
}

void LunaTraits< wxMemoryInputStream >::_bind_dtor(wxMemoryInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryInputStream >::className[] = "wxMemoryInputStream";
const char LunaTraits< wxMemoryInputStream >::fullName[] = "wxMemoryInputStream";
const char LunaTraits< wxMemoryInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxMemoryInputStream >::hash = 50114172;
const int LunaTraits< wxMemoryInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryInputStream >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryInputStream >::enumValues[] = {
	{0,0}
};


