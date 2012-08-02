#include <plug_common.h>

class luna_wrapper_wxPen {
public:
	typedef Luna< wxPen > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPen* ptr= dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPen >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJoin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStipple(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNonTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetJoin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStipple(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPen::wxPen()
	static wxPen* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPen::wxPen() function, expected prototype:\nwxPen::wxPen()\nClass arguments details:\n");
		}


		return new wxPen();
	}

	// wxPen::wxPen(const wxColour & colour, int width = 1, wxPenStyle style = wxPENSTYLE_SOLID)
	static wxPen* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(const wxColour & colour, int width = 1, wxPenStyle style = wxPENSTYLE_SOLID) function, expected prototype:\nwxPen::wxPen(const wxColour & colour, int width = 1, wxPenStyle style = wxPENSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,1));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPen::wxPen function");
		}
		const wxColour & colour=*colour_ptr;
		int width=luatop>1 ? (int)lua_tointeger(L,2) : 1;
		wxPenStyle style=luatop>2 ? (wxPenStyle)lua_tointeger(L,3) : wxPENSTYLE_SOLID;

		return new wxPen(colour, width, style);
	}

	// wxPen::wxPen(const wxBitmap & stipple, int width)
	static wxPen* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(const wxBitmap & stipple, int width) function, expected prototype:\nwxPen::wxPen(const wxBitmap & stipple, int width)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* stipple_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !stipple_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stipple in wxPen::wxPen function");
		}
		const wxBitmap & stipple=*stipple_ptr;
		int width=(int)lua_tointeger(L,2);

		return new wxPen(stipple, width);
	}

	// wxPen::wxPen(const wxPen & pen)
	static wxPen* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(const wxPen & pen) function, expected prototype:\nwxPen::wxPen(const wxPen & pen)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPen* pen_ptr=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::wxPen function");
		}
		const wxPen & pen=*pen_ptr;

		return new wxPen(pen);
	}

	// Overload binder for wxPen::wxPen
	static wxPen* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPen, cannot match any of the overloads for function wxPen:\n  wxPen()\n  wxPen(const wxColour &, int, wxPenStyle)\n  wxPen(const wxBitmap &, int)\n  wxPen(const wxPen &)\n");
		return NULL;
	}


	// Function binds:
	// wxPenCap wxPen::GetCap() const
	static int _bind_GetCap(lua_State *L) {
		if (!_lg_typecheck_GetCap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPenCap wxPen::GetCap() const function, expected prototype:\nwxPenCap wxPen::GetCap() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPenCap wxPen::GetCap() const");
		}
		wxPenCap lret = self->GetCap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxPen::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxPen::GetColour() const function, expected prototype:\nwxColour wxPen::GetColour() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxPen::GetColour() const");
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxPenJoin wxPen::GetJoin() const
	static int _bind_GetJoin(lua_State *L) {
		if (!_lg_typecheck_GetJoin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPenJoin wxPen::GetJoin() const function, expected prototype:\nwxPenJoin wxPen::GetJoin() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPenJoin wxPen::GetJoin() const");
		}
		wxPenJoin lret = self->GetJoin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxBitmap * wxPen::GetStipple() const
	static int _bind_GetStipple(lua_State *L) {
		if (!_lg_typecheck_GetStipple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap * wxPen::GetStipple() const function, expected prototype:\nwxBitmap * wxPen::GetStipple() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap * wxPen::GetStipple() const");
		}
		wxBitmap * lret = self->GetStipple();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxPenStyle wxPen::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPenStyle wxPen::GetStyle() const function, expected prototype:\nwxPenStyle wxPen::GetStyle() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxPenStyle wxPen::GetStyle() const");
		}
		wxPenStyle lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPen::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxPen::GetWidth() const function, expected prototype:\nint wxPen::GetWidth() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxPen::GetWidth() const");
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPen::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPen::IsOk() const function, expected prototype:\nbool wxPen::IsOk() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPen::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPen::IsNonTransparent() const
	static int _bind_IsNonTransparent(lua_State *L) {
		if (!_lg_typecheck_IsNonTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPen::IsNonTransparent() const function, expected prototype:\nbool wxPen::IsNonTransparent() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPen::IsNonTransparent() const");
		}
		bool lret = self->IsNonTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPen::IsTransparent() const
	static int _bind_IsTransparent(lua_State *L) {
		if (!_lg_typecheck_IsTransparent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPen::IsTransparent() const function, expected prototype:\nbool wxPen::IsTransparent() const\nClass arguments details:\n");
		}


		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPen::IsTransparent() const");
		}
		bool lret = self->IsTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPen::SetCap(wxPenCap capStyle)
	static int _bind_SetCap(lua_State *L) {
		if (!_lg_typecheck_SetCap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPen::SetCap(wxPenCap capStyle) function, expected prototype:\nvoid wxPen::SetCap(wxPenCap capStyle)\nClass arguments details:\n");
		}

		wxPenCap capStyle=(wxPenCap)lua_tointeger(L,2);

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPen::SetCap(wxPenCap)");
		}
		self->SetCap(capStyle);

		return 0;
	}

	// void wxPen::SetColour(wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPen::SetColour(wxColour & colour) function, expected prototype:\nvoid wxPen::SetColour(wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxColour* colour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPen::SetColour function");
		}
		wxColour & colour=*colour_ptr;

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPen::SetColour(wxColour &)");
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxPen::SetJoin(wxPenJoin join_style)
	static int _bind_SetJoin(lua_State *L) {
		if (!_lg_typecheck_SetJoin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPen::SetJoin(wxPenJoin join_style) function, expected prototype:\nvoid wxPen::SetJoin(wxPenJoin join_style)\nClass arguments details:\n");
		}

		wxPenJoin join_style=(wxPenJoin)lua_tointeger(L,2);

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPen::SetJoin(wxPenJoin)");
		}
		self->SetJoin(join_style);

		return 0;
	}

	// void wxPen::SetStipple(const wxBitmap & stipple)
	static int _bind_SetStipple(lua_State *L) {
		if (!_lg_typecheck_SetStipple(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPen::SetStipple(const wxBitmap & stipple) function, expected prototype:\nvoid wxPen::SetStipple(const wxBitmap & stipple)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* stipple_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !stipple_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stipple in wxPen::SetStipple function");
		}
		const wxBitmap & stipple=*stipple_ptr;

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPen::SetStipple(const wxBitmap &)");
		}
		self->SetStipple(stipple);

		return 0;
	}

	// void wxPen::SetStyle(wxPenStyle style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPen::SetStyle(wxPenStyle style) function, expected prototype:\nvoid wxPen::SetStyle(wxPenStyle style)\nClass arguments details:\n");
		}

		wxPenStyle style=(wxPenStyle)lua_tointeger(L,2);

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPen::SetStyle(wxPenStyle)");
		}
		self->SetStyle(style);

		return 0;
	}

	// void wxPen::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPen::SetWidth(int width) function, expected prototype:\nvoid wxPen::SetWidth(int width)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,2);

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPen::SetWidth(int)");
		}
		self->SetWidth(width);

		return 0;
	}


	// Operator binds:
	// bool wxPen::operator!=(const wxPen & pen) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPen::operator!=(const wxPen & pen) const function, expected prototype:\nbool wxPen::operator!=(const wxPen & pen) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPen* pen_ptr=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::operator!= function");
		}
		const wxPen & pen=*pen_ptr;

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPen::operator!=(const wxPen &) const");
		}
		bool lret = self->operator!=(pen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPen::operator==(const wxPen & pen) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPen::operator==(const wxPen & pen) const function, expected prototype:\nbool wxPen::operator==(const wxPen & pen) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPen* pen_ptr=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::operator== function");
		}
		const wxPen & pen=*pen_ptr;

		wxPen* self=dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPen::operator==(const wxPen &) const");
		}
		bool lret = self->operator==(pen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxPen* LunaTraits< wxPen >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPen::_bind_ctor(L);
}

