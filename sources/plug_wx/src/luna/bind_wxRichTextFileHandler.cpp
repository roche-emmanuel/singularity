#include <plug_common.h>

class luna_wrapper_wxRichTextFileHandler {
public:
	typedef Luna< wxRichTextFileHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextFileHandler* ptr= dynamic_cast< wxRichTextFileHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextFileHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextFileHandler* LunaTraits< wxRichTextFileHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxRichTextFileHandler::SetVisible(bool visible)

	// Abstract operators:
}

void LunaTraits< wxRichTextFileHandler >::_bind_dtor(wxRichTextFileHandler* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextFileHandler >::className[] = "wxRichTextFileHandler";
const char LunaTraits< wxRichTextFileHandler >::fullName[] = "wxRichTextFileHandler";
const char LunaTraits< wxRichTextFileHandler >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextFileHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextFileHandler >::hash = 2447421;
const int LunaTraits< wxRichTextFileHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextFileHandler >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFileHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFileHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFileHandler >::enumValues[] = {
	{0,0}
};


