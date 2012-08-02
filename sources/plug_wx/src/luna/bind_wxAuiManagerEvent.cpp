#include <plug_common.h>

class luna_wrapper_wxAuiManagerEvent {
public:
	typedef Luna< wxAuiManagerEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxAuiManagerEvent* ptr= dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiManagerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_CanVeto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVeto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetButton(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCanVeto(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,42930508)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxAuiManagerEvent::CanVeto()
	static int _bind_CanVeto(lua_State *L) {
		if (!_lg_typecheck_CanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManagerEvent::CanVeto() function, expected prototype:\nbool wxAuiManagerEvent::CanVeto()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManagerEvent::CanVeto()");
		}
		bool lret = self->CanVeto();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAuiManagerEvent::GetButton()
	static int _bind_GetButton(lua_State *L) {
		if (!_lg_typecheck_GetButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxAuiManagerEvent::GetButton() function, expected prototype:\nint wxAuiManagerEvent::GetButton()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiManagerEvent::GetButton()");
		}
		int lret = self->GetButton();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDC * wxAuiManagerEvent::GetDC()
	static int _bind_GetDC(lua_State *L) {
		if (!_lg_typecheck_GetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDC * wxAuiManagerEvent::GetDC() function, expected prototype:\nwxDC * wxAuiManagerEvent::GetDC()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDC * wxAuiManagerEvent::GetDC()");
		}
		wxDC * lret = self->GetDC();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDC >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiManagerEvent::GetVeto()
	static int _bind_GetVeto(lua_State *L) {
		if (!_lg_typecheck_GetVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManagerEvent::GetVeto() function, expected prototype:\nbool wxAuiManagerEvent::GetVeto()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManagerEvent::GetVeto()");
		}
		bool lret = self->GetVeto();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiManager * wxAuiManagerEvent::GetManager()
	static int _bind_GetManager(lua_State *L) {
		if (!_lg_typecheck_GetManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiManager * wxAuiManagerEvent::GetManager() function, expected prototype:\nwxAuiManager * wxAuiManagerEvent::GetManager()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiManager * wxAuiManagerEvent::GetManager()");
		}
		wxAuiManager * lret = self->GetManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiManager >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo * wxAuiManagerEvent::GetPane()
	static int _bind_GetPane(lua_State *L) {
		if (!_lg_typecheck_GetPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo * wxAuiManagerEvent::GetPane() function, expected prototype:\nwxAuiPaneInfo * wxAuiManagerEvent::GetPane()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo * wxAuiManagerEvent::GetPane()");
		}
		wxAuiPaneInfo * lret = self->GetPane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// void wxAuiManagerEvent::SetButton(int button)
	static int _bind_SetButton(lua_State *L) {
		if (!_lg_typecheck_SetButton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManagerEvent::SetButton(int button) function, expected prototype:\nvoid wxAuiManagerEvent::SetButton(int button)\nClass arguments details:\n");
		}

		int button=(int)lua_tointeger(L,2);

		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetButton(int)");
		}
		self->SetButton(button);

		return 0;
	}

	// void wxAuiManagerEvent::SetCanVeto(bool can_veto)
	static int _bind_SetCanVeto(lua_State *L) {
		if (!_lg_typecheck_SetCanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManagerEvent::SetCanVeto(bool can_veto) function, expected prototype:\nvoid wxAuiManagerEvent::SetCanVeto(bool can_veto)\nClass arguments details:\n");
		}

		bool can_veto=(bool)(lua_toboolean(L,2)==1);

		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetCanVeto(bool)");
		}
		self->SetCanVeto(can_veto);

		return 0;
	}

	// void wxAuiManagerEvent::SetDC(wxDC * pdc)
	static int _bind_SetDC(lua_State *L) {
		if (!_lg_typecheck_SetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManagerEvent::SetDC(wxDC * pdc) function, expected prototype:\nvoid wxAuiManagerEvent::SetDC(wxDC * pdc)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxDC* pdc=dynamic_cast< wxDC* >(Luna< wxObject >::check(L,2));

		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetDC(wxDC *)");
		}
		self->SetDC(pdc);

		return 0;
	}

	// void wxAuiManagerEvent::SetManager(wxAuiManager * manager)
	static int _bind_SetManager(lua_State *L) {
		if (!_lg_typecheck_SetManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManagerEvent::SetManager(wxAuiManager * manager) function, expected prototype:\nvoid wxAuiManagerEvent::SetManager(wxAuiManager * manager)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxAuiManager* manager=dynamic_cast< wxAuiManager* >(Luna< wxObject >::check(L,2));

		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetManager(wxAuiManager *)");
		}
		self->SetManager(manager);

		return 0;
	}

	// void wxAuiManagerEvent::SetPane(wxAuiPaneInfo * pane)
	static int _bind_SetPane(lua_State *L) {
		if (!_lg_typecheck_SetPane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManagerEvent::SetPane(wxAuiPaneInfo * pane) function, expected prototype:\nvoid wxAuiManagerEvent::SetPane(wxAuiPaneInfo * pane)\nClass arguments details:\narg 1 ID = 42930508\n");
		}

		wxAuiPaneInfo* pane=(Luna< wxAuiPaneInfo >::check(L,2));

		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetPane(wxAuiPaneInfo *)");
		}
		self->SetPane(pane);

		return 0;
	}

	// void wxAuiManagerEvent::Veto(bool veto = true)
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxAuiManagerEvent::Veto(bool veto = true) function, expected prototype:\nvoid wxAuiManagerEvent::Veto(bool veto = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool veto=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		wxAuiManagerEvent* self=dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::Veto(bool)");
		}
		self->Veto(veto);

		return 0;
	}


	// Operator binds:

};

wxAuiManagerEvent* LunaTraits< wxAuiManagerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxAuiManagerEvent >::_bind_dtor(wxAuiManagerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxAuiManagerEvent >::className[] = "wxAuiManagerEvent";
const char LunaTraits< wxAuiManagerEvent >::fullName[] = "wxAuiManagerEvent";
const char LunaTraits< wxAuiManagerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxAuiManagerEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxAuiManagerEvent >::hash = 15536448;
const int LunaTraits< wxAuiManagerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAuiManagerEvent >::methods[] = {
	{"CanVeto", &luna_wrapper_wxAuiManagerEvent::_bind_CanVeto},
	{"GetButton", &luna_wrapper_wxAuiManagerEvent::_bind_GetButton},
	{"GetDC", &luna_wrapper_wxAuiManagerEvent::_bind_GetDC},
	{"GetVeto", &luna_wrapper_wxAuiManagerEvent::_bind_GetVeto},
	{"GetManager", &luna_wrapper_wxAuiManagerEvent::_bind_GetManager},
	{"GetPane", &luna_wrapper_wxAuiManagerEvent::_bind_GetPane},
	{"SetButton", &luna_wrapper_wxAuiManagerEvent::_bind_SetButton},
	{"SetCanVeto", &luna_wrapper_wxAuiManagerEvent::_bind_SetCanVeto},
	{"SetDC", &luna_wrapper_wxAuiManagerEvent::_bind_SetDC},
	{"SetManager", &luna_wrapper_wxAuiManagerEvent::_bind_SetManager},
	{"SetPane", &luna_wrapper_wxAuiManagerEvent::_bind_SetPane},
	{"Veto", &luna_wrapper_wxAuiManagerEvent::_bind_Veto},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiManagerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiManagerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiManagerEvent >::enumValues[] = {
	{0,0}
};


