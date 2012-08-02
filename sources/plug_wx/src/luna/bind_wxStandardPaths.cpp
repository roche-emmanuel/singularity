#include <plug_common.h>

class luna_wrapper_wxStandardPaths {
public:
	typedef Luna< wxStandardPaths > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStandardPaths");
		
		return luna_dynamicCast(L,converters,"wxStandardPaths",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_DontIgnoreAppSubDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAppDocumentsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetConfigDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDocumentsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExecutablePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocalizedResourcesDir(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPluginsDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetResourcesDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTempDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserConfigDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserLocalDataDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IgnoreAppSubDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IgnoreAppBuildSubDirs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UseAppInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MSWGetShellDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxStandardPaths::DontIgnoreAppSubDir()
	static int _bind_DontIgnoreAppSubDir(lua_State *L) {
		if (!_lg_typecheck_DontIgnoreAppSubDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::DontIgnoreAppSubDir() function, expected prototype:\nvoid wxStandardPaths::DontIgnoreAppSubDir()\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStandardPaths::DontIgnoreAppSubDir()");
		}
		self->DontIgnoreAppSubDir();

		return 0;
	}

	// wxString wxStandardPaths::GetAppDocumentsDir() const
	static int _bind_GetAppDocumentsDir(lua_State *L) {
		if (!_lg_typecheck_GetAppDocumentsDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetAppDocumentsDir() const function, expected prototype:\nwxString wxStandardPaths::GetAppDocumentsDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetAppDocumentsDir() const");
		}
		wxString lret = self->GetAppDocumentsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetConfigDir() const
	static int _bind_GetConfigDir(lua_State *L) {
		if (!_lg_typecheck_GetConfigDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetConfigDir() const function, expected prototype:\nwxString wxStandardPaths::GetConfigDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetConfigDir() const");
		}
		wxString lret = self->GetConfigDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetDataDir() const
	static int _bind_GetDataDir(lua_State *L) {
		if (!_lg_typecheck_GetDataDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetDataDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetDataDir() const");
		}
		wxString lret = self->GetDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetDocumentsDir() const
	static int _bind_GetDocumentsDir(lua_State *L) {
		if (!_lg_typecheck_GetDocumentsDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetDocumentsDir() const function, expected prototype:\nwxString wxStandardPaths::GetDocumentsDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetDocumentsDir() const");
		}
		wxString lret = self->GetDocumentsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetExecutablePath() const
	static int _bind_GetExecutablePath(lua_State *L) {
		if (!_lg_typecheck_GetExecutablePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetExecutablePath() const function, expected prototype:\nwxString wxStandardPaths::GetExecutablePath() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetExecutablePath() const");
		}
		wxString lret = self->GetExecutablePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetLocalDataDir() const
	static int _bind_GetLocalDataDir(lua_State *L) {
		if (!_lg_typecheck_GetLocalDataDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetLocalDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetLocalDataDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetLocalDataDir() const");
		}
		wxString lret = self->GetLocalDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const
	static int _bind_GetLocalizedResourcesDir(lua_State *L) {
		if (!_lg_typecheck_GetLocalizedResourcesDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const function, expected prototype:\nwxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString lang(lua_tostring(L,2),lua_objlen(L,2));
		wxStandardPaths::ResourceCat category=luatop>2 ? (wxStandardPaths::ResourceCat)lua_tointeger(L,3) : wxStandardPaths::ResourceCat_None;

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString &, wxStandardPaths::ResourceCat) const");
		}
		wxString lret = self->GetLocalizedResourcesDir(lang, category);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetPluginsDir() const
	static int _bind_GetPluginsDir(lua_State *L) {
		if (!_lg_typecheck_GetPluginsDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetPluginsDir() const function, expected prototype:\nwxString wxStandardPaths::GetPluginsDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetPluginsDir() const");
		}
		wxString lret = self->GetPluginsDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetResourcesDir() const
	static int _bind_GetResourcesDir(lua_State *L) {
		if (!_lg_typecheck_GetResourcesDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetResourcesDir() const function, expected prototype:\nwxString wxStandardPaths::GetResourcesDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetResourcesDir() const");
		}
		wxString lret = self->GetResourcesDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetTempDir() const
	static int _bind_GetTempDir(lua_State *L) {
		if (!_lg_typecheck_GetTempDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetTempDir() const function, expected prototype:\nwxString wxStandardPaths::GetTempDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetTempDir() const");
		}
		wxString lret = self->GetTempDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetUserConfigDir() const
	static int _bind_GetUserConfigDir(lua_State *L) {
		if (!_lg_typecheck_GetUserConfigDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetUserConfigDir() const function, expected prototype:\nwxString wxStandardPaths::GetUserConfigDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetUserConfigDir() const");
		}
		wxString lret = self->GetUserConfigDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetUserDataDir() const
	static int _bind_GetUserDataDir(lua_State *L) {
		if (!_lg_typecheck_GetUserDataDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetUserDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetUserDataDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetUserDataDir() const");
		}
		wxString lret = self->GetUserDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStandardPaths::GetUserLocalDataDir() const
	static int _bind_GetUserLocalDataDir(lua_State *L) {
		if (!_lg_typecheck_GetUserLocalDataDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxStandardPaths::GetUserLocalDataDir() const function, expected prototype:\nwxString wxStandardPaths::GetUserLocalDataDir() const\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxStandardPaths::GetUserLocalDataDir() const");
		}
		wxString lret = self->GetUserLocalDataDir();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStandardPaths::IgnoreAppSubDir(const wxString & subdirPattern)
	static int _bind_IgnoreAppSubDir(lua_State *L) {
		if (!_lg_typecheck_IgnoreAppSubDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::IgnoreAppSubDir(const wxString & subdirPattern) function, expected prototype:\nvoid wxStandardPaths::IgnoreAppSubDir(const wxString & subdirPattern)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString subdirPattern(lua_tostring(L,2),lua_objlen(L,2));

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStandardPaths::IgnoreAppSubDir(const wxString &)");
		}
		self->IgnoreAppSubDir(subdirPattern);

		return 0;
	}

	// void wxStandardPaths::IgnoreAppBuildSubDirs()
	static int _bind_IgnoreAppBuildSubDirs(lua_State *L) {
		if (!_lg_typecheck_IgnoreAppBuildSubDirs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::IgnoreAppBuildSubDirs() function, expected prototype:\nvoid wxStandardPaths::IgnoreAppBuildSubDirs()\nClass arguments details:\n");
		}


		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStandardPaths::IgnoreAppBuildSubDirs()");
		}
		self->IgnoreAppBuildSubDirs();

		return 0;
	}

	// void wxStandardPaths::UseAppInfo(int info)
	static int _bind_UseAppInfo(lua_State *L) {
		if (!_lg_typecheck_UseAppInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStandardPaths::UseAppInfo(int info) function, expected prototype:\nvoid wxStandardPaths::UseAppInfo(int info)\nClass arguments details:\n");
		}

		int info=(int)lua_tointeger(L,2);

		wxStandardPaths* self=(Luna< wxStandardPaths >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStandardPaths::UseAppInfo(int)");
		}
		self->UseAppInfo(info);

		return 0;
	}

	// static wxStandardPaths & wxStandardPaths::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxStandardPaths & wxStandardPaths::Get() function, expected prototype:\nstatic wxStandardPaths & wxStandardPaths::Get()\nClass arguments details:\n");
		}


		const wxStandardPaths* lret = &wxStandardPaths::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStandardPaths >::push(L,lret,false);

		return 1;
	}

	// static wxString wxStandardPaths::MSWGetShellDir(int csidl)
	static int _bind_MSWGetShellDir(lua_State *L) {
		if (!_lg_typecheck_MSWGetShellDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxStandardPaths::MSWGetShellDir(int csidl) function, expected prototype:\nstatic wxString wxStandardPaths::MSWGetShellDir(int csidl)\nClass arguments details:\n");
		}

		int csidl=(int)lua_tointeger(L,1);

		wxString lret = wxStandardPaths::MSWGetShellDir(csidl);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxStandardPaths* LunaTraits< wxStandardPaths >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStandardPaths >::_bind_dtor(wxStandardPaths* obj) {
	delete obj;
}

const char LunaTraits< wxStandardPaths >::className[] = "wxStandardPaths";
const char LunaTraits< wxStandardPaths >::fullName[] = "wxStandardPaths";
const char LunaTraits< wxStandardPaths >::moduleName[] = "wx";
const char* LunaTraits< wxStandardPaths >::parents[] = {0};
const int LunaTraits< wxStandardPaths >::hash = 90497708;
const int LunaTraits< wxStandardPaths >::uniqueIDs[] = {90497708,0};

luna_RegType LunaTraits< wxStandardPaths >::methods[] = {
	{"DontIgnoreAppSubDir", &luna_wrapper_wxStandardPaths::_bind_DontIgnoreAppSubDir},
	{"GetAppDocumentsDir", &luna_wrapper_wxStandardPaths::_bind_GetAppDocumentsDir},
	{"GetConfigDir", &luna_wrapper_wxStandardPaths::_bind_GetConfigDir},
	{"GetDataDir", &luna_wrapper_wxStandardPaths::_bind_GetDataDir},
	{"GetDocumentsDir", &luna_wrapper_wxStandardPaths::_bind_GetDocumentsDir},
	{"GetExecutablePath", &luna_wrapper_wxStandardPaths::_bind_GetExecutablePath},
	{"GetLocalDataDir", &luna_wrapper_wxStandardPaths::_bind_GetLocalDataDir},
	{"GetLocalizedResourcesDir", &luna_wrapper_wxStandardPaths::_bind_GetLocalizedResourcesDir},
	{"GetPluginsDir", &luna_wrapper_wxStandardPaths::_bind_GetPluginsDir},
	{"GetResourcesDir", &luna_wrapper_wxStandardPaths::_bind_GetResourcesDir},
	{"GetTempDir", &luna_wrapper_wxStandardPaths::_bind_GetTempDir},
	{"GetUserConfigDir", &luna_wrapper_wxStandardPaths::_bind_GetUserConfigDir},
	{"GetUserDataDir", &luna_wrapper_wxStandardPaths::_bind_GetUserDataDir},
	{"GetUserLocalDataDir", &luna_wrapper_wxStandardPaths::_bind_GetUserLocalDataDir},
	{"IgnoreAppSubDir", &luna_wrapper_wxStandardPaths::_bind_IgnoreAppSubDir},
	{"IgnoreAppBuildSubDirs", &luna_wrapper_wxStandardPaths::_bind_IgnoreAppBuildSubDirs},
	{"UseAppInfo", &luna_wrapper_wxStandardPaths::_bind_UseAppInfo},
	{"Get", &luna_wrapper_wxStandardPaths::_bind_Get},
	{"MSWGetShellDir", &luna_wrapper_wxStandardPaths::_bind_MSWGetShellDir},
	{"dynCast", &luna_wrapper_wxStandardPaths::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxStandardPaths >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStandardPaths >::enumValues[] = {
	{"ResourceCat_None", wxStandardPaths::ResourceCat_None},
	{"ResourceCat_Messages", wxStandardPaths::ResourceCat_Messages},
	{0,0}
};


