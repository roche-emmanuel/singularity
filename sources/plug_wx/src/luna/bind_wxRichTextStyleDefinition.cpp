#include <plug_common.h>

class luna_wrapper_wxRichTextStyleDefinition {
public:
	typedef Luna< wxRichTextStyleDefinition > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextStyleDefinition* ptr= dynamic_cast< wxRichTextStyleDefinition* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleDefinition >::push(L,ptr,false);
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

wxRichTextStyleDefinition* LunaTraits< wxRichTextStyleDefinition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextStyleDefinition >::_bind_dtor(wxRichTextStyleDefinition* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleDefinition >::className[] = "wxRichTextStyleDefinition";
const char LunaTraits< wxRichTextStyleDefinition >::fullName[] = "wxRichTextStyleDefinition";
const char LunaTraits< wxRichTextStyleDefinition >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleDefinition >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextStyleDefinition >::hash = 99755158;
const int LunaTraits< wxRichTextStyleDefinition >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextStyleDefinition >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleDefinition >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleDefinition::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleDefinition >::enumValues[] = {
	{0,0}
};


