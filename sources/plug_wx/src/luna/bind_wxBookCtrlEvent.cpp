#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBookCtrlEvent.h>

class luna_wrapper_wxBookCtrlEvent {
public:
	typedef Luna< wxBookCtrlEvent > luna_t;

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
		//wxBookCtrlEvent* ptr= dynamic_cast< wxBookCtrlEvent* >(Luna< wxObject >::check(L,1));
		wxBookCtrlEvent* ptr= luna_caster< wxObject, wxBookCtrlEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBookCtrlEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetOldSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOldSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
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

	// Function binds:
	// int wxBookCtrlEvent::GetOldSelection() const
	static int _bind_GetOldSelection(lua_State *L) {
		if (!_lg_typecheck_GetOldSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlEvent::GetOldSelection() const function, expected prototype:\nint wxBookCtrlEvent::GetOldSelection() const\nClass arguments details:\n");
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlEvent::GetOldSelection() const");
		}
		int lret = self->GetOldSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxBookCtrlEvent::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxBookCtrlEvent::GetSelection() const function, expected prototype:\nint wxBookCtrlEvent::GetSelection() const\nClass arguments details:\n");
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxBookCtrlEvent::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxBookCtrlEvent::SetOldSelection(int page)
	static int _bind_SetOldSelection(lua_State *L) {
		if (!_lg_typecheck_SetOldSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBookCtrlEvent::SetOldSelection(int page) function, expected prototype:\nvoid wxBookCtrlEvent::SetOldSelection(int page)\nClass arguments details:\n");
		}

		int page=(int)lua_tointeger(L,2);

		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBookCtrlEvent::SetOldSelection(int)");
		}
		self->SetOldSelection(page);

		return 0;
	}

	// void wxBookCtrlEvent::SetSelection(int page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxBookCtrlEvent::SetSelection(int page) function, expected prototype:\nvoid wxBookCtrlEvent::SetSelection(int page)\nClass arguments details:\n");
		}

		int page=(int)lua_tointeger(L,2);

		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxBookCtrlEvent::SetSelection(int)");
		}
		self->SetSelection(page);

		return 0;
	}

	// wxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBookCtrlEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxBookCtrlEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxBookCtrlEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxBookCtrlEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxBookCtrlEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxBookCtrlEvent* self=Luna< wxObject >::checkSubType< wxBookCtrlEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxBookCtrlEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxBookCtrlEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxBookCtrlEvent* LunaTraits< wxBookCtrlEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxBookCtrlEvent >::_bind_dtor(wxBookCtrlEvent* obj) {
	delete obj;
}

const char LunaTraits< wxBookCtrlEvent >::className[] = "wxBookCtrlEvent";
const char LunaTraits< wxBookCtrlEvent >::fullName[] = "wxBookCtrlEvent";
const char LunaTraits< wxBookCtrlEvent >::moduleName[] = "wx";
const char* LunaTraits< wxBookCtrlEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxBookCtrlEvent >::hash = 55450285;
const int LunaTraits< wxBookCtrlEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBookCtrlEvent >::methods[] = {
	{"GetOldSelection", &luna_wrapper_wxBookCtrlEvent::_bind_GetOldSelection},
	{"GetSelection", &luna_wrapper_wxBookCtrlEvent::_bind_GetSelection},
	{"SetOldSelection", &luna_wrapper_wxBookCtrlEvent::_bind_SetOldSelection},
	{"SetSelection", &luna_wrapper_wxBookCtrlEvent::_bind_SetSelection},
	{"base_GetClassInfo", &luna_wrapper_wxBookCtrlEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxBookCtrlEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxBookCtrlEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxBookCtrlEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxBookCtrlEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBookCtrlEvent >::enumValues[] = {
	{0,0}
};


