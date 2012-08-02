#include <plug_common.h>

class luna_wrapper_wxMouseEvent {
public:
	typedef Luna< wxMouseEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMouseEvent* ptr= dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Aux1DClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux1Down(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux1Up(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux2DClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux2Down(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Aux2Up(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Button(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ButtonDClick(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ButtonDown(lua_State *L) {
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

	inline static bool _lg_typecheck_Dragging(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Entering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClickCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLinesPerAction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLogicalPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWheelDelta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWheelRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWheelAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPageScroll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Leaving(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LeftDClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LeftDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LeftUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MiddleDClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MiddleDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MiddleUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Moving(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RightDClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RightDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RightUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxMouseEvent::Aux1DClick() const
	static int _bind_Aux1DClick(lua_State *L) {
		if (!_lg_typecheck_Aux1DClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Aux1DClick() const function, expected prototype:\nbool wxMouseEvent::Aux1DClick() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Aux1DClick() const");
		}
		bool lret = self->Aux1DClick();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Aux1Down() const
	static int _bind_Aux1Down(lua_State *L) {
		if (!_lg_typecheck_Aux1Down(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Aux1Down() const function, expected prototype:\nbool wxMouseEvent::Aux1Down() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Aux1Down() const");
		}
		bool lret = self->Aux1Down();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Aux1Up() const
	static int _bind_Aux1Up(lua_State *L) {
		if (!_lg_typecheck_Aux1Up(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Aux1Up() const function, expected prototype:\nbool wxMouseEvent::Aux1Up() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Aux1Up() const");
		}
		bool lret = self->Aux1Up();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Aux2DClick() const
	static int _bind_Aux2DClick(lua_State *L) {
		if (!_lg_typecheck_Aux2DClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Aux2DClick() const function, expected prototype:\nbool wxMouseEvent::Aux2DClick() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Aux2DClick() const");
		}
		bool lret = self->Aux2DClick();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Aux2Down() const
	static int _bind_Aux2Down(lua_State *L) {
		if (!_lg_typecheck_Aux2Down(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Aux2Down() const function, expected prototype:\nbool wxMouseEvent::Aux2Down() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Aux2Down() const");
		}
		bool lret = self->Aux2Down();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Aux2Up() const
	static int _bind_Aux2Up(lua_State *L) {
		if (!_lg_typecheck_Aux2Up(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Aux2Up() const function, expected prototype:\nbool wxMouseEvent::Aux2Up() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Aux2Up() const");
		}
		bool lret = self->Aux2Up();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Button(wxMouseButton but) const
	static int _bind_Button(lua_State *L) {
		if (!_lg_typecheck_Button(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Button(wxMouseButton but) const function, expected prototype:\nbool wxMouseEvent::Button(wxMouseButton but) const\nClass arguments details:\n");
		}

		wxMouseButton but=(wxMouseButton)lua_tointeger(L,2);

		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Button(wxMouseButton) const");
		}
		bool lret = self->Button(but);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::ButtonDClick(wxMouseButton but = wxMOUSE_BTN_ANY) const
	static int _bind_ButtonDClick(lua_State *L) {
		if (!_lg_typecheck_ButtonDClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::ButtonDClick(wxMouseButton but = wxMOUSE_BTN_ANY) const function, expected prototype:\nbool wxMouseEvent::ButtonDClick(wxMouseButton but = wxMOUSE_BTN_ANY) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxMouseButton but=luatop>1 ? (wxMouseButton)lua_tointeger(L,2) : wxMOUSE_BTN_ANY;

		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::ButtonDClick(wxMouseButton) const");
		}
		bool lret = self->ButtonDClick(but);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::ButtonDown(wxMouseButton but = wxMOUSE_BTN_ANY) const
	static int _bind_ButtonDown(lua_State *L) {
		if (!_lg_typecheck_ButtonDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::ButtonDown(wxMouseButton but = wxMOUSE_BTN_ANY) const function, expected prototype:\nbool wxMouseEvent::ButtonDown(wxMouseButton but = wxMOUSE_BTN_ANY) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxMouseButton but=luatop>1 ? (wxMouseButton)lua_tointeger(L,2) : wxMOUSE_BTN_ANY;

		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::ButtonDown(wxMouseButton) const");
		}
		bool lret = self->ButtonDown(but);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::ButtonUp(wxMouseButton but = wxMOUSE_BTN_ANY) const
	static int _bind_ButtonUp(lua_State *L) {
		if (!_lg_typecheck_ButtonUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::ButtonUp(wxMouseButton but = wxMOUSE_BTN_ANY) const function, expected prototype:\nbool wxMouseEvent::ButtonUp(wxMouseButton but = wxMOUSE_BTN_ANY) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxMouseButton but=luatop>1 ? (wxMouseButton)lua_tointeger(L,2) : wxMOUSE_BTN_ANY;

		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::ButtonUp(wxMouseButton) const");
		}
		bool lret = self->ButtonUp(but);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Dragging() const
	static int _bind_Dragging(lua_State *L) {
		if (!_lg_typecheck_Dragging(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Dragging() const function, expected prototype:\nbool wxMouseEvent::Dragging() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Dragging() const");
		}
		bool lret = self->Dragging();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Entering() const
	static int _bind_Entering(lua_State *L) {
		if (!_lg_typecheck_Entering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Entering() const function, expected prototype:\nbool wxMouseEvent::Entering() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Entering() const");
		}
		bool lret = self->Entering();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxMouseEvent::GetButton() const
	static int _bind_GetButton(lua_State *L) {
		if (!_lg_typecheck_GetButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseEvent::GetButton() const function, expected prototype:\nint wxMouseEvent::GetButton() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseEvent::GetButton() const");
		}
		int lret = self->GetButton();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMouseEvent::GetClickCount() const
	static int _bind_GetClickCount(lua_State *L) {
		if (!_lg_typecheck_GetClickCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseEvent::GetClickCount() const function, expected prototype:\nint wxMouseEvent::GetClickCount() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseEvent::GetClickCount() const");
		}
		int lret = self->GetClickCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMouseEvent::GetLinesPerAction() const
	static int _bind_GetLinesPerAction(lua_State *L) {
		if (!_lg_typecheck_GetLinesPerAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseEvent::GetLinesPerAction() const function, expected prototype:\nint wxMouseEvent::GetLinesPerAction() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseEvent::GetLinesPerAction() const");
		}
		int lret = self->GetLinesPerAction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxMouseEvent::GetLogicalPosition(const wxDC & dc) const
	static int _bind_GetLogicalPosition(lua_State *L) {
		if (!_lg_typecheck_GetLogicalPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPoint wxMouseEvent::GetLogicalPosition(const wxDC & dc) const function, expected prototype:\nwxPoint wxMouseEvent::GetLogicalPosition(const wxDC & dc) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxDC* dc_ptr=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxMouseEvent::GetLogicalPosition function");
		}
		const wxDC & dc=*dc_ptr;

		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPoint wxMouseEvent::GetLogicalPosition(const wxDC &) const");
		}
		wxPoint stack_lret = self->GetLogicalPosition(dc);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxMouseEvent::GetWheelDelta() const
	static int _bind_GetWheelDelta(lua_State *L) {
		if (!_lg_typecheck_GetWheelDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseEvent::GetWheelDelta() const function, expected prototype:\nint wxMouseEvent::GetWheelDelta() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseEvent::GetWheelDelta() const");
		}
		int lret = self->GetWheelDelta();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMouseEvent::GetWheelRotation() const
	static int _bind_GetWheelRotation(lua_State *L) {
		if (!_lg_typecheck_GetWheelRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseEvent::GetWheelRotation() const function, expected prototype:\nint wxMouseEvent::GetWheelRotation() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseEvent::GetWheelRotation() const");
		}
		int lret = self->GetWheelRotation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMouseEvent::GetWheelAxis() const
	static int _bind_GetWheelAxis(lua_State *L) {
		if (!_lg_typecheck_GetWheelAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMouseEvent::GetWheelAxis() const function, expected prototype:\nint wxMouseEvent::GetWheelAxis() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMouseEvent::GetWheelAxis() const");
		}
		int lret = self->GetWheelAxis();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMouseEvent::IsButton() const
	static int _bind_IsButton(lua_State *L) {
		if (!_lg_typecheck_IsButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::IsButton() const function, expected prototype:\nbool wxMouseEvent::IsButton() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::IsButton() const");
		}
		bool lret = self->IsButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::IsPageScroll() const
	static int _bind_IsPageScroll(lua_State *L) {
		if (!_lg_typecheck_IsPageScroll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::IsPageScroll() const function, expected prototype:\nbool wxMouseEvent::IsPageScroll() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::IsPageScroll() const");
		}
		bool lret = self->IsPageScroll();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Leaving() const
	static int _bind_Leaving(lua_State *L) {
		if (!_lg_typecheck_Leaving(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Leaving() const function, expected prototype:\nbool wxMouseEvent::Leaving() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Leaving() const");
		}
		bool lret = self->Leaving();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::LeftDClick() const
	static int _bind_LeftDClick(lua_State *L) {
		if (!_lg_typecheck_LeftDClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::LeftDClick() const function, expected prototype:\nbool wxMouseEvent::LeftDClick() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::LeftDClick() const");
		}
		bool lret = self->LeftDClick();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::LeftDown() const
	static int _bind_LeftDown(lua_State *L) {
		if (!_lg_typecheck_LeftDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::LeftDown() const function, expected prototype:\nbool wxMouseEvent::LeftDown() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::LeftDown() const");
		}
		bool lret = self->LeftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::LeftUp() const
	static int _bind_LeftUp(lua_State *L) {
		if (!_lg_typecheck_LeftUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::LeftUp() const function, expected prototype:\nbool wxMouseEvent::LeftUp() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::LeftUp() const");
		}
		bool lret = self->LeftUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::MetaDown() const function, expected prototype:\nbool wxMouseEvent::MetaDown() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::MetaDown() const");
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::MiddleDClick() const
	static int _bind_MiddleDClick(lua_State *L) {
		if (!_lg_typecheck_MiddleDClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::MiddleDClick() const function, expected prototype:\nbool wxMouseEvent::MiddleDClick() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::MiddleDClick() const");
		}
		bool lret = self->MiddleDClick();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::MiddleDown() const
	static int _bind_MiddleDown(lua_State *L) {
		if (!_lg_typecheck_MiddleDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::MiddleDown() const function, expected prototype:\nbool wxMouseEvent::MiddleDown() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::MiddleDown() const");
		}
		bool lret = self->MiddleDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::MiddleUp() const
	static int _bind_MiddleUp(lua_State *L) {
		if (!_lg_typecheck_MiddleUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::MiddleUp() const function, expected prototype:\nbool wxMouseEvent::MiddleUp() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::MiddleUp() const");
		}
		bool lret = self->MiddleUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::Moving() const
	static int _bind_Moving(lua_State *L) {
		if (!_lg_typecheck_Moving(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::Moving() const function, expected prototype:\nbool wxMouseEvent::Moving() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::Moving() const");
		}
		bool lret = self->Moving();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::RightDClick() const
	static int _bind_RightDClick(lua_State *L) {
		if (!_lg_typecheck_RightDClick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::RightDClick() const function, expected prototype:\nbool wxMouseEvent::RightDClick() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::RightDClick() const");
		}
		bool lret = self->RightDClick();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::RightDown() const
	static int _bind_RightDown(lua_State *L) {
		if (!_lg_typecheck_RightDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::RightDown() const function, expected prototype:\nbool wxMouseEvent::RightDown() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::RightDown() const");
		}
		bool lret = self->RightDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMouseEvent::RightUp() const
	static int _bind_RightUp(lua_State *L) {
		if (!_lg_typecheck_RightUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxMouseEvent::RightUp() const function, expected prototype:\nbool wxMouseEvent::RightUp() const\nClass arguments details:\n");
		}


		wxMouseEvent* self=dynamic_cast< wxMouseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxMouseEvent::RightUp() const");
		}
		bool lret = self->RightUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMouseEvent* LunaTraits< wxMouseEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxMouseEvent >::_bind_dtor(wxMouseEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMouseEvent >::className[] = "wxMouseEvent";
const char LunaTraits< wxMouseEvent >::fullName[] = "wxMouseEvent";
const char LunaTraits< wxMouseEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMouseEvent >::parents[] = {"wx.wxEvent", "wx.wxMouseState", 0};
const int LunaTraits< wxMouseEvent >::hash = 745419;
const int LunaTraits< wxMouseEvent >::uniqueIDs[] = {56813631, 92036952,0};

luna_RegType LunaTraits< wxMouseEvent >::methods[] = {
	{"Aux1DClick", &luna_wrapper_wxMouseEvent::_bind_Aux1DClick},
	{"Aux1Down", &luna_wrapper_wxMouseEvent::_bind_Aux1Down},
	{"Aux1Up", &luna_wrapper_wxMouseEvent::_bind_Aux1Up},
	{"Aux2DClick", &luna_wrapper_wxMouseEvent::_bind_Aux2DClick},
	{"Aux2Down", &luna_wrapper_wxMouseEvent::_bind_Aux2Down},
	{"Aux2Up", &luna_wrapper_wxMouseEvent::_bind_Aux2Up},
	{"Button", &luna_wrapper_wxMouseEvent::_bind_Button},
	{"ButtonDClick", &luna_wrapper_wxMouseEvent::_bind_ButtonDClick},
	{"ButtonDown", &luna_wrapper_wxMouseEvent::_bind_ButtonDown},
	{"ButtonUp", &luna_wrapper_wxMouseEvent::_bind_ButtonUp},
	{"Dragging", &luna_wrapper_wxMouseEvent::_bind_Dragging},
	{"Entering", &luna_wrapper_wxMouseEvent::_bind_Entering},
	{"GetButton", &luna_wrapper_wxMouseEvent::_bind_GetButton},
	{"GetClickCount", &luna_wrapper_wxMouseEvent::_bind_GetClickCount},
	{"GetLinesPerAction", &luna_wrapper_wxMouseEvent::_bind_GetLinesPerAction},
	{"GetLogicalPosition", &luna_wrapper_wxMouseEvent::_bind_GetLogicalPosition},
	{"GetWheelDelta", &luna_wrapper_wxMouseEvent::_bind_GetWheelDelta},
	{"GetWheelRotation", &luna_wrapper_wxMouseEvent::_bind_GetWheelRotation},
	{"GetWheelAxis", &luna_wrapper_wxMouseEvent::_bind_GetWheelAxis},
	{"IsButton", &luna_wrapper_wxMouseEvent::_bind_IsButton},
	{"IsPageScroll", &luna_wrapper_wxMouseEvent::_bind_IsPageScroll},
	{"Leaving", &luna_wrapper_wxMouseEvent::_bind_Leaving},
	{"LeftDClick", &luna_wrapper_wxMouseEvent::_bind_LeftDClick},
	{"LeftDown", &luna_wrapper_wxMouseEvent::_bind_LeftDown},
	{"LeftUp", &luna_wrapper_wxMouseEvent::_bind_LeftUp},
	{"MetaDown", &luna_wrapper_wxMouseEvent::_bind_MetaDown},
	{"MiddleDClick", &luna_wrapper_wxMouseEvent::_bind_MiddleDClick},
	{"MiddleDown", &luna_wrapper_wxMouseEvent::_bind_MiddleDown},
	{"MiddleUp", &luna_wrapper_wxMouseEvent::_bind_MiddleUp},
	{"Moving", &luna_wrapper_wxMouseEvent::_bind_Moving},
	{"RightDClick", &luna_wrapper_wxMouseEvent::_bind_RightDClick},
	{"RightDown", &luna_wrapper_wxMouseEvent::_bind_RightDown},
	{"RightUp", &luna_wrapper_wxMouseEvent::_bind_RightUp},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseEvent >::enumValues[] = {
	{0,0}
};


