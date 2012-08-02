#include <plug_common.h>

class luna_wrapper_wxEvtHandler {
public:
	typedef Luna< wxEvtHandler > luna_t;

	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L) != 0) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetNextHandler(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPreviousHandler(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNextHandler(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEvtHandlerEnabled(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isboolean(L,2)==0) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEvtHandlerEnabled(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unlink(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsUnlinked(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeletePendingEvents(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L) != 2) return false;
		if( lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L) != 1) return false;
		return true;
	}


	// Constructor binds:
	static wxEvtHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEvtHandler function, expected prototype:\nwxEvtHandler()");
		}


		return new wxEvtHandler();
	}


	// Function binds:
	static int _bind_GetNextHandler(lua_State *L) {
		if (!_lg_typecheck_GetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetNextHandler function, expected prototype:\nGetNextHandler()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetNextHandler(...)");
		}
		wxEvtHandler* ret = self->GetNextHandler();
		Luna< wxEvtHandler >::push(L,ret,false,"wxEvtHandler");

		return 1;
	}

	static int _bind_GetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_GetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetPreviousHandler function, expected prototype:\nGetPreviousHandler()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetPreviousHandler(...)");
		}
		wxEvtHandler* ret = self->GetPreviousHandler();
		Luna< wxEvtHandler >::push(L,ret,false,"wxEvtHandler");

		return 1;
	}

	static int _bind_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_SetNextHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetNextHandler function, expected prototype:\nSetNextHandler(wxEvtHandler*)");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetNextHandler(...)");
		}
		self->SetNextHandler(handler);

		return 0;
	}

	static int _bind_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_SetPreviousHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetPreviousHandler function, expected prototype:\nSetPreviousHandler(wxEvtHandler*)");
		}

		wxEvtHandler* handler=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetPreviousHandler(...)");
		}
		self->SetPreviousHandler(handler);

		return 0;
	}

	static int _bind_SetEvtHandlerEnabled(lua_State *L) {
		if (!_lg_typecheck_SetEvtHandlerEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetEvtHandlerEnabled function, expected prototype:\nSetEvtHandlerEnabled(bool)");
		}

		bool enabled=(bool)lua_toboolean(L,2);

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetEvtHandlerEnabled(...)");
		}
		self->SetEvtHandlerEnabled(enabled);

		return 0;
	}

	static int _bind_GetEvtHandlerEnabled(lua_State *L) {
		if (!_lg_typecheck_GetEvtHandlerEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetEvtHandlerEnabled function, expected prototype:\nGetEvtHandlerEnabled()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetEvtHandlerEnabled(...)");
		}
		bool ret = self->GetEvtHandlerEnabled();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_Unlink(lua_State *L) {
		if (!_lg_typecheck_Unlink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Unlink function, expected prototype:\nUnlink()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Unlink(...)");
		}
		self->Unlink();

		return 0;
	}

	static int _bind_IsUnlinked(lua_State *L) {
		if (!_lg_typecheck_IsUnlinked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IsUnlinked function, expected prototype:\nIsUnlinked()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IsUnlinked(...)");
		}
		bool ret = self->IsUnlinked();
		lua_pushboolean(L,ret?1:0);

		return 1;
	}

	static int _bind_DeletePendingEvents(lua_State *L) {
		if (!_lg_typecheck_DeletePendingEvents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in DeletePendingEvents function, expected prototype:\nDeletePendingEvents()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call DeletePendingEvents(...)");
		}
		self->DeletePendingEvents();

		return 0;
	}

	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SetClientData function, expected prototype:\nSetClientData(void*)");
		}

		void* data=(Luna< void >::check(L,2));

		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SetClientData(...)");
		}
		self->SetClientData(data);

		return 0;
	}

	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in GetClientData function, expected prototype:\nGetClientData()");
		}


		wxEvtHandler* self=dynamic_cast< wxEvtHandler* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call GetClientData(...)");
		}
		void* ret = self->GetClientData();
		Luna< void >::push(L,ret,false,"void");

		return 1;
	}

};

wxEvtHandler* LunaTraits< wxEvtHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEvtHandler::_bind_ctor(L);
}

void LunaTraits< wxEvtHandler >::_bind_dtor(wxEvtHandler* obj) {
	delete obj;
}

const char LunaTraits< wxEvtHandler >::className[] = "wxEvtHandler";
const char LunaTraits< wxEvtHandler >::moduleName[] = "wx";
const int LunaTraits< wxEvtHandler >::uniqueIDs = {56813631,0};

luna_RegType LunaTraits< wxEvtHandler >::methods[] = {
	{"GetNextHandler", &luna_wrapper_wxEvtHandler::_bind_GetNextHandler},
	{"GetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_GetPreviousHandler},
	{"SetNextHandler", &luna_wrapper_wxEvtHandler::_bind_SetNextHandler},
	{"SetPreviousHandler", &luna_wrapper_wxEvtHandler::_bind_SetPreviousHandler},
	{"SetEvtHandlerEnabled", &luna_wrapper_wxEvtHandler::_bind_SetEvtHandlerEnabled},
	{"GetEvtHandlerEnabled", &luna_wrapper_wxEvtHandler::_bind_GetEvtHandlerEnabled},
	{"Unlink", &luna_wrapper_wxEvtHandler::_bind_Unlink},
	{"IsUnlinked", &luna_wrapper_wxEvtHandler::_bind_IsUnlinked},
	{"DeletePendingEvents", &luna_wrapper_wxEvtHandler::_bind_DeletePendingEvents},
	{"SetClientData", &luna_wrapper_wxEvtHandler::_bind_SetClientData},
	{"GetClientData", &luna_wrapper_wxEvtHandler::_bind_GetClientData},
	{0,0}
};


