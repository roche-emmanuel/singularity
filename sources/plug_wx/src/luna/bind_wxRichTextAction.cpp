#include <plug_common.h>

class luna_wrapper_wxRichTextAction {
public:
	typedef Luna< wxRichTextAction > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextAction* ptr= dynamic_cast< wxRichTextAction* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextAction >::push(L,ptr,false);
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

wxRichTextAction* LunaTraits< wxRichTextAction >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextAction >::_bind_dtor(wxRichTextAction* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextAction >::className[] = "wxRichTextAction";
const char LunaTraits< wxRichTextAction >::fullName[] = "wxRichTextAction";
const char LunaTraits< wxRichTextAction >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextAction >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextAction >::hash = 23676165;
const int LunaTraits< wxRichTextAction >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextAction >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextAction >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextAction::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextAction >::enumValues[] = {
	{0,0}
};


