#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSplitterEvent.h>

class luna_wrapper_wxSplitterEvent {
public:
	typedef Luna< wxSplitterEvent > luna_t;

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
		//wxSplitterEvent* ptr= dynamic_cast< wxSplitterEvent* >(Luna< wxObject >::check(L,1));
		wxSplitterEvent* ptr= luna_caster< wxObject, wxSplitterEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSplitterEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSashPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowBeingRemoved(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSashPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// wxSplitterEvent::wxSplitterEvent(lua_Table * data, int eventType = wxEVT_NULL, wxSplitterWindow * splitter = NULL)
	static wxSplitterEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSplitterEvent::wxSplitterEvent(lua_Table * data, int eventType = wxEVT_NULL, wxSplitterWindow * splitter = NULL) function, expected prototype:\nwxSplitterEvent::wxSplitterEvent(lua_Table * data, int eventType = wxEVT_NULL, wxSplitterWindow * splitter = NULL)\nClass arguments details:\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int eventType=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		wxSplitterWindow* splitter=luatop>2 ? (Luna< wxObject >::checkSubType< wxSplitterWindow >(L,3)) : (wxSplitterWindow*)NULL;

		return new wrapper_wxSplitterEvent(L,NULL, eventType, splitter);
	}


	// Function binds:
	// int wxSplitterEvent::GetSashPosition() const
	static int _bind_GetSashPosition(lua_State *L) {
		if (!_lg_typecheck_GetSashPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSplitterEvent::GetSashPosition() const function, expected prototype:\nint wxSplitterEvent::GetSashPosition() const\nClass arguments details:\n");
		}


		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSplitterEvent::GetSashPosition() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetSashPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxSplitterEvent::GetWindowBeingRemoved() const
	static int _bind_GetWindowBeingRemoved(lua_State *L) {
		if (!_lg_typecheck_GetWindowBeingRemoved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxSplitterEvent::GetWindowBeingRemoved() const function, expected prototype:\nwxWindow * wxSplitterEvent::GetWindowBeingRemoved() const\nClass arguments details:\n");
		}


		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxSplitterEvent::GetWindowBeingRemoved() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxWindow * lret = self->GetWindowBeingRemoved();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// int wxSplitterEvent::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSplitterEvent::GetX() const function, expected prototype:\nint wxSplitterEvent::GetX() const\nClass arguments details:\n");
		}


		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSplitterEvent::GetX() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSplitterEvent::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxSplitterEvent::GetY() const function, expected prototype:\nint wxSplitterEvent::GetY() const\nClass arguments details:\n");
		}


		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxSplitterEvent::GetY() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSplitterEvent::SetSashPosition(int pos)
	static int _bind_SetSashPosition(lua_State *L) {
		if (!_lg_typecheck_SetSashPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSplitterEvent::SetSashPosition(int pos) function, expected prototype:\nvoid wxSplitterEvent::SetSashPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSplitterEvent::SetSashPosition(int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetSashPosition(pos);

		return 0;
	}

	// wxClassInfo * wxSplitterEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSplitterEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSplitterEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSplitterEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxSplitterEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSplitterEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSplitterEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSplitterEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxSplitterEvent* self=Luna< wxObject >::checkSubType< wxSplitterEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxSplitterEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxSplitterEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSplitterEvent* LunaTraits< wxSplitterEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSplitterEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSplitterEvent >::_bind_dtor(wxSplitterEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSplitterEvent >::className[] = "wxSplitterEvent";
const char LunaTraits< wxSplitterEvent >::fullName[] = "wxSplitterEvent";
const char LunaTraits< wxSplitterEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSplitterEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxSplitterEvent >::hash = 98312044;
const int LunaTraits< wxSplitterEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSplitterEvent >::methods[] = {
	{"GetSashPosition", &luna_wrapper_wxSplitterEvent::_bind_GetSashPosition},
	{"GetWindowBeingRemoved", &luna_wrapper_wxSplitterEvent::_bind_GetWindowBeingRemoved},
	{"GetX", &luna_wrapper_wxSplitterEvent::_bind_GetX},
	{"GetY", &luna_wrapper_wxSplitterEvent::_bind_GetY},
	{"SetSashPosition", &luna_wrapper_wxSplitterEvent::_bind_SetSashPosition},
	{"base_GetClassInfo", &luna_wrapper_wxSplitterEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSplitterEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxSplitterEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxSplitterEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSplitterEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSplitterEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSplitterEvent >::enumValues[] = {
	{0,0}
};


