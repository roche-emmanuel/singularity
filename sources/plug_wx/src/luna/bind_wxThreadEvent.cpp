#include <plug_common.h>

class luna_wrapper_wxThreadEvent {
public:
	typedef Luna< wxThreadEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxThreadEvent* ptr= dynamic_cast< wxThreadEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxThreadEvent >::push(L,ptr,false);
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

wxThreadEvent* LunaTraits< wxThreadEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxThreadEvent >::_bind_dtor(wxThreadEvent* obj) {
	delete obj;
}

const char LunaTraits< wxThreadEvent >::className[] = "wxThreadEvent";
const char LunaTraits< wxThreadEvent >::fullName[] = "wxThreadEvent";
const char LunaTraits< wxThreadEvent >::moduleName[] = "wx";
const char* LunaTraits< wxThreadEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxThreadEvent >::hash = 77612431;
const int LunaTraits< wxThreadEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxThreadEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxThreadEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxThreadEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxThreadEvent >::enumValues[] = {
	{0,0}
};


