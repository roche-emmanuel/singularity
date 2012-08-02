#include <plug_common.h>

class luna_wrapper_wxFileSystem {
public:
	typedef Luna< wxFileSystem > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileSystem* ptr= dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ChangePathTo(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFileInPath(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OpenFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FileNameToURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasHandlerForPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_URLToFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileSystem::wxFileSystem()
	static wxFileSystem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileSystem::wxFileSystem() function, expected prototype:\nwxFileSystem::wxFileSystem()\nClass arguments details:\n");
		}


		return new wxFileSystem();
	}


	// Function binds:
	// void wxFileSystem::ChangePathTo(const wxString & location, bool is_dir = false)
	static int _bind_ChangePathTo(lua_State *L) {
		if (!_lg_typecheck_ChangePathTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFileSystem::ChangePathTo(const wxString & location, bool is_dir = false) function, expected prototype:\nvoid wxFileSystem::ChangePathTo(const wxString & location, bool is_dir = false)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString location(lua_tostring(L,2),lua_objlen(L,2));
		bool is_dir=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxFileSystem* self=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFileSystem::ChangePathTo(const wxString &, bool)");
		}
		self->ChangePathTo(location, is_dir);

		return 0;
	}

	// bool wxFileSystem::FindFileInPath(wxString * pStr, const wxString & path, const wxString & file)
	static int _bind_FindFileInPath(lua_State *L) {
		if (!_lg_typecheck_FindFileInPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystem::FindFileInPath(wxString * pStr, const wxString & path, const wxString & file) function, expected prototype:\nbool wxFileSystem::FindFileInPath(wxString * pStr, const wxString & path, const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		wxString pStr(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));
		wxString file(lua_tostring(L,4),lua_objlen(L,4));

		wxFileSystem* self=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystem::FindFileInPath(wxString *, const wxString &, const wxString &)");
		}
		bool lret = self->FindFileInPath(&pStr, path, file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileSystem::FindFirst(const wxString & wildcard, int flags = 0)
	static int _bind_FindFirst(lua_State *L) {
		if (!_lg_typecheck_FindFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystem::FindFirst(const wxString & wildcard, int flags = 0) function, expected prototype:\nwxString wxFileSystem::FindFirst(const wxString & wildcard, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxFileSystem* self=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystem::FindFirst(const wxString &, int)");
		}
		wxString lret = self->FindFirst(wildcard, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystem::FindNext()
	static int _bind_FindNext(lua_State *L) {
		if (!_lg_typecheck_FindNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystem::FindNext() function, expected prototype:\nwxString wxFileSystem::FindNext()\nClass arguments details:\n");
		}


		wxFileSystem* self=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystem::FindNext()");
		}
		wxString lret = self->FindNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystem::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystem::GetPath() const function, expected prototype:\nwxString wxFileSystem::GetPath() const\nClass arguments details:\n");
		}


		wxFileSystem* self=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystem::GetPath() const");
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFSFile * wxFileSystem::OpenFile(const wxString & location, int flags = wxFS_READ)
	static int _bind_OpenFile(lua_State *L) {
		if (!_lg_typecheck_OpenFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFSFile * wxFileSystem::OpenFile(const wxString & location, int flags = wxFS_READ) function, expected prototype:\nwxFSFile * wxFileSystem::OpenFile(const wxString & location, int flags = wxFS_READ)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString location(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : wxFS_READ;

		wxFileSystem* self=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFSFile * wxFileSystem::OpenFile(const wxString &, int)");
		}
		wxFSFile * lret = self->OpenFile(location, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFSFile >::push(L,lret,false);

		return 1;
	}

	// static void wxFileSystem::AddHandler(wxFileSystemHandler * handler)
	static int _bind_AddHandler(lua_State *L) {
		if (!_lg_typecheck_AddHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxFileSystem::AddHandler(wxFileSystemHandler * handler) function, expected prototype:\nstatic void wxFileSystem::AddHandler(wxFileSystemHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxFileSystemHandler* handler=dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));

		wxFileSystem::AddHandler(handler);

		return 0;
	}

	// static wxString wxFileSystem::FileNameToURL(const wxFileName & filename)
	static int _bind_FileNameToURL(lua_State *L) {
		if (!_lg_typecheck_FileNameToURL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystem::FileNameToURL(const wxFileName & filename) function, expected prototype:\nstatic wxString wxFileSystem::FileNameToURL(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n");
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,1));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxFileSystem::FileNameToURL function");
		}
		const wxFileName & filename=*filename_ptr;

		wxString lret = wxFileSystem::FileNameToURL(filename);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static bool wxFileSystem::HasHandlerForPath(const wxString & location)
	static int _bind_HasHandlerForPath(lua_State *L) {
		if (!_lg_typecheck_HasHandlerForPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxFileSystem::HasHandlerForPath(const wxString & location) function, expected prototype:\nstatic bool wxFileSystem::HasHandlerForPath(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFileSystem::HasHandlerForPath(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxFileName wxFileSystem::URLToFileName(const wxString & url)
	static int _bind_URLToFileName(lua_State *L) {
		if (!_lg_typecheck_URLToFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxFileName wxFileSystem::URLToFileName(const wxString & url) function, expected prototype:\nstatic wxFileName wxFileSystem::URLToFileName(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString url(lua_tostring(L,1),lua_objlen(L,1));

		wxFileName stack_lret = wxFileSystem::URLToFileName(url);
		wxFileName* lret = new wxFileName(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxFileSystem* LunaTraits< wxFileSystem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileSystem::_bind_ctor(L);
}

void LunaTraits< wxFileSystem >::_bind_dtor(wxFileSystem* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystem >::className[] = "wxFileSystem";
const char LunaTraits< wxFileSystem >::fullName[] = "wxFileSystem";
const char LunaTraits< wxFileSystem >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystem >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFileSystem >::hash = 8732382;
const int LunaTraits< wxFileSystem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileSystem >::methods[] = {
	{"ChangePathTo", &luna_wrapper_wxFileSystem::_bind_ChangePathTo},
	{"FindFileInPath", &luna_wrapper_wxFileSystem::_bind_FindFileInPath},
	{"FindFirst", &luna_wrapper_wxFileSystem::_bind_FindFirst},
	{"FindNext", &luna_wrapper_wxFileSystem::_bind_FindNext},
	{"GetPath", &luna_wrapper_wxFileSystem::_bind_GetPath},
	{"OpenFile", &luna_wrapper_wxFileSystem::_bind_OpenFile},
	{"AddHandler", &luna_wrapper_wxFileSystem::_bind_AddHandler},
	{"FileNameToURL", &luna_wrapper_wxFileSystem::_bind_FileNameToURL},
	{"HasHandlerForPath", &luna_wrapper_wxFileSystem::_bind_HasHandlerForPath},
	{"URLToFileName", &luna_wrapper_wxFileSystem::_bind_URLToFileName},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystem >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystem >::enumValues[] = {
	{0,0}
};


