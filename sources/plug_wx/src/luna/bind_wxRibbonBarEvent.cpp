#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonBarEvent.h>

class luna_wrapper_wxRibbonBarEvent {
public:
	typedef Luna< wxRibbonBarEvent > luna_t;

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
		//wxRibbonBarEvent* ptr= dynamic_cast< wxRibbonBarEvent* >(Luna< wxObject >::check(L,1));
		wxRibbonBarEvent* ptr= luna_caster< wxObject, wxRibbonBarEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonBarEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPage(lua_State *L) {
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
	// wxRibbonBarEvent::wxRibbonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL)
	static wxRibbonBarEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonBarEvent::wxRibbonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL) function, expected prototype:\nwxRibbonBarEvent::wxRibbonBarEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL)\nClass arguments details:\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		wxRibbonPage* page=luatop>3 ? (Luna< wxObject >::checkSubType< wxRibbonPage >(L,4)) : (wxRibbonPage*)NULL;

		return new wrapper_wxRibbonBarEvent(L,NULL, command_type, win_id, page);
	}


	// Function binds:
	// wxRibbonPage * wxRibbonBarEvent::GetPage()
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRibbonPage * wxRibbonBarEvent::GetPage() function, expected prototype:\nwxRibbonPage * wxRibbonBarEvent::GetPage()\nClass arguments details:\n");
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRibbonPage * wxRibbonBarEvent::GetPage()");
		}
		wxRibbonPage * lret = self->GetPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonPage >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonBarEvent::SetPage(wxRibbonPage * page)
	static int _bind_SetPage(lua_State *L) {
		if (!_lg_typecheck_SetPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRibbonBarEvent::SetPage(wxRibbonPage * page) function, expected prototype:\nvoid wxRibbonBarEvent::SetPage(wxRibbonPage * page)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxRibbonPage* page=(Luna< wxObject >::checkSubType< wxRibbonPage >(L,2));

		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRibbonBarEvent::SetPage(wxRibbonPage *)");
		}
		self->SetPage(page);

		return 0;
	}

	// wxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonBarEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxRibbonBarEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxRibbonBarEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxRibbonBarEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxRibbonBarEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxRibbonBarEvent* self=Luna< wxObject >::checkSubType< wxRibbonBarEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonBarEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxRibbonBarEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRibbonBarEvent* LunaTraits< wxRibbonBarEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonBarEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxRibbonBarEvent >::_bind_dtor(wxRibbonBarEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonBarEvent >::className[] = "wxRibbonBarEvent";
const char LunaTraits< wxRibbonBarEvent >::fullName[] = "wxRibbonBarEvent";
const char LunaTraits< wxRibbonBarEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonBarEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxRibbonBarEvent >::hash = 20571283;
const int LunaTraits< wxRibbonBarEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonBarEvent >::methods[] = {
	{"GetPage", &luna_wrapper_wxRibbonBarEvent::_bind_GetPage},
	{"SetPage", &luna_wrapper_wxRibbonBarEvent::_bind_SetPage},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonBarEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxRibbonBarEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxRibbonBarEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxRibbonBarEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonBarEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonBarEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonBarEvent >::enumValues[] = {
	{0,0}
};


