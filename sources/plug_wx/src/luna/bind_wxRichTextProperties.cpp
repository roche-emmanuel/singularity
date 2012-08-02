#include <plug_common.h>

class luna_wrapper_wxRichTextProperties {
public:
	typedef Luna< wxRichTextProperties > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextProperties* ptr= dynamic_cast< wxRichTextProperties* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextProperties >::push(L,ptr,false);
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

wxRichTextProperties* LunaTraits< wxRichTextProperties >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextProperties >::_bind_dtor(wxRichTextProperties* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextProperties >::className[] = "wxRichTextProperties";
const char LunaTraits< wxRichTextProperties >::fullName[] = "wxRichTextProperties";
const char LunaTraits< wxRichTextProperties >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextProperties >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextProperties >::hash = 34348293;
const int LunaTraits< wxRichTextProperties >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextProperties >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextProperties >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextProperties::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextProperties >::enumValues[] = {
	{0,0}
};


