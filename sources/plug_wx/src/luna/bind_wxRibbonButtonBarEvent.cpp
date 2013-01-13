#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonButtonBarEvent.h>

class luna_wrapper_wxRibbonButtonBarEvent {
public:
	typedef Luna< wxRibbonButtonBarEvent > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//wxRibbonButtonBarEvent* ptr= dynamic_cast< wxRibbonButtonBarEvent* >(Luna< wxObject >::check(L,1));
		wxRibbonButtonBarEvent* ptr= luna_caster< wxObject, wxRibbonButtonBarEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonButtonBarEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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
	// wxRibbonButtonBarEvent::wxRibbonButtonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL)
	static wxRibbonButtonBarEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBarEvent::wxRibbonButtonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL) function, expected prototype:\nwxRibbonButtonBarEvent::wxRibbonButtonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL)\nClass arguments details:\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		wxRibbonButtonBar* bar=luatop>3 ? (Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,4)) : (wxRibbonButtonBar*)NULL;

		return new wrapper_wxRibbonButtonBarEvent(L,NULL, command_type, win_id, bar);
	}


	// Function binds:
	// wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()
	static int _bind_GetBar(lua_State *L) {
		if (!_lg_typecheck_GetBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar() function, expected prototype:\nwxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar()\nClass arguments details:\n");
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonButtonBar * wxRibbonButtonBarEvent::GetBar(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxRibbonButtonBar * lret = self->GetBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonButtonBar >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar)
	static int _bind_SetBar(lua_State *L) {
		if (!_lg_typecheck_SetBar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar) function, expected prototype:\nvoid wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar * bar)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxRibbonButtonBar* bar=(Luna< wxObject >::checkSubType< wxRibbonButtonBar >(L,2));

		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonButtonBarEvent::SetBar(wxRibbonButtonBar *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetBar(bar);

		return 0;
	}

	// bool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu)
	static int _bind_PopupMenu(lua_State *L) {
		if (!_lg_typecheck_PopupMenu(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu) function, expected prototype:\nbool wxRibbonButtonBarEvent::PopupMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRibbonButtonBarEvent::PopupMenu(wxMenu *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->PopupMenu(menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonButtonBarEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxRibbonButtonBarEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxRibbonButtonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonButtonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonButtonBarEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxRibbonButtonBarEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRibbonButtonBarEvent* LunaTraits< wxRibbonButtonBarEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonButtonBarEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxRibbonButtonBarEvent >::_bind_dtor(wxRibbonButtonBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonButtonBarEvent >::className[] = "wxRibbonButtonBarEvent";
const char LunaTraits< wxRibbonButtonBarEvent >::fullName[] = "wxRibbonButtonBarEvent";
const char LunaTraits< wxRibbonButtonBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonButtonBarEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxRibbonButtonBarEvent >::hash = 28960676;
const int LunaTraits< wxRibbonButtonBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonButtonBarEvent >::methods[] = {
	{"GetBar", &luna_wrapper_wxRibbonButtonBarEvent::_bind_GetBar},
	{"SetBar", &luna_wrapper_wxRibbonButtonBarEvent::_bind_SetBar},
	{"PopupMenu", &luna_wrapper_wxRibbonButtonBarEvent::_bind_PopupMenu},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonButtonBarEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxRibbonButtonBarEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxRibbonButtonBarEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxRibbonButtonBarEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonButtonBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonButtonBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonButtonBarEvent >::enumValues[] = {
	{0,0}
};


