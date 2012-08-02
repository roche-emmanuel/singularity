#include <plug_common.h>

class luna_wrapper_wxFile {
public:
	typedef Luna< wxFile > luna_t;

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

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFile");
		
		return luna_dynamicCast(L,converters,"wxFile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetLastError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearLastError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Seek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SeekEnd(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Write(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_fd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Access(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Exists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFile::wxFile()
	static wxFile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFile::wxFile() function, expected prototype:\nwxFile::wxFile()\nClass arguments details:\n");
		}


		return new wxFile();
	}

	// wxFile::wxFile(const wxString & filename, wxFile::OpenMode mode = wxFile::read)
	static wxFile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFile::wxFile(const wxString & filename, wxFile::OpenMode mode = wxFile::read) function, expected prototype:\nwxFile::wxFile(const wxString & filename, wxFile::OpenMode mode = wxFile::read)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxFile::OpenMode mode=luatop>1 ? (wxFile::OpenMode)lua_tointeger(L,2) : wxFile::read;

		return new wxFile(filename, mode);
	}

	// wxFile::wxFile(int fd)
	static wxFile* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFile::wxFile(int fd) function, expected prototype:\nwxFile::wxFile(int fd)\nClass arguments details:\n");
		}

		int fd=(int)lua_tointeger(L,1);

		return new wxFile(fd);
	}

	// Overload binder for wxFile::wxFile
	static wxFile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxFile, cannot match any of the overloads for function wxFile:\n  wxFile()\n  wxFile(const wxString &, wxFile::OpenMode)\n  wxFile(int)\n");
		return NULL;
	}


	// Function binds:
	// int wxFile::GetLastError() const
	static int _bind_GetLastError(lua_State *L) {
		if (!_lg_typecheck_GetLastError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFile::GetLastError() const function, expected prototype:\nint wxFile::GetLastError() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFile::GetLastError() const");
		}
		int lret = self->GetLastError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFile::ClearLastError()
	static int _bind_ClearLastError(lua_State *L) {
		if (!_lg_typecheck_ClearLastError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFile::ClearLastError() function, expected prototype:\nvoid wxFile::ClearLastError()\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFile::ClearLastError()");
		}
		self->ClearLastError();

		return 0;
	}

	// void wxFile::Attach(int fd)
	static int _bind_Attach(lua_State *L) {
		if (!_lg_typecheck_Attach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFile::Attach(int fd) function, expected prototype:\nvoid wxFile::Attach(int fd)\nClass arguments details:\n");
		}

		int fd=(int)lua_tointeger(L,2);

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFile::Attach(int)");
		}
		self->Attach(fd);

		return 0;
	}

	// bool wxFile::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFile::Close() function, expected prototype:\nbool wxFile::Close()\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFile::Close()");
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFile::Create(const wxString & filename, bool overwrite = false, int access = wxS_DEFAULT)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFile::Create(const wxString & filename, bool overwrite = false, int access = wxS_DEFAULT) function, expected prototype:\nbool wxFile::Create(const wxString & filename, bool overwrite = false, int access = wxS_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		bool overwrite=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;
		int access=luatop>3 ? (int)lua_tointeger(L,4) : wxS_DEFAULT;

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFile::Create(const wxString &, bool, int)");
		}
		bool lret = self->Create(filename, overwrite, access);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFile::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFile::Detach() function, expected prototype:\nvoid wxFile::Detach()\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFile::Detach()");
		}
		self->Detach();

		return 0;
	}

	// bool wxFile::Eof() const
	static int _bind_Eof(lua_State *L) {
		if (!_lg_typecheck_Eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFile::Eof() const function, expected prototype:\nbool wxFile::Eof() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFile::Eof() const");
		}
		bool lret = self->Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFile::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFile::Flush() function, expected prototype:\nbool wxFile::Flush()\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFile::Flush()");
		}
		bool lret = self->Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFileKind wxFile::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileKind wxFile::GetKind() const function, expected prototype:\nwxFileKind wxFile::GetKind() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileKind wxFile::GetKind() const");
		}
		wxFileKind lret = self->GetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFile::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFile::IsOpened() const function, expected prototype:\nbool wxFile::IsOpened() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFile::IsOpened() const");
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxFile::Length() const
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFile::Length() const function, expected prototype:\nlong wxFile::Length() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFile::Length() const");
		}
		long lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFile::Open(const wxString & filename, wxFile::OpenMode mode = wxFile::read, int access = wxS_DEFAULT)
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFile::Open(const wxString & filename, wxFile::OpenMode mode = wxFile::read, int access = wxS_DEFAULT) function, expected prototype:\nbool wxFile::Open(const wxString & filename, wxFile::OpenMode mode = wxFile::read, int access = wxS_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		wxFile::OpenMode mode=luatop>2 ? (wxFile::OpenMode)lua_tointeger(L,3) : wxFile::read;
		int access=luatop>3 ? (int)lua_tointeger(L,4) : wxS_DEFAULT;

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFile::Open(const wxString &, wxFile::OpenMode, int)");
		}
		bool lret = self->Open(filename, mode, access);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ssize_t wxFile::Read(void * buffer, size_t count)
	static int _bind_Read(lua_State *L) {
		if (!_lg_typecheck_Read(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ssize_t wxFile::Read(void * buffer, size_t count) function, expected prototype:\nssize_t wxFile::Read(void * buffer, size_t count)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t count=(size_t)lua_tointeger(L,3);

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ssize_t wxFile::Read(void *, size_t)");
		}
		ssize_t lret = self->Read(buffer, count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxFile::Seek(long ofs, wxSeekMode mode = wxFromStart)
	static int _bind_Seek(lua_State *L) {
		if (!_lg_typecheck_Seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFile::Seek(long ofs, wxSeekMode mode = wxFromStart) function, expected prototype:\nlong wxFile::Seek(long ofs, wxSeekMode mode = wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long ofs=(long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : wxFromStart;

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFile::Seek(long, wxSeekMode)");
		}
		long lret = self->Seek(ofs, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxFile::SeekEnd(long ofs = 0)
	static int _bind_SeekEnd(lua_State *L) {
		if (!_lg_typecheck_SeekEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFile::SeekEnd(long ofs = 0) function, expected prototype:\nlong wxFile::SeekEnd(long ofs = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long ofs=luatop>1 ? (long)lua_tointeger(L,2) : 0;

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFile::SeekEnd(long)");
		}
		long lret = self->SeekEnd(ofs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxFile::Tell() const
	static int _bind_Tell(lua_State *L) {
		if (!_lg_typecheck_Tell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFile::Tell() const function, expected prototype:\nlong wxFile::Tell() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFile::Tell() const");
		}
		long lret = self->Tell();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFile::Write(const void * buffer, size_t count)
	static int _bind_Write(lua_State *L) {
		if (!_lg_typecheck_Write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFile::Write(const void * buffer, size_t count) function, expected prototype:\nsize_t wxFile::Write(const void * buffer, size_t count)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t count=(size_t)lua_tointeger(L,3);

		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFile::Write(const void *, size_t)");
		}
		size_t lret = self->Write(buffer, count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFile::fd() const
	static int _bind_fd(lua_State *L) {
		if (!_lg_typecheck_fd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFile::fd() const function, expected prototype:\nint wxFile::fd() const\nClass arguments details:\n");
		}


		wxFile* self=(Luna< wxFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFile::fd() const");
		}
		int lret = self->fd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool wxFile::Access(const wxString & name, wxFile::OpenMode mode)
	static int _bind_Access(lua_State *L) {
		if (!_lg_typecheck_Access(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxFile::Access(const wxString & name, wxFile::OpenMode mode) function, expected prototype:\nstatic bool wxFile::Access(const wxString & name, wxFile::OpenMode mode)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxFile::OpenMode mode=(wxFile::OpenMode)lua_tointeger(L,2);

		bool lret = wxFile::Access(name, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxFile::Exists(const wxString & filename)
	static int _bind_Exists(lua_State *L) {
		if (!_lg_typecheck_Exists(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxFile::Exists(const wxString & filename) function, expected prototype:\nstatic bool wxFile::Exists(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFile::Exists(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFile* LunaTraits< wxFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFile::_bind_ctor(L);
}

void LunaTraits< wxFile >::_bind_dtor(wxFile* obj) {
	delete obj;
}

const char LunaTraits< wxFile >::className[] = "wxFile";
const char LunaTraits< wxFile >::fullName[] = "wxFile";
const char LunaTraits< wxFile >::moduleName[] = "wx";
const char* LunaTraits< wxFile >::parents[] = {0};
const int LunaTraits< wxFile >::hash = 19881034;
const int LunaTraits< wxFile >::uniqueIDs[] = {19881034,0};

luna_RegType LunaTraits< wxFile >::methods[] = {
	{"GetLastError", &luna_wrapper_wxFile::_bind_GetLastError},
	{"ClearLastError", &luna_wrapper_wxFile::_bind_ClearLastError},
	{"Attach", &luna_wrapper_wxFile::_bind_Attach},
	{"Close", &luna_wrapper_wxFile::_bind_Close},
	{"Create", &luna_wrapper_wxFile::_bind_Create},
	{"Detach", &luna_wrapper_wxFile::_bind_Detach},
	{"Eof", &luna_wrapper_wxFile::_bind_Eof},
	{"Flush", &luna_wrapper_wxFile::_bind_Flush},
	{"GetKind", &luna_wrapper_wxFile::_bind_GetKind},
	{"IsOpened", &luna_wrapper_wxFile::_bind_IsOpened},
	{"Length", &luna_wrapper_wxFile::_bind_Length},
	{"Open", &luna_wrapper_wxFile::_bind_Open},
	{"Read", &luna_wrapper_wxFile::_bind_Read},
	{"Seek", &luna_wrapper_wxFile::_bind_Seek},
	{"SeekEnd", &luna_wrapper_wxFile::_bind_SeekEnd},
	{"Tell", &luna_wrapper_wxFile::_bind_Tell},
	{"Write", &luna_wrapper_wxFile::_bind_Write},
	{"fd", &luna_wrapper_wxFile::_bind_fd},
	{"Access", &luna_wrapper_wxFile::_bind_Access},
	{"Exists", &luna_wrapper_wxFile::_bind_Exists},
	{"dynCast", &luna_wrapper_wxFile::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxFile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFile >::enumValues[] = {
	{"read", wxFile::read},
	{"write", wxFile::write},
	{"read_write", wxFile::read_write},
	{"write_append", wxFile::write_append},
	{"write_excl", wxFile::write_excl},
	{"fd_invalid", wxFile::fd_invalid},
	{"fd_stdin", wxFile::fd_stdin},
	{"fd_stdout", wxFile::fd_stdout},
	{"fd_stderr", wxFile::fd_stderr},
	{0,0}
};


