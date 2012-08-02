#include <plug_common.h>

class luna_wrapper_wxDialog {
public:
	typedef Luna< wxDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxDialog* ptr= dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
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
	inline static bool _lg_typecheck_AddMainButtonId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanDoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Centre(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_CreateButtonSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateSeparatedButtonSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateSeparatedSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateStdDialogButtonSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndModal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAffirmativeId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEscapeId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutAdaptationDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutAdaptationLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutAdaptationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMainButtonIds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReturnCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMainButtonId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAffirmativeId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEscapeId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutAdaptationDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutAdaptationLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutAdaptationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReturnCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowWindowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLayoutAdapter(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLayoutAdaptationEnabled(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLayoutAdapter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,64729109)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDialog::wxDialog()
	static wxDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDialog::wxDialog() function, expected prototype:\nwxDialog::wxDialog()\nClass arguments details:\n");
		}


		return new wxDialog();
	}

	// wxDialog::wxDialog(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX ), const wxString & name = wxDialogNameStr)
	static wxDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDialog::wxDialog(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX ), const wxString & name = wxDialogNameStr) function, expected prototype:\nwxDialog::wxDialog(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX ), const wxString & name = wxDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDialog::wxDialog function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDialog::wxDialog function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX );
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxDialog(parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxDialog::wxDialog
	static wxDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDialog, cannot match any of the overloads for function wxDialog:\n  wxDialog()\n  wxDialog(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxDialog::AddMainButtonId(int id)
	static int _bind_AddMainButtonId(lua_State *L) {
		if (!_lg_typecheck_AddMainButtonId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::AddMainButtonId(int id) function, expected prototype:\nvoid wxDialog::AddMainButtonId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::AddMainButtonId(int)");
		}
		self->AddMainButtonId(id);

		return 0;
	}

	// bool wxDialog::CanDoLayoutAdaptation()
	static int _bind_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_CanDoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::CanDoLayoutAdaptation() function, expected prototype:\nbool wxDialog::CanDoLayoutAdaptation()\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::CanDoLayoutAdaptation()");
		}
		bool lret = self->CanDoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDialog::Centre(int direction = wxBOTH)
	static int _bind_Centre(lua_State *L) {
		if (!_lg_typecheck_Centre(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::Centre(int direction = wxBOTH) function, expected prototype:\nvoid wxDialog::Centre(int direction = wxBOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : wxBOTH;

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::Centre(int)");
		}
		self->Centre(direction);

		return 0;
	}

	// bool wxDialog::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX ), const wxString & name = wxDialogNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX ), const wxString & name = wxDialogNameStr) function, expected prototype:\nbool wxDialog::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX ), const wxString & name = wxDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDialog::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDialog::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : ( wxCAPTION | wxSYSTEM_MENU | wxCLOSE_BOX );
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)");
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSizer * wxDialog::CreateButtonSizer(long flags)
	static int _bind_CreateButtonSizer(lua_State *L) {
		if (!_lg_typecheck_CreateButtonSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxDialog::CreateButtonSizer(long flags) function, expected prototype:\nwxSizer * wxDialog::CreateButtonSizer(long flags)\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxDialog::CreateButtonSizer(long)");
		}
		wxSizer * lret = self->CreateButtonSizer(flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSizer * wxDialog::CreateSeparatedButtonSizer(long flags)
	static int _bind_CreateSeparatedButtonSizer(lua_State *L) {
		if (!_lg_typecheck_CreateSeparatedButtonSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxDialog::CreateSeparatedButtonSizer(long flags) function, expected prototype:\nwxSizer * wxDialog::CreateSeparatedButtonSizer(long flags)\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxDialog::CreateSeparatedButtonSizer(long)");
		}
		wxSizer * lret = self->CreateSeparatedButtonSizer(flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSizer * wxDialog::CreateSeparatedSizer(wxSizer * sizer)
	static int _bind_CreateSeparatedSizer(lua_State *L) {
		if (!_lg_typecheck_CreateSeparatedSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSizer * wxDialog::CreateSeparatedSizer(wxSizer * sizer) function, expected prototype:\nwxSizer * wxDialog::CreateSeparatedSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxSizer* sizer=dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,2));

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxSizer * wxDialog::CreateSeparatedSizer(wxSizer *)");
		}
		wxSizer * lret = self->CreateSeparatedSizer(sizer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxStdDialogButtonSizer * wxDialog::CreateStdDialogButtonSizer(long flags)
	static int _bind_CreateStdDialogButtonSizer(lua_State *L) {
		if (!_lg_typecheck_CreateStdDialogButtonSizer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStdDialogButtonSizer * wxDialog::CreateStdDialogButtonSizer(long flags) function, expected prototype:\nwxStdDialogButtonSizer * wxDialog::CreateStdDialogButtonSizer(long flags)\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStdDialogButtonSizer * wxDialog::CreateStdDialogButtonSizer(long)");
		}
		wxStdDialogButtonSizer * lret = self->CreateStdDialogButtonSizer(flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStdDialogButtonSizer >::push(L,lret,false);

		return 1;
	}

	// bool wxDialog::DoLayoutAdaptation()
	static int _bind_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_DoLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::DoLayoutAdaptation() function, expected prototype:\nbool wxDialog::DoLayoutAdaptation()\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::DoLayoutAdaptation()");
		}
		bool lret = self->DoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDialog::EndModal(int retCode)
	static int _bind_EndModal(lua_State *L) {
		if (!_lg_typecheck_EndModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::EndModal(int retCode) function, expected prototype:\nvoid wxDialog::EndModal(int retCode)\nClass arguments details:\n");
		}

		int retCode=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::EndModal(int)");
		}
		self->EndModal(retCode);

		return 0;
	}

	// int wxDialog::GetAffirmativeId() const
	static int _bind_GetAffirmativeId(lua_State *L) {
		if (!_lg_typecheck_GetAffirmativeId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDialog::GetAffirmativeId() const function, expected prototype:\nint wxDialog::GetAffirmativeId() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDialog::GetAffirmativeId() const");
		}
		int lret = self->GetAffirmativeId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxDialog::GetContentWindow() const
	static int _bind_GetContentWindow(lua_State *L) {
		if (!_lg_typecheck_GetContentWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxDialog::GetContentWindow() const function, expected prototype:\nwxWindow * wxDialog::GetContentWindow() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxDialog::GetContentWindow() const");
		}
		wxWindow * lret = self->GetContentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// int wxDialog::GetEscapeId() const
	static int _bind_GetEscapeId(lua_State *L) {
		if (!_lg_typecheck_GetEscapeId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDialog::GetEscapeId() const function, expected prototype:\nint wxDialog::GetEscapeId() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDialog::GetEscapeId() const");
		}
		int lret = self->GetEscapeId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDialog::GetLayoutAdaptationDone() const
	static int _bind_GetLayoutAdaptationDone(lua_State *L) {
		if (!_lg_typecheck_GetLayoutAdaptationDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::GetLayoutAdaptationDone() const function, expected prototype:\nbool wxDialog::GetLayoutAdaptationDone() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::GetLayoutAdaptationDone() const");
		}
		bool lret = self->GetLayoutAdaptationDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDialog::GetLayoutAdaptationLevel() const
	static int _bind_GetLayoutAdaptationLevel(lua_State *L) {
		if (!_lg_typecheck_GetLayoutAdaptationLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDialog::GetLayoutAdaptationLevel() const function, expected prototype:\nint wxDialog::GetLayoutAdaptationLevel() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDialog::GetLayoutAdaptationLevel() const");
		}
		int lret = self->GetLayoutAdaptationLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDialogLayoutAdaptationMode wxDialog::GetLayoutAdaptationMode() const
	static int _bind_GetLayoutAdaptationMode(lua_State *L) {
		if (!_lg_typecheck_GetLayoutAdaptationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDialogLayoutAdaptationMode wxDialog::GetLayoutAdaptationMode() const function, expected prototype:\nwxDialogLayoutAdaptationMode wxDialog::GetLayoutAdaptationMode() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDialogLayoutAdaptationMode wxDialog::GetLayoutAdaptationMode() const");
		}
		wxDialogLayoutAdaptationMode lret = self->GetLayoutAdaptationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxArrayInt & wxDialog::GetMainButtonIds()
	static int _bind_GetMainButtonIds(lua_State *L) {
		if (!_lg_typecheck_GetMainButtonIds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayInt & wxDialog::GetMainButtonIds() function, expected prototype:\nwxArrayInt & wxDialog::GetMainButtonIds()\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayInt & wxDialog::GetMainButtonIds()");
		}
		const wxArrayInt* lret = &self->GetMainButtonIds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,false);

		return 1;
	}

	// int wxDialog::GetReturnCode() const
	static int _bind_GetReturnCode(lua_State *L) {
		if (!_lg_typecheck_GetReturnCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDialog::GetReturnCode() const function, expected prototype:\nint wxDialog::GetReturnCode() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDialog::GetReturnCode() const");
		}
		int lret = self->GetReturnCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDialog::Iconize(bool iconize = true)
	static int _bind_Iconize(lua_State *L) {
		if (!_lg_typecheck_Iconize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::Iconize(bool iconize = true) function, expected prototype:\nvoid wxDialog::Iconize(bool iconize = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::Iconize(bool)");
		}
		self->Iconize(iconize);

		return 0;
	}

	// bool wxDialog::IsIconized() const
	static int _bind_IsIconized(lua_State *L) {
		if (!_lg_typecheck_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::IsIconized() const function, expected prototype:\nbool wxDialog::IsIconized() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::IsIconized() const");
		}
		bool lret = self->IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialog::IsMainButtonId(int id) const
	static int _bind_IsMainButtonId(lua_State *L) {
		if (!_lg_typecheck_IsMainButtonId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::IsMainButtonId(int id) const function, expected prototype:\nbool wxDialog::IsMainButtonId(int id) const\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::IsMainButtonId(int) const");
		}
		bool lret = self->IsMainButtonId(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialog::IsModal() const
	static int _bind_IsModal(lua_State *L) {
		if (!_lg_typecheck_IsModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::IsModal() const function, expected prototype:\nbool wxDialog::IsModal() const\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::IsModal() const");
		}
		bool lret = self->IsModal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDialog::SetAffirmativeId(int id)
	static int _bind_SetAffirmativeId(lua_State *L) {
		if (!_lg_typecheck_SetAffirmativeId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetAffirmativeId(int id) function, expected prototype:\nvoid wxDialog::SetAffirmativeId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetAffirmativeId(int)");
		}
		self->SetAffirmativeId(id);

		return 0;
	}

	// void wxDialog::SetEscapeId(int id)
	static int _bind_SetEscapeId(lua_State *L) {
		if (!_lg_typecheck_SetEscapeId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetEscapeId(int id) function, expected prototype:\nvoid wxDialog::SetEscapeId(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetEscapeId(int)");
		}
		self->SetEscapeId(id);

		return 0;
	}

	// void wxDialog::SetIcon(const wxIcon & icon)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetIcon(const wxIcon & icon) function, expected prototype:\nvoid wxDialog::SetIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIcon* icon_ptr=dynamic_cast< wxIcon* >(Luna< wxObject >::check(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDialog::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetIcon(const wxIcon &)");
		}
		self->SetIcon(icon);

		return 0;
	}

	// void wxDialog::SetIcons(const wxIconBundle & icons)
	static int _bind_SetIcons(lua_State *L) {
		if (!_lg_typecheck_SetIcons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxDialog::SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxIconBundle* icons_ptr=dynamic_cast< wxIconBundle* >(Luna< wxObject >::check(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxDialog::SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetIcons(const wxIconBundle &)");
		}
		self->SetIcons(icons);

		return 0;
	}

	// void wxDialog::SetLayoutAdaptationDone(bool done)
	static int _bind_SetLayoutAdaptationDone(lua_State *L) {
		if (!_lg_typecheck_SetLayoutAdaptationDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetLayoutAdaptationDone(bool done) function, expected prototype:\nvoid wxDialog::SetLayoutAdaptationDone(bool done)\nClass arguments details:\n");
		}

		bool done=(bool)(lua_toboolean(L,2)==1);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetLayoutAdaptationDone(bool)");
		}
		self->SetLayoutAdaptationDone(done);

		return 0;
	}

	// void wxDialog::SetLayoutAdaptationLevel(int level)
	static int _bind_SetLayoutAdaptationLevel(lua_State *L) {
		if (!_lg_typecheck_SetLayoutAdaptationLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetLayoutAdaptationLevel(int level) function, expected prototype:\nvoid wxDialog::SetLayoutAdaptationLevel(int level)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetLayoutAdaptationLevel(int)");
		}
		self->SetLayoutAdaptationLevel(level);

		return 0;
	}

	// void wxDialog::SetLayoutAdaptationMode(wxDialogLayoutAdaptationMode mode)
	static int _bind_SetLayoutAdaptationMode(lua_State *L) {
		if (!_lg_typecheck_SetLayoutAdaptationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetLayoutAdaptationMode(wxDialogLayoutAdaptationMode mode) function, expected prototype:\nvoid wxDialog::SetLayoutAdaptationMode(wxDialogLayoutAdaptationMode mode)\nClass arguments details:\n");
		}

		wxDialogLayoutAdaptationMode mode=(wxDialogLayoutAdaptationMode)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetLayoutAdaptationMode(wxDialogLayoutAdaptationMode)");
		}
		self->SetLayoutAdaptationMode(mode);

		return 0;
	}

	// void wxDialog::SetReturnCode(int retCode)
	static int _bind_SetReturnCode(lua_State *L) {
		if (!_lg_typecheck_SetReturnCode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::SetReturnCode(int retCode) function, expected prototype:\nvoid wxDialog::SetReturnCode(int retCode)\nClass arguments details:\n");
		}

		int retCode=(int)lua_tointeger(L,2);

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::SetReturnCode(int)");
		}
		self->SetReturnCode(retCode);

		return 0;
	}

	// bool wxDialog::Show(bool show = 1)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDialog::Show(bool show = 1) function, expected prototype:\nbool wxDialog::Show(bool show = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : 1;

		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDialog::Show(bool)");
		}
		bool lret = self->Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxDialog::ShowModal() function, expected prototype:\nint wxDialog::ShowModal()\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDialog::ShowWindowModal()
	static int _bind_ShowWindowModal(lua_State *L) {
		if (!_lg_typecheck_ShowWindowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDialog::ShowWindowModal() function, expected prototype:\nvoid wxDialog::ShowWindowModal()\nClass arguments details:\n");
		}


		wxDialog* self=dynamic_cast< wxDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDialog::ShowWindowModal()");
		}
		self->ShowWindowModal();

		return 0;
	}

	// static void wxDialog::EnableLayoutAdaptation(bool enable)
	static int _bind_EnableLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_EnableLayoutAdaptation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxDialog::EnableLayoutAdaptation(bool enable) function, expected prototype:\nstatic void wxDialog::EnableLayoutAdaptation(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,1)==1);

		wxDialog::EnableLayoutAdaptation(enable);

		return 0;
	}

	// static wxDialogLayoutAdapter * wxDialog::GetLayoutAdapter()
	static int _bind_GetLayoutAdapter(lua_State *L) {
		if (!_lg_typecheck_GetLayoutAdapter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxDialogLayoutAdapter * wxDialog::GetLayoutAdapter() function, expected prototype:\nstatic wxDialogLayoutAdapter * wxDialog::GetLayoutAdapter()\nClass arguments details:\n");
		}


		wxDialogLayoutAdapter * lret = wxDialog::GetLayoutAdapter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDialogLayoutAdapter >::push(L,lret,false);

		return 1;
	}

	// static bool wxDialog::IsLayoutAdaptationEnabled()
	static int _bind_IsLayoutAdaptationEnabled(lua_State *L) {
		if (!_lg_typecheck_IsLayoutAdaptationEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxDialog::IsLayoutAdaptationEnabled() function, expected prototype:\nstatic bool wxDialog::IsLayoutAdaptationEnabled()\nClass arguments details:\n");
		}


		bool lret = wxDialog::IsLayoutAdaptationEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxDialogLayoutAdapter * wxDialog::SetLayoutAdapter(wxDialogLayoutAdapter * adapter)
	static int _bind_SetLayoutAdapter(lua_State *L) {
		if (!_lg_typecheck_SetLayoutAdapter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxDialogLayoutAdapter * wxDialog::SetLayoutAdapter(wxDialogLayoutAdapter * adapter) function, expected prototype:\nstatic wxDialogLayoutAdapter * wxDialog::SetLayoutAdapter(wxDialogLayoutAdapter * adapter)\nClass arguments details:\narg 1 ID = 64729109\n");
		}

		wxDialogLayoutAdapter* adapter=(Luna< wxDialogLayoutAdapter >::check(L,1));

		wxDialogLayoutAdapter * lret = wxDialog::SetLayoutAdapter(adapter);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDialogLayoutAdapter >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDialog* LunaTraits< wxDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDialog::_bind_ctor(L);
}

void LunaTraits< wxDialog >::_bind_dtor(wxDialog* obj) {
	delete obj;
}

const char LunaTraits< wxDialog >::className[] = "wxDialog";
const char LunaTraits< wxDialog >::fullName[] = "wxDialog";
const char LunaTraits< wxDialog >::moduleName[] = "wx";
const char* LunaTraits< wxDialog >::parents[] = {"wx.wxTopLevelWindow", 0};
const int LunaTraits< wxDialog >::hash = 48096608;
const int LunaTraits< wxDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDialog >::methods[] = {
	{"AddMainButtonId", &luna_wrapper_wxDialog::_bind_AddMainButtonId},
	{"CanDoLayoutAdaptation", &luna_wrapper_wxDialog::_bind_CanDoLayoutAdaptation},
	{"Centre", &luna_wrapper_wxDialog::_bind_Centre},
	{"Create", &luna_wrapper_wxDialog::_bind_Create},
	{"CreateButtonSizer", &luna_wrapper_wxDialog::_bind_CreateButtonSizer},
	{"CreateSeparatedButtonSizer", &luna_wrapper_wxDialog::_bind_CreateSeparatedButtonSizer},
	{"CreateSeparatedSizer", &luna_wrapper_wxDialog::_bind_CreateSeparatedSizer},
	{"CreateStdDialogButtonSizer", &luna_wrapper_wxDialog::_bind_CreateStdDialogButtonSizer},
	{"DoLayoutAdaptation", &luna_wrapper_wxDialog::_bind_DoLayoutAdaptation},
	{"EndModal", &luna_wrapper_wxDialog::_bind_EndModal},
	{"GetAffirmativeId", &luna_wrapper_wxDialog::_bind_GetAffirmativeId},
	{"GetContentWindow", &luna_wrapper_wxDialog::_bind_GetContentWindow},
	{"GetEscapeId", &luna_wrapper_wxDialog::_bind_GetEscapeId},
	{"GetLayoutAdaptationDone", &luna_wrapper_wxDialog::_bind_GetLayoutAdaptationDone},
	{"GetLayoutAdaptationLevel", &luna_wrapper_wxDialog::_bind_GetLayoutAdaptationLevel},
	{"GetLayoutAdaptationMode", &luna_wrapper_wxDialog::_bind_GetLayoutAdaptationMode},
	{"GetMainButtonIds", &luna_wrapper_wxDialog::_bind_GetMainButtonIds},
	{"GetReturnCode", &luna_wrapper_wxDialog::_bind_GetReturnCode},
	{"Iconize", &luna_wrapper_wxDialog::_bind_Iconize},
	{"IsIconized", &luna_wrapper_wxDialog::_bind_IsIconized},
	{"IsMainButtonId", &luna_wrapper_wxDialog::_bind_IsMainButtonId},
	{"IsModal", &luna_wrapper_wxDialog::_bind_IsModal},
	{"SetAffirmativeId", &luna_wrapper_wxDialog::_bind_SetAffirmativeId},
	{"SetEscapeId", &luna_wrapper_wxDialog::_bind_SetEscapeId},
	{"SetIcon", &luna_wrapper_wxDialog::_bind_SetIcon},
	{"SetIcons", &luna_wrapper_wxDialog::_bind_SetIcons},
	{"SetLayoutAdaptationDone", &luna_wrapper_wxDialog::_bind_SetLayoutAdaptationDone},
	{"SetLayoutAdaptationLevel", &luna_wrapper_wxDialog::_bind_SetLayoutAdaptationLevel},
	{"SetLayoutAdaptationMode", &luna_wrapper_wxDialog::_bind_SetLayoutAdaptationMode},
	{"SetReturnCode", &luna_wrapper_wxDialog::_bind_SetReturnCode},
	{"Show", &luna_wrapper_wxDialog::_bind_Show},
	{"ShowModal", &luna_wrapper_wxDialog::_bind_ShowModal},
	{"ShowWindowModal", &luna_wrapper_wxDialog::_bind_ShowWindowModal},
	{"EnableLayoutAdaptation", &luna_wrapper_wxDialog::_bind_EnableLayoutAdaptation},
	{"GetLayoutAdapter", &luna_wrapper_wxDialog::_bind_GetLayoutAdapter},
	{"IsLayoutAdaptationEnabled", &luna_wrapper_wxDialog::_bind_IsLayoutAdaptationEnabled},
	{"SetLayoutAdapter", &luna_wrapper_wxDialog::_bind_SetLayoutAdapter},
	{0,0}
};

luna_ConverterType LunaTraits< wxDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDialog >::enumValues[] = {
	{0,0}
};


