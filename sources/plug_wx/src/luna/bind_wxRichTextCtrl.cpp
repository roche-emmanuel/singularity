#include <plug_common.h>

class luna_wrapper_wxRichTextCtrl {
public:
	typedef Luna< wxRichTextCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextCtrl* ptr= dynamic_cast< wxRichTextCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCtrl >::push(L,ptr,false);
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

wxRichTextCtrl* LunaTraits< wxRichTextCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCtrl >::_bind_dtor(wxRichTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCtrl >::className[] = "wxRichTextCtrl";
const char LunaTraits< wxRichTextCtrl >::fullName[] = "wxRichTextCtrl";
const char LunaTraits< wxRichTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxRichTextCtrl >::hash = 86260756;
const int LunaTraits< wxRichTextCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRichTextCtrl >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCtrl >::enumValues[] = {
	{0,0}
};


