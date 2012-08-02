#include <plug_common.h>

class luna_wrapper_wxInitDialogEvent {
public:
	typedef Luna< wxInitDialogEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxInitDialogEvent* ptr= dynamic_cast< wxInitDialogEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxInitDialogEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxInitDialogEvent* LunaTraits< wxInitDialogEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxInitDialogEvent >::_bind_dtor(wxInitDialogEvent* obj) {
	delete obj;
}

const char LunaTraits< wxInitDialogEvent >::className[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::fullName[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::moduleName[] = "wx";
const char* LunaTraits< wxInitDialogEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxInitDialogEvent >::hash = 96243584;
const int LunaTraits< wxInitDialogEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxInitDialogEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxInitDialogEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxInitDialogEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxInitDialogEvent >::enumValues[] = {
	{0,0}
};


