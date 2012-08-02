#include <plug_common.h>

class luna_wrapper_wxClipboardTextEvent {
public:
	typedef Luna< wxClipboardTextEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxClipboardTextEvent* ptr= dynamic_cast< wxClipboardTextEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClipboardTextEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxClipboardTextEvent* LunaTraits< wxClipboardTextEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxClipboardTextEvent >::_bind_dtor(wxClipboardTextEvent* obj) {
	delete obj;
}

const char LunaTraits< wxClipboardTextEvent >::className[] = "wxClipboardTextEvent";
const char LunaTraits< wxClipboardTextEvent >::fullName[] = "wxClipboardTextEvent";
const char LunaTraits< wxClipboardTextEvent >::moduleName[] = "wx";
const char* LunaTraits< wxClipboardTextEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxClipboardTextEvent >::hash = 44745418;
const int LunaTraits< wxClipboardTextEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClipboardTextEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxClipboardTextEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxClipboardTextEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClipboardTextEvent >::enumValues[] = {
	{0,0}
};


