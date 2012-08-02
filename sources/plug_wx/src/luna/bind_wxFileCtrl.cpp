#include <plug_common.h>

class luna_wrapper_wxFileCtrl {
public:
	typedef Luna< wxFileCtrl > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileCtrl* ptr= dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,25723480) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,20268751) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
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

	inline static bool _lg_typecheck_SetWildcard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileCtrl::wxFileCtrl()
	static wxFileCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileCtrl::wxFileCtrl() function, expected prototype:\nwxFileCtrl::wxFileCtrl()\nClass arguments details:\n");
		}


		return new wxFileCtrl();
	}

	// wxFileCtrl::wxFileCtrl(wxWindow * parent, int id, const wxString & defaultDirectory = wxEmptyString, const wxString & defaultFilename = wxEmptyString, const wxString & wildCard = wxFileSelectorDefaultWildcardStr, long style = wxFC_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileCtrlNameStr)
	static wxFileCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileCtrl::wxFileCtrl(wxWindow * parent, int id, const wxString & defaultDirectory = wxEmptyString, const wxString & defaultFilename = wxEmptyString, const wxString & wildCard = wxFileSelectorDefaultWildcardStr, long style = wxFC_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileCtrlNameStr) function, expected prototype:\nwxFileCtrl::wxFileCtrl(wxWindow * parent, int id, const wxString & defaultDirectory = wxEmptyString, const wxString & defaultFilename = wxEmptyString, const wxString & wildCard = wxFileSelectorDefaultWildcardStr, long style = wxFC_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 7 ID = 25723480\narg 8 ID = 20268751\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString defaultDirectory(lua_tostring(L,3),lua_objlen(L,3));
		wxString defaultFilename(lua_tostring(L,4),lua_objlen(L,4));
		wxString wildCard(lua_tostring(L,5),lua_objlen(L,5));
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxFC_DEFAULT_STYLE;
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFileCtrl::wxFileCtrl function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileCtrl::wxFileCtrl function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : wxDefaultSize;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxFileCtrl(parent, id, defaultDirectory, defaultFilename, wildCard, style, pos, size, name);
	}

	// Overload binder for wxFileCtrl::wxFileCtrl
	static wxFileCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileCtrl, cannot match any of the overloads for function wxFileCtrl:\n  wxFileCtrl()\n  wxFileCtrl(wxWindow *, int, const wxString &, const wxString &, const wxString &, long, const wxPoint &, const wxSize &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFileCtrl::Create(wxWindow * parent, int id, const wxString & defaultDirectory = wxEmptyString, const wxString & defaultFilename = wxEmptyString, const wxString & wildCard = wxFileSelectorDefaultWildcardStr, long style = wxFC_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileCtrl::Create(wxWindow * parent, int id, const wxString & defaultDirectory = wxEmptyString, const wxString & defaultFilename = wxEmptyString, const wxString & wildCard = wxFileSelectorDefaultWildcardStr, long style = wxFC_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileCtrlNameStr) function, expected prototype:\nbool wxFileCtrl::Create(wxWindow * parent, int id, const wxString & defaultDirectory = wxEmptyString, const wxString & defaultFilename = wxEmptyString, const wxString & wildCard = wxFileSelectorDefaultWildcardStr, long style = wxFC_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 7 ID = 25723480\narg 8 ID = 20268751\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString defaultDirectory(lua_tostring(L,4),lua_objlen(L,4));
		wxString defaultFilename(lua_tostring(L,5),lua_objlen(L,5));
		wxString wildCard(lua_tostring(L,6),lua_objlen(L,6));
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxFC_DEFAULT_STYLE;
		const wxPoint* pos_ptr=luatop>7 ? (Luna< wxPoint >::check(L,8)) : NULL;
		if( luatop>7 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFileCtrl::Create function");
		}
		const wxPoint & pos=luatop>7 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>8 ? (Luna< wxSize >::check(L,9)) : NULL;
		if( luatop>8 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileCtrl::Create function");
		}
		const wxSize & size=luatop>8 ? *size_ptr : wxDefaultSize;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileCtrl::Create(wxWindow *, int, const wxString &, const wxString &, const wxString &, long, const wxPoint &, const wxSize &, const wxString &)");
		}
		bool lret = self->Create(parent, id, defaultDirectory, defaultFilename, wildCard, style, pos, size, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileCtrl::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrl::GetDirectory() const function, expected prototype:\nwxString wxFileCtrl::GetDirectory() const\nClass arguments details:\n");
		}


		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileCtrl::GetDirectory() const");
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileCtrl::GetFilename() const
	static int _bind_GetFilename(lua_State *L) {
		if (!_lg_typecheck_GetFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrl::GetFilename() const function, expected prototype:\nwxString wxFileCtrl::GetFilename() const\nClass arguments details:\n");
		}


		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileCtrl::GetFilename() const");
		}
		wxString lret = self->GetFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileCtrl::GetFilenames(wxArrayString & filenames) const
	static int _bind_GetFilenames(lua_State *L) {
		if (!_lg_typecheck_GetFilenames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrl::GetFilenames(wxArrayString & filenames) const function, expected prototype:\nvoid wxFileCtrl::GetFilenames(wxArrayString & filenames) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* filenames_ptr=(Luna< wxArrayString >::check(L,2));
		if( !filenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filenames in wxFileCtrl::GetFilenames function");
		}
		wxArrayString & filenames=*filenames_ptr;

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrl::GetFilenames(wxArrayString &) const");
		}
		self->GetFilenames(filenames);

		return 0;
	}

	// int wxFileCtrl::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileCtrl::GetFilterIndex() const function, expected prototype:\nint wxFileCtrl::GetFilterIndex() const\nClass arguments details:\n");
		}


		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileCtrl::GetFilterIndex() const");
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileCtrl::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrl::GetPath() const function, expected prototype:\nwxString wxFileCtrl::GetPath() const\nClass arguments details:\n");
		}


		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileCtrl::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileCtrl::GetPaths(wxArrayString & paths) const
	static int _bind_GetPaths(lua_State *L) {
		if (!_lg_typecheck_GetPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrl::GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxFileCtrl::GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxFileCtrl::GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrl::GetPaths(wxArrayString &) const");
		}
		self->GetPaths(paths);

		return 0;
	}

	// wxString wxFileCtrl::GetWildcard() const
	static int _bind_GetWildcard(lua_State *L) {
		if (!_lg_typecheck_GetWildcard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileCtrl::GetWildcard() const function, expected prototype:\nwxString wxFileCtrl::GetWildcard() const\nClass arguments details:\n");
		}


		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileCtrl::GetWildcard() const");
		}
		wxString lret = self->GetWildcard();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxFileCtrl::SetDirectory(const wxString & directory)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileCtrl::SetDirectory(const wxString & directory) function, expected prototype:\nbool wxFileCtrl::SetDirectory(const wxString & directory)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString directory(lua_tostring(L,2),lua_objlen(L,2));

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileCtrl::SetDirectory(const wxString &)");
		}
		bool lret = self->SetDirectory(directory);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileCtrl::SetFilename(const wxString & filename)
	static int _bind_SetFilename(lua_State *L) {
		if (!_lg_typecheck_SetFilename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileCtrl::SetFilename(const wxString & filename) function, expected prototype:\nbool wxFileCtrl::SetFilename(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileCtrl::SetFilename(const wxString &)");
		}
		bool lret = self->SetFilename(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileCtrl::SetFilterIndex(int filterIndex)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrl::SetFilterIndex(int filterIndex) function, expected prototype:\nvoid wxFileCtrl::SetFilterIndex(int filterIndex)\nClass arguments details:\n");
		}

		int filterIndex=(int)lua_tointeger(L,2);

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrl::SetFilterIndex(int)");
		}
		self->SetFilterIndex(filterIndex);

		return 0;
	}

	// void wxFileCtrl::SetWildcard(const wxString & wildCard)
	static int _bind_SetWildcard(lua_State *L) {
		if (!_lg_typecheck_SetWildcard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrl::SetWildcard(const wxString & wildCard) function, expected prototype:\nvoid wxFileCtrl::SetWildcard(const wxString & wildCard)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString wildCard(lua_tostring(L,2),lua_objlen(L,2));

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrl::SetWildcard(const wxString &)");
		}
		self->SetWildcard(wildCard);

		return 0;
	}

	// void wxFileCtrl::ShowHidden(bool show)
	static int _bind_ShowHidden(lua_State *L) {
		if (!_lg_typecheck_ShowHidden(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileCtrl::ShowHidden(bool show) function, expected prototype:\nvoid wxFileCtrl::ShowHidden(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxFileCtrl* self=dynamic_cast< wxFileCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileCtrl::ShowHidden(bool)");
		}
		self->ShowHidden(show);

		return 0;
	}


	// Operator binds:

};

wxFileCtrl* LunaTraits< wxFileCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileCtrl::_bind_ctor(L);
}

