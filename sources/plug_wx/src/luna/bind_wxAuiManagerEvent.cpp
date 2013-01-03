#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiManagerEvent.h>

class luna_wrapper_wxAuiManagerEvent {
public:
	typedef Luna< wxAuiManagerEvent > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//wxAuiManagerEvent* ptr= dynamic_cast< wxAuiManagerEvent* >(Luna< wxObject >::check(L,1));
		wxAuiManagerEvent* ptr= luna_caster< wxObject, wxAuiManagerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiManagerEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiManagerEvent::wxAuiManagerEvent(lua_Table * data, int type = wxEVT_NULL)
	static wxAuiManagerEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxAuiManagerEvent::wxAuiManagerEvent(lua_Table * data, int type = wxEVT_NULL) function, expected prototype:\nwxAuiManagerEvent::wxAuiManagerEvent(lua_Table * data, int type = wxEVT_NULL)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;

		return new wrapper_wxAuiManagerEvent(L,NULL, type);
	}


	// Function binds:
	// bool wxAuiManagerEvent::CanVeto()
	static int _bind_CanVeto(lua_State *L) {
		if (!_lg_typecheck_CanVeto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxAuiManagerEvent::CanVeto() function, expected prototype:\nbool wxAuiManagerEvent::CanVeto()\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManagerEvent::CanVeto(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxAuiManagerEvent::GetButton(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDC * wxAuiManagerEvent::GetDC(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxAuiManagerEvent::GetVeto(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiManager * wxAuiManagerEvent::GetManager(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo * wxAuiManagerEvent::GetPane(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetButton(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetCanVeto(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		wxDC* pdc=(Luna< wxObject >::checkSubType< wxDC >(L,2));

		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetDC(wxDC *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		wxAuiManager* manager=(Luna< wxObject >::checkSubType< wxAuiManager >(L,2));

		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetManager(wxAuiManager *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::SetPane(wxAuiPaneInfo *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
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

		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxAuiManagerEvent::Veto(bool). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->Veto(veto);

		return 0;
	}

	// wxClassInfo * wxAuiManagerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAuiManagerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAuiManagerEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAuiManagerEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxAuiManagerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxAuiManagerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxAuiManagerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxAuiManagerEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxAuiManagerEvent* self=Luna< wxObject >::checkSubType< wxAuiManagerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxAuiManagerEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxAuiManagerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiManagerEvent* LunaTraits< wxAuiManagerEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiManagerEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
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
	{"base_GetClassInfo", &luna_wrapper_wxAuiManagerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxAuiManagerEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxAuiManagerEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxAuiManagerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiManagerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiManagerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiManagerEvent >::enumValues[] = {
	{0,0}
};


