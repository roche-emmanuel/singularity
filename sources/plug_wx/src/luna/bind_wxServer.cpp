#include <plug_common.h>

class luna_wrapper_wxServer {
public:
	typedef Luna< wxServer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74355515) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxServer*)");
		}

		wxServer* rhs =(Luna< wxServer >::check(L,2));
		wxServer* self=(Luna< wxServer >::check(L,1));
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

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxServer");
		
		return luna_dynamicCast(L,converters,"wxServer",name);
	}


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
	// wxServer::wxServer()
	static wxServer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxServer::wxServer() function, expected prototype:\nwxServer::wxServer()\nClass arguments details:\n");
		}


		return new wxServer();
	}


	// Function binds:
	// bool wxServer::Create(const wxString & service)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxServer::Create(const wxString & service) function, expected prototype:\nbool wxServer::Create(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxServer::Create(const wxString &)");
		}
		bool lret = self->Create(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic)
	static int _bind_OnAcceptConnection(lua_State *L) {
		if (!_lg_typecheck_OnAcceptConnection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic) function, expected prototype:\nwxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString topic(lua_tostring(L,2),lua_objlen(L,2));

		wxServer* self=(Luna< wxServer >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxConnectionBase * wxServer::OnAcceptConnection(const wxString &)");
		}
		wxConnectionBase * lret = self->OnAcceptConnection(topic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxConnectionBase >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxServer* LunaTraits< wxServer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxServer::_bind_ctor(L);
}

void LunaTraits< wxServer >::_bind_dtor(wxServer* obj) {
	delete obj;
}

const char LunaTraits< wxServer >::className[] = "wxServer";
const char LunaTraits< wxServer >::fullName[] = "wxServer";
const char LunaTraits< wxServer >::moduleName[] = "wx";
const char* LunaTraits< wxServer >::parents[] = {0};
const int LunaTraits< wxServer >::hash = 74355515;
const int LunaTraits< wxServer >::uniqueIDs[] = {74355515,0};

luna_RegType LunaTraits< wxServer >::methods[] = {
	{"Create", &luna_wrapper_wxServer::_bind_Create},
	{"OnAcceptConnection", &luna_wrapper_wxServer::_bind_OnAcceptConnection},
	{"dynCast", &luna_wrapper_wxServer::_bind_dynCast},
	{"__eq", &luna_wrapper_wxServer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxServer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxServer >::enumValues[] = {
	{0,0}
};


