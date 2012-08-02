#include <plug_common.h>

class luna_wrapper_wxFileSystemHandler {
public:
	typedef Luna< wxFileSystemHandler > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileSystemHandler* ptr= dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystemHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_OpenFile(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMimeTypeFromExt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	static int _bind_CanOpen(lua_State *L) {
		if (!_lg_typecheck_CanOpen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemHandler::CanOpen(const wxString & location) function, expected prototype:\nbool wxFileSystemHandler::CanOpen(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString location(lua_tostring(L,2),lua_objlen(L,2));

		wxFileSystemHandler* self=dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemHandler::CanOpen(const wxString &)");
		}
		bool lret = self->CanOpen(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0)
	static int _bind_FindFirst(lua_State *L) {
		if (!_lg_typecheck_FindFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0) function, expected prototype:\nwxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		wxFileSystemHandler* self=dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystemHandler::FindFirst(const wxString &, int)");
		}
		wxString lret = self->FindFirst(wildcard, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystemHandler::FindNext()
	static int _bind_FindNext(lua_State *L) {
		if (!_lg_typecheck_FindNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemHandler::FindNext() function, expected prototype:\nwxString wxFileSystemHandler::FindNext()\nClass arguments details:\n");
		}


		wxFileSystemHandler* self=dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystemHandler::FindNext()");
		}
		wxString lret = self->FindNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)
	static int _bind_OpenFile(lua_State *L) {
		if (!_lg_typecheck_OpenFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location) function, expected prototype:\nwxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n");
		}

		wxFileSystem* fs_ptr=dynamic_cast< wxFileSystem* >(Luna< wxObject >::check(L,2));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in wxFileSystemHandler::OpenFile function");
		}
		wxFileSystem & fs=*fs_ptr;
		wxString location(lua_tostring(L,3),lua_objlen(L,3));

		wxFileSystemHandler* self=dynamic_cast< wxFileSystemHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem &, const wxString &)");
		}
		wxFSFile * lret = self->OpenFile(fs, location);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFSFile >::push(L,lret,false);

		return 1;
	}

	// static wxString wxFileSystemHandler::GetMimeTypeFromExt(const wxString & location)
	static int _bind_GetMimeTypeFromExt(lua_State *L) {
		if (!_lg_typecheck_GetMimeTypeFromExt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystemHandler::GetMimeTypeFromExt(const wxString & location) function, expected prototype:\nstatic wxString wxFileSystemHandler::GetMimeTypeFromExt(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		wxString lret = wxFileSystemHandler::GetMimeTypeFromExt(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxFileSystemHandler* LunaTraits< wxFileSystemHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)

	// Abstract operators:
}

void LunaTraits< wxFileSystemHandler >::_bind_dtor(wxFileSystemHandler* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystemHandler >::className[] = "wxFileSystemHandler";
const char LunaTraits< wxFileSystemHandler >::fullName[] = "wxFileSystemHandler";
const char LunaTraits< wxFileSystemHandler >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystemHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFileSystemHandler >::hash = 30991035;
const int LunaTraits< wxFileSystemHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileSystemHandler >::methods[] = {
	{"CanOpen", &luna_wrapper_wxFileSystemHandler::_bind_CanOpen},
	{"FindFirst", &luna_wrapper_wxFileSystemHandler::_bind_FindFirst},
	{"FindNext", &luna_wrapper_wxFileSystemHandler::_bind_FindNext},
	{"OpenFile", &luna_wrapper_wxFileSystemHandler::_bind_OpenFile},
	{"GetMimeTypeFromExt", &luna_wrapper_wxFileSystemHandler::_bind_GetMimeTypeFromExt},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystemHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystemHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystemHandler >::enumValues[] = {
	{0,0}
};


