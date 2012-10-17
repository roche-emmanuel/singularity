#include <plug_common.h>

class luna_wrapper_wxSocketEvent {
public:
	typedef Luna< wxSocketEvent > luna_t;

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
		wxSocketEvent* ptr= dynamic_cast< wxSocketEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSocket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSocketEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void * wxSocketEvent::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxSocketEvent::GetClientData() const function, expected prototype:\nvoid * wxSocketEvent::GetClientData() const\nClass arguments details:\n");
		}


		wxSocketEvent* self=dynamic_cast< wxSocketEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxSocketEvent::GetClientData() const");
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxSocketBase * wxSocketEvent::GetSocket() const
	static int _bind_GetSocket(lua_State *L) {
		if (!_lg_typecheck_GetSocket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSocketBase * wxSocketEvent::GetSocket() const function, expected prototype:\nwxSocketBase * wxSocketEvent::GetSocket() const\nClass arguments details:\n");
		}


		wxSocketEvent* self=dynamic_cast< wxSocketEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSocketBase * wxSocketEvent::GetSocket() const");
		}
		wxSocketBase * lret = self->GetSocket();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// wxSocketNotify wxSocketEvent::GetSocketEvent() const
	static int _bind_GetSocketEvent(lua_State *L) {
		if (!_lg_typecheck_GetSocketEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSocketNotify wxSocketEvent::GetSocketEvent() const function, expected prototype:\nwxSocketNotify wxSocketEvent::GetSocketEvent() const\nClass arguments details:\n");
		}


		wxSocketEvent* self=dynamic_cast< wxSocketEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSocketNotify wxSocketEvent::GetSocketEvent() const");
		}
		wxSocketNotify lret = self->GetSocketEvent();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'wxSocketNotify'
		////////////////////////////////////////////////////////////////////

		return 1;
	}


	// Operator binds:

};

wxSocketEvent* LunaTraits< wxSocketEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxSocketEvent >::_bind_dtor(wxSocketEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSocketEvent >::className[] = "wxSocketEvent";
const char LunaTraits< wxSocketEvent >::fullName[] = "wxSocketEvent";
const char LunaTraits< wxSocketEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSocketEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSocketEvent >::hash = 93561938;
const int LunaTraits< wxSocketEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketEvent >::methods[] = {
	{"GetClientData", &luna_wrapper_wxSocketEvent::_bind_GetClientData},
	{"GetSocket", &luna_wrapper_wxSocketEvent::_bind_GetSocket},
	{"GetSocketEvent", &luna_wrapper_wxSocketEvent::_bind_GetSocketEvent},
	{"__eq", &luna_wrapper_wxSocketEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketEvent >::enumValues[] = {
	{0,0}
};


