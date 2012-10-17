#include <plug_common.h>

class luna_wrapper_wxDialUpEvent {
public:
	typedef Luna< wxDialUpEvent > luna_t;

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
		wxDialUpEvent* ptr= dynamic_cast< wxDialUpEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDialUpEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_IsConnectedEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOwnEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDialUpEvent::IsConnectedEvent() const
	static int _bind_IsConnectedEvent(lua_State *L) {
		if (!_lg_typecheck_IsConnectedEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialUpEvent::IsConnectedEvent() const function, expected prototype:\nbool wxDialUpEvent::IsConnectedEvent() const\nClass arguments details:\n");
		}


		wxDialUpEvent* self=dynamic_cast< wxDialUpEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialUpEvent::IsConnectedEvent() const");
		}
		bool lret = self->IsConnectedEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpEvent::IsOwnEvent() const
	static int _bind_IsOwnEvent(lua_State *L) {
		if (!_lg_typecheck_IsOwnEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialUpEvent::IsOwnEvent() const function, expected prototype:\nbool wxDialUpEvent::IsOwnEvent() const\nClass arguments details:\n");
		}


		wxDialUpEvent* self=dynamic_cast< wxDialUpEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialUpEvent::IsOwnEvent() const");
		}
		bool lret = self->IsOwnEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDialUpEvent* LunaTraits< wxDialUpEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxDialUpEvent >::_bind_dtor(wxDialUpEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDialUpEvent >::className[] = "wxDialUpEvent";
const char LunaTraits< wxDialUpEvent >::fullName[] = "wxDialUpEvent";
const char LunaTraits< wxDialUpEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDialUpEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxDialUpEvent >::hash = 78154200;
const int LunaTraits< wxDialUpEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDialUpEvent >::methods[] = {
	{"IsConnectedEvent", &luna_wrapper_wxDialUpEvent::_bind_IsConnectedEvent},
	{"IsOwnEvent", &luna_wrapper_wxDialUpEvent::_bind_IsOwnEvent},
	{"__eq", &luna_wrapper_wxDialUpEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDialUpEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDialUpEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDialUpEvent >::enumValues[] = {
	{0,0}
};


