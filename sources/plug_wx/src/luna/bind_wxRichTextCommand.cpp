#include <plug_common.h>

class luna_wrapper_wxRichTextCommand {
public:
	typedef Luna< wxRichTextCommand > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextCommand* ptr= dynamic_cast< wxRichTextCommand* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCommand >::push(L,ptr,false);
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

wxRichTextCommand* LunaTraits< wxRichTextCommand >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCommand >::_bind_dtor(wxRichTextCommand* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCommand >::className[] = "wxRichTextCommand";
const char LunaTraits< wxRichTextCommand >::fullName[] = "wxRichTextCommand";
const char LunaTraits< wxRichTextCommand >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCommand >::parents[] = {"wx.wxCommand", 0};
const int LunaTraits< wxRichTextCommand >::hash = 46158976;
const int LunaTraits< wxRichTextCommand >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextCommand >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCommand >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCommand::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCommand >::enumValues[] = {
	{0,0}
};


