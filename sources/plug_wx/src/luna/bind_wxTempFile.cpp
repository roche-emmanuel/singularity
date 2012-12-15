#include <plug_common.h>

class luna_wrapper_wxTempFile {
public:
	typedef Luna< wxTempFile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18640466) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTempFile*)");
		}

		wxTempFile* rhs =(Luna< wxTempFile >::check(L,2));
		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
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

		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTempFile");
		
		return luna_dynamicCast(L,converters,"wxTempFile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Commit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Discard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
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
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Seek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTempFile::wxTempFile(const wxString & strName)
	static wxTempFile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTempFile::wxTempFile(const wxString & strName) function, expected prototype:\nwxTempFile::wxTempFile(const wxString & strName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxTempFile(strName);
	}


	// Function binds:
	// bool wxTempFile::Commit()
	static int _bind_Commit(lua_State *L) {
		if (!_lg_typecheck_Commit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFile::Commit() function, expected prototype:\nbool wxTempFile::Commit()\nClass arguments details:\n");
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFile::Commit()");
		}
		bool lret = self->Commit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTempFile::Discard()
	static int _bind_Discard(lua_State *L) {
		if (!_lg_typecheck_Discard(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTempFile::Discard() function, expected prototype:\nvoid wxTempFile::Discard()\nClass arguments details:\n");
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTempFile::Discard()");
		}
		self->Discard();

		return 0;
	}

	// bool wxTempFile::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFile::Flush() function, expected prototype:\nbool wxTempFile::Flush()\nClass arguments details:\n");
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFile::Flush()");
		}
		bool lret = self->Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTempFile::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFile::IsOpened() const function, expected prototype:\nbool wxTempFile::IsOpened() const\nClass arguments details:\n");
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFile::IsOpened() const");
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long long wxTempFile::Length() const
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxTempFile::Length() const function, expected prototype:\nlong long wxTempFile::Length() const\nClass arguments details:\n");
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxTempFile::Length() const");
		}
		long long lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTempFile::Open(const wxString & strName)
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTempFile::Open(const wxString & strName) function, expected prototype:\nbool wxTempFile::Open(const wxString & strName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTempFile::Open(const wxString &)");
		}
		bool lret = self->Open(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long long wxTempFile::Seek(long long ofs, wxSeekMode mode = ::wxFromStart)
	static int _bind_Seek(lua_State *L) {
		if (!_lg_typecheck_Seek(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxTempFile::Seek(long long ofs, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxTempFile::Seek(long long ofs, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		long long ofs=(long long)lua_tointeger(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : ::wxFromStart;

		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxTempFile::Seek(long long, wxSeekMode)");
		}
		long long lret = self->Seek(ofs, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxTempFile::Tell() const
	static int _bind_Tell(lua_State *L) {
		if (!_lg_typecheck_Tell(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long wxTempFile::Tell() const function, expected prototype:\nlong long wxTempFile::Tell() const\nClass arguments details:\n");
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long wxTempFile::Tell() const");
		}
		long long lret = self->Tell();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTempFile* LunaTraits< wxTempFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTempFile::_bind_ctor(L);
}

void LunaTraits< wxTempFile >::_bind_dtor(wxTempFile* obj) {
	delete obj;
}

const char LunaTraits< wxTempFile >::className[] = "wxTempFile";
const char LunaTraits< wxTempFile >::fullName[] = "wxTempFile";
const char LunaTraits< wxTempFile >::moduleName[] = "wx";
const char* LunaTraits< wxTempFile >::parents[] = {0};
const int LunaTraits< wxTempFile >::hash = 18640466;
const int LunaTraits< wxTempFile >::uniqueIDs[] = {18640466,0};

luna_RegType LunaTraits< wxTempFile >::methods[] = {
	{"Commit", &luna_wrapper_wxTempFile::_bind_Commit},
	{"Discard", &luna_wrapper_wxTempFile::_bind_Discard},
	{"Flush", &luna_wrapper_wxTempFile::_bind_Flush},
	{"IsOpened", &luna_wrapper_wxTempFile::_bind_IsOpened},
	{"Length", &luna_wrapper_wxTempFile::_bind_Length},
	{"Open", &luna_wrapper_wxTempFile::_bind_Open},
	{"Seek", &luna_wrapper_wxTempFile::_bind_Seek},
	{"Tell", &luna_wrapper_wxTempFile::_bind_Tell},
	{"dynCast", &luna_wrapper_wxTempFile::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTempFile::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTempFile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTempFile >::enumValues[] = {
	{0,0}
};


