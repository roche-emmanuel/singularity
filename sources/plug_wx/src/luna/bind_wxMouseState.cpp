#include <plug_common.h>

class luna_wrapper_wxMouseState {
public:
	typedef Luna< wxMouseState > luna_t;

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

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_LeftIsDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MiddleIsDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RightIsDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux1IsDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux2IsDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLeftDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMiddleDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRightDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAux1Down(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAux2Down(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMouseState::wxMouseState()
	static wxMouseState* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMouseState::wxMouseState() function, expected prototype:\nwxMouseState::wxMouseState()\nClass arguments details:\n");
		}


		return new wxMouseState();
	}


	// Function binds:
	// int wxMouseState::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseState::GetX() const function, expected prototype:\nint wxMouseState::GetX() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseState::GetX() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMouseState::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseState::GetY() const function, expected prototype:\nint wxMouseState::GetY() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseState::GetY() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxMouseState::GetPosition() const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxMouseState::GetPosition() const function, expected prototype:\nwxPoint wxMouseState::GetPosition() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxMouseState::GetPosition() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxMouseState::GetPosition(int * x, int * y) const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::GetPosition(int * x, int * y) const function, expected prototype:\nvoid wxMouseState::GetPosition(int * x, int * y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::GetPosition(int *, int *) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->GetPosition(&x, &y);

