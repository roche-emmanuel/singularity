#include <plug_common.h>

class luna_wrapper_wxFSFile {
public:
	typedef Luna< wxFSFile > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFSFile* ptr= dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFSFile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,57497519) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DetachStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMimeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModificationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFSFile::wxFSFile(wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif)
	static wxFSFile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFSFile::wxFSFile(wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif) function, expected prototype:\nwxFSFile::wxFSFile(wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 57497519\n");
		}

		wxInputStream* stream=dynamic_cast< wxInputStream* >(Luna< wxObject >::check(L,1));
		wxString location(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		wxString anchor(lua_tostring(L,4),lua_objlen(L,4));
		wxDateTime* modif_ptr=(Luna< wxDateTime >::check(L,5));
		if( !modif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modif in wxFSFile::wxFSFile function");
		}
		wxDateTime modif=*modif_ptr;

		return new wxFSFile(stream, location, mimetype, anchor, modif);
	}


	// Function binds:
	// wxInputStream * wxFSFile::DetachStream()
	static int _bind_DetachStream(lua_State *L) {
		if (!_lg_typecheck_DetachStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxFSFile::DetachStream() function, expected prototype:\nwxInputStream * wxFSFile::DetachStream()\nClass arguments details:\n");
		}


		wxFSFile* self=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxFSFile::DetachStream()");
		}
		wxInputStream * lret = self->DetachStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxFSFile::GetAnchor() const
	static int _bind_GetAnchor(lua_State *L) {
		if (!_lg_typecheck_GetAnchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxFSFile::GetAnchor() const function, expected prototype:\nconst wxString & wxFSFile::GetAnchor() const\nClass arguments details:\n");
		}


		wxFSFile* self=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxFSFile::GetAnchor() const");
		}
		const wxString & lret = self->GetAnchor();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxFSFile::GetLocation() const
	static int _bind_GetLocation(lua_State *L) {
		if (!_lg_typecheck_GetLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxFSFile::GetLocation() const function, expected prototype:\nconst wxString & wxFSFile::GetLocation() const\nClass arguments details:\n");
		}


		wxFSFile* self=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxFSFile::GetLocation() const");
		}
		const wxString & lret = self->GetLocation();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxFSFile::GetMimeType() const
	static int _bind_GetMimeType(lua_State *L) {
		if (!_lg_typecheck_GetMimeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxFSFile::GetMimeType() const function, expected prototype:\nconst wxString & wxFSFile::GetMimeType() const\nClass arguments details:\n");
		}


		wxFSFile* self=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxFSFile::GetMimeType() const");
		}
		const wxString & lret = self->GetMimeType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDateTime wxFSFile::GetModificationTime() const
	static int _bind_GetModificationTime(lua_State *L) {
		if (!_lg_typecheck_GetModificationTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime wxFSFile::GetModificationTime() const function, expected prototype:\nwxDateTime wxFSFile::GetModificationTime() const\nClass arguments details:\n");
		}


		wxFSFile* self=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime wxFSFile::GetModificationTime() const");
		}
		wxDateTime stack_lret = self->GetModificationTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxInputStream * wxFSFile::GetStream() const
	static int _bind_GetStream(lua_State *L) {
		if (!_lg_typecheck_GetStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxFSFile::GetStream() const function, expected prototype:\nwxInputStream * wxFSFile::GetStream() const\nClass arguments details:\n");
		}


		wxFSFile* self=dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxFSFile::GetStream() const");
		}
		wxInputStream * lret = self->GetStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFSFile* LunaTraits< wxFSFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFSFile::_bind_ctor(L);
}

void LunaTraits< wxFSFile >::_bind_dtor(wxFSFile* obj) {
	delete obj;
}

const char LunaTraits< wxFSFile >::className[] = "wxFSFile";
const char LunaTraits< wxFSFile >::fullName[] = "wxFSFile";
const char LunaTraits< wxFSFile >::moduleName[] = "wx";
const char* LunaTraits< wxFSFile >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFSFile >::hash = 84230113;
const int LunaTraits< wxFSFile >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFSFile >::methods[] = {
	{"DetachStream", &luna_wrapper_wxFSFile::_bind_DetachStream},
	{"GetAnchor", &luna_wrapper_wxFSFile::_bind_GetAnchor},
	{"GetLocation", &luna_wrapper_wxFSFile::_bind_GetLocation},
	{"GetMimeType", &luna_wrapper_wxFSFile::_bind_GetMimeType},
	{"GetModificationTime", &luna_wrapper_wxFSFile::_bind_GetModificationTime},
	{"GetStream", &luna_wrapper_wxFSFile::_bind_GetStream},
	{0,0}
};

luna_ConverterType LunaTraits< wxFSFile >::converters[] = {
	{"wxObject", &luna_wrapper_wxFSFile::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFSFile >::enumValues[] = {
	{0,0}
};