void LunaTraits< wxPen >::_bind_dtor(wxPen* obj) {
	delete obj;
}

const char LunaTraits< wxPen >::className[] = "wxPen";
const char LunaTraits< wxPen >::fullName[] = "wxPen";
const char LunaTraits< wxPen >::moduleName[] = "wx";
const char* LunaTraits< wxPen >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxPen >::hash = 13554035;
const int LunaTraits< wxPen >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPen >::methods[] = {
	{"GetCap", &luna_wrapper_wxPen::_bind_GetCap},
	{"GetColour", &luna_wrapper_wxPen::_bind_GetColour},
	{"GetJoin", &luna_wrapper_wxPen::_bind_GetJoin},
	{"GetStipple", &luna_wrapper_wxPen::_bind_GetStipple},
	{"GetStyle", &luna_wrapper_wxPen::_bind_GetStyle},
	{"GetWidth", &luna_wrapper_wxPen::_bind_GetWidth},
	{"IsOk", &luna_wrapper_wxPen::_bind_IsOk},
	{"IsNonTransparent", &luna_wrapper_wxPen::_bind_IsNonTransparent},
	{"IsTransparent", &luna_wrapper_wxPen::_bind_IsTransparent},
	{"SetCap", &luna_wrapper_wxPen::_bind_SetCap},
	{"SetColour", &luna_wrapper_wxPen::_bind_SetColour},
	{"SetJoin", &luna_wrapper_wxPen::_bind_SetJoin},
	{"SetStipple", &luna_wrapper_wxPen::_bind_SetStipple},
	{"SetStyle", &luna_wrapper_wxPen::_bind_SetStyle},
	{"SetWidth", &luna_wrapper_wxPen::_bind_SetWidth},
	{"op_neq", &luna_wrapper_wxPen::_bind_op_neq},
	{"__eq", &luna_wrapper_wxPen::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPen >::converters[] = {
	{"wxObject", &luna_wrapper_wxPen::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPen >::enumValues[] = {
	{0,0}
};