		return 0;
	}

	// Overload binder for wxMouseState::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition()\n  GetPosition(int *, int *)\n");
		return 0;
	}

	// bool wxMouseState::LeftIsDown() const
	static int _bind_LeftIsDown(lua_State *L) {
		if (!_lg_typecheck_LeftIsDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseState::LeftIsDown() const function, expected prototype:\nbool wxMouseState::LeftIsDown() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseState::LeftIsDown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->LeftIsDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseState::MiddleIsDown() const
	static int _bind_MiddleIsDown(lua_State *L) {
		if (!_lg_typecheck_MiddleIsDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseState::MiddleIsDown() const function, expected prototype:\nbool wxMouseState::MiddleIsDown() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseState::MiddleIsDown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->MiddleIsDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseState::RightIsDown() const
	static int _bind_RightIsDown(lua_State *L) {
		if (!_lg_typecheck_RightIsDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseState::RightIsDown() const function, expected prototype:\nbool wxMouseState::RightIsDown() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseState::RightIsDown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->RightIsDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseState::Aux1IsDown() const
	static int _bind_Aux1IsDown(lua_State *L) {
		if (!_lg_typecheck_Aux1IsDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseState::Aux1IsDown() const function, expected prototype:\nbool wxMouseState::Aux1IsDown() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseState::Aux1IsDown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Aux1IsDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseState::Aux2IsDown() const
	static int _bind_Aux2IsDown(lua_State *L) {
		if (!_lg_typecheck_Aux2IsDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseState::Aux2IsDown() const function, expected prototype:\nbool wxMouseState::Aux2IsDown() const\nClass arguments details:\n");
		}


		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseState::Aux2IsDown() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->Aux2IsDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMouseState::SetX(int x)
	static int _bind_SetX(lua_State *L) {
		if (!_lg_typecheck_SetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetX(int x) function, expected prototype:\nvoid wxMouseState::SetX(int x)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetX(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetX(x);

		return 0;
	}

	// void wxMouseState::SetY(int y)
	static int _bind_SetY(lua_State *L) {
		if (!_lg_typecheck_SetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetY(int y) function, expected prototype:\nvoid wxMouseState::SetY(int y)\nClass arguments details:\n");
		}

		int y=(int)lua_tointeger(L,2);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetY(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetY(y);

		return 0;
	}

	// void wxMouseState::SetPosition(wxPoint pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetPosition(wxPoint pos) function, expected prototype:\nvoid wxMouseState::SetPosition(wxPoint pos)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMouseState::SetPosition function");
		}
		wxPoint pos=*pos_ptr;

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetPosition(wxPoint). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetPosition(pos);

		return 0;
	}

	// void wxMouseState::SetLeftDown(bool down)
	static int _bind_SetLeftDown(lua_State *L) {
		if (!_lg_typecheck_SetLeftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetLeftDown(bool down) function, expected prototype:\nvoid wxMouseState::SetLeftDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetLeftDown(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetLeftDown(down);

		return 0;
	}

	// void wxMouseState::SetMiddleDown(bool down)
	static int _bind_SetMiddleDown(lua_State *L) {
		if (!_lg_typecheck_SetMiddleDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetMiddleDown(bool down) function, expected prototype:\nvoid wxMouseState::SetMiddleDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetMiddleDown(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetMiddleDown(down);

		return 0;
	}

	// void wxMouseState::SetRightDown(bool down)
	static int _bind_SetRightDown(lua_State *L) {
		if (!_lg_typecheck_SetRightDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetRightDown(bool down) function, expected prototype:\nvoid wxMouseState::SetRightDown(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetRightDown(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetRightDown(down);

		return 0;
	}

	// void wxMouseState::SetAux1Down(bool down)
	static int _bind_SetAux1Down(lua_State *L) {
		if (!_lg_typecheck_SetAux1Down(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetAux1Down(bool down) function, expected prototype:\nvoid wxMouseState::SetAux1Down(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetAux1Down(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetAux1Down(down);

		return 0;
	}

	// void wxMouseState::SetAux2Down(bool down)
	static int _bind_SetAux2Down(lua_State *L) {
		if (!_lg_typecheck_SetAux2Down(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetAux2Down(bool down) function, expected prototype:\nvoid wxMouseState::SetAux2Down(bool down)\nClass arguments details:\n");
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetAux2Down(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetAux2Down(down);

		return 0;
	}

	// void wxMouseState::SetState(const wxMouseState & state)
	static int _bind_SetState(lua_State *L) {
		if (!_lg_typecheck_SetState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMouseState::SetState(const wxMouseState & state) function, expected prototype:\nvoid wxMouseState::SetState(const wxMouseState & state)\nClass arguments details:\narg 1 ID = 92036952\n");
		}

		const wxMouseState* state_ptr=(Luna< wxObject >::checkSubType< wxMouseState >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in wxMouseState::SetState function");
		}
		const wxMouseState & state=*state_ptr;

		wxMouseState* self=Luna< wxObject >::checkSubType< wxMouseState >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMouseState::SetState(const wxMouseState &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetState(state);

		return 0;
	}


	// Operator binds:

};

wxMouseState* LunaTraits< wxMouseState >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMouseState::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxMouseState >::_bind_dtor(wxMouseState* obj) {
	delete obj;
}

const char LunaTraits< wxMouseState >::className[] = "wxMouseState";
const char LunaTraits< wxMouseState >::fullName[] = "wxMouseState";
const char LunaTraits< wxMouseState >::moduleName[] = "wx";
const char* LunaTraits< wxMouseState >::parents[] = {"wx.wxKeyboardState", 0};
const int LunaTraits< wxMouseState >::hash = 13611458;
const int LunaTraits< wxMouseState >::uniqueIDs[] = {92036952,0};

luna_RegType LunaTraits< wxMouseState >::methods[] = {
	{"GetX", &luna_wrapper_wxMouseState::_bind_GetX},
	{"GetY", &luna_wrapper_wxMouseState::_bind_GetY},
	{"GetPosition", &luna_wrapper_wxMouseState::_bind_GetPosition},
	{"LeftIsDown", &luna_wrapper_wxMouseState::_bind_LeftIsDown},
	{"MiddleIsDown", &luna_wrapper_wxMouseState::_bind_MiddleIsDown},
	{"RightIsDown", &luna_wrapper_wxMouseState::_bind_RightIsDown},
	{"Aux1IsDown", &luna_wrapper_wxMouseState::_bind_Aux1IsDown},
	{"Aux2IsDown", &luna_wrapper_wxMouseState::_bind_Aux2IsDown},
	{"SetX", &luna_wrapper_wxMouseState::_bind_SetX},
	{"SetY", &luna_wrapper_wxMouseState::_bind_SetY},
	{"SetPosition", &luna_wrapper_wxMouseState::_bind_SetPosition},
	{"SetLeftDown", &luna_wrapper_wxMouseState::_bind_SetLeftDown},
	{"SetMiddleDown", &luna_wrapper_wxMouseState::_bind_SetMiddleDown},
	{"SetRightDown", &luna_wrapper_wxMouseState::_bind_SetRightDown},
	{"SetAux1Down", &luna_wrapper_wxMouseState::_bind_SetAux1Down},
	{"SetAux2Down", &luna_wrapper_wxMouseState::_bind_SetAux2Down},
	{"SetState", &luna_wrapper_wxMouseState::_bind_SetState},
	{"__eq", &luna_wrapper_wxMouseState::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseState >::enumValues[] = {
	{0,0}
};


