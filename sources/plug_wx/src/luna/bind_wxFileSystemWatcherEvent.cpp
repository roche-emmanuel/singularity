#include <plug_common.h>

class luna_wrapper_wxFileSystemWatcherEvent {
public:
	typedef Luna< wxFileSystemWatcherEvent > luna_t;

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
		wxFileSystemWatcherEvent* ptr= dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystemWatcherEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNewPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChangeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetErrorDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const wxFileName & wxFileSystemWatcherEvent::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFileName & wxFileSystemWatcherEvent::GetPath() const function, expected prototype:\nconst wxFileName & wxFileSystemWatcherEvent::GetPath() const\nClass arguments details:\n");
		}


		wxFileSystemWatcherEvent* self=dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFileName & wxFileSystemWatcherEvent::GetPath() const");
		}
		const wxFileName* lret = &self->GetPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,false);

		return 1;
	}

	// const wxFileName & wxFileSystemWatcherEvent::GetNewPath() const
	static int _bind_GetNewPath(lua_State *L) {
		if (!_lg_typecheck_GetNewPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxFileName & wxFileSystemWatcherEvent::GetNewPath() const function, expected prototype:\nconst wxFileName & wxFileSystemWatcherEvent::GetNewPath() const\nClass arguments details:\n");
		}


		wxFileSystemWatcherEvent* self=dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxFileName & wxFileSystemWatcherEvent::GetNewPath() const");
		}
		const wxFileName* lret = &self->GetNewPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,false);

		return 1;
	}

	// int wxFileSystemWatcherEvent::GetChangeType() const
	static int _bind_GetChangeType(lua_State *L) {
		if (!_lg_typecheck_GetChangeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFileSystemWatcherEvent::GetChangeType() const function, expected prototype:\nint wxFileSystemWatcherEvent::GetChangeType() const\nClass arguments details:\n");
		}


		wxFileSystemWatcherEvent* self=dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFileSystemWatcherEvent::GetChangeType() const");
		}
		int lret = self->GetChangeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFileSystemWatcherEvent::IsError() const
	static int _bind_IsError(lua_State *L) {
		if (!_lg_typecheck_IsError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcherEvent::IsError() const function, expected prototype:\nbool wxFileSystemWatcherEvent::IsError() const\nClass arguments details:\n");
		}


		wxFileSystemWatcherEvent* self=dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcherEvent::IsError() const");
		}
		bool lret = self->IsError();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileSystemWatcherEvent::GetErrorDescription() const
	static int _bind_GetErrorDescription(lua_State *L) {
		if (!_lg_typecheck_GetErrorDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemWatcherEvent::GetErrorDescription() const function, expected prototype:\nwxString wxFileSystemWatcherEvent::GetErrorDescription() const\nClass arguments details:\n");
		}


		wxFileSystemWatcherEvent* self=dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystemWatcherEvent::GetErrorDescription() const");
		}
		wxString lret = self->GetErrorDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystemWatcherEvent::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemWatcherEvent::ToString() const function, expected prototype:\nwxString wxFileSystemWatcherEvent::ToString() const\nClass arguments details:\n");
		}


		wxFileSystemWatcherEvent* self=dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxFileSystemWatcherEvent::ToString() const");
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxFileSystemWatcherEvent* LunaTraits< wxFileSystemWatcherEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxFileSystemWatcherEvent >::_bind_dtor(wxFileSystemWatcherEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystemWatcherEvent >::className[] = "wxFileSystemWatcherEvent";
const char LunaTraits< wxFileSystemWatcherEvent >::fullName[] = "wxFileSystemWatcherEvent";
const char LunaTraits< wxFileSystemWatcherEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystemWatcherEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxFileSystemWatcherEvent >::hash = 36134358;
const int LunaTraits< wxFileSystemWatcherEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileSystemWatcherEvent >::methods[] = {
	{"GetPath", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetPath},
	{"GetNewPath", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetNewPath},
	{"GetChangeType", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetChangeType},
	{"IsError", &luna_wrapper_wxFileSystemWatcherEvent::_bind_IsError},
	{"GetErrorDescription", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetErrorDescription},
	{"ToString", &luna_wrapper_wxFileSystemWatcherEvent::_bind_ToString},
	{"__eq", &luna_wrapper_wxFileSystemWatcherEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystemWatcherEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystemWatcherEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystemWatcherEvent >::enumValues[] = {
	{0,0}
};


