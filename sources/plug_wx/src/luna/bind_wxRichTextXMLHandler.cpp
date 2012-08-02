#include <plug_common.h>

class luna_wrapper_wxRichTextXMLHandler {
public:
	typedef Luna< wxRichTextXMLHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRichTextXMLHandler* ptr= dynamic_cast< wxRichTextXMLHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextXMLHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextXMLHandler* LunaTraits< wxRichTextXMLHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxRichTextFileHandler::SetVisible(bool visible)

	// Abstract operators:
}

void LunaTraits< wxRichTextXMLHandler >::_bind_dtor(wxRichTextXMLHandler* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextXMLHandler >::className[] = "wxRichTextXMLHandler";
const char LunaTraits< wxRichTextXMLHandler >::fullName[] = "wxRichTextXMLHandler";
const char LunaTraits< wxRichTextXMLHandler >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextXMLHandler >::parents[] = {"wx.wxRichTextFileHandler", 0};
const int LunaTraits< wxRichTextXMLHandler >::hash = 54343960;
const int LunaTraits< wxRichTextXMLHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextXMLHandler >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextXMLHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextXMLHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextXMLHandler >::enumValues[] = {
	{0,0}
};


