#include <plug_common.h>

class luna_wrapper_wxTarOutputStream {
public:
	typedef Luna< wxTarOutputStream > luna_t;

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

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTarOutputStream");
		
		return luna_dynamicCast(L,converters,"wxTarOutputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CloseEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CopyArchiveMetaData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47912811) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyEntry(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73261869)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47912811) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBlockingFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBlockingFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PutNextDirEntry(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PutNextEntry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73261869)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PutNextEntry_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxTarOutputStream::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::Close() function, expected prototype:\nbool wxTarOutputStream::Close()\nClass arguments details:\n");
		}


		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::Close()");
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTarOutputStream::CloseEntry()
	static int _bind_CloseEntry(lua_State *L) {
		if (!_lg_typecheck_CloseEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::CloseEntry() function, expected prototype:\nbool wxTarOutputStream::CloseEntry()\nClass arguments details:\n");
		}


		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::CloseEntry()");
		}
		bool lret = self->CloseEntry();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTarOutputStream::CopyArchiveMetaData(wxTarInputStream & s)
	static int _bind_CopyArchiveMetaData(lua_State *L) {
		if (!_lg_typecheck_CopyArchiveMetaData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::CopyArchiveMetaData(wxTarInputStream & s) function, expected prototype:\nbool wxTarOutputStream::CopyArchiveMetaData(wxTarInputStream & s)\nClass arguments details:\narg 1 ID = 47912811\n");
		}

		wxTarInputStream* s_ptr=(Luna< wxTarInputStream >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxTarOutputStream::CopyArchiveMetaData function");
		}
		wxTarInputStream & s=*s_ptr;

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::CopyArchiveMetaData(wxTarInputStream &)");
		}
		bool lret = self->CopyArchiveMetaData(s);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTarOutputStream::CopyEntry(wxTarEntry * entry, wxTarInputStream & inputStream)
	static int _bind_CopyEntry(lua_State *L) {
		if (!_lg_typecheck_CopyEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::CopyEntry(wxTarEntry * entry, wxTarInputStream & inputStream) function, expected prototype:\nbool wxTarOutputStream::CopyEntry(wxTarEntry * entry, wxTarInputStream & inputStream)\nClass arguments details:\narg 1 ID = 73261869\narg 2 ID = 47912811\n");
		}

		wxTarEntry* entry=(Luna< wxTarEntry >::check(L,2));
		wxTarInputStream* inputStream_ptr=(Luna< wxTarInputStream >::check(L,3));
		if( !inputStream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inputStream in wxTarOutputStream::CopyEntry function");
		}
		wxTarInputStream & inputStream=*inputStream_ptr;

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::CopyEntry(wxTarEntry *, wxTarInputStream &)");
		}
		bool lret = self->CopyEntry(entry, inputStream);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxTarOutputStream::GetBlockingFactor() const
	static int _bind_GetBlockingFactor(lua_State *L) {
		if (!_lg_typecheck_GetBlockingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxTarOutputStream::GetBlockingFactor() const function, expected prototype:\nint wxTarOutputStream::GetBlockingFactor() const\nClass arguments details:\n");
		}


		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxTarOutputStream::GetBlockingFactor() const");
		}
		int lret = self->GetBlockingFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTarOutputStream::SetBlockingFactor(int factor)
	static int _bind_SetBlockingFactor(lua_State *L) {
		if (!_lg_typecheck_SetBlockingFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTarOutputStream::SetBlockingFactor(int factor) function, expected prototype:\nvoid wxTarOutputStream::SetBlockingFactor(int factor)\nClass arguments details:\n");
		}

		int factor=(int)lua_tointeger(L,2);

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTarOutputStream::SetBlockingFactor(int)");
		}
		self->SetBlockingFactor(factor);

		return 0;
	}

	// bool wxTarOutputStream::PutNextDirEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now ())
	static int _bind_PutNextDirEntry(lua_State *L) {
		if (!_lg_typecheck_PutNextDirEntry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::PutNextDirEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now ()) function, expected prototype:\nbool wxTarOutputStream::PutNextDirEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now ())\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 57497519\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		const wxDateTime* dt_ptr=luatop>2 ? (Luna< wxDateTime >::check(L,3)) : NULL;
		if( luatop>2 && !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarOutputStream::PutNextDirEntry function");
		}
		const wxDateTime & dt=luatop>2 ? *dt_ptr : wxDateTime::Now ();

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::PutNextDirEntry(const wxString &, const wxDateTime &)");
		}
		bool lret = self->PutNextDirEntry(name, dt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTarOutputStream::PutNextEntry(wxTarEntry * entry)
	static int _bind_PutNextEntry_overload_1(lua_State *L) {
		if (!_lg_typecheck_PutNextEntry_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::PutNextEntry(wxTarEntry * entry) function, expected prototype:\nbool wxTarOutputStream::PutNextEntry(wxTarEntry * entry)\nClass arguments details:\narg 1 ID = 73261869\n");
		}

		wxTarEntry* entry=(Luna< wxTarEntry >::check(L,2));

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::PutNextEntry(wxTarEntry *)");
		}
		bool lret = self->PutNextEntry(entry);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTarOutputStream::PutNextEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset)
	static int _bind_PutNextEntry_overload_2(lua_State *L) {
		if (!_lg_typecheck_PutNextEntry_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTarOutputStream::PutNextEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset) function, expected prototype:\nbool wxTarOutputStream::PutNextEntry(const wxString & name, const wxDateTime & dt = wxDateTime::Now (), long size = wxInvalidOffset)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 57497519\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		const wxDateTime* dt_ptr=luatop>2 ? (Luna< wxDateTime >::check(L,3)) : NULL;
		if( luatop>2 && !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxTarOutputStream::PutNextEntry function");
		}
		const wxDateTime & dt=luatop>2 ? *dt_ptr : wxDateTime::Now ();
		long size=luatop>3 ? (long)lua_tointeger(L,4) : wxInvalidOffset;

		wxTarOutputStream* self=(Luna< wxTarOutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTarOutputStream::PutNextEntry(const wxString &, const wxDateTime &, long)");
		}
		bool lret = self->PutNextEntry(name, dt, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTarOutputStream::PutNextEntry
	static int _bind_PutNextEntry(lua_State *L) {
		if (_lg_typecheck_PutNextEntry_overload_1(L)) return _bind_PutNextEntry_overload_1(L);
		if (_lg_typecheck_PutNextEntry_overload_2(L)) return _bind_PutNextEntry_overload_2(L);

		luaL_error(L, "error in function PutNextEntry, cannot match any of the overloads for function PutNextEntry:\n  PutNextEntry(wxTarEntry *)\n  PutNextEntry(const wxString &, const wxDateTime &, long)\n");
		return 0;
	}


	// Operator binds:

};

wxTarOutputStream* LunaTraits< wxTarOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTarOutputStream >::_bind_dtor(wxTarOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTarOutputStream >::className[] = "wxTarOutputStream";
const char LunaTraits< wxTarOutputStream >::fullName[] = "wxTarOutputStream";
const char LunaTraits< wxTarOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTarOutputStream >::parents[] = {0};
const int LunaTraits< wxTarOutputStream >::hash = 35730089;
const int LunaTraits< wxTarOutputStream >::uniqueIDs[] = {35730089,0};

luna_RegType LunaTraits< wxTarOutputStream >::methods[] = {
	{"Close", &luna_wrapper_wxTarOutputStream::_bind_Close},
	{"CloseEntry", &luna_wrapper_wxTarOutputStream::_bind_CloseEntry},
	{"CopyArchiveMetaData", &luna_wrapper_wxTarOutputStream::_bind_CopyArchiveMetaData},
	{"CopyEntry", &luna_wrapper_wxTarOutputStream::_bind_CopyEntry},
	{"GetBlockingFactor", &luna_wrapper_wxTarOutputStream::_bind_GetBlockingFactor},
	{"SetBlockingFactor", &luna_wrapper_wxTarOutputStream::_bind_SetBlockingFactor},
	{"PutNextDirEntry", &luna_wrapper_wxTarOutputStream::_bind_PutNextDirEntry},
	{"PutNextEntry", &luna_wrapper_wxTarOutputStream::_bind_PutNextEntry},
	{"dynCast", &luna_wrapper_wxTarOutputStream::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxTarOutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTarOutputStream >::enumValues[] = {
	{0,0}
};

