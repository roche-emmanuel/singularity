#include <plug_common.h>

class luna_wrapper_wxRichTextParagraphStyleDefinition {
public:
	typedef Luna< wxRichTextParagraphStyleDefinition > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextParagraphStyleDefinition* ptr= dynamic_cast< wxRichTextParagraphStyleDefinition* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextParagraphStyleDefinition >::push(L,ptr,false);
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

wxRichTextParagraphStyleDefinition* LunaTraits< wxRichTextParagraphStyleDefinition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextParagraphStyleDefinition >::_bind_dtor(wxRichTextParagraphStyleDefinition* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextParagraphStyleDefinition >::className[] = "wxRichTextParagraphStyleDefinition";
const char LunaTraits< wxRichTextParagraphStyleDefinition >::fullName[] = "wxRichTextParagraphStyleDefinition";
const char LunaTraits< wxRichTextParagraphStyleDefinition >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextParagraphStyleDefinition >::parents[] = {"wx.wxRichTextStyleDefinition", 0};
const int LunaTraits< wxRichTextParagraphStyleDefinition >::hash = 85125059;
const int LunaTraits< wxRichTextParagraphStyleDefinition >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextParagraphStyleDefinition >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextParagraphStyleDefinition >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextParagraphStyleDefinition::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextParagraphStyleDefinition >::enumValues[] = {
	{0,0}
};


