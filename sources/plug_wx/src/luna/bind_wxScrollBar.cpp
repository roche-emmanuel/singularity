#include <plug_common.h>

class luna_wrapper_wxScrollBar {
public:
	typedef Luna< wxScrollBar > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxScrollBar* ptr= dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxScrollBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetThumbPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetThumbSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetScrollbar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetThumbPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxScrollBar::wxScrollBar()
	static wxScrollBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxScrollBar::wxScrollBar() function, expected prototype:\nwxScrollBar::wxScrollBar()\nClass arguments details:\n");
		}


		return new wxScrollBar();
	}

	// wxScrollBar::wxScrollBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr)
	static wxScrollBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxScrollBar::wxScrollBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr) function, expected prototype:\nwxScrollBar::wxScrollBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxScrollBar::wxScrollBar function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxScrollBar::wxScrollBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : wxDefaultSize;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxSB_HORIZONTAL;
		const wxValidator* validator_ptr=luatop>5 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxScrollBar::wxScrollBar function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxScrollBar(parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxScrollBar::wxScrollBar
	static wxScrollBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxScrollBar, cannot match any of the overloads for function wxScrollBar:\n  wxScrollBar()\n  wxScrollBar(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxScrollBar::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxScrollBar::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr) function, expected prototype:\nbool wxScrollBar::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxScrollBar::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxScrollBar::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxSB_HORIZONTAL;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxScrollBar::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxScrollBar::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxScrollBar::GetPageSize() const
	static int _bind_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_GetPageSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollBar::GetPageSize() const function, expected prototype:\nint wxScrollBar::GetPageSize() const\nClass arguments details:\n");
		}


		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollBar::GetPageSize() const");
		}
		int lret = self->GetPageSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollBar::GetRange() const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollBar::GetRange() const function, expected prototype:\nint wxScrollBar::GetRange() const\nClass arguments details:\n");
		}


		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollBar::GetRange() const");
		}
		int lret = self->GetRange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollBar::GetThumbPosition() const
	static int _bind_GetThumbPosition(lua_State *L) {
		if (!_lg_typecheck_GetThumbPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollBar::GetThumbPosition() const function, expected prototype:\nint wxScrollBar::GetThumbPosition() const\nClass arguments details:\n");
		}


		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollBar::GetThumbPosition() const");
		}
		int lret = self->GetThumbPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollBar::GetThumbSize() const
	static int _bind_GetThumbSize(lua_State *L) {
		if (!_lg_typecheck_GetThumbSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollBar::GetThumbSize() const function, expected prototype:\nint wxScrollBar::GetThumbSize() const\nClass arguments details:\n");
		}


		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollBar::GetThumbSize() const");
		}
		int lret = self->GetThumbSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxScrollBar::SetScrollbar(int position, int thumbSize, int range, int pageSize, bool refresh = true)
	static int _bind_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_SetScrollbar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollBar::SetScrollbar(int position, int thumbSize, int range, int pageSize, bool refresh = true) function, expected prototype:\nvoid wxScrollBar::SetScrollbar(int position, int thumbSize, int range, int pageSize, bool refresh = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int position=(int)lua_tointeger(L,2);
		int thumbSize=(int)lua_tointeger(L,3);
		int range=(int)lua_tointeger(L,4);
		int pageSize=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollBar::SetScrollbar(int, int, int, int, bool)");
		}
		self->SetScrollbar(position, thumbSize, range, pageSize, refresh);

		return 0;
	}

	// void wxScrollBar::SetThumbPosition(int viewStart)
	static int _bind_SetThumbPosition(lua_State *L) {
		if (!_lg_typecheck_SetThumbPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollBar::SetThumbPosition(int viewStart) function, expected prototype:\nvoid wxScrollBar::SetThumbPosition(int viewStart)\nClass arguments details:\n");
		}

		int viewStart=(int)lua_tointeger(L,2);

		wxScrollBar* self=dynamic_cast< wxScrollBar* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollBar::SetThumbPosition(int)");
		}
		self->SetThumbPosition(viewStart);

		return 0;
	}


	// Operator binds:

};

wxScrollBar* LunaTraits< wxScrollBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxScrollBar::_bind_ctor(L);
}

void LunaTraits< wxScrollBar >::_bind_dtor(wxScrollBar* obj) {
	delete obj;
}

const char LunaTraits< wxScrollBar >::className[] = "wxScrollBar";
const char LunaTraits< wxScrollBar >::fullName[] = "wxScrollBar";
const char LunaTraits< wxScrollBar >::moduleName[] = "wx";
const char* LunaTraits< wxScrollBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxScrollBar >::hash = 5672663;
const int LunaTraits< wxScrollBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxScrollBar >::methods[] = {
	{"Create", &luna_wrapper_wxScrollBar::_bind_Create},
	{"GetPageSize", &luna_wrapper_wxScrollBar::_bind_GetPageSize},
	{"GetRange", &luna_wrapper_wxScrollBar::_bind_GetRange},
	{"GetThumbPosition", &luna_wrapper_wxScrollBar::_bind_GetThumbPosition},
	{"GetThumbSize", &luna_wrapper_wxScrollBar::_bind_GetThumbSize},
	{"SetScrollbar", &luna_wrapper_wxScrollBar::_bind_SetScrollbar},
	{"SetThumbPosition", &luna_wrapper_wxScrollBar::_bind_SetThumbPosition},
	{0,0}
};

luna_ConverterType LunaTraits< wxScrollBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxScrollBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrollBar >::enumValues[] = {
	{0,0}
};


