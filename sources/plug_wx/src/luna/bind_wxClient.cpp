#include <plug_common.h>

class luna_wrapper_wxClient {
public:
	typedef Luna< wxClient > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxClient* ptr= dynamic_cast< wxClient* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClient >::push(L,ptr,false);
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
	// wxClient::wxClient()
	static wxClient* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClient::wxClient() function, expected prototype:\nwxClient::wxClient()\nClass arguments details:\n");
		}


		return new wxClient();
	}


	// Function binds:
	// wxConnectionBase * wxClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic)
	static int _bind_MakeConnection(lua_State *L) {
		if (!_lg_typecheck_MakeConnection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic) function, expected prototype:\nwxConnectionBase * wxClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));
		wxString service(lua_tostring(L,3),lua_objlen(L,3));
		wxString topic(lua_tostring(L,4),lua_objlen(L,4));

		wxClient* self=dynamic_cast< wxClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxClient::MakeConnection(const wxString &, const wxString &, const wxString &)");
		}
		wxConnectionBase * lret = self->MakeConnection(host, service, topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}

	// wxConnectionBase * wxClient::OnMakeConnection()
	static int _bind_OnMakeConnection(lua_State *L) {
		if (!_lg_typecheck_OnMakeConnection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxClient::OnMakeConnection() function, expected prototype:\nwxConnectionBase * wxClient::OnMakeConnection()\nClass arguments details:\n");
		}


		wxClient* self=dynamic_cast< wxClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxClient::OnMakeConnection()");
		}
		wxConnectionBase * lret = self->OnMakeConnection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}

	// bool wxClient::ValidHost(const wxString & host)
	static int _bind_ValidHost(lua_State *L) {
		if (!_lg_typecheck_ValidHost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxClient::ValidHost(const wxString & host) function, expected prototype:\nbool wxClient::ValidHost(const wxString & host)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString host(lua_tostring(L,2),lua_objlen(L,2));

		wxClient* self=dynamic_cast< wxClient* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxClient::ValidHost(const wxString &)");
		}
		bool lret = self->ValidHost(host);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxClient* LunaTraits< wxClient >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClient::_bind_ctor(L);
}

void LunaTraits< wxClient >::_bind_dtor(wxClient* obj) {
	delete obj;
}

const char LunaTraits< wxClient >::className[] = "wxClient";
const char LunaTraits< wxClient >::fullName[] = "wxClient";
const char LunaTraits< wxClient >::moduleName[] = "wx";
const char* LunaTraits< wxClient >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxClient >::hash = 22469603;
const int LunaTraits< wxClient >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClient >::methods[] = {
	{"MakeConnection", &luna_wrapper_wxClient::_bind_MakeConnection},
	{"OnMakeConnection", &luna_wrapper_wxClient::_bind_OnMakeConnection},
	{"ValidHost", &luna_wrapper_wxClient::_bind_ValidHost},
	{0,0}
};

luna_ConverterType LunaTraits< wxClient >::converters[] = {
	{"wxObject", &luna_wrapper_wxClient::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClient >::enumValues[] = {
	{0,0}
};

