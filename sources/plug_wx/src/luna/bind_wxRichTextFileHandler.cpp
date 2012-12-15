#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextFileHandler.h>

class luna_wrapper_wxRichTextFileHandler {
public:
	typedef Luna< wxRichTextFileHandler > luna_t;

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
		//wxRichTextFileHandler* ptr= dynamic_cast< wxRichTextFileHandler* >(Luna< wxObject >::check(L,1));
		wxRichTextFileHandler* ptr= luna_caster< wxObject, wxRichTextFileHandler >::cast(Luna< wxObject >::check(L,1));
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
	{"__eq", &luna_wrapper_wxRichTextFileHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextFileHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextFileHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextFileHandler >::enumValues[] = {
	{0,0}
};


