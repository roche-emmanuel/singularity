#include <plug_common.h>

class luna_wrapper_wxHtmlWinTagHandler {
public:
	typedef Luna< wxHtmlWinTagHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHtmlWinTagHandler* ptr= dynamic_cast< wxHtmlWinTagHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlWinTagHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxHtmlWinTagHandler* LunaTraits< wxHtmlWinTagHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxString wxHtmlTagHandler::GetSupportedTags()
	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)

	// Abstract operators:
}

void LunaTraits< wxHtmlWinTagHandler >::_bind_dtor(wxHtmlWinTagHandler* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWinTagHandler >::className[] = "wxHtmlWinTagHandler";
const char LunaTraits< wxHtmlWinTagHandler >::fullName[] = "wxHtmlWinTagHandler";
const char LunaTraits< wxHtmlWinTagHandler >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWinTagHandler >::parents[] = {"wx.wxHtmlTagHandler", 0};
const int LunaTraits< wxHtmlWinTagHandler >::hash = 46577631;
const int LunaTraits< wxHtmlWinTagHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlWinTagHandler >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWinTagHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlWinTagHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWinTagHandler >::enumValues[] = {
	{0,0}
};


