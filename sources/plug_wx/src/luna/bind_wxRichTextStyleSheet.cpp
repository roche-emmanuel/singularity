#include <plug_common.h>

class luna_wrapper_wxRichTextStyleSheet {
public:
	typedef Luna< wxRichTextStyleSheet > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStyleSheet* ptr= dynamic_cast< wxRichTextStyleSheet* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleSheet >::push(L,ptr,false);
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

wxRichTextStyleSheet* LunaTraits< wxRichTextStyleSheet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleSheet >::_bind_dtor(wxRichTextStyleSheet* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleSheet >::className[] = "wxRichTextStyleSheet";
const char LunaTraits< wxRichTextStyleSheet >::fullName[] = "wxRichTextStyleSheet";
const char LunaTraits< wxRichTextStyleSheet >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleSheet >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextStyleSheet >::hash = 17165498;
const int LunaTraits< wxRichTextStyleSheet >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextStyleSheet >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleSheet >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleSheet::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleSheet >::enumValues[] = {
	{0,0}
};


