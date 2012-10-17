#include <plug_common.h>

class luna_wrapper_wxKeyEvent {
public:
	typedef Luna< wxKeyEvent > luna_t;

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
		wxKeyEvent* ptr= dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxKeyEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsKeyInCategory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRawKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRawKeyFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoAllowNextEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNextEventAllowed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// int wxKeyEvent::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxKeyEvent::GetKeyCode() const function, expected prototype:\nint wxKeyEvent::GetKeyCode() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxKeyEvent::GetKeyCode() const");
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxKeyEvent::IsKeyInCategory(int category) const
	static int _bind_IsKeyInCategory(lua_State *L) {
		if (!_lg_typecheck_IsKeyInCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyEvent::IsKeyInCategory(int category) const function, expected prototype:\nbool wxKeyEvent::IsKeyInCategory(int category) const\nClass arguments details:\n");
		}

		int category=(int)lua_tointeger(L,2);

		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyEvent::IsKeyInCategory(int) const");
		}
		bool lret = self->IsKeyInCategory(category);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxKeyEvent::GetPosition() const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxKeyEvent::GetPosition() const function, expected prototype:\nwxPoint wxKeyEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxKeyEvent::GetPosition() const");
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxKeyEvent::GetPosition(long * x, long * y) const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyEvent::GetPosition(long * x, long * y) const function, expected prototype:\nvoid wxKeyEvent::GetPosition(long * x, long * y) const\nClass arguments details:\n");
		}

		long x=(long)lua_tointeger(L,2);
		long y=(long)lua_tointeger(L,3);

		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyEvent::GetPosition(long *, long *) const");
		}
		self->GetPosition(&x, &y);

		return 0;
	}

	// Overload binder for wxKeyEvent::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition()\n  GetPosition(long *, long *)\n");
		return 0;
	}

	// unsigned int wxKeyEvent::GetRawKeyCode() const
	static int _bind_GetRawKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetRawKeyCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxKeyEvent::GetRawKeyCode() const function, expected prototype:\nunsigned int wxKeyEvent::GetRawKeyCode() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxKeyEvent::GetRawKeyCode() const");
		}
		unsigned int lret = self->GetRawKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxKeyEvent::GetRawKeyFlags() const
	static int _bind_GetRawKeyFlags(lua_State *L) {
		if (!_lg_typecheck_GetRawKeyFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxKeyEvent::GetRawKeyFlags() const function, expected prototype:\nunsigned int wxKeyEvent::GetRawKeyFlags() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxKeyEvent::GetRawKeyFlags() const");
		}
		unsigned int lret = self->GetRawKeyFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxKeyEvent::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxKeyEvent::GetX() const function, expected prototype:\nint wxKeyEvent::GetX() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxKeyEvent::GetX() const");
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxKeyEvent::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxKeyEvent::GetY() const function, expected prototype:\nint wxKeyEvent::GetY() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxKeyEvent::GetY() const");
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxKeyEvent::DoAllowNextEvent()
	static int _bind_DoAllowNextEvent(lua_State *L) {
		if (!_lg_typecheck_DoAllowNextEvent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxKeyEvent::DoAllowNextEvent() function, expected prototype:\nvoid wxKeyEvent::DoAllowNextEvent()\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxKeyEvent::DoAllowNextEvent()");
		}
		self->DoAllowNextEvent();

		return 0;
	}

	// bool wxKeyEvent::IsNextEventAllowed() const
	static int _bind_IsNextEventAllowed(lua_State *L) {
		if (!_lg_typecheck_IsNextEventAllowed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxKeyEvent::IsNextEventAllowed() const function, expected prototype:\nbool wxKeyEvent::IsNextEventAllowed() const\nClass arguments details:\n");
		}


		wxKeyEvent* self=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxKeyEvent::IsNextEventAllowed() const");
		}
		bool lret = self->IsNextEventAllowed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxKeyEvent* LunaTraits< wxKeyEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxKeyEvent >::_bind_dtor(wxKeyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxKeyEvent >::className[] = "wxKeyEvent";
const char LunaTraits< wxKeyEvent >::fullName[] = "wxKeyEvent";
const char LunaTraits< wxKeyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxKeyEvent >::parents[] = {"wx.wxEvent", "wx.wxKeyboardState", 0};
const int LunaTraits< wxKeyEvent >::hash = 10397475;
const int LunaTraits< wxKeyEvent >::uniqueIDs[] = {56813631, 92036952,0};

luna_RegType LunaTraits< wxKeyEvent >::methods[] = {
	{"GetKeyCode", &luna_wrapper_wxKeyEvent::_bind_GetKeyCode},
	{"IsKeyInCategory", &luna_wrapper_wxKeyEvent::_bind_IsKeyInCategory},
	{"GetPosition", &luna_wrapper_wxKeyEvent::_bind_GetPosition},
	{"GetRawKeyCode", &luna_wrapper_wxKeyEvent::_bind_GetRawKeyCode},
	{"GetRawKeyFlags", &luna_wrapper_wxKeyEvent::_bind_GetRawKeyFlags},
	{"GetX", &luna_wrapper_wxKeyEvent::_bind_GetX},
	{"GetY", &luna_wrapper_wxKeyEvent::_bind_GetY},
	{"DoAllowNextEvent", &luna_wrapper_wxKeyEvent::_bind_DoAllowNextEvent},
	{"IsNextEventAllowed", &luna_wrapper_wxKeyEvent::_bind_IsNextEventAllowed},
	{"__eq", &luna_wrapper_wxKeyEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxKeyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxKeyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxKeyEvent >::enumValues[] = {
	{0,0}
};


