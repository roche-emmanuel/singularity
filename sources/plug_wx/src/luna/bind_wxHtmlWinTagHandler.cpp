#include <plug_common.h>

class luna_wrapper_wxHtmlWinTagHandler {
public:
	typedef Luna< wxHtmlWinTagHandler > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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
	{"__eq", &luna_wrapper_wxHtmlWinTagHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWinTagHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlWinTagHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWinTagHandler >::enumValues[] = {
	{0,0}
};


