#include <plug_common.h>

class luna_wrapper_wxRichTextAttr {
public:
	typedef Luna< wxRichTextAttr > luna_t;

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRichTextAttr* LunaTraits< wxRichTextAttr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextAttr >::_bind_dtor(wxRichTextAttr* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextAttr >::className[] = "wxRichTextAttr";
const char LunaTraits< wxRichTextAttr >::fullName[] = "wxRichTextAttr";
const char LunaTraits< wxRichTextAttr >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextAttr >::parents[] = {"wx.wxTextAttr", 0};
const int LunaTraits< wxRichTextAttr >::hash = 86201242;
const int LunaTraits< wxRichTextAttr >::uniqueIDs[] = {37117058,0};

luna_RegType LunaTraits< wxRichTextAttr >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextAttr >::enumValues[] = {
	{0,0}
};


