#include <plug_common.h>

class luna_wrapper_wxFileOutputStream {
public:
	typedef Luna< wxFileOutputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFileOutputStream* ptr= dynamic_cast< wxFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19881034) ) return false;
		if( (!dynamic_cast< wxFile* >(Luna< wxFile >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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
	// wxFileOutputStream::wxFileOutputStream(const wxString & ofileName)
	static wxFileOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(const wxString & ofileName) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(const wxString & ofileName)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString ofileName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxFileOutputStream(ofileName);
	}

	// wxFileOutputStream::wxFileOutputStream(wxFile & file)
	static wxFileOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(wxFile & file) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(wxFile & file)\nClass arguments details:\narg 1 ID = 19881034\n");
		}

		wxFile* file_ptr=(Luna< wxFile >::check(L,1));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxFileOutputStream::wxFileOutputStream function");
		}
		wxFile & file=*file_ptr;

		return new wxFileOutputStream(file);
	}

	// wxFileOutputStream::wxFileOutputStream(int fd)
	static wxFileOutputStream* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(int fd) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(int fd)\nClass arguments details:\n");
		}

		int fd=(int)lua_tointeger(L,1);

		return new wxFileOutputStream(fd);
	}

	// Overload binder for wxFileOutputStream::wxFileOutputStream
	static wxFileOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxFileOutputStream, cannot match any of the overloads for function wxFileOutputStream:\n  wxFileOutputStream(const wxString &)\n  wxFileOutputStream(wxFile &)\n  wxFileOutputStream(int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFileOutputStream::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileOutputStream::IsOk() const function, expected prototype:\nbool wxFileOutputStream::IsOk() const\nClass arguments details:\n");
		}


		wxFileOutputStream* self=dynamic_cast< wxFileOutputStream* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileOutputStream::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFileOutputStream* LunaTraits< wxFileOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileOutputStream::_bind_ctor(L);
}

void LunaTraits< wxFileOutputStream >::_bind_dtor(wxFileOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFileOutputStream >::className[] = "wxFileOutputStream";
const char LunaTraits< wxFileOutputStream >::fullName[] = "wxFileOutputStream";
const char LunaTraits< wxFileOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFileOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxFileOutputStream >::hash = 45450289;
const int LunaTraits< wxFileOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileOutputStream >::methods[] = {
	{"IsOk", &luna_wrapper_wxFileOutputStream::_bind_IsOk},
	{"__eq", &luna_wrapper_wxFileOutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileOutputStream >::enumValues[] = {
	{0,0}
};


