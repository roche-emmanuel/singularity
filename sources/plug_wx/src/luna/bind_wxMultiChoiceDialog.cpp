#include <plug_common.h>

class luna_wrapper_wxMultiChoiceDialog {
public:
	typedef Luna< wxMultiChoiceDialog > luna_t;

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
		wxMultiChoiceDialog* ptr= dynamic_cast< wxMultiChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMultiChoiceDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>6 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMultiChoiceDialog::wxMultiChoiceDialog(wxWindow * parent, const wxString & message, const wxString & caption, int n, const wxString * choices, long style = wxCHOICEDLG_STYLE, const wxPoint & pos = wxDefaultPosition)
	static wxMultiChoiceDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMultiChoiceDialog::wxMultiChoiceDialog(wxWindow * parent, const wxString & message, const wxString & caption, int n, const wxString * choices, long style = wxCHOICEDLG_STYLE, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxMultiChoiceDialog::wxMultiChoiceDialog(wxWindow * parent, const wxString & message, const wxString & caption, int n, const wxString * choices, long style = wxCHOICEDLG_STYLE, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 5 ID = 88196105\narg 7 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		int n=(int)lua_tointeger(L,4);
		wxString choices(lua_tostring(L,5),lua_objlen(L,5));
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxCHOICEDLG_STYLE;
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMultiChoiceDialog::wxMultiChoiceDialog function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : wxDefaultPosition;

		return new wxMultiChoiceDialog(parent, message, caption, n, &choices, style, pos);
	}

	// wxMultiChoiceDialog::wxMultiChoiceDialog(wxWindow * parent, const wxString & message, const wxString & caption, const wxArrayString & choices, long style = wxCHOICEDLG_STYLE, const wxPoint & pos = wxDefaultPosition)
	static wxMultiChoiceDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMultiChoiceDialog::wxMultiChoiceDialog(wxWindow * parent, const wxString & message, const wxString & caption, const wxArrayString & choices, long style = wxCHOICEDLG_STYLE, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxMultiChoiceDialog::wxMultiChoiceDialog(wxWindow * parent, const wxString & message, const wxString & caption, const wxArrayString & choices, long style = wxCHOICEDLG_STYLE, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 59507769\narg 6 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,4));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxMultiChoiceDialog::wxMultiChoiceDialog function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>4 ? (long)lua_tointeger(L,5) : wxCHOICEDLG_STYLE;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMultiChoiceDialog::wxMultiChoiceDialog function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : wxDefaultPosition;

		return new wxMultiChoiceDialog(parent, message, caption, choices, style, pos);
	}

	// Overload binder for wxMultiChoiceDialog::wxMultiChoiceDialog
	static wxMultiChoiceDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMultiChoiceDialog, cannot match any of the overloads for function wxMultiChoiceDialog:\n  wxMultiChoiceDialog(wxWindow *, const wxString &, const wxString &, int, const wxString *, long, const wxPoint &)\n  wxMultiChoiceDialog(wxWindow *, const wxString &, const wxString &, const wxArrayString &, long, const wxPoint &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMultiChoiceDialog::SetSelections(const wxArrayInt & selections)
	static int _bind_SetSelections(lua_State *L) {
		if (!_lg_typecheck_SetSelections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxMultiChoiceDialog::SetSelections(const wxArrayInt & selections) function, expected prototype:\nvoid wxMultiChoiceDialog::SetSelections(const wxArrayInt & selections)\nClass arguments details:\narg 1 ID = 47342076\n");
		}

		const wxArrayInt* selections_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !selections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg selections in wxMultiChoiceDialog::SetSelections function");
		}
		const wxArrayInt & selections=*selections_ptr;

		wxMultiChoiceDialog* self=dynamic_cast< wxMultiChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxMultiChoiceDialog::SetSelections(const wxArrayInt &)");
		}
		self->SetSelections(selections);

		return 0;
	}

	// int wxMultiChoiceDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxMultiChoiceDialog::ShowModal() function, expected prototype:\nint wxMultiChoiceDialog::ShowModal()\nClass arguments details:\n");
		}


		wxMultiChoiceDialog* self=dynamic_cast< wxMultiChoiceDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxMultiChoiceDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMultiChoiceDialog* LunaTraits< wxMultiChoiceDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMultiChoiceDialog::_bind_ctor(L);
}

void LunaTraits< wxMultiChoiceDialog >::_bind_dtor(wxMultiChoiceDialog* obj) {
	delete obj;
}

const char LunaTraits< wxMultiChoiceDialog >::className[] = "wxMultiChoiceDialog";
const char LunaTraits< wxMultiChoiceDialog >::fullName[] = "wxMultiChoiceDialog";
const char LunaTraits< wxMultiChoiceDialog >::moduleName[] = "wx";
const char* LunaTraits< wxMultiChoiceDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxMultiChoiceDialog >::hash = 47542253;
const int LunaTraits< wxMultiChoiceDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMultiChoiceDialog >::methods[] = {
	{"SetSelections", &luna_wrapper_wxMultiChoiceDialog::_bind_SetSelections},
	{"ShowModal", &luna_wrapper_wxMultiChoiceDialog::_bind_ShowModal},
	{"__eq", &luna_wrapper_wxMultiChoiceDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMultiChoiceDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxMultiChoiceDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMultiChoiceDialog >::enumValues[] = {
	{0,0}
};


