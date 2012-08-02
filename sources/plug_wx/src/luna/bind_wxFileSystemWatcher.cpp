#include <plug_common.h>

class luna_wrapper_wxFileSystemWatcher {
public:
	typedef Luna< wxFileSystemWatcher > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileSystemWatcher* ptr= dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystemWatcher >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTree(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveTree(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWatchedPathsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWatchedPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59507769)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileSystemWatcher::wxFileSystemWatcher()
	static wxFileSystemWatcher* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileSystemWatcher::wxFileSystemWatcher() function, expected prototype:\nwxFileSystemWatcher::wxFileSystemWatcher()\nClass arguments details:\n");
		}


		return new wxFileSystemWatcher();
	}


	// Function binds:
	// bool wxFileSystemWatcher::Add(const wxFileName & path, int events = wxFSW_EVENT_ALL)
	static int _bind_Add(lua_State *L) {
		if (!_lg_typecheck_Add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcher::Add(const wxFileName & path, int events = wxFSW_EVENT_ALL) function, expected prototype:\nbool wxFileSystemWatcher::Add(const wxFileName & path, int events = wxFSW_EVENT_ALL)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		int luatop = lua_gettop(L);

		const wxFileName* path_ptr=(Luna< wxFileName >::check(L,2));
		if( !path_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg path in wxFileSystemWatcher::Add function");
		}
		const wxFileName & path=*path_ptr;
		int events=luatop>2 ? (int)lua_tointeger(L,3) : wxFSW_EVENT_ALL;

		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcher::Add(const wxFileName &, int)");
		}
		bool lret = self->Add(path, events);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileSystemWatcher::AddTree(const wxFileName & path, int events = wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString)
	static int _bind_AddTree(lua_State *L) {
		if (!_lg_typecheck_AddTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcher::AddTree(const wxFileName & path, int events = wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString) function, expected prototype:\nbool wxFileSystemWatcher::AddTree(const wxFileName & path, int events = wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString)\nClass arguments details:\narg 1 ID = 53530938\narg 3 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		const wxFileName* path_ptr=(Luna< wxFileName >::check(L,2));
		if( !path_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg path in wxFileSystemWatcher::AddTree function");
		}
		const wxFileName & path=*path_ptr;
		int events=luatop>2 ? (int)lua_tointeger(L,3) : wxFSW_EVENT_ALL;
		wxString filter(lua_tostring(L,4),lua_objlen(L,4));

		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcher::AddTree(const wxFileName &, int, const wxString &)");
		}
		bool lret = self->AddTree(path, events, filter);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileSystemWatcher::Remove(const wxFileName & path)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcher::Remove(const wxFileName & path) function, expected prototype:\nbool wxFileSystemWatcher::Remove(const wxFileName & path)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		const wxFileName* path_ptr=(Luna< wxFileName >::check(L,2));
		if( !path_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg path in wxFileSystemWatcher::Remove function");
		}
		const wxFileName & path=*path_ptr;

		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcher::Remove(const wxFileName &)");
		}
		bool lret = self->Remove(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileSystemWatcher::RemoveTree(const wxFileName & path)
	static int _bind_RemoveTree(lua_State *L) {
		if (!_lg_typecheck_RemoveTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcher::RemoveTree(const wxFileName & path) function, expected prototype:\nbool wxFileSystemWatcher::RemoveTree(const wxFileName & path)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		const wxFileName* path_ptr=(Luna< wxFileName >::check(L,2));
		if( !path_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg path in wxFileSystemWatcher::RemoveTree function");
		}
		const wxFileName & path=*path_ptr;

		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcher::RemoveTree(const wxFileName &)");
		}
		bool lret = self->RemoveTree(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileSystemWatcher::RemoveAll()
	static int _bind_RemoveAll(lua_State *L) {
		if (!_lg_typecheck_RemoveAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcher::RemoveAll() function, expected prototype:\nbool wxFileSystemWatcher::RemoveAll()\nClass arguments details:\n");
		}


		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcher::RemoveAll()");
		}
		bool lret = self->RemoveAll();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxFileSystemWatcher::GetWatchedPathsCount() const
	static int _bind_GetWatchedPathsCount(lua_State *L) {
		if (!_lg_typecheck_GetWatchedPathsCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileSystemWatcher::GetWatchedPathsCount() const function, expected prototype:\nint wxFileSystemWatcher::GetWatchedPathsCount() const\nClass arguments details:\n");
		}


		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileSystemWatcher::GetWatchedPathsCount() const");
		}
		int lret = self->GetWatchedPathsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFileSystemWatcher::GetWatchedPaths(wxArrayString * paths) const
	static int _bind_GetWatchedPaths(lua_State *L) {
		if (!_lg_typecheck_GetWatchedPaths(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileSystemWatcher::GetWatchedPaths(wxArrayString * paths) const function, expected prototype:\nint wxFileSystemWatcher::GetWatchedPaths(wxArrayString * paths) const\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		wxArrayString* paths=(Luna< wxArrayString >::check(L,2));

		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileSystemWatcher::GetWatchedPaths(wxArrayString *) const");
		}
		int lret = self->GetWatchedPaths(paths);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFileSystemWatcher::SetOwner(wxEvtHandler * handler)
	static int _bind_SetOwner(lua_State *L) {
		if (!_lg_typecheck_SetOwner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileSystemWatcher::SetOwner(wxEvtHandler * handler) function, expected prototype:\nvoid wxFileSystemWatcher::SetOwner(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxFileSystemWatcher* self=dynamic_cast< wxFileSystemWatcher* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileSystemWatcher::SetOwner(wxEvtHandler *)");
		}
		self->SetOwner(handler);

		return 0;
	}


	// Operator binds:

};

wxFileSystemWatcher* LunaTraits< wxFileSystemWatcher >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileSystemWatcher::_bind_ctor(L);
}

void LunaTraits< wxFileSystemWatcher >::_bind_dtor(wxFileSystemWatcher* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystemWatcher >::className[] = "wxFileSystemWatcher";
const char LunaTraits< wxFileSystemWatcher >::fullName[] = "wxFileSystemWatcher";
const char LunaTraits< wxFileSystemWatcher >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystemWatcher >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxFileSystemWatcher >::hash = 49051369;
const int LunaTraits< wxFileSystemWatcher >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFileSystemWatcher >::methods[] = {
	{"Add", &luna_wrapper_wxFileSystemWatcher::_bind_Add},
	{"AddTree", &luna_wrapper_wxFileSystemWatcher::_bind_AddTree},
	{"Remove", &luna_wrapper_wxFileSystemWatcher::_bind_Remove},
	{"RemoveTree", &luna_wrapper_wxFileSystemWatcher::_bind_RemoveTree},
	{"RemoveAll", &luna_wrapper_wxFileSystemWatcher::_bind_RemoveAll},
	{"GetWatchedPathsCount", &luna_wrapper_wxFileSystemWatcher::_bind_GetWatchedPathsCount},
	{"GetWatchedPaths", &luna_wrapper_wxFileSystemWatcher::_bind_GetWatchedPaths},
	{"SetOwner", &luna_wrapper_wxFileSystemWatcher::_bind_SetOwner},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystemWatcher >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystemWatcher::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystemWatcher >::enumValues[] = {
	{0,0}
};


