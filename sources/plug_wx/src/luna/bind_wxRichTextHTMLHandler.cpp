#include <plug_common.h>

class luna_wrapper_wxRichTextHTMLHandler {
public:
	typedef Luna< wxRichTextHTMLHandler > luna_t;

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
		wxRichTextHTMLHandler* ptr= dynamic_cast< wxRichTextHTMLHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextHTMLHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxRichTextHTMLHandler* LunaTraits< wxRichTextHTMLHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void wxRichTextFileHandler::SetVisible(bool visible)

	// Abstract operators:
}

void LunaTraits< wxRichTextHTMLHandler >::_bind_dtor(wxRichTextHTMLHandler* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextHTMLHandler >::className[] = "wxRichTextHTMLHandler";
const char LunaTraits< wxRichTextHTMLHandler >::fullName[] = "wxRichTextHTMLHandler";
const char LunaTraits< wxRichTextHTMLHandler >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextHTMLHandler >::parents[] = {"wx.wxRichTextFileHandler", 0};
const int LunaTraits< wxRichTextHTMLHandler >::hash = 22045096;
const int LunaTraits< wxRichTextHTMLHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextHTMLHandler >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextHTMLHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextHTMLHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextHTMLHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextHTMLHandler >::enumValues[] = {
	{0,0}
};


