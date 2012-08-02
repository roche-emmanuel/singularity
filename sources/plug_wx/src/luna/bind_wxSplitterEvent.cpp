#include <plug_common.h>

class luna_wrapper_wxSplitterEvent {
public:
	typedef Luna< wxSplitterEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSplitterEvent* ptr= dynamic_cast< wxSplitterEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSplitterEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxSplitterEvent* LunaTraits< wxSplitterEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxSplitterEvent >::_bind_dtor(wxSplitterEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterEvent >::className[] = "wxSplitterEvent";
const char LunaTraits< wxSplitterEvent >::fullName[] = "wxSplitterEvent";
const char LunaTraits< wxSplitterEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxSplitterEvent >::hash = 98312044;
const int LunaTraits< wxSplitterEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSplitterEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSplitterEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterEvent >::enumValues[] = {
	{0,0}
};


