#include <plug_common.h>

class luna_wrapper_wxMediaEvent {
public:
	typedef Luna< wxMediaEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMediaEvent* ptr= dynamic_cast< wxMediaEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMediaEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMediaEvent* LunaTraits< wxMediaEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxMediaEvent >::_bind_dtor(wxMediaEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMediaEvent >::className[] = "wxMediaEvent";
const char LunaTraits< wxMediaEvent >::fullName[] = "wxMediaEvent";
const char LunaTraits< wxMediaEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMediaEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxMediaEvent >::hash = 87188630;
const int LunaTraits< wxMediaEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMediaEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMediaEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMediaEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMediaEvent >::enumValues[] = {
	{0,0}
};


