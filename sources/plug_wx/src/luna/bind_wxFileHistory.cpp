#include <plug_common.h>

class luna_wrapper_wxFileHistory {
public:
	typedef Luna< wxFileHistory > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileHistory* ptr= dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileHistory >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddFileToHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFilesToMenu_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddFilesToMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBaseId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHistoryFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaxFiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFileFromHistory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBaseId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxFileHistory::AddFileToHistory(const wxString & filename)
	static int _bind_AddFileToHistory(lua_State *L) {
		if (!_lg_typecheck_AddFileToHistory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::AddFileToHistory(const wxString & filename) function, expected prototype:\nvoid wxFileHistory::AddFileToHistory(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::AddFileToHistory(const wxString &)");
		}
		self->AddFileToHistory(filename);

		return 0;
	}

	// void wxFileHistory::AddFilesToMenu()
	static int _bind_AddFilesToMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddFilesToMenu_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::AddFilesToMenu() function, expected prototype:\nvoid wxFileHistory::AddFilesToMenu()\nClass arguments details:\n");
		}


		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::AddFilesToMenu()");
		}
		self->AddFilesToMenu();

		return 0;
	}

	// void wxFileHistory::AddFilesToMenu(wxMenu * menu)
	static int _bind_AddFilesToMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddFilesToMenu_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::AddFilesToMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::AddFilesToMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::AddFilesToMenu(wxMenu *)");
		}
		self->AddFilesToMenu(menu);

		return 0;
	}

	// Overload binder for wxFileHistory::AddFilesToMenu
	static int _bind_AddFilesToMenu(lua_State *L) {
		if (_lg_typecheck_AddFilesToMenu_overload_1(L)) return _bind_AddFilesToMenu_overload_1(L);
		if (_lg_typecheck_AddFilesToMenu_overload_2(L)) return _bind_AddFilesToMenu_overload_2(L);

		luaL_error(L, "error in function AddFilesToMenu, cannot match any of the overloads for function AddFilesToMenu:\n  AddFilesToMenu()\n  AddFilesToMenu(wxMenu *)\n");
		return 0;
	}

	// int wxFileHistory::GetBaseId() const
	static int _bind_GetBaseId(lua_State *L) {
		if (!_lg_typecheck_GetBaseId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileHistory::GetBaseId() const function, expected prototype:\nint wxFileHistory::GetBaseId() const\nClass arguments details:\n");
		}


		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileHistory::GetBaseId() const");
		}
		int lret = self->GetBaseId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFileHistory::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFileHistory::GetCount() const function, expected prototype:\nsize_t wxFileHistory::GetCount() const\nClass arguments details:\n");
		}


		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFileHistory::GetCount() const");
		}
		size_t lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileHistory::GetHistoryFile(size_t index) const
	static int _bind_GetHistoryFile(lua_State *L) {
		if (!_lg_typecheck_GetHistoryFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileHistory::GetHistoryFile(size_t index) const function, expected prototype:\nwxString wxFileHistory::GetHistoryFile(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileHistory::GetHistoryFile(size_t) const");
		}
		wxString lret = self->GetHistoryFile(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxFileHistory::GetMaxFiles() const
	static int _bind_GetMaxFiles(lua_State *L) {
		if (!_lg_typecheck_GetMaxFiles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileHistory::GetMaxFiles() const function, expected prototype:\nint wxFileHistory::GetMaxFiles() const\nClass arguments details:\n");
		}


		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileHistory::GetMaxFiles() const");
		}
		int lret = self->GetMaxFiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxList & wxFileHistory::GetMenus() const
	static int _bind_GetMenus(lua_State *L) {
		if (!_lg_typecheck_GetMenus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxList & wxFileHistory::GetMenus() const function, expected prototype:\nconst wxList & wxFileHistory::GetMenus() const\nClass arguments details:\n");
		}


		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxList & wxFileHistory::GetMenus() const");
		}
		const wxList* lret = &self->GetMenus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxList >::push(L,lret,false);

		return 1;
	}

	// void wxFileHistory::Load(const wxConfigBase & config)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::Load(const wxConfigBase & config) function, expected prototype:\nvoid wxFileHistory::Load(const wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxConfigBase* config_ptr=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxFileHistory::Load function");
		}
		const wxConfigBase & config=*config_ptr;

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::Load(const wxConfigBase &)");
		}
		self->Load(config);

		return 0;
	}

	// void wxFileHistory::RemoveFileFromHistory(size_t i)
	static int _bind_RemoveFileFromHistory(lua_State *L) {
		if (!_lg_typecheck_RemoveFileFromHistory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::RemoveFileFromHistory(size_t i) function, expected prototype:\nvoid wxFileHistory::RemoveFileFromHistory(size_t i)\nClass arguments details:\n");
		}

		size_t i=(size_t)lua_tointeger(L,2);

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::RemoveFileFromHistory(size_t)");
		}
		self->RemoveFileFromHistory(i);

		return 0;
	}

	// void wxFileHistory::RemoveMenu(wxMenu * menu)
	static int _bind_RemoveMenu(lua_State *L) {
		if (!_lg_typecheck_RemoveMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::RemoveMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::RemoveMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::RemoveMenu(wxMenu *)");
		}
		self->RemoveMenu(menu);

		return 0;
	}

	// void wxFileHistory::Save(wxConfigBase & config)
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::Save(wxConfigBase & config) function, expected prototype:\nvoid wxFileHistory::Save(wxConfigBase & config)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxConfigBase* config_ptr=dynamic_cast< wxConfigBase* >(Luna< wxObject >::check(L,2));
		if( !config_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg config in wxFileHistory::Save function");
		}
		wxConfigBase & config=*config_ptr;

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::Save(wxConfigBase &)");
		}
		self->Save(config);

		return 0;
	}

	// void wxFileHistory::SetBaseId(int baseId)
	static int _bind_SetBaseId(lua_State *L) {
		if (!_lg_typecheck_SetBaseId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::SetBaseId(int baseId) function, expected prototype:\nvoid wxFileHistory::SetBaseId(int baseId)\nClass arguments details:\n");
		}

		int baseId=(int)lua_tointeger(L,2);

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::SetBaseId(int)");
		}
		self->SetBaseId(baseId);

		return 0;
	}

	// void wxFileHistory::UseMenu(wxMenu * menu)
	static int _bind_UseMenu(lua_State *L) {
		if (!_lg_typecheck_UseMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileHistory::UseMenu(wxMenu * menu) function, expected prototype:\nvoid wxFileHistory::UseMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,2));

		wxFileHistory* self=dynamic_cast< wxFileHistory* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileHistory::UseMenu(wxMenu *)");
		}
		self->UseMenu(menu);

		return 0;
	}


	// Operator binds:

};

