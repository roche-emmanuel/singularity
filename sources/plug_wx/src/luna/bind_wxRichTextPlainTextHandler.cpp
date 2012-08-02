#include <plug_common.h>

class luna_wrapper_wxRichTextPlainTextHandler {
public:
	typedef Luna< wxRichTextPlainTextHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextPlainTextHandler* ptr= dynamic_cast< wxRichTextPlainTextHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextPlainTextHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextPlainTextHandler* LunaTraits< wxRichTextPlainTextHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxRichTextFileHandler::SetVisible(bool visible)

	// Abstract operators:
}

void LunaTraits< wxRichTextPlainTextHandler >::_bind_dtor(wxRichTextPlainTextHandler* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextPlainTextHandler >::className[] = "wxRichTextPlainTextHandler";
const char LunaTraits< wxRichTextPlainTextHandler >::fullName[] = "wxRichTextPlainTextHandler";
const char LunaTraits< wxRichTextPlainTextHandler >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextPlainTextHandler >::parents[] = {"wx.wxRichTextFileHandler", 0};
const int LunaTraits< wxRichTextPlainTextHandler >::hash = 16628007;
const int LunaTraits< wxRichTextPlainTextHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextPlainTextHandler >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextPlainTextHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextPlainTextHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextPlainTextHandler >::enumValues[] = {
	{0,0}
};


