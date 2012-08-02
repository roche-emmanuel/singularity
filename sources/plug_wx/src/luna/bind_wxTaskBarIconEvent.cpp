#include <plug_common.h>

class luna_wrapper_wxTaskBarIconEvent {
public:
	typedef Luna< wxTaskBarIconEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTaskBarIconEvent* ptr= dynamic_cast< wxTaskBarIconEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTaskBarIconEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxTaskBarIconEvent* LunaTraits< wxTaskBarIconEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxTaskBarIconEvent >::_bind_dtor(wxTaskBarIconEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTaskBarIconEvent >::className[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::fullName[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTaskBarIconEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxTaskBarIconEvent >::hash = 93929872;
const int LunaTraits< wxTaskBarIconEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTaskBarIconEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxTaskBarIconEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTaskBarIconEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTaskBarIconEvent >::enumValues[] = {
	{0,0}
};


