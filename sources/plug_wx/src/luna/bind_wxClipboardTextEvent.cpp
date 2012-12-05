#include <plug_common.h>

#include <luna/wrappers/wrapper_wxClipboardTextEvent.h>

class luna_wrapper_wxClipboardTextEvent {
public:
	typedef Luna< wxClipboardTextEvent > luna_t;

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
		wxClipboardTextEvent* ptr= dynamic_cast< wxClipboardTextEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClipboardTextEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxClipboardTextEvent* LunaTraits< wxClipboardTextEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxClipboardTextEvent >::_bind_dtor(wxClipboardTextEvent* obj) {
	delete obj;
}

const char LunaTraits< wxClipboardTextEvent >::className[] = "wxClipboardTextEvent";
const char LunaTraits< wxClipboardTextEvent >::fullName[] = "wxClipboardTextEvent";
const char LunaTraits< wxClipboardTextEvent >::moduleName[] = "wx";
const char* LunaTraits< wxClipboardTextEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxClipboardTextEvent >::hash = 44745418;
const int LunaTraits< wxClipboardTextEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClipboardTextEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxClipboardTextEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxClipboardTextEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxClipboardTextEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClipboardTextEvent >::enumValues[] = {
	{0,0}
};


