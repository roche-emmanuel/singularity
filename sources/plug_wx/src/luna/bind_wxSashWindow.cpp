#include <plug_common.h>

class luna_wrapper_wxSashWindow {
public:
	typedef Luna< wxSashWindow > luna_t;

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
		wxSashWindow* ptr= dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSashWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetMaximumSizeX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaximumSizeY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinimumSizeX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinimumSizeY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSashVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaximumSizeX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaximumSizeY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinimumSizeX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinimumSizeY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSashVisible(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSashWindow::wxSashWindow()
	static wxSashWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashWindow::wxSashWindow() function, expected prototype:\nwxSashWindow::wxSashWindow()\nClass arguments details:\n");
		}


		return new wxSashWindow();
	}

	// wxSashWindow::wxSashWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN |wxSW_3D, const wxString & name = "sashWindow")
	static wxSashWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSashWindow::wxSashWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN |wxSW_3D, const wxString & name = \"sashWindow\") function, expected prototype:\nwxSashWindow::wxSashWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN |wxSW_3D, const wxString & name = \"sashWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSashWindow::wxSashWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashWindow::wxSashWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxCLIP_CHILDREN |wxSW_3D;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxSashWindow(parent, id, pos, size, style, name);
	}

	// Overload binder for wxSashWindow::wxSashWindow
	static wxSashWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSashWindow, cannot match any of the overloads for function wxSashWindow:\n  wxSashWindow()\n  wxSashWindow(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// int wxSashWindow::GetMaximumSizeX() const
	static int _bind_GetMaximumSizeX(lua_State *L) {
		if (!_lg_typecheck_GetMaximumSizeX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSashWindow::GetMaximumSizeX() const function, expected prototype:\nint wxSashWindow::GetMaximumSizeX() const\nClass arguments details:\n");
		}


		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSashWindow::GetMaximumSizeX() const");
		}
		int lret = self->GetMaximumSizeX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashWindow::GetMaximumSizeY() const
	static int _bind_GetMaximumSizeY(lua_State *L) {
		if (!_lg_typecheck_GetMaximumSizeY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSashWindow::GetMaximumSizeY() const function, expected prototype:\nint wxSashWindow::GetMaximumSizeY() const\nClass arguments details:\n");
		}


		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSashWindow::GetMaximumSizeY() const");
		}
		int lret = self->GetMaximumSizeY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashWindow::GetMinimumSizeX() const
	static int _bind_GetMinimumSizeX(lua_State *L) {
		if (!_lg_typecheck_GetMinimumSizeX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSashWindow::GetMinimumSizeX() const function, expected prototype:\nint wxSashWindow::GetMinimumSizeX() const\nClass arguments details:\n");
		}


		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSashWindow::GetMinimumSizeX() const");
		}
		int lret = self->GetMinimumSizeX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashWindow::GetMinimumSizeY() const
	static int _bind_GetMinimumSizeY(lua_State *L) {
		if (!_lg_typecheck_GetMinimumSizeY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSashWindow::GetMinimumSizeY() const function, expected prototype:\nint wxSashWindow::GetMinimumSizeY() const\nClass arguments details:\n");
		}


		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSashWindow::GetMinimumSizeY() const");
		}
		int lret = self->GetMinimumSizeY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSashWindow::GetSashVisible(wxSashEdgePosition edge) const
	static int _bind_GetSashVisible(lua_State *L) {
		if (!_lg_typecheck_GetSashVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSashWindow::GetSashVisible(wxSashEdgePosition edge) const function, expected prototype:\nbool wxSashWindow::GetSashVisible(wxSashEdgePosition edge) const\nClass arguments details:\n");
		}

		wxSashEdgePosition edge=(wxSashEdgePosition)lua_tointeger(L,2);

		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSashWindow::GetSashVisible(wxSashEdgePosition) const");
		}
		bool lret = self->GetSashVisible(edge);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashWindow::SetMaximumSizeX(int min)
	static int _bind_SetMaximumSizeX(lua_State *L) {
		if (!_lg_typecheck_SetMaximumSizeX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashWindow::SetMaximumSizeX(int min) function, expected prototype:\nvoid wxSashWindow::SetMaximumSizeX(int min)\nClass arguments details:\n");
		}

		int min=(int)lua_tointeger(L,2);

		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashWindow::SetMaximumSizeX(int)");
		}
		self->SetMaximumSizeX(min);

		return 0;
	}

	// void wxSashWindow::SetMaximumSizeY(int min)
	static int _bind_SetMaximumSizeY(lua_State *L) {
		if (!_lg_typecheck_SetMaximumSizeY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashWindow::SetMaximumSizeY(int min) function, expected prototype:\nvoid wxSashWindow::SetMaximumSizeY(int min)\nClass arguments details:\n");
		}

		int min=(int)lua_tointeger(L,2);

		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashWindow::SetMaximumSizeY(int)");
		}
		self->SetMaximumSizeY(min);

		return 0;
	}

	// void wxSashWindow::SetMinimumSizeX(int min)
	static int _bind_SetMinimumSizeX(lua_State *L) {
		if (!_lg_typecheck_SetMinimumSizeX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashWindow::SetMinimumSizeX(int min) function, expected prototype:\nvoid wxSashWindow::SetMinimumSizeX(int min)\nClass arguments details:\n");
		}

		int min=(int)lua_tointeger(L,2);

		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashWindow::SetMinimumSizeX(int)");
		}
		self->SetMinimumSizeX(min);

		return 0;
	}

	// void wxSashWindow::SetMinimumSizeY(int min)
	static int _bind_SetMinimumSizeY(lua_State *L) {
		if (!_lg_typecheck_SetMinimumSizeY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashWindow::SetMinimumSizeY(int min) function, expected prototype:\nvoid wxSashWindow::SetMinimumSizeY(int min)\nClass arguments details:\n");
		}

		int min=(int)lua_tointeger(L,2);

		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashWindow::SetMinimumSizeY(int)");
		}
		self->SetMinimumSizeY(min);

		return 0;
	}

	// void wxSashWindow::SetSashVisible(wxSashEdgePosition edge, bool visible)
	static int _bind_SetSashVisible(lua_State *L) {
		if (!_lg_typecheck_SetSashVisible(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSashWindow::SetSashVisible(wxSashEdgePosition edge, bool visible) function, expected prototype:\nvoid wxSashWindow::SetSashVisible(wxSashEdgePosition edge, bool visible)\nClass arguments details:\n");
		}

		wxSashEdgePosition edge=(wxSashEdgePosition)lua_tointeger(L,2);
		bool visible=(bool)(lua_toboolean(L,3)==1);

		wxSashWindow* self=dynamic_cast< wxSashWindow* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSashWindow::SetSashVisible(wxSashEdgePosition, bool)");
		}
		self->SetSashVisible(edge, visible);

		return 0;
	}


	// Operator binds:

};

