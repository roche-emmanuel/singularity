#include <plug_common.h>

class luna_wrapper_wxFFile {
public:
	typedef Luna< wxFFile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15266762) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFFile*)");
		}

		wxFFile* rhs =(Luna< wxFFile >::check(L,2));
		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFFile");
		
		return luna_dynamicCast(L,converters,"wxFFile",name);
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
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_Error(lua_State *L) {
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
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFFile::wxFFile()
	static wxFFile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFFile::wxFFile() function, expected prototype:\nwxFFile::wxFFile()\nClass arguments details:\n");
		}


		return new wxFFile();
	}

	// wxFFile::wxFFile(const wxString & filename, const wxString & mode = "r")
	static wxFFile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFFile::wxFFile(const wxString & filename, const wxString & mode = \"r\") function, expected prototype:\nwxFFile::wxFFile(const wxString & filename, const wxString & mode = \"r\")\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxString mode(lua_tostring(L,2),lua_objlen(L,2));

		return new wxFFile(filename, mode);
	}

	// Overload binder for wxFFile::wxFFile
	static wxFFile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFFile, cannot match any of the overloads for function wxFFile:\n  wxFFile()\n  wxFFile(const wxString &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFFile::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::Close() function, expected prototype:\nbool wxFFile::Close()\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::Close()");
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFFile::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFFile::Detach() function, expected prototype:\nvoid wxFFile::Detach()\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFFile::Detach()");
		}
		self->Detach();

		return 0;
	}

	// bool wxFFile::Eof() const
	static int _bind_Eof(lua_State *L) {
		if (!_lg_typecheck_Eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::Eof() const function, expected prototype:\nbool wxFFile::Eof() const\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::Eof() const");
		}
		bool lret = self->Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFFile::Error() const
	static int _bind_Error(lua_State *L) {
		if (!_lg_typecheck_Error(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::Error() const function, expected prototype:\nbool wxFFile::Error() const\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::Error() const");
		}
		bool lret = self->Error();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFFile::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::Flush() function, expected prototype:\nbool wxFFile::Flush()\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::Flush()");
		}
		bool lret = self->Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFileKind wxFFile::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileKind wxFFile::GetKind() const function, expected prototype:\nwxFileKind wxFFile::GetKind() const\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxFileKind wxFFile::GetKind() const");
		}
		wxFileKind lret = self->GetKind();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFFile::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::IsOpened() const function, expected prototype:\nbool wxFFile::IsOpened() const\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::IsOpened() const");
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxFFile::Length() const
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFFile::Length() const function, expected prototype:\nlong wxFFile::Length() const\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFFile::Length() const");
		}
		long lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFFile::Open(const wxString & filename, const wxString & mode = "r")
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::Open(const wxString & filename, const wxString & mode = \"r\") function, expected prototype:\nbool wxFFile::Open(const wxString & filename, const wxString & mode = \"r\")\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		wxString mode(lua_tostring(L,3),lua_objlen(L,3));

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::Open(const wxString &, const wxString &)");
		}
		bool lret = self->Open(filename, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxFFile::Read(void * buffer, size_t count)
	static int _bind_Read(lua_State *L) {
		if (!_lg_typecheck_Read(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFFile::Read(void * buffer, size_t count) function, expected prototype:\nsize_t wxFFile::Read(void * buffer, size_t count)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t count=(size_t)lua_tointeger(L,3);

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFFile::Read(void *, size_t)");
		}
		size_t lret = self->Read(buffer, count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFFile::Seek(long ofs, wxSeekMode mode = ::wxFromStart)
	static int _bind_Seek(lua_State *L) {
		if (!_lg_typecheck_Seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::Seek(long ofs, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nbool wxFFile::Seek(long ofs, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long ofs=(long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::Seek(long, wxSeekMode)");
		}
		bool lret = self->Seek(ofs, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFFile::SeekEnd(long ofs = 0)
	static int _bind_SeekEnd(lua_State *L) {
		if (!_lg_typecheck_SeekEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFile::SeekEnd(long ofs = 0) function, expected prototype:\nbool wxFFile::SeekEnd(long ofs = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long ofs=luatop>1 ? (long)lua_tointeger(L,2) : 0;

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFile::SeekEnd(long)");
		}
		bool lret = self->SeekEnd(ofs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxFFile::Tell() const
	static int _bind_Tell(lua_State *L) {
		if (!_lg_typecheck_Tell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxFFile::Tell() const function, expected prototype:\nlong wxFFile::Tell() const\nClass arguments details:\n");
		}


		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxFFile::Tell() const");
		}
		long lret = self->Tell();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFFile::Write(const void * buffer, size_t count)
	static int _bind_Write(lua_State *L) {
		if (!_lg_typecheck_Write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxFFile::Write(const void * buffer, size_t count) function, expected prototype:\nsize_t wxFFile::Write(const void * buffer, size_t count)\nClass arguments details:\n");
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t count=(size_t)lua_tointeger(L,3);

		wxFFile* self=(Luna< wxFFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxFFile::Write(const void *, size_t)");
		}
		size_t lret = self->Write(buffer, count);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFFile* LunaTraits< wxFFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFFile::_bind_ctor(L);
}

void LunaTraits< wxFFile >::_bind_dtor(wxFFile* obj) {
	delete obj;
}

const char LunaTraits< wxFFile >::className[] = "wxFFile";
const char LunaTraits< wxFFile >::fullName[] = "wxFFile";
const char LunaTraits< wxFFile >::moduleName[] = "wx";
const char* LunaTraits< wxFFile >::parents[] = {0};
const int LunaTraits< wxFFile >::hash = 15266762;
const int LunaTraits< wxFFile >::uniqueIDs[] = {15266762,0};

luna_RegType LunaTraits< wxFFile >::methods[] = {
	{"Close", &luna_wrapper_wxFFile::_bind_Close},
	{"Detach", &luna_wrapper_wxFFile::_bind_Detach},
	{"Eof", &luna_wrapper_wxFFile::_bind_Eof},
	{"Error", &luna_wrapper_wxFFile::_bind_Error},
	{"Flush", &luna_wrapper_wxFFile::_bind_Flush},
	{"GetKind", &luna_wrapper_wxFFile::_bind_GetKind},
	{"IsOpened", &luna_wrapper_wxFFile::_bind_IsOpened},
	{"Length", &luna_wrapper_wxFFile::_bind_Length},
	{"Open", &luna_wrapper_wxFFile::_bind_Open},
	{"Read", &luna_wrapper_wxFFile::_bind_Read},
	{"Seek", &luna_wrapper_wxFFile::_bind_Seek},
	{"SeekEnd", &luna_wrapper_wxFFile::_bind_SeekEnd},
	{"Tell", &luna_wrapper_wxFFile::_bind_Tell},
	{"Write", &luna_wrapper_wxFFile::_bind_Write},
	{"dynCast", &luna_wrapper_wxFFile::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFFile::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFFile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFFile >::enumValues[] = {
	{0,0}
};


