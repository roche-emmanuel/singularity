#include <plug_common.h>

class luna_wrapper_wxProtocol {
public:
	typedef Luna< wxProtocol > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxProtocol* ptr= dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProtocol >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Abort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContentType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Reconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPassword(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultTimeout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45711597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DetachLog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LogRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogResponse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxProtocol::Abort()
	static int _bind_Abort(lua_State *L) {
		if (!_lg_typecheck_Abort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProtocol::Abort() function, expected prototype:\nbool wxProtocol::Abort()\nClass arguments details:\n");
		}


		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProtocol::Abort()");
		}
		bool lret = self->Abort();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxProtocol::GetContentType() const
	static int _bind_GetContentType(lua_State *L) {
		if (!_lg_typecheck_GetContentType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxProtocol::GetContentType() const function, expected prototype:\nwxString wxProtocol::GetContentType() const\nClass arguments details:\n");
		}


		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxProtocol::GetContentType() const");
		}
		wxString lret = self->GetContentType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxProtocolError wxProtocol::GetError() const
	static int _bind_GetError(lua_State *L) {
		if (!_lg_typecheck_GetError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProtocolError wxProtocol::GetError() const function, expected prototype:\nwxProtocolError wxProtocol::GetError() const\nClass arguments details:\n");
		}


		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxProtocolError wxProtocol::GetError() const");
		}
		wxProtocolError lret = self->GetError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream * wxProtocol::GetInputStream(const wxString & path)
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxInputStream * wxProtocol::GetInputStream(const wxString & path) function, expected prototype:\nwxInputStream * wxProtocol::GetInputStream(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxInputStream * wxProtocol::GetInputStream(const wxString &)");
		}
		wxInputStream * lret = self->GetInputStream(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// bool wxProtocol::Reconnect()
	static int _bind_Reconnect(lua_State *L) {
		if (!_lg_typecheck_Reconnect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProtocol::Reconnect() function, expected prototype:\nbool wxProtocol::Reconnect()\nClass arguments details:\n");
		}


		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProtocol::Reconnect()");
		}
		bool lret = self->Reconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProtocol::SetPassword(const wxString & user)
	static int _bind_SetPassword(lua_State *L) {
		if (!_lg_typecheck_SetPassword(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetPassword(const wxString & user) function, expected prototype:\nvoid wxProtocol::SetPassword(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocol::SetPassword(const wxString &)");
		}
		self->SetPassword(user);

		return 0;
	}

	// void wxProtocol::SetUser(const wxString & user)
	static int _bind_SetUser(lua_State *L) {
		if (!_lg_typecheck_SetUser(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetUser(const wxString & user) function, expected prototype:\nvoid wxProtocol::SetUser(const wxString & user)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString user(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocol::SetUser(const wxString &)");
		}
		self->SetUser(user);

		return 0;
	}

	// void wxProtocol::SetDefaultTimeout(unsigned int Value)
	static int _bind_SetDefaultTimeout(lua_State *L) {
		if (!_lg_typecheck_SetDefaultTimeout(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetDefaultTimeout(unsigned int Value) function, expected prototype:\nvoid wxProtocol::SetDefaultTimeout(unsigned int Value)\nClass arguments details:\n");
		}

		unsigned int Value=(unsigned int)lua_tointeger(L,2);

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocol::SetDefaultTimeout(unsigned int)");
		}
		self->SetDefaultTimeout(Value);

		return 0;
	}

	// void wxProtocol::SetLog(wxProtocolLog * log)
	static int _bind_SetLog(lua_State *L) {
		if (!_lg_typecheck_SetLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocol::SetLog(wxProtocolLog * log) function, expected prototype:\nvoid wxProtocol::SetLog(wxProtocolLog * log)\nClass arguments details:\narg 1 ID = 45711597\n");
		}

		wxProtocolLog* log=(Luna< wxProtocolLog >::check(L,2));

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocol::SetLog(wxProtocolLog *)");
		}
		self->SetLog(log);

		return 0;
	}

	// wxProtocolLog * wxProtocol::GetLog() const
	static int _bind_GetLog(lua_State *L) {
		if (!_lg_typecheck_GetLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProtocolLog * wxProtocol::GetLog() const function, expected prototype:\nwxProtocolLog * wxProtocol::GetLog() const\nClass arguments details:\n");
		}


		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxProtocolLog * wxProtocol::GetLog() const");
		}
		wxProtocolLog * lret = self->GetLog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProtocolLog >::push(L,lret,false);

		return 1;
	}

	// wxProtocolLog * wxProtocol::DetachLog()
	static int _bind_DetachLog(lua_State *L) {
		if (!_lg_typecheck_DetachLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProtocolLog * wxProtocol::DetachLog() function, expected prototype:\nwxProtocolLog * wxProtocol::DetachLog()\nClass arguments details:\n");
		}


		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxProtocolLog * wxProtocol::DetachLog()");
		}
		wxProtocolLog * lret = self->DetachLog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProtocolLog >::push(L,lret,false);

		return 1;
	}

	// void wxProtocol::LogRequest(const wxString & str)
	static int _bind_LogRequest(lua_State *L) {
		if (!_lg_typecheck_LogRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocol::LogRequest(const wxString & str) function, expected prototype:\nvoid wxProtocol::LogRequest(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocol::LogRequest(const wxString &)");
		}
		self->LogRequest(str);

		return 0;
	}

	// void wxProtocol::LogResponse(const wxString & str)
	static int _bind_LogResponse(lua_State *L) {
		if (!_lg_typecheck_LogResponse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProtocol::LogResponse(const wxString & str) function, expected prototype:\nvoid wxProtocol::LogResponse(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxProtocol* self=dynamic_cast< wxProtocol* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProtocol::LogResponse(const wxString &)");
		}
		self->LogResponse(str);

		return 0;
	}


	// Operator binds:

};

wxProtocol* LunaTraits< wxProtocol >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxProtocol::Abort()
	// wxInputStream * wxProtocol::GetInputStream(const wxString & path)

	// Abstract operators:
}

void LunaTraits< wxProtocol >::_bind_dtor(wxProtocol* obj) {
	delete obj;
}

const char LunaTraits< wxProtocol >::className[] = "wxProtocol";
const char LunaTraits< wxProtocol >::fullName[] = "wxProtocol";
const char LunaTraits< wxProtocol >::moduleName[] = "wx";
const char* LunaTraits< wxProtocol >::parents[] = {"wx.wxSocketClient", 0};
const int LunaTraits< wxProtocol >::hash = 67907954;
const int LunaTraits< wxProtocol >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxProtocol >::methods[] = {
	{"Abort", &luna_wrapper_wxProtocol::_bind_Abort},
	{"GetContentType", &luna_wrapper_wxProtocol::_bind_GetContentType},
	{"GetError", &luna_wrapper_wxProtocol::_bind_GetError},
	{"GetInputStream", &luna_wrapper_wxProtocol::_bind_GetInputStream},
	{"Reconnect", &luna_wrapper_wxProtocol::_bind_Reconnect},
	{"SetPassword", &luna_wrapper_wxProtocol::_bind_SetPassword},
	{"SetUser", &luna_wrapper_wxProtocol::_bind_SetUser},
	{"SetDefaultTimeout", &luna_wrapper_wxProtocol::_bind_SetDefaultTimeout},
	{"SetLog", &luna_wrapper_wxProtocol::_bind_SetLog},
	{"GetLog", &luna_wrapper_wxProtocol::_bind_GetLog},
	{"DetachLog", &luna_wrapper_wxProtocol::_bind_DetachLog},
	{"LogRequest", &luna_wrapper_wxProtocol::_bind_LogRequest},
	{"LogResponse", &luna_wrapper_wxProtocol::_bind_LogResponse},
	{0,0}
};

luna_ConverterType LunaTraits< wxProtocol >::converters[] = {
	{"wxObject", &luna_wrapper_wxProtocol::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProtocol >::enumValues[] = {
	{0,0}
};


