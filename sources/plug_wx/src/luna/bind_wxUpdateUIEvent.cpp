#include <plug_common.h>

class luna_wrapper_wxUpdateUIEvent {
public:
	typedef Luna< wxUpdateUIEvent > luna_t;

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
		wxUpdateUIEvent* ptr= dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxUpdateUIEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Check(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetChecked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpdateInterval(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetUpdateTime(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUpdateInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxUpdateUIEvent::Check(bool check)
	static int _bind_Check(lua_State *L) {
		if (!_lg_typecheck_Check(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::Check(bool check) function, expected prototype:\nvoid wxUpdateUIEvent::Check(bool check)\nClass arguments details:\n");
		}

		bool check=(bool)(lua_toboolean(L,2)==1);

		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::Check(bool)");
		}
		self->Check(check);

		return 0;
	}

	// void wxUpdateUIEvent::Enable(bool enable)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::Enable(bool enable) function, expected prototype:\nvoid wxUpdateUIEvent::Enable(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::Enable(bool)");
		}
		self->Enable(enable);

		return 0;
	}

	// bool wxUpdateUIEvent::GetChecked() const
	static int _bind_GetChecked(lua_State *L) {
		if (!_lg_typecheck_GetChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetChecked() const function, expected prototype:\nbool wxUpdateUIEvent::GetChecked() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetChecked() const");
		}
		bool lret = self->GetChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetEnabled() const
	static int _bind_GetEnabled(lua_State *L) {
		if (!_lg_typecheck_GetEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetEnabled() const function, expected prototype:\nbool wxUpdateUIEvent::GetEnabled() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetEnabled() const");
		}
		bool lret = self->GetEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetChecked() const
	static int _bind_GetSetChecked(lua_State *L) {
		if (!_lg_typecheck_GetSetChecked(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetChecked() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetChecked() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetChecked() const");
		}
		bool lret = self->GetSetChecked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetEnabled() const
	static int _bind_GetSetEnabled(lua_State *L) {
		if (!_lg_typecheck_GetSetEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetEnabled() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetEnabled() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetEnabled() const");
		}
		bool lret = self->GetSetEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetShown() const
	static int _bind_GetSetShown(lua_State *L) {
		if (!_lg_typecheck_GetSetShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetShown() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetShown() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetShown() const");
		}
		bool lret = self->GetSetShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetSetText() const
	static int _bind_GetSetText(lua_State *L) {
		if (!_lg_typecheck_GetSetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetSetText() const function, expected prototype:\nbool wxUpdateUIEvent::GetSetText() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetSetText() const");
		}
		bool lret = self->GetSetText();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUpdateUIEvent::GetShown() const
	static int _bind_GetShown(lua_State *L) {
		if (!_lg_typecheck_GetShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxUpdateUIEvent::GetShown() const function, expected prototype:\nbool wxUpdateUIEvent::GetShown() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxUpdateUIEvent::GetShown() const");
		}
		bool lret = self->GetShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxUpdateUIEvent::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxUpdateUIEvent::GetText() const function, expected prototype:\nwxString wxUpdateUIEvent::GetText() const\nClass arguments details:\n");
		}


		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxUpdateUIEvent::GetText() const");
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxUpdateUIEvent::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::SetText(const wxString & text) function, expected prototype:\nvoid wxUpdateUIEvent::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::SetText(const wxString &)");
		}
		self->SetText(text);

		return 0;
	}

	// void wxUpdateUIEvent::Show(bool show)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxUpdateUIEvent::Show(bool show) function, expected prototype:\nvoid wxUpdateUIEvent::Show(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxUpdateUIEvent* self=dynamic_cast< wxUpdateUIEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxUpdateUIEvent::Show(bool)");
		}
		self->Show(show);

		return 0;
	}

	// static bool wxUpdateUIEvent::CanUpdate(wxWindow * window)
	static int _bind_CanUpdate(lua_State *L) {
		if (!_lg_typecheck_CanUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool wxUpdateUIEvent::CanUpdate(wxWindow * window) function, expected prototype:\nstatic bool wxUpdateUIEvent::CanUpdate(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* window=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));

		bool lret = wxUpdateUIEvent::CanUpdate(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxUpdateUIMode wxUpdateUIEvent::GetMode()
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxUpdateUIMode wxUpdateUIEvent::GetMode() function, expected prototype:\nstatic wxUpdateUIMode wxUpdateUIEvent::GetMode()\nClass arguments details:\n");
		}


		wxUpdateUIMode lret = wxUpdateUIEvent::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static long wxUpdateUIEvent::GetUpdateInterval()
	static int _bind_GetUpdateInterval(lua_State *L) {
		if (!_lg_typecheck_GetUpdateInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static long wxUpdateUIEvent::GetUpdateInterval() function, expected prototype:\nstatic long wxUpdateUIEvent::GetUpdateInterval()\nClass arguments details:\n");
		}


		long lret = wxUpdateUIEvent::GetUpdateInterval();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxUpdateUIEvent::ResetUpdateTime()
	static int _bind_ResetUpdateTime(lua_State *L) {
		if (!_lg_typecheck_ResetUpdateTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxUpdateUIEvent::ResetUpdateTime() function, expected prototype:\nstatic void wxUpdateUIEvent::ResetUpdateTime()\nClass arguments details:\n");
		}


		wxUpdateUIEvent::ResetUpdateTime();

		return 0;
	}

	// static void wxUpdateUIEvent::SetMode(wxUpdateUIMode mode)
	static int _bind_SetMode(lua_State *L) {
		if (!_lg_typecheck_SetMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxUpdateUIEvent::SetMode(wxUpdateUIMode mode) function, expected prototype:\nstatic void wxUpdateUIEvent::SetMode(wxUpdateUIMode mode)\nClass arguments details:\n");
		}

		wxUpdateUIMode mode=(wxUpdateUIMode)lua_tointeger(L,1);

		wxUpdateUIEvent::SetMode(mode);

		return 0;
	}

	// static void wxUpdateUIEvent::SetUpdateInterval(long updateInterval)
	static int _bind_SetUpdateInterval(lua_State *L) {
		if (!_lg_typecheck_SetUpdateInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void wxUpdateUIEvent::SetUpdateInterval(long updateInterval) function, expected prototype:\nstatic void wxUpdateUIEvent::SetUpdateInterval(long updateInterval)\nClass arguments details:\n");
		}

		long updateInterval=(long)lua_tointeger(L,1);

		wxUpdateUIEvent::SetUpdateInterval(updateInterval);

		return 0;
	}


	// Operator binds:

};

wxUpdateUIEvent* LunaTraits< wxUpdateUIEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxUpdateUIEvent >::_bind_dtor(wxUpdateUIEvent* obj) {
	delete obj;
}

const char LunaTraits< wxUpdateUIEvent >::className[] = "wxUpdateUIEvent";
const char LunaTraits< wxUpdateUIEvent >::fullName[] = "wxUpdateUIEvent";
const char LunaTraits< wxUpdateUIEvent >::moduleName[] = "wx";
const char* LunaTraits< wxUpdateUIEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxUpdateUIEvent >::hash = 87414300;
const int LunaTraits< wxUpdateUIEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxUpdateUIEvent >::methods[] = {
	{"Check", &luna_wrapper_wxUpdateUIEvent::_bind_Check},
	{"Enable", &luna_wrapper_wxUpdateUIEvent::_bind_Enable},
	{"GetChecked", &luna_wrapper_wxUpdateUIEvent::_bind_GetChecked},
	{"GetEnabled", &luna_wrapper_wxUpdateUIEvent::_bind_GetEnabled},
	{"GetSetChecked", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetChecked},
	{"GetSetEnabled", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetEnabled},
	{"GetSetShown", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetShown},
	{"GetSetText", &luna_wrapper_wxUpdateUIEvent::_bind_GetSetText},
	{"GetShown", &luna_wrapper_wxUpdateUIEvent::_bind_GetShown},
	{"GetText", &luna_wrapper_wxUpdateUIEvent::_bind_GetText},
	{"SetText", &luna_wrapper_wxUpdateUIEvent::_bind_SetText},
	{"Show", &luna_wrapper_wxUpdateUIEvent::_bind_Show},
	{"CanUpdate", &luna_wrapper_wxUpdateUIEvent::_bind_CanUpdate},
	{"GetMode", &luna_wrapper_wxUpdateUIEvent::_bind_GetMode},
	{"GetUpdateInterval", &luna_wrapper_wxUpdateUIEvent::_bind_GetUpdateInterval},
	{"ResetUpdateTime", &luna_wrapper_wxUpdateUIEvent::_bind_ResetUpdateTime},
	{"SetMode", &luna_wrapper_wxUpdateUIEvent::_bind_SetMode},
	{"SetUpdateInterval", &luna_wrapper_wxUpdateUIEvent::_bind_SetUpdateInterval},
	{"__eq", &luna_wrapper_wxUpdateUIEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxUpdateUIEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxUpdateUIEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxUpdateUIEvent >::enumValues[] = {
	{0,0}
};


