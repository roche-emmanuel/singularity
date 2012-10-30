#include <plug_common.h>

class luna_wrapper_wxFileDialog {
public:
	typedef Luna< wxFileDialog > luna_t;

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
		wxFileDialog* ptr= dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDialog >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTrackable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileDialog* ptr= static_cast< wxFileDialog* >(Luna< wxTrackable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtraControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilenames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWildcard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWildcard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileDialog::wxFileDialog(wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr)
	static wxFileDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileDialog::wxFileDialog(wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr) function, expected prototype:\nwxFileDialog::wxFileDialog(wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 7 ID = 25723480\narg 8 ID = 20268751\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultDir(lua_tostring(L,3),lua_objlen(L,3));
		wxString defaultFile(lua_tostring(L,4),lua_objlen(L,4));
		wxString wildcard(lua_tostring(L,5),lua_objlen(L,5));
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxFD_DEFAULT_STYLE;
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFileDialog::wxFileDialog function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::wxFileDialog function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : wxDefaultSize;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxFileDialog(parent, message, defaultDir, defaultFile, wildcard, style, pos, size, name);
	}


	// Function binds:
	// wxString wxFileDialog::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetDirectory() const function, expected prototype:\nwxString wxFileDialog::GetDirectory() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetDirectory() const");
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxWindow * wxFileDialog::GetExtraControl() const
	static int _bind_GetExtraControl(lua_State *L) {
		if (!_lg_typecheck_GetExtraControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxFileDialog::GetExtraControl() const function, expected prototype:\nwxWindow * wxFileDialog::GetExtraControl() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxFileDialog::GetExtraControl() const");
		}
		wxWindow * lret = self->GetExtraControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxFileDialog::GetFilename() const
	static int _bind_GetFilename(lua_State *L) {
		if (!_lg_typecheck_GetFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetFilename() const function, expected prototype:\nwxString wxFileDialog::GetFilename() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetFilename() const");
		}
		wxString lret = self->GetFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::GetFilenames(wxArrayString & filenames) const
	static int _bind_GetFilenames(lua_State *L) {
		if (!_lg_typecheck_GetFilenames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::GetFilenames(wxArrayString & filenames) const function, expected prototype:\nvoid wxFileDialog::GetFilenames(wxArrayString & filenames) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* filenames_ptr=(Luna< wxArrayString >::check(L,2));
		if( !filenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filenames in wxFileDialog::GetFilenames function");
		}
		wxArrayString & filenames=*filenames_ptr;

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::GetFilenames(wxArrayString &) const");
		}
		self->GetFilenames(filenames);

		return 0;
	}

	// int wxFileDialog::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileDialog::GetFilterIndex() const function, expected prototype:\nint wxFileDialog::GetFilterIndex() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileDialog::GetFilterIndex() const");
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileDialog::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetMessage() const function, expected prototype:\nwxString wxFileDialog::GetMessage() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetMessage() const");
		}
		wxString lret = self->GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileDialog::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetPath() const function, expected prototype:\nwxString wxFileDialog::GetPath() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::GetPaths(wxArrayString & paths) const
	static int _bind_GetPaths(lua_State *L) {
		if (!_lg_typecheck_GetPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxFileDialog::GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxFileDialog::GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::GetPaths(wxArrayString &) const");
		}
		self->GetPaths(paths);

		return 0;
	}

	// wxString wxFileDialog::GetWildcard() const
	static int _bind_GetWildcard(lua_State *L) {
		if (!_lg_typecheck_GetWildcard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetWildcard() const function, expected prototype:\nwxString wxFileDialog::GetWildcard() const\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetWildcard() const");
		}
		wxString lret = self->GetWildcard();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::SetDirectory(const wxString & directory)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetDirectory(const wxString & directory) function, expected prototype:\nvoid wxFileDialog::SetDirectory(const wxString & directory)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString directory(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetDirectory(const wxString &)");
		}
		self->SetDirectory(directory);

		return 0;
	}

	// void wxFileDialog::SetFilename(const wxString & setfilename)
	static int _bind_SetFilename(lua_State *L) {
		if (!_lg_typecheck_SetFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetFilename(const wxString & setfilename) function, expected prototype:\nvoid wxFileDialog::SetFilename(const wxString & setfilename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString setfilename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetFilename(const wxString &)");
		}
		self->SetFilename(setfilename);

		return 0;
	}

	// void wxFileDialog::SetFilterIndex(int filterIndex)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetFilterIndex(int filterIndex) function, expected prototype:\nvoid wxFileDialog::SetFilterIndex(int filterIndex)\nClass arguments details:\n");
		}

		int filterIndex=(int)lua_tointeger(L,2);

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetFilterIndex(int)");
		}
		self->SetFilterIndex(filterIndex);

		return 0;
	}

