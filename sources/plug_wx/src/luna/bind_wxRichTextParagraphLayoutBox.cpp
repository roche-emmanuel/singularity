#include <plug_common.h>

class luna_wrapper_wxRichTextParagraphLayoutBox {
public:
	typedef Luna< wxRichTextParagraphLayoutBox > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextParagraphLayoutBox* ptr= dynamic_cast< wxRichTextParagraphLayoutBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextParagraphLayoutBox >::push(L,ptr,false);
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

wxRichTextParagraphLayoutBox* LunaTraits< wxRichTextParagraphLayoutBox >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextParagraphLayoutBox >::_bind_dtor(wxRichTextParagraphLayoutBox* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextParagraphLayoutBox >::className[] = "wxRichTextParagraphLayoutBox";
const char LunaTraits< wxRichTextParagraphLayoutBox >::fullName[] = "wxRichTextParagraphLayoutBox";
const char LunaTraits< wxRichTextParagraphLayoutBox >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextParagraphLayoutBox >::parents[] = {"wx.wxRichTextCompositeObject", 0};
const int LunaTraits< wxRichTextParagraphLayoutBox >::hash = 37403293;
const int LunaTraits< wxRichTextParagraphLayoutBox >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextParagraphLayoutBox >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextParagraphLayoutBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextParagraphLayoutBox::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextParagraphLayoutBox >::enumValues[] = {
	{0,0}
};


