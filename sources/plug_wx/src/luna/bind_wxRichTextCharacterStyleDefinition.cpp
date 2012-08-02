#include <plug_common.h>

class luna_wrapper_wxRichTextCharacterStyleDefinition {
public:
	typedef Luna< wxRichTextCharacterStyleDefinition > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextCharacterStyleDefinition* ptr= dynamic_cast< wxRichTextCharacterStyleDefinition* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCharacterStyleDefinition >::push(L,ptr,false);
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

wxRichTextCharacterStyleDefinition* LunaTraits< wxRichTextCharacterStyleDefinition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCharacterStyleDefinition >::_bind_dtor(wxRichTextCharacterStyleDefinition* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCharacterStyleDefinition >::className[] = "wxRichTextCharacterStyleDefinition";
const char LunaTraits< wxRichTextCharacterStyleDefinition >::fullName[] = "wxRichTextCharacterStyleDefinition";
const char LunaTraits< wxRichTextCharacterStyleDefinition >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCharacterStyleDefinition >::parents[] = {"wx.wxRichTextStyleDefinition", 0};
const int LunaTraits< wxRichTextCharacterStyleDefinition >::hash = 469276;
const int LunaTraits< wxRichTextCharacterStyleDefinition >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextCharacterStyleDefinition >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCharacterStyleDefinition >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCharacterStyleDefinition::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCharacterStyleDefinition >::enumValues[] = {
	{0,0}
};