wxSashWindow* LunaTraits< wxSashWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSashWindow::_bind_ctor(L);
}

void LunaTraits< wxSashWindow >::_bind_dtor(wxSashWindow* obj) {
	delete obj;
}

const char LunaTraits< wxSashWindow >::className[] = "wxSashWindow";
const char LunaTraits< wxSashWindow >::fullName[] = "wxSashWindow";
const char LunaTraits< wxSashWindow >::moduleName[] = "wx";
const char* LunaTraits< wxSashWindow >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxSashWindow >::hash = 91336202;
const int LunaTraits< wxSashWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSashWindow >::methods[] = {
	{"GetMaximumSizeX", &luna_wrapper_wxSashWindow::_bind_GetMaximumSizeX},
	{"GetMaximumSizeY", &luna_wrapper_wxSashWindow::_bind_GetMaximumSizeY},
	{"GetMinimumSizeX", &luna_wrapper_wxSashWindow::_bind_GetMinimumSizeX},
	{"GetMinimumSizeY", &luna_wrapper_wxSashWindow::_bind_GetMinimumSizeY},
	{"GetSashVisible", &luna_wrapper_wxSashWindow::_bind_GetSashVisible},
	{"SetMaximumSizeX", &luna_wrapper_wxSashWindow::_bind_SetMaximumSizeX},
	{"SetMaximumSizeY", &luna_wrapper_wxSashWindow::_bind_SetMaximumSizeY},
	{"SetMinimumSizeX", &luna_wrapper_wxSashWindow::_bind_SetMinimumSizeX},
	{"SetMinimumSizeY", &luna_wrapper_wxSashWindow::_bind_SetMinimumSizeY},
	{"SetSashVisible", &luna_wrapper_wxSashWindow::_bind_SetSashVisible},
	{"__eq", &luna_wrapper_wxSashWindow::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSashWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxSashWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSashWindow >::enumValues[] = {
	{0,0}
};


