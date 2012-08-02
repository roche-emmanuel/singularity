#include <plug_common.h>

class luna_wrapper_wxTCPClient {
public:
	typedef Luna< wxTCPClient > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTCPClient* ptr= dynamic_cast< wxTCPClient* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTCPClient >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_MakeConnection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMakeConnection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ValidHost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTCPClient::wxTCPClient()
	static wxTCPClient* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTCPClient::wxTCPClient() function, expected prototype:\nwxTCPClient::wxTCPClient()\nClass arguments details:\n");
		}


		return new wxTCPClient();
	}


	// Function binds:
	// wxConnectionBase * wxTCPClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic)
	static int _bind_MakeConnection(lua_State *L) {
		if (!_lg_typecheck_MakeConnection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxTCPClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic) function, expected prototype:\nwxConnectionBase * wxTCPClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		wxString service(lua_tostring(L,3),lua_objlen(L,3));
		wxString topic(lua_tostring(L,4),lua_objlen(L,4));

		wxTCPClient* self=dynamic_cast< wxTCPClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxTCPClient::MakeConnection(const wxString &, const wxString &, const wxString &)");
		}
		wxConnectionBase * lret = self->MakeConnection(host, service, topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}

	// wxConnectionBase * wxTCPClient::OnMakeConnection()
	static int _bind_OnMakeConnection(lua_State *L) {
		if (!_lg_typecheck_OnMakeConnection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxTCPClient::OnMakeConnection() function, expected prototype:\nwxConnectionBase * wxTCPClient::OnMakeConnection()\nClass arguments details:\n");
		}


		wxTCPClient* self=dynamic_cast< wxTCPClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxTCPClient::OnMakeConnection()");
		}
		wxConnectionBase * lret = self->OnMakeConnection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}

	// bool wxTCPClient::ValidHost(const wxString & host)
	static int _bind_ValidHost(lua_State *L) {
		if (!_lg_typecheck_ValidHost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPClient::ValidHost(const wxString & host) function, expected prototype:\nbool wxTCPClient::ValidHost(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPClient* self=dynamic_cast< wxTCPClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPClient::ValidHost(const wxString &)");
		}
		bool lret = self->ValidHost(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTCPClient* LunaTraits< wxTCPClient >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTCPClient::_bind_ctor(L);
}

void LunaTraits< wxTCPClient >::_bind_dtor(wxTCPClient* obj) {
	delete obj;
}

const char LunaTraits< wxTCPClient >::className[] = "wxTCPClient";
const char LunaTraits< wxTCPClient >::fullName[] = "wxTCPClient";
const char LunaTraits< wxTCPClient >::moduleName[] = "wx";
const char* LunaTraits< wxTCPClient >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxTCPClient >::hash = 58200361;
const int LunaTraits< wxTCPClient >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTCPClient >::methods[] = {
	{"MakeConnection", &luna_wrapper_wxTCPClient::_bind_MakeConnection},
	{"OnMakeConnection", &luna_wrapper_wxTCPClient::_bind_OnMakeConnection},
	{"ValidHost", &luna_wrapper_wxTCPClient::_bind_ValidHost},
	{0,0}
};

luna_ConverterType LunaTraits< wxTCPClient >::converters[] = {
	{"wxObject", &luna_wrapper_wxTCPClient::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTCPClient >::enumValues[] = {
	{0,0}
};


