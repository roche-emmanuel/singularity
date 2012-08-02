#include <plug_common.h>

class luna_wrapper_wxRichTextParagraph {
public:
	typedef Luna< wxRichTextParagraph > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextParagraph* ptr= dynamic_cast< wxRichTextParagraph* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextParagraph >::push(L,ptr,false);
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

wxRichTextParagraph* LunaTraits< wxRichTextParagraph >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextParagraph >::_bind_dtor(wxRichTextParagraph* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextParagraph >::className[] = "wxRichTextParagraph";
const char LunaTraits< wxRichTextParagraph >::fullName[] = "wxRichTextParagraph";
const char LunaTraits< wxRichTextParagraph >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextParagraph >::parents[] = {"wx.wxRichTextCompositeObject", 0};
const int LunaTraits< wxRichTextParagraph >::hash = 63585382;
const int LunaTraits< wxRichTextParagraph >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextParagraph >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextParagraph >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextParagraph::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextParagraph >::enumValues[] = {
	{0,0}
};


