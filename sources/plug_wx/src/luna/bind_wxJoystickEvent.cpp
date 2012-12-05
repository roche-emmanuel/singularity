#include <plug_common.h>

#include <luna/wrappers/wrapper_wxJoystickEvent.h>

class luna_wrapper_wxJoystickEvent {
public:
	typedef Luna< wxJoystickEvent > luna_t;

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
		wxJoystickEvent* ptr= dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxJoystickEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_ButtonDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ButtonIsDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ButtonUp(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetButtonChange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButtonState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJoystick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsZMove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxJoystickEvent::ButtonDown(int button = ::wxJOY_BUTTON_ANY) const
	static int _bind_ButtonDown(lua_State *L) {
		if (!_lg_typecheck_ButtonDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::ButtonDown(int button = ::wxJOY_BUTTON_ANY) const function, expected prototype:\nbool wxJoystickEvent::ButtonDown(int button = ::wxJOY_BUTTON_ANY) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : ::wxJOY_BUTTON_ANY;

		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::ButtonDown(int) const");
		}
		bool lret = self->ButtonDown(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::ButtonIsDown(int button = ::wxJOY_BUTTON_ANY) const
	static int _bind_ButtonIsDown(lua_State *L) {
		if (!_lg_typecheck_ButtonIsDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::ButtonIsDown(int button = ::wxJOY_BUTTON_ANY) const function, expected prototype:\nbool wxJoystickEvent::ButtonIsDown(int button = ::wxJOY_BUTTON_ANY) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : ::wxJOY_BUTTON_ANY;

		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::ButtonIsDown(int) const");
		}
		bool lret = self->ButtonIsDown(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::ButtonUp(int button = ::wxJOY_BUTTON_ANY) const
	static int _bind_ButtonUp(lua_State *L) {
		if (!_lg_typecheck_ButtonUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::ButtonUp(int button = ::wxJOY_BUTTON_ANY) const function, expected prototype:\nbool wxJoystickEvent::ButtonUp(int button = ::wxJOY_BUTTON_ANY) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : ::wxJOY_BUTTON_ANY;

		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::ButtonUp(int) const");
		}
		bool lret = self->ButtonUp(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxJoystickEvent::GetButtonChange() const
	static int _bind_GetButtonChange(lua_State *L) {
		if (!_lg_typecheck_GetButtonChange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetButtonChange() const function, expected prototype:\nint wxJoystickEvent::GetButtonChange() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetButtonChange() const");
		}
		int lret = self->GetButtonChange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystickEvent::GetButtonState() const
	static int _bind_GetButtonState(lua_State *L) {
		if (!_lg_typecheck_GetButtonState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetButtonState() const function, expected prototype:\nint wxJoystickEvent::GetButtonState() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetButtonState() const");
		}
		int lret = self->GetButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystickEvent::GetJoystick() const
	static int _bind_GetJoystick(lua_State *L) {
		if (!_lg_typecheck_GetJoystick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetJoystick() const function, expected prototype:\nint wxJoystickEvent::GetJoystick() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetJoystick() const");
		}
		int lret = self->GetJoystick();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxJoystickEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxJoystickEvent::GetPosition() const function, expected prototype:\nwxPoint wxJoystickEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxJoystickEvent::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxJoystickEvent::GetZPosition() const
	static int _bind_GetZPosition(lua_State *L) {
		if (!_lg_typecheck_GetZPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxJoystickEvent::GetZPosition() const function, expected prototype:\nint wxJoystickEvent::GetZPosition() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxJoystickEvent::GetZPosition() const");
		}
		int lret = self->GetZPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxJoystickEvent::IsButton() const
	static int _bind_IsButton(lua_State *L) {
		if (!_lg_typecheck_IsButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::IsButton() const function, expected prototype:\nbool wxJoystickEvent::IsButton() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::IsButton() const");
		}
		bool lret = self->IsButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::IsMove() const
	static int _bind_IsMove(lua_State *L) {
		if (!_lg_typecheck_IsMove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::IsMove() const function, expected prototype:\nbool wxJoystickEvent::IsMove() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::IsMove() const");
		}
		bool lret = self->IsMove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystickEvent::IsZMove() const
	static int _bind_IsZMove(lua_State *L) {
		if (!_lg_typecheck_IsZMove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxJoystickEvent::IsZMove() const function, expected prototype:\nbool wxJoystickEvent::IsZMove() const\nClass arguments details:\n");
		}


		wxJoystickEvent* self=dynamic_cast< wxJoystickEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxJoystickEvent::IsZMove() const");
		}
		bool lret = self->IsZMove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxJoystickEvent* LunaTraits< wxJoystickEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxJoystickEvent >::_bind_dtor(wxJoystickEvent* obj) {
	delete obj;
}

const char LunaTraits< wxJoystickEvent >::className[] = "wxJoystickEvent";
const char LunaTraits< wxJoystickEvent >::fullName[] = "wxJoystickEvent";
const char LunaTraits< wxJoystickEvent >::moduleName[] = "wx";
const char* LunaTraits< wxJoystickEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxJoystickEvent >::hash = 68693787;
const int LunaTraits< wxJoystickEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxJoystickEvent >::methods[] = {
	{"ButtonDown", &luna_wrapper_wxJoystickEvent::_bind_ButtonDown},
	{"ButtonIsDown", &luna_wrapper_wxJoystickEvent::_bind_ButtonIsDown},
	{"ButtonUp", &luna_wrapper_wxJoystickEvent::_bind_ButtonUp},
	{"GetButtonChange", &luna_wrapper_wxJoystickEvent::_bind_GetButtonChange},
	{"GetButtonState", &luna_wrapper_wxJoystickEvent::_bind_GetButtonState},
	{"GetJoystick", &luna_wrapper_wxJoystickEvent::_bind_GetJoystick},
	{"GetPosition", &luna_wrapper_wxJoystickEvent::_bind_GetPosition},
	{"GetZPosition", &luna_wrapper_wxJoystickEvent::_bind_GetZPosition},
	{"IsButton", &luna_wrapper_wxJoystickEvent::_bind_IsButton},
	{"IsMove", &luna_wrapper_wxJoystickEvent::_bind_IsMove},
	{"IsZMove", &luna_wrapper_wxJoystickEvent::_bind_IsZMove},
	{"__eq", &luna_wrapper_wxJoystickEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxJoystickEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxJoystickEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxJoystickEvent >::enumValues[] = {
	{0,0}
};


