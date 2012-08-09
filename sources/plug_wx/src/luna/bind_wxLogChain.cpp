#include <plug_common.h>

class luna_wrapper_wxLogChain {
public:
	typedef Luna< wxLogChain > luna_t;

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxLogChain* ptr= dynamic_cast< wxLogChain* >(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogChain >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,13550494)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DetachOldLog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOldLog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPassingMessages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PassMessages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,13550494)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogChain::wxLogChain(wxLog * logger)
	static wxLogChain* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogChain::wxLogChain(wxLog * logger) function, expected prototype:\nwxLogChain::wxLogChain(wxLog * logger)\nClass arguments details:\narg 1 ID = 13550494\n");
		}

		wxLog* logger=(Luna< wxLog >::check(L,1));

		return new wxLogChain(logger);
	}


	// Function binds:
	// void wxLogChain::DetachOldLog()
	static int _bind_DetachOldLog(lua_State *L) {
		if (!_lg_typecheck_DetachOldLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogChain::DetachOldLog() function, expected prototype:\nvoid wxLogChain::DetachOldLog()\nClass arguments details:\n");
		}


		wxLogChain* self=dynamic_cast< wxLogChain* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogChain::DetachOldLog()");
		}
		self->DetachOldLog();

		return 0;
	}

	// wxLog * wxLogChain::GetOldLog() const
	static int _bind_GetOldLog(lua_State *L) {
		if (!_lg_typecheck_GetOldLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLog * wxLogChain::GetOldLog() const function, expected prototype:\nwxLog * wxLogChain::GetOldLog() const\nClass arguments details:\n");
		}


		wxLogChain* self=dynamic_cast< wxLogChain* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxLog * wxLogChain::GetOldLog() const");
		}
		wxLog * lret = self->GetOldLog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLog >::push(L,lret,false);

		return 1;
	}

	// bool wxLogChain::IsPassingMessages() const
	static int _bind_IsPassingMessages(lua_State *L) {
		if (!_lg_typecheck_IsPassingMessages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxLogChain::IsPassingMessages() const function, expected prototype:\nbool wxLogChain::IsPassingMessages() const\nClass arguments details:\n");
		}


		wxLogChain* self=dynamic_cast< wxLogChain* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxLogChain::IsPassingMessages() const");
		}
		bool lret = self->IsPassingMessages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxLogChain::PassMessages(bool passMessages)
	static int _bind_PassMessages(lua_State *L) {
		if (!_lg_typecheck_PassMessages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogChain::PassMessages(bool passMessages) function, expected prototype:\nvoid wxLogChain::PassMessages(bool passMessages)\nClass arguments details:\n");
		}

		bool passMessages=(bool)(lua_toboolean(L,2)==1);

		wxLogChain* self=dynamic_cast< wxLogChain* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogChain::PassMessages(bool)");
		}
		self->PassMessages(passMessages);

		return 0;
	}

	// void wxLogChain::SetLog(wxLog * logger)
	static int _bind_SetLog(lua_State *L) {
		if (!_lg_typecheck_SetLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxLogChain::SetLog(wxLog * logger) function, expected prototype:\nvoid wxLogChain::SetLog(wxLog * logger)\nClass arguments details:\narg 1 ID = 13550494\n");
		}

		wxLog* logger=(Luna< wxLog >::check(L,2));

		wxLogChain* self=dynamic_cast< wxLogChain* >(Luna< wxLog >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxLogChain::SetLog(wxLog *)");
		}
		self->SetLog(logger);

		return 0;
	}


	// Operator binds:

};

wxLogChain* LunaTraits< wxLogChain >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogChain::_bind_ctor(L);
}

void LunaTraits< wxLogChain >::_bind_dtor(wxLogChain* obj) {
	delete obj;
}

const char LunaTraits< wxLogChain >::className[] = "wxLogChain";
const char LunaTraits< wxLogChain >::fullName[] = "wxLogChain";
const char LunaTraits< wxLogChain >::moduleName[] = "wx";
const char* LunaTraits< wxLogChain >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogChain >::hash = 80452318;
const int LunaTraits< wxLogChain >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogChain >::methods[] = {
	{"DetachOldLog", &luna_wrapper_wxLogChain::_bind_DetachOldLog},
	{"GetOldLog", &luna_wrapper_wxLogChain::_bind_GetOldLog},
	{"IsPassingMessages", &luna_wrapper_wxLogChain::_bind_IsPassingMessages},
	{"PassMessages", &luna_wrapper_wxLogChain::_bind_PassMessages},
	{"SetLog", &luna_wrapper_wxLogChain::_bind_SetLog},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogChain >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogChain::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogChain >::enumValues[] = {
	{0,0}
};

