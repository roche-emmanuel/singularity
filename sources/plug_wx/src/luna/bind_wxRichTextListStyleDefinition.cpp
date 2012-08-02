#include <plug_common.h>

class luna_wrapper_wxRichTextListStyleDefinition {
public:
	typedef Luna< wxRichTextListStyleDefinition > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextListStyleDefinition* ptr= dynamic_cast< wxRichTextListStyleDefinition* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextListStyleDefinition >::push(L,ptr,false);
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

wxRichTextListStyleDefinition* LunaTraits< wxRichTextListStyleDefinition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextListStyleDefinition >::_bind_dtor(wxRichTextListStyleDefinition* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextListStyleDefinition >::className[] = "wxRichTextListStyleDefinition";
const char LunaTraits< wxRichTextListStyleDefinition >::fullName[] = "wxRichTextListStyleDefinition";
const char LunaTraits< wxRichTextListStyleDefinition >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextListStyleDefinition >::parents[] = {"wx.wxRichTextParagraphStyleDefinition", 0};
const int LunaTraits< wxRichTextListStyleDefinition >::hash = 28701674;
const int LunaTraits< wxRichTextListStyleDefinition >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextListStyleDefinition >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextListStyleDefinition >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextListStyleDefinition::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextListStyleDefinition >::enumValues[] = {
	{0,0}
};


