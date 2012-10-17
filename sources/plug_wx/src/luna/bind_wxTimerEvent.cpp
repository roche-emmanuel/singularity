#include <plug_common.h>

class luna_wrapper_wxTimerEvent {
public:
	typedef Luna< wxTimerEvent > luna_t;

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
		wxTimerEvent* ptr= dynamic_cast< wxTimerEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTimerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTimer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxTimerEvent::GetInterval() const
	static int _bind_GetInterval(lua_State *L) {
		if (!_lg_typecheck_GetInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTimerEvent::GetInterval() const function, expected prototype:\nint wxTimerEvent::GetInterval() const\nClass arguments details:\n");
		}


		wxTimerEvent* self=dynamic_cast< wxTimerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTimerEvent::GetInterval() const");
		}
		int lret = self->GetInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTimer & wxTimerEvent::GetTimer() const
	static int _bind_GetTimer(lua_State *L) {
		if (!_lg_typecheck_GetTimer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTimer & wxTimerEvent::GetTimer() const function, expected prototype:\nwxTimer & wxTimerEvent::GetTimer() const\nClass arguments details:\n");
		}


		wxTimerEvent* self=dynamic_cast< wxTimerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxTimer & wxTimerEvent::GetTimer() const");
		}
		const wxTimer* lret = &self->GetTimer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTimer >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxTimerEvent* LunaTraits< wxTimerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxTimerEvent >::_bind_dtor(wxTimerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTimerEvent >::className[] = "wxTimerEvent";
const char LunaTraits< wxTimerEvent >::fullName[] = "wxTimerEvent";
const char LunaTraits< wxTimerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTimerEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxTimerEvent >::hash = 41551325;
const int LunaTraits< wxTimerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTimerEvent >::methods[] = {
	{"GetInterval", &luna_wrapper_wxTimerEvent::_bind_GetInterval},
	{"GetTimer", &luna_wrapper_wxTimerEvent::_bind_GetTimer},
	{"__eq", &luna_wrapper_wxTimerEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTimerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTimerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTimerEvent >::enumValues[] = {
	{0,0}
};