void LunaTraits< wxFileCtrl >::_bind_dtor(wxFileCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxFileCtrl >::className[] = "wxFileCtrl";
const char LunaTraits< wxFileCtrl >::fullName[] = "wxFileCtrl";
const char LunaTraits< wxFileCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxFileCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxFileCtrl >::hash = 53221658;
const int LunaTraits< wxFileCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFileCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxFileCtrl::_bind_Create},
	{"GetDirectory", &luna_wrapper_wxFileCtrl::_bind_GetDirectory},
	{"GetFilename", &luna_wrapper_wxFileCtrl::_bind_GetFilename},
	{"GetFilenames", &luna_wrapper_wxFileCtrl::_bind_GetFilenames},
	{"GetFilterIndex", &luna_wrapper_wxFileCtrl::_bind_GetFilterIndex},
	{"GetPath", &luna_wrapper_wxFileCtrl::_bind_GetPath},
	{"GetPaths", &luna_wrapper_wxFileCtrl::_bind_GetPaths},
	{"GetWildcard", &luna_wrapper_wxFileCtrl::_bind_GetWildcard},
	{"SetDirectory", &luna_wrapper_wxFileCtrl::_bind_SetDirectory},
	{"SetFilename", &luna_wrapper_wxFileCtrl::_bind_SetFilename},
	{"SetFilterIndex", &luna_wrapper_wxFileCtrl::_bind_SetFilterIndex},
	{"SetWildcard", &luna_wrapper_wxFileCtrl::_bind_SetWildcard},
	{"ShowHidden", &luna_wrapper_wxFileCtrl::_bind_ShowHidden},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileCtrl >::enumValues[] = {
	{0,0}
};


