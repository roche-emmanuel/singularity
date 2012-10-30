#include <plug_common.h>

class luna_wrapper_wxPropertySheetDialog {
public:
	typedef Luna< wxPropertySheetDialog > luna_t;

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
		wxPropertySheetDialog* ptr= dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertySheetDialog >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPropertySheetDialog* ptr= static_cast< wxPropertySheetDialog* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertySheetDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isstring(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddBookCtrl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateBookCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CreateButtons(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBookCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInnerSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSheetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LayoutDialog(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBookCtrl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSheetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropertySheetDialog::wxPropertySheetDialog(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString & name = wxDialogNameStr)
	static wxPropertySheetDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxPropertySheetDialog::wxPropertySheetDialog(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString & name = wxDialogNameStr) function, expected prototype:\nwxPropertySheetDialog::wxPropertySheetDialog(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString & name = wxDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertySheetDialog::wxPropertySheetDialog function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertySheetDialog::wxPropertySheetDialog function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxDEFAULT_DIALOG_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxPropertySheetDialog(parent, id, title, pos, size, style, name);
	}


	// Function binds:
	// void wxPropertySheetDialog::AddBookCtrl(wxSizer * sizer)
	static int _bind_AddBookCtrl(lua_State *L) {
		if (!_lg_typecheck_AddBookCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertySheetDialog::AddBookCtrl(wxSizer * sizer) function, expected prototype:\nvoid wxPropertySheetDialog::AddBookCtrl(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertySheetDialog::AddBookCtrl(wxSizer *)");
		}
		self->AddBookCtrl(sizer);

		return 0;
	}

	// bool wxPropertySheetDialog::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString & name = wxDialogNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxPropertySheetDialog::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString & name = wxDialogNameStr) function, expected prototype:\nbool wxPropertySheetDialog::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString & name = wxDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertySheetDialog::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertySheetDialog::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDEFAULT_DIALOG_STYLE;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxPropertySheetDialog::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxBookCtrlBase * wxPropertySheetDialog::CreateBookCtrl()
	static int _bind_CreateBookCtrl(lua_State *L) {
		if (!_lg_typecheck_CreateBookCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBookCtrlBase * wxPropertySheetDialog::CreateBookCtrl() function, expected prototype:\nwxBookCtrlBase * wxPropertySheetDialog::CreateBookCtrl()\nClass arguments details:\n");
		}


		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBookCtrlBase * wxPropertySheetDialog::CreateBookCtrl()");
		}
		wxBookCtrlBase * lret = self->CreateBookCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBookCtrlBase >::push(L,lret,false);

		return 1;
	}

	// void wxPropertySheetDialog::CreateButtons(int flags = wxOK | wxCANCEL)
	static int _bind_CreateButtons(lua_State *L) {
		if (!_lg_typecheck_CreateButtons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertySheetDialog::CreateButtons(int flags = wxOK | wxCANCEL) function, expected prototype:\nvoid wxPropertySheetDialog::CreateButtons(int flags = wxOK | wxCANCEL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : wxOK | wxCANCEL;

		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertySheetDialog::CreateButtons(int)");
		}
		self->CreateButtons(flags);

		return 0;
	}

	// wxBookCtrlBase * wxPropertySheetDialog::GetBookCtrl() const
	static int _bind_GetBookCtrl(lua_State *L) {
		if (!_lg_typecheck_GetBookCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBookCtrlBase * wxPropertySheetDialog::GetBookCtrl() const function, expected prototype:\nwxBookCtrlBase * wxPropertySheetDialog::GetBookCtrl() const\nClass arguments details:\n");
		}


		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBookCtrlBase * wxPropertySheetDialog::GetBookCtrl() const");
		}
		wxBookCtrlBase * lret = self->GetBookCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBookCtrlBase >::push(L,lret,false);

		return 1;
	}

	// wxSizer * wxPropertySheetDialog::GetInnerSizer() const
	static int _bind_GetInnerSizer(lua_State *L) {
		if (!_lg_typecheck_GetInnerSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxPropertySheetDialog::GetInnerSizer() const function, expected prototype:\nwxSizer * wxPropertySheetDialog::GetInnerSizer() const\nClass arguments details:\n");
		}


		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxPropertySheetDialog::GetInnerSizer() const");
		}
		wxSizer * lret = self->GetInnerSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// long wxPropertySheetDialog::GetSheetStyle() const
	static int _bind_GetSheetStyle(lua_State *L) {
		if (!_lg_typecheck_GetSheetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxPropertySheetDialog::GetSheetStyle() const function, expected prototype:\nlong wxPropertySheetDialog::GetSheetStyle() const\nClass arguments details:\n");
		}


		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxPropertySheetDialog::GetSheetStyle() const");
		}
		long lret = self->GetSheetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPropertySheetDialog::LayoutDialog(int centreFlags = wxBOTH)
	static int _bind_LayoutDialog(lua_State *L) {
		if (!_lg_typecheck_LayoutDialog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertySheetDialog::LayoutDialog(int centreFlags = wxBOTH) function, expected prototype:\nvoid wxPropertySheetDialog::LayoutDialog(int centreFlags = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int centreFlags=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertySheetDialog::LayoutDialog(int)");
		}
		self->LayoutDialog(centreFlags);

		return 0;
	}

	// void wxPropertySheetDialog::SetBookCtrl(wxBookCtrlBase * bookCtrl)
	static int _bind_SetBookCtrl(lua_State *L) {
		if (!_lg_typecheck_SetBookCtrl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertySheetDialog::SetBookCtrl(wxBookCtrlBase * bookCtrl) function, expected prototype:\nvoid wxPropertySheetDialog::SetBookCtrl(wxBookCtrlBase * bookCtrl)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxBookCtrlBase* bookCtrl=dynamic_cast< wxBookCtrlBase* >(Luna< wxObject >::check(L,2));

		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertySheetDialog::SetBookCtrl(wxBookCtrlBase *)");
		}
		self->SetBookCtrl(bookCtrl);

		return 0;
	}

	// void wxPropertySheetDialog::SetSheetStyle(long style)
	static int _bind_SetSheetStyle(lua_State *L) {
		if (!_lg_typecheck_SetSheetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPropertySheetDialog::SetSheetStyle(long style) function, expected prototype:\nvoid wxPropertySheetDialog::SetSheetStyle(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxPropertySheetDialog* self=dynamic_cast< wxPropertySheetDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPropertySheetDialog::SetSheetStyle(long)");
		}
		self->SetSheetStyle(style);

		return 0;
	}


	// Operator binds:

};

wxPropertySheetDialog* LunaTraits< wxPropertySheetDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropertySheetDialog::_bind_ctor(L);
}

void LunaTraits< wxPropertySheetDialog >::_bind_dtor(wxPropertySheetDialog* obj) {
	delete obj;
}

const char LunaTraits< wxPropertySheetDialog >::className[] = "wxPropertySheetDialog";
const char LunaTraits< wxPropertySheetDialog >::fullName[] = "wxPropertySheetDialog";
const char LunaTraits< wxPropertySheetDialog >::moduleName[] = "wx";
const char* LunaTraits< wxPropertySheetDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxPropertySheetDialog >::hash = 85776575;
const int LunaTraits< wxPropertySheetDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPropertySheetDialog >::methods[] = {
	{"AddBookCtrl", &luna_wrapper_wxPropertySheetDialog::_bind_AddBookCtrl},
	{"Create", &luna_wrapper_wxPropertySheetDialog::_bind_Create},
	{"CreateBookCtrl", &luna_wrapper_wxPropertySheetDialog::_bind_CreateBookCtrl},
	{"CreateButtons", &luna_wrapper_wxPropertySheetDialog::_bind_CreateButtons},
	{"GetBookCtrl", &luna_wrapper_wxPropertySheetDialog::_bind_GetBookCtrl},
	{"GetInnerSizer", &luna_wrapper_wxPropertySheetDialog::_bind_GetInnerSizer},
	{"GetSheetStyle", &luna_wrapper_wxPropertySheetDialog::_bind_GetSheetStyle},
	{"LayoutDialog", &luna_wrapper_wxPropertySheetDialog::_bind_LayoutDialog},
	{"SetBookCtrl", &luna_wrapper_wxPropertySheetDialog::_bind_SetBookCtrl},
	{"SetSheetStyle", &luna_wrapper_wxPropertySheetDialog::_bind_SetSheetStyle},
	{"__eq", &luna_wrapper_wxPropertySheetDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertySheetDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertySheetDialog::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxPropertySheetDialog::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertySheetDialog >::enumValues[] = {
	{0,0}
};


