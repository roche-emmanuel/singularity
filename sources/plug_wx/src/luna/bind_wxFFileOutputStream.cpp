#include <plug_common.h>

class luna_wrapper_wxFFileOutputStream {
public:
	typedef Luna< wxFFileOutputStream > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFFileOutputStream* ptr= dynamic_cast< wxFFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFFileOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15266762) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFFileOutputStream::wxFFileOutputStream(const wxString & filename, const wxString & mode = "wb")
	static wxFFileOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFFileOutputStream::wxFFileOutputStream(const wxString & filename, const wxString & mode = \"wb\") function, expected prototype:\nwxFFileOutputStream::wxFFileOutputStream(const wxString & filename, const wxString & mode = \"wb\")\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxString mode(lua_tostring(L,2),lua_objlen(L,2));

		return new wxFFileOutputStream(filename, mode);
	}

	// wxFFileOutputStream::wxFFileOutputStream(wxFFile & file)
	static wxFFileOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFFileOutputStream::wxFFileOutputStream(wxFFile & file) function, expected prototype:\nwxFFileOutputStream::wxFFileOutputStream(wxFFile & file)\nClass arguments details:\narg 1 ID = 15266762\n");
		}

		wxFFile* file_ptr=(Luna< wxFFile >::check(L,1));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxFFileOutputStream::wxFFileOutputStream function");
		}
		wxFFile & file=*file_ptr;

		return new wxFFileOutputStream(file);
	}

	// Overload binder for wxFFileOutputStream::wxFFileOutputStream
	static wxFFileOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFFileOutputStream, cannot match any of the overloads for function wxFFileOutputStream:\n  wxFFileOutputStream(const wxString &, const wxString &)\n  wxFFileOutputStream(wxFFile &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFFileOutputStream::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFFileOutputStream::IsOk() const function, expected prototype:\nbool wxFFileOutputStream::IsOk() const\nClass arguments details:\n");
		}


		wxFFileOutputStream* self=dynamic_cast< wxFFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFFileOutputStream::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFFileOutputStream* LunaTraits< wxFFileOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFFileOutputStream::_bind_ctor(L);
}

void LunaTraits< wxFFileOutputStream >::_bind_dtor(wxFFileOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFFileOutputStream >::className[] = "wxFFileOutputStream";
const char LunaTraits< wxFFileOutputStream >::fullName[] = "wxFFileOutputStream";
const char LunaTraits< wxFFileOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFFileOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxFFileOutputStream >::hash = 26825277;
const int LunaTraits< wxFFileOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFFileOutputStream >::methods[] = {
	{"IsOk", &luna_wrapper_wxFFileOutputStream::_bind_IsOk},
	{0,0}
};

luna_ConverterType LunaTraits< wxFFileOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFFileOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFFileOutputStream >::enumValues[] = {
	{0,0}
};


