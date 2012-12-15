#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextEvent.h>

class luna_wrapper_wxRichTextEvent {
public:
	typedef Luna< wxRichTextEvent > luna_t;

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
		//wxRichTextEvent* ptr= dynamic_cast< wxRichTextEvent* >(Luna< wxObject >::check(L,1));
		wxRichTextEvent* ptr= luna_caster< wxObject, wxRichTextEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextEvent >::push(L,ptr,false);
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

wxRichTextEvent* LunaTraits< wxRichTextEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextEvent >::_bind_dtor(wxRichTextEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextEvent >::className[] = "wxRichTextEvent";
const char LunaTraits< wxRichTextEvent >::fullName[] = "wxRichTextEvent";
const char LunaTraits< wxRichTextEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxRichTextEvent >::hash = 75977355;
const int LunaTraits< wxRichTextEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxRichTextEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextEvent >::enumValues[] = {
	{0,0}
};


