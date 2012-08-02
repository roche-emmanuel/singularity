#include <plug_common.h>

class luna_wrapper_wxRichTextEvent {
public:
	typedef Luna< wxRichTextEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextEvent* ptr= dynamic_cast< wxRichTextEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextEvent >::push(L,ptr,false);
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

wxRichTextEvent* LunaTraits< wxRichTextEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextEvent >::_bind_dtor(wxRichTextEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextEvent >::className[] = "wxRichTextEvent";
const char LunaTraits< wxRichTextEvent >::fullName[] = "wxRichTextEvent";
const char LunaTraits< wxRichTextEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxRichTextEvent >::hash = 75977355;
const int LunaTraits< wxRichTextEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextEvent >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextEvent >::enumValues[] = {
	{0,0}
};


