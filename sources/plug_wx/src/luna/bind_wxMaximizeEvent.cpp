#include <plug_common.h>

class luna_wrapper_wxMaximizeEvent {
public:
	typedef Luna< wxMaximizeEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMaximizeEvent* ptr= dynamic_cast< wxMaximizeEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMaximizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMaximizeEvent* LunaTraits< wxMaximizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxMaximizeEvent >::_bind_dtor(wxMaximizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMaximizeEvent >::className[] = "wxMaximizeEvent";
const char LunaTraits< wxMaximizeEvent >::fullName[] = "wxMaximizeEvent";
const char LunaTraits< wxMaximizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMaximizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMaximizeEvent >::hash = 65226599;
const int LunaTraits< wxMaximizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMaximizeEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxMaximizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMaximizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMaximizeEvent >::enumValues[] = {
	{0,0}
};


