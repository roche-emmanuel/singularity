#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCommandEvent.h>

class luna_wrapper_wxCommandEvent {
public:
	typedef Luna< wxCommandEvent > luna_t;

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
		wxCommandEvent* ptr= dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommandEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtraLong(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtraLong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void * wxCommandEvent::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * wxCommandEvent::GetClientData() const function, expected prototype:\nvoid * wxCommandEvent::GetClientData() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * wxCommandEvent::GetClientData() const");
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxCommandEvent::GetClientObject() const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClientData * wxCommandEvent::GetClientObject() const function, expected prototype:\nwxClientData * wxCommandEvent::GetClientObject() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClientData * wxCommandEvent::GetClientObject() const");
		}
		wxClientData * lret = self->GetClientObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// long wxCommandEvent::GetExtraLong() const
	static int _bind_GetExtraLong(lua_State *L) {
		if (!_lg_typecheck_GetExtraLong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxCommandEvent::GetExtraLong() const function, expected prototype:\nlong wxCommandEvent::GetExtraLong() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxCommandEvent::GetExtraLong() const");
		}
		long lret = self->GetExtraLong();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxCommandEvent::GetInt() const
	static int _bind_GetInt(lua_State *L) {
		if (!_lg_typecheck_GetInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxCommandEvent::GetInt() const function, expected prototype:\nint wxCommandEvent::GetInt() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxCommandEvent::GetInt() const");
		}
		int lret = self->GetInt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxCommandEvent::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxCommandEvent::GetSelection() const function, expected prototype:\nint wxCommandEvent::GetSelection() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxCommandEvent::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxCommandEvent::GetString() const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxCommandEvent::GetString() const function, expected prototype:\nwxString wxCommandEvent::GetString() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxCommandEvent::GetString() const");
		}
		wxString lret = self->GetString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxCommandEvent::IsChecked() const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandEvent::IsChecked() const function, expected prototype:\nbool wxCommandEvent::IsChecked() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandEvent::IsChecked() const");
		}
		bool lret = self->IsChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCommandEvent::IsSelection() const
	static int _bind_IsSelection(lua_State *L) {
		if (!_lg_typecheck_IsSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxCommandEvent::IsSelection() const function, expected prototype:\nbool wxCommandEvent::IsSelection() const\nClass arguments details:\n");
		}


		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxCommandEvent::IsSelection() const");
		}
		bool lret = self->IsSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCommandEvent::SetClientData(void * clientData)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetClientData(void * clientData) function, expected prototype:\nvoid wxCommandEvent::SetClientData(void * clientData)\nClass arguments details:\n");
		}

		void* clientData=(Luna< void >::check(L,2));

		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetClientData(void *)");
		}
		self->SetClientData(clientData);

		return 0;
	}

	// void wxCommandEvent::SetClientObject(wxClientData * clientObject)
	static int _bind_SetClientObject(lua_State *L) {
		if (!_lg_typecheck_SetClientObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetClientObject(wxClientData * clientObject) function, expected prototype:\nvoid wxCommandEvent::SetClientObject(wxClientData * clientObject)\nClass arguments details:\narg 1 ID = 50457573\n");
		}

		wxClientData* clientObject=(Luna< wxClientData >::check(L,2));

		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetClientObject(wxClientData *)");
		}
		self->SetClientObject(clientObject);

		return 0;
	}

	// void wxCommandEvent::SetExtraLong(long extraLong)
	static int _bind_SetExtraLong(lua_State *L) {
		if (!_lg_typecheck_SetExtraLong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetExtraLong(long extraLong) function, expected prototype:\nvoid wxCommandEvent::SetExtraLong(long extraLong)\nClass arguments details:\n");
		}

		long extraLong=(long)lua_tointeger(L,2);

		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetExtraLong(long)");
		}
		self->SetExtraLong(extraLong);

		return 0;
	}

	// void wxCommandEvent::SetInt(int intCommand)
	static int _bind_SetInt(lua_State *L) {
		if (!_lg_typecheck_SetInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetInt(int intCommand) function, expected prototype:\nvoid wxCommandEvent::SetInt(int intCommand)\nClass arguments details:\n");
		}

		int intCommand=(int)lua_tointeger(L,2);

		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetInt(int)");
		}
		self->SetInt(intCommand);

		return 0;
	}

	// void wxCommandEvent::SetString(const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCommandEvent::SetString(const wxString & string) function, expected prototype:\nvoid wxCommandEvent::SetString(const wxString & string)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxCommandEvent* self=dynamic_cast< wxCommandEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCommandEvent::SetString(const wxString &)");
		}
		self->SetString(string);

		return 0;
	}


	// Operator binds:

};

wxCommandEvent* LunaTraits< wxCommandEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxCommandEvent >::_bind_dtor(wxCommandEvent* obj) {
	delete obj;
}

const char LunaTraits< wxCommandEvent >::className[] = "wxCommandEvent";
const char LunaTraits< wxCommandEvent >::fullName[] = "wxCommandEvent";
const char LunaTraits< wxCommandEvent >::moduleName[] = "wx";
const char* LunaTraits< wxCommandEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxCommandEvent >::hash = 40606061;
const int LunaTraits< wxCommandEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCommandEvent >::methods[] = {
	{"GetClientData", &luna_wrapper_wxCommandEvent::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxCommandEvent::_bind_GetClientObject},
	{"GetExtraLong", &luna_wrapper_wxCommandEvent::_bind_GetExtraLong},
	{"GetInt", &luna_wrapper_wxCommandEvent::_bind_GetInt},
	{"GetSelection", &luna_wrapper_wxCommandEvent::_bind_GetSelection},
	{"GetString", &luna_wrapper_wxCommandEvent::_bind_GetString},
	{"IsChecked", &luna_wrapper_wxCommandEvent::_bind_IsChecked},
	{"IsSelection", &luna_wrapper_wxCommandEvent::_bind_IsSelection},
	{"SetClientData", &luna_wrapper_wxCommandEvent::_bind_SetClientData},
	{"SetClientObject", &luna_wrapper_wxCommandEvent::_bind_SetClientObject},
	{"SetExtraLong", &luna_wrapper_wxCommandEvent::_bind_SetExtraLong},
	{"SetInt", &luna_wrapper_wxCommandEvent::_bind_SetInt},
	{"SetString", &luna_wrapper_wxCommandEvent::_bind_SetString},
	{"__eq", &luna_wrapper_wxCommandEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCommandEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxCommandEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCommandEvent >::enumValues[] = {
	{0,0}
};


