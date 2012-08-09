#include <plug_common.h>

class luna_wrapper_wxIPV4address {
public:
	typedef Luna< wxIPV4address > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxIPV4address* ptr= dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIPV4address >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_AnyAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hostname_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hostname_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IPAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LocalHost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Service_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Service_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Service_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxIPV4address::AnyAddress()
	static int _bind_AnyAddress(lua_State *L) {
		if (!_lg_typecheck_AnyAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIPV4address::AnyAddress() function, expected prototype:\nbool wxIPV4address::AnyAddress()\nClass arguments details:\n");
		}


		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIPV4address::AnyAddress()");
		}
		bool lret = self->AnyAddress();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPV4address::Hostname(const wxString & hostname)
	static int _bind_Hostname_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hostname_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIPV4address::Hostname(const wxString & hostname) function, expected prototype:\nbool wxIPV4address::Hostname(const wxString & hostname)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString hostname(lua_tostring(L,2),lua_objlen(L,2));

		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIPV4address::Hostname(const wxString &)");
		}
		bool lret = self->Hostname(hostname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxIPV4address::Hostname() const
	static int _bind_Hostname_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hostname_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxIPV4address::Hostname() const function, expected prototype:\nwxString wxIPV4address::Hostname() const\nClass arguments details:\n");
		}


		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxIPV4address::Hostname() const");
		}
		wxString lret = self->Hostname();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxIPV4address::Hostname
	static int _bind_Hostname(lua_State *L) {
		if (_lg_typecheck_Hostname_overload_1(L)) return _bind_Hostname_overload_1(L);
		if (_lg_typecheck_Hostname_overload_2(L)) return _bind_Hostname_overload_2(L);

		luaL_error(L, "error in function Hostname, cannot match any of the overloads for function Hostname:\n  Hostname(const wxString &)\n  Hostname()\n");
		return 0;
	}

	// wxString wxIPV4address::IPAddress() const
	static int _bind_IPAddress(lua_State *L) {
		if (!_lg_typecheck_IPAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxIPV4address::IPAddress() const function, expected prototype:\nwxString wxIPV4address::IPAddress() const\nClass arguments details:\n");
		}


		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxIPV4address::IPAddress() const");
		}
		wxString lret = self->IPAddress();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxIPV4address::LocalHost()
	static int _bind_LocalHost(lua_State *L) {
		if (!_lg_typecheck_LocalHost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIPV4address::LocalHost() function, expected prototype:\nbool wxIPV4address::LocalHost()\nClass arguments details:\n");
		}


		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIPV4address::LocalHost()");
		}
		bool lret = self->LocalHost();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPV4address::Service(const wxString & service)
	static int _bind_Service_overload_1(lua_State *L) {
		if (!_lg_typecheck_Service_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIPV4address::Service(const wxString & service) function, expected prototype:\nbool wxIPV4address::Service(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIPV4address::Service(const wxString &)");
		}
		bool lret = self->Service(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPV4address::Service(unsigned short service)
	static int _bind_Service_overload_2(lua_State *L) {
		if (!_lg_typecheck_Service_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIPV4address::Service(unsigned short service) function, expected prototype:\nbool wxIPV4address::Service(unsigned short service)\nClass arguments details:\n");
		}

		unsigned short service=(unsigned short)lua_tointeger(L,2);

		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIPV4address::Service(unsigned short)");
		}
		bool lret = self->Service(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned short wxIPV4address::Service() const
	static int _bind_Service_overload_3(lua_State *L) {
		if (!_lg_typecheck_Service_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short wxIPV4address::Service() const function, expected prototype:\nunsigned short wxIPV4address::Service() const\nClass arguments details:\n");
		}


		wxIPV4address* self=dynamic_cast< wxIPV4address* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short wxIPV4address::Service() const");
		}
		unsigned short lret = self->Service();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxIPV4address::Service
	static int _bind_Service(lua_State *L) {
		if (_lg_typecheck_Service_overload_1(L)) return _bind_Service_overload_1(L);
		if (_lg_typecheck_Service_overload_2(L)) return _bind_Service_overload_2(L);
		if (_lg_typecheck_Service_overload_3(L)) return _bind_Service_overload_3(L);

		luaL_error(L, "error in function Service, cannot match any of the overloads for function Service:\n  Service(const wxString &)\n  Service(unsigned short)\n  Service()\n");
		return 0;
	}


	// Operator binds:

};

wxIPV4address* LunaTraits< wxIPV4address >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxIPaddress::BroadcastAddress()
	// bool wxIPaddress::IsLocalHost() const
	// void wxSockAddress::Clear()

	// Abstract operators:
}

void LunaTraits< wxIPV4address >::_bind_dtor(wxIPV4address* obj) {
	delete obj;
}

const char LunaTraits< wxIPV4address >::className[] = "wxIPV4address";
const char LunaTraits< wxIPV4address >::fullName[] = "wxIPV4address";
const char LunaTraits< wxIPV4address >::moduleName[] = "wx";
const char* LunaTraits< wxIPV4address >::parents[] = {"wx.wxIPaddress", 0};
const int LunaTraits< wxIPV4address >::hash = 7340400;
const int LunaTraits< wxIPV4address >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIPV4address >::methods[] = {
	{"AnyAddress", &luna_wrapper_wxIPV4address::_bind_AnyAddress},
	{"Hostname", &luna_wrapper_wxIPV4address::_bind_Hostname},
	{"IPAddress", &luna_wrapper_wxIPV4address::_bind_IPAddress},
	{"LocalHost", &luna_wrapper_wxIPV4address::_bind_LocalHost},
	{"Service", &luna_wrapper_wxIPV4address::_bind_Service},
	{0,0}
};

luna_ConverterType LunaTraits< wxIPV4address >::converters[] = {
	{"wxObject", &luna_wrapper_wxIPV4address::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIPV4address >::enumValues[] = {
	{0,0}
};