wxFileHistory* LunaTraits< wxFileHistory >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxFileHistory >::_bind_dtor(wxFileHistory* obj) {
	delete obj;
}

const char LunaTraits< wxFileHistory >::className[] = "wxFileHistory";
const char LunaTraits< wxFileHistory >::fullName[] = "wxFileHistory";
const char LunaTraits< wxFileHistory >::moduleName[] = "wx";
const char* LunaTraits< wxFileHistory >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFileHistory >::hash = 50107997;
const int LunaTraits< wxFileHistory >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileHistory >::methods[] = {
	{"AddFileToHistory", &luna_wrapper_wxFileHistory::_bind_AddFileToHistory},
	{"AddFilesToMenu", &luna_wrapper_wxFileHistory::_bind_AddFilesToMenu},
	{"GetBaseId", &luna_wrapper_wxFileHistory::_bind_GetBaseId},
	{"GetCount", &luna_wrapper_wxFileHistory::_bind_GetCount},
	{"GetHistoryFile", &luna_wrapper_wxFileHistory::_bind_GetHistoryFile},
	{"GetMaxFiles", &luna_wrapper_wxFileHistory::_bind_GetMaxFiles},
	{"GetMenus", &luna_wrapper_wxFileHistory::_bind_GetMenus},
	{"Load", &luna_wrapper_wxFileHistory::_bind_Load},
	{"RemoveFileFromHistory", &luna_wrapper_wxFileHistory::_bind_RemoveFileFromHistory},
	{"RemoveMenu", &luna_wrapper_wxFileHistory::_bind_RemoveMenu},
	{"Save", &luna_wrapper_wxFileHistory::_bind_Save},
	{"SetBaseId", &luna_wrapper_wxFileHistory::_bind_SetBaseId},
	{"UseMenu", &luna_wrapper_wxFileHistory::_bind_UseMenu},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileHistory >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileHistory::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileHistory >::enumValues[] = {
	{0,0}
};


