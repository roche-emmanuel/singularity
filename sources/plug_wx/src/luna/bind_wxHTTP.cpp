#include <plug_common.h>

class luna_wrapper_wxHTTP {
public:
	typedef Luna< wxHTTP > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxHTTP* ptr= dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHTTP >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Connect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Connect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetResponse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHeader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCookie(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasCookies(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxHTTP::Connect(const wxString & host)
	static int _bind_Connect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::Connect(const wxString & host) function, expected prototype:\nbool wxHTTP::Connect(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::Connect(const wxString &)");
		}
		bool lret = self->Connect(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::Connect(const wxString & host, unsigned short port)
	static int _bind_Connect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::Connect(const wxString & host, unsigned short port) function, expected prototype:\nbool wxHTTP::Connect(const wxString & host, unsigned short port)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		unsigned short port=(unsigned short)lua_tointeger(L,3);

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::Connect(const wxString &, unsigned short)");
		}
		bool lret = self->Connect(host, port);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHTTP::Connect(const wxSockAddress & address, bool wait)
	static int _bind_Connect_overload_3(lua_State *L) {
		if (!_lg_typecheck_Connect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::Connect(const wxSockAddress & address, bool wait) function, expected prototype:\nbool wxHTTP::Connect(const wxSockAddress & address, bool wait)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxSockAddress* address_ptr=dynamic_cast< wxSockAddress* >(Luna< wxObject >::check(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxHTTP::Connect function");
		}
		const wxSockAddress & address=*address_ptr;
		bool wait=(bool)(lua_toboolean(L,3)==1);

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::Connect(const wxSockAddress &, bool)");
		}
		bool lret = self->Connect(address, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHTTP::Connect
	static int _bind_Connect(lua_State *L) {
		if (_lg_typecheck_Connect_overload_1(L)) return _bind_Connect_overload_1(L);
		if (_lg_typecheck_Connect_overload_2(L)) return _bind_Connect_overload_2(L);
		if (_lg_typecheck_Connect_overload_3(L)) return _bind_Connect_overload_3(L);

		luaL_error(L, "error in function Connect, cannot match any of the overloads for function Connect:\n  Connect(const wxString &)\n  Connect(const wxString &, unsigned short)\n  Connect(const wxSockAddress &, bool)\n");
		return 0;
	}

	// wxString wxHTTP::GetHeader(const wxString & header) const
	static int _bind_GetHeader(lua_State *L) {
		if (!_lg_typecheck_GetHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHTTP::GetHeader(const wxString & header) const function, expected prototype:\nwxString wxHTTP::GetHeader(const wxString & header) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString header(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHTTP::GetHeader(const wxString &) const");
		}
		wxString lret = self->GetHeader(header);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxInputStream * wxHTTP::GetInputStream(const wxString & path)
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxHTTP::GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxHTTP::GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxHTTP::GetInputStream(const wxString &)");
		}
		wxInputStream * lret = self->GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// int wxHTTP::GetResponse() const
	static int _bind_GetResponse(lua_State *L) {
		if (!_lg_typecheck_GetResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxHTTP::GetResponse() const function, expected prototype:\nint wxHTTP::GetResponse() const\nClass arguments details:\n");
		}


		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxHTTP::GetResponse() const");
		}
		int lret = self->GetResponse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHTTP::SetHeader(const wxString & header, const wxString & h_data)
	static int _bind_SetHeader(lua_State *L) {
		if (!_lg_typecheck_SetHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxHTTP::SetHeader(const wxString & header, const wxString & h_data) function, expected prototype:\nvoid wxHTTP::SetHeader(const wxString & header, const wxString & h_data)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		wxString header(lua_tostring(L,2),lua_objlen(L,2));
		wxString h_data(lua_tostring(L,3),lua_objlen(L,3));

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxHTTP::SetHeader(const wxString &, const wxString &)");
		}
		self->SetHeader(header, h_data);

		return 0;
	}

	// wxString wxHTTP::GetCookie(const wxString & cookie) const
	static int _bind_GetCookie(lua_State *L) {
		if (!_lg_typecheck_GetCookie(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxHTTP::GetCookie(const wxString & cookie) const function, expected prototype:\nwxString wxHTTP::GetCookie(const wxString & cookie) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString cookie(lua_tostring(L,2),lua_objlen(L,2));

		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxHTTP::GetCookie(const wxString &) const");
		}
		wxString lret = self->GetCookie(cookie);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHTTP::HasCookies() const
	static int _bind_HasCookies(lua_State *L) {
		if (!_lg_typecheck_HasCookies(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxHTTP::HasCookies() const function, expected prototype:\nbool wxHTTP::HasCookies() const\nClass arguments details:\n");
		}


		wxHTTP* self=dynamic_cast< wxHTTP* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxHTTP::HasCookies() const");
		}
		bool lret = self->HasCookies();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxHTTP* LunaTraits< wxHTTP >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxProtocol::Abort()

	// Abstract operators:
}

void LunaTraits< wxHTTP >::_bind_dtor(wxHTTP* obj) {
	delete obj;
}

const char LunaTraits< wxHTTP >::className[] = "wxHTTP";
const char LunaTraits< wxHTTP >::fullName[] = "wxHTTP";
const char LunaTraits< wxHTTP >::moduleName[] = "wx";
const char* LunaTraits< wxHTTP >::parents[] = {"wx.wxProtocol", 0};
const int LunaTraits< wxHTTP >::hash = 19919670;
const int LunaTraits< wxHTTP >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHTTP >::methods[] = {
	{"Connect", &luna_wrapper_wxHTTP::_bind_Connect},
	{"GetHeader", &luna_wrapper_wxHTTP::_bind_GetHeader},
	{"GetInputStream", &luna_wrapper_wxHTTP::_bind_GetInputStream},
	{"GetResponse", &luna_wrapper_wxHTTP::_bind_GetResponse},
	{"SetHeader", &luna_wrapper_wxHTTP::_bind_SetHeader},
	{"GetCookie", &luna_wrapper_wxHTTP::_bind_GetCookie},
	{"HasCookies", &luna_wrapper_wxHTTP::_bind_HasCookies},
	{0,0}
};

luna_ConverterType LunaTraits< wxHTTP >::converters[] = {
	{"wxObject", &luna_wrapper_wxHTTP::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHTTP >::enumValues[] = {
	{0,0}
};


