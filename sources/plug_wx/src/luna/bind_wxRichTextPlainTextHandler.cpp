#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextPlainTextHandler.h>

class luna_wrapper_wxRichTextPlainTextHandler {
public:
	typedef Luna< wxRichTextPlainTextHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxRichTextPlainTextHandler* ptr= dynamic_cast< wxRichTextPlainTextHandler* >(Luna< wxObject >::check(L,1));
		wxRichTextPlainTextHandler* ptr= luna_caster< wxObject, wxRichTextPlainTextHandler >::cast(Luna< wxObject >::check(L,1));
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
	{"__eq", &luna_wrapper_wxRichTextPlainTextHandler::_bind___eq},
	{"getTable", &luna_wrapper_wxRichTextPlainTextHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextPlainTextHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextPlainTextHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextPlainTextHandler >::enumValues[] = {
	{0,0}
};


