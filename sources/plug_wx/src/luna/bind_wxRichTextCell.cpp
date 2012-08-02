#include <plug_common.h>

class luna_wrapper_wxRichTextCell {
public:
	typedef Luna< wxRichTextCell > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextCell* ptr= dynamic_cast< wxRichTextCell* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCell >::push(L,ptr,false);
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

wxRichTextCell* LunaTraits< wxRichTextCell >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCell >::_bind_dtor(wxRichTextCell* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCell >::className[] = "wxRichTextCell";
const char LunaTraits< wxRichTextCell >::fullName[] = "wxRichTextCell";
const char LunaTraits< wxRichTextCell >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCell >::parents[] = {"wx.wxRichTextBox", 0};
const int LunaTraits< wxRichTextCell >::hash = 86246155;
const int LunaTraits< wxRichTextCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextCell >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCell >::enumValues[] = {
	{0,0}
};