	// void wxFileDialog::SetMessage(const wxString & message)
	static int _bind_SetMessage(lua_State *L) {
		if (!_lg_typecheck_SetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetMessage(const wxString & message) function, expected prototype:\nvoid wxFileDialog::SetMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetMessage(const wxString &)");
		}
		self->SetMessage(message);

		return 0;
	}

	// void wxFileDialog::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetPath(const wxString & path) function, expected prototype:\nvoid wxFileDialog::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetPath(const wxString &)");
		}
		self->SetPath(path);

		return 0;
	}

	// void wxFileDialog::SetWildcard(const wxString & wildCard)
	static int _bind_SetWildcard(lua_State *L) {
		if (!_lg_typecheck_SetWildcard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetWildcard(const wxString & wildCard) function, expected prototype:\nvoid wxFileDialog::SetWildcard(const wxString & wildCard)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString wildCard(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetWildcard(const wxString &)");
		}
		self->SetWildcard(wildCard);

		return 0;
	}

	// int wxFileDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileDialog::ShowModal() function, expected prototype:\nint wxFileDialog::ShowModal()\nClass arguments details:\n");
		}


		wxFileDialog* self=dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileDialog::ShowModal()");
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFileDialog* LunaTraits< wxFileDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileDialog::_bind_ctor(L);
}

void LunaTraits< wxFileDialog >::_bind_dtor(wxFileDialog* obj) {
	delete obj;
}

const char LunaTraits< wxFileDialog >::className[] = "wxFileDialog";
const char LunaTraits< wxFileDialog >::fullName[] = "wxFileDialog";
const char LunaTraits< wxFileDialog >::moduleName[] = "wx";
const char* LunaTraits< wxFileDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxFileDialog >::hash = 63975219;
const int LunaTraits< wxFileDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFileDialog >::methods[] = {
	{"GetDirectory", &luna_wrapper_wxFileDialog::_bind_GetDirectory},
	{"GetExtraControl", &luna_wrapper_wxFileDialog::_bind_GetExtraControl},
	{"GetFilename", &luna_wrapper_wxFileDialog::_bind_GetFilename},
	{"GetFilenames", &luna_wrapper_wxFileDialog::_bind_GetFilenames},
	{"GetFilterIndex", &luna_wrapper_wxFileDialog::_bind_GetFilterIndex},
	{"GetMessage", &luna_wrapper_wxFileDialog::_bind_GetMessage},
	{"GetPath", &luna_wrapper_wxFileDialog::_bind_GetPath},
	{"GetPaths", &luna_wrapper_wxFileDialog::_bind_GetPaths},
	{"GetWildcard", &luna_wrapper_wxFileDialog::_bind_GetWildcard},
	{"SetDirectory", &luna_wrapper_wxFileDialog::_bind_SetDirectory},
	{"SetFilename", &luna_wrapper_wxFileDialog::_bind_SetFilename},
	{"SetFilterIndex", &luna_wrapper_wxFileDialog::_bind_SetFilterIndex},
	{"SetMessage", &luna_wrapper_wxFileDialog::_bind_SetMessage},
	{"SetPath", &luna_wrapper_wxFileDialog::_bind_SetPath},
	{"SetWildcard", &luna_wrapper_wxFileDialog::_bind_SetWildcard},
	{"ShowModal", &luna_wrapper_wxFileDialog::_bind_ShowModal},
	{"__eq", &luna_wrapper_wxFileDialog::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileDialog::_cast_from_wxObject},
	{"wxTrackable", &luna_wrapper_wxFileDialog::_cast_from_wxTrackable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDialog >::enumValues[] = {
	{0,0}
};


