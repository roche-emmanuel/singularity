#include <plug_common.h>

class luna_wrapper_wxTCPServer {
public:
	typedef Luna< wxTCPServer > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTCPServer* ptr= dynamic_cast< wxTCPServer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTCPServer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnAcceptConnection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTCPServer::wxTCPServer()
	static wxTCPServer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTCPServer::wxTCPServer() function, expected prototype:\nwxTCPServer::wxTCPServer()\nClass arguments details:\n");
		}


		return new wxTCPServer();
	}


	// Function binds:
	// bool wxTCPServer::Create(const wxString & service)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTCPServer::Create(const wxString & service) function, expected prototype:\nbool wxTCPServer::Create(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPServer* self=dynamic_cast< wxTCPServer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTCPServer::Create(const wxString &)");
		}
		bool lret = self->Create(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic)
	static int _bind_OnAcceptConnection(lua_State *L) {
		if (!_lg_typecheck_OnAcceptConnection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic) function, expected prototype:\nwxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));

		wxTCPServer* self=dynamic_cast< wxTCPServer* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxTCPServer::OnAcceptConnection(const wxString &)");
		}
		wxConnectionBase * lret = self->OnAcceptConnection(topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxTCPServer* LunaTraits< wxTCPServer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTCPServer::_bind_ctor(L);
}

void LunaTraits< wxTCPServer >::_bind_dtor(wxTCPServer* obj) {
	delete obj;
}

const char LunaTraits< wxTCPServer >::className[] = "wxTCPServer";
const char LunaTraits< wxTCPServer >::fullName[] = "wxTCPServer";
const char LunaTraits< wxTCPServer >::moduleName[] = "wx";
const char* LunaTraits< wxTCPServer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxTCPServer >::hash = 10086250;
const int LunaTraits< wxTCPServer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTCPServer >::methods[] = {
	{"Create", &luna_wrapper_wxTCPServer::_bind_Create},
	{"OnAcceptConnection", &luna_wrapper_wxTCPServer::_bind_OnAcceptConnection},
	{0,0}
};

luna_ConverterType LunaTraits< wxTCPServer >::converters[] = {
	{"wxObject", &luna_wrapper_wxTCPServer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTCPServer >::enumValues[] = {
	{0,0}
};


