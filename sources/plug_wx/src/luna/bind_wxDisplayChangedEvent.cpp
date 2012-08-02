#include <plug_common.h>

class luna_wrapper_wxDisplayChangedEvent {
public:
	typedef Luna< wxDisplayChangedEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDisplayChangedEvent* ptr= dynamic_cast< wxDisplayChangedEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDisplayChangedEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxDisplayChangedEvent* LunaTraits< wxDisplayChangedEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxDisplayChangedEvent >::_bind_dtor(wxDisplayChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDisplayChangedEvent >::className[] = "wxDisplayChangedEvent";
const char LunaTraits< wxDisplayChangedEvent >::fullName[] = "wxDisplayChangedEvent";
const char LunaTraits< wxDisplayChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDisplayChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxDisplayChangedEvent >::hash = 53874927;
const int LunaTraits< wxDisplayChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDisplayChangedEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxDisplayChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDisplayChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDisplayChangedEvent >::enumValues[] = {
	{0,0}
};


