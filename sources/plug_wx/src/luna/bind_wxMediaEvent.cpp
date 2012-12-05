#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMediaEvent.h>

class luna_wrapper_wxMediaEvent {
public:
	typedef Luna< wxMediaEvent > luna_t;

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
		wxMediaEvent* ptr= dynamic_cast< wxMediaEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMediaEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMediaEvent* LunaTraits< wxMediaEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMediaEvent >::_bind_dtor(wxMediaEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMediaEvent >::className[] = "wxMediaEvent";
const char LunaTraits< wxMediaEvent >::fullName[] = "wxMediaEvent";
const char LunaTraits< wxMediaEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMediaEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxMediaEvent >::hash = 87188630;
const int LunaTraits< wxMediaEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMediaEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxMediaEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMediaEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMediaEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMediaEvent >::enumValues[] = {
	{0,0}
};


