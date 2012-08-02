#include <plug_common.h>

class luna_wrapper_wxRichTextPlainText {
public:
	typedef Luna< wxRichTextPlainText > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextPlainText* ptr= dynamic_cast< wxRichTextPlainText* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextPlainText >::push(L,ptr,false);
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

wxRichTextPlainText* LunaTraits< wxRichTextPlainText >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextPlainText >::_bind_dtor(wxRichTextPlainText* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextPlainText >::className[] = "wxRichTextPlainText";
const char LunaTraits< wxRichTextPlainText >::fullName[] = "wxRichTextPlainText";
const char LunaTraits< wxRichTextPlainText >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextPlainText >::parents[] = {"wx.wxRichTextObject", 0};
const int LunaTraits< wxRichTextPlainText >::hash = 49337308;
const int LunaTraits< wxRichTextPlainText >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextPlainText >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextPlainText >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextPlainText::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextPlainText >::enumValues[] = {
	{0,0}
};


