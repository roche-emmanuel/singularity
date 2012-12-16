#include <plug_common.h>

#include <luna/wrappers/wrapper_wxNavigationKeyEvent.h>

class luna_wrapper_wxNavigationKeyEvent {
public:
	typedef Luna< wxNavigationKeyEvent > luna_t;

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
		//wxNavigationKeyEvent* ptr= dynamic_cast< wxNavigationKeyEvent* >(Luna< wxObject >::check(L,1));
		wxNavigationKeyEvent* ptr= luna_caster< wxObject, wxNavigationKeyEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxNavigationKeyEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCurrentFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFromTab(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsWindowChange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCurrentFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFromTab(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowChange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// wxWindow * wxNavigationKeyEvent::GetCurrentFocus() const
	static int _bind_GetCurrentFocus(lua_State *L) {
		if (!_lg_typecheck_GetCurrentFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxNavigationKeyEvent::GetCurrentFocus() const function, expected prototype:\nwxWindow * wxNavigationKeyEvent::GetCurrentFocus() const\nClass arguments details:\n");
		}


		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxNavigationKeyEvent::GetCurrentFocus() const");
		}
		wxWindow * lret = self->GetCurrentFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxNavigationKeyEvent::GetDirection() const
	static int _bind_GetDirection(lua_State *L) {
		if (!_lg_typecheck_GetDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNavigationKeyEvent::GetDirection() const function, expected prototype:\nbool wxNavigationKeyEvent::GetDirection() const\nClass arguments details:\n");
		}


		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNavigationKeyEvent::GetDirection() const");
		}
		bool lret = self->GetDirection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxNavigationKeyEvent::IsFromTab() const
	static int _bind_IsFromTab(lua_State *L) {
		if (!_lg_typecheck_IsFromTab(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNavigationKeyEvent::IsFromTab() const function, expected prototype:\nbool wxNavigationKeyEvent::IsFromTab() const\nClass arguments details:\n");
		}


		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNavigationKeyEvent::IsFromTab() const");
		}
		bool lret = self->IsFromTab();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxNavigationKeyEvent::IsWindowChange() const
	static int _bind_IsWindowChange(lua_State *L) {
		if (!_lg_typecheck_IsWindowChange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxNavigationKeyEvent::IsWindowChange() const function, expected prototype:\nbool wxNavigationKeyEvent::IsWindowChange() const\nClass arguments details:\n");
		}


		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxNavigationKeyEvent::IsWindowChange() const");
		}
		bool lret = self->IsWindowChange();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxNavigationKeyEvent::SetCurrentFocus(wxWindow * currentFocus)
	static int _bind_SetCurrentFocus(lua_State *L) {
		if (!_lg_typecheck_SetCurrentFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNavigationKeyEvent::SetCurrentFocus(wxWindow * currentFocus) function, expected prototype:\nvoid wxNavigationKeyEvent::SetCurrentFocus(wxWindow * currentFocus)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* currentFocus=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNavigationKeyEvent::SetCurrentFocus(wxWindow *)");
		}
		self->SetCurrentFocus(currentFocus);

		return 0;
	}

	// void wxNavigationKeyEvent::SetDirection(bool direction)
	static int _bind_SetDirection(lua_State *L) {
		if (!_lg_typecheck_SetDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNavigationKeyEvent::SetDirection(bool direction) function, expected prototype:\nvoid wxNavigationKeyEvent::SetDirection(bool direction)\nClass arguments details:\n");
		}

		bool direction=(bool)(lua_toboolean(L,2)==1);

		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNavigationKeyEvent::SetDirection(bool)");
		}
		self->SetDirection(direction);

		return 0;
	}

	// void wxNavigationKeyEvent::SetFlags(long flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNavigationKeyEvent::SetFlags(long flags) function, expected prototype:\nvoid wxNavigationKeyEvent::SetFlags(long flags)\nClass arguments details:\n");
		}

		long flags=(long)lua_tointeger(L,2);

		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNavigationKeyEvent::SetFlags(long)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxNavigationKeyEvent::SetFromTab(bool fromTab)
	static int _bind_SetFromTab(lua_State *L) {
		if (!_lg_typecheck_SetFromTab(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNavigationKeyEvent::SetFromTab(bool fromTab) function, expected prototype:\nvoid wxNavigationKeyEvent::SetFromTab(bool fromTab)\nClass arguments details:\n");
		}

		bool fromTab=(bool)(lua_toboolean(L,2)==1);

		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNavigationKeyEvent::SetFromTab(bool)");
		}
		self->SetFromTab(fromTab);

		return 0;
	}

	// void wxNavigationKeyEvent::SetWindowChange(bool windowChange)
	static int _bind_SetWindowChange(lua_State *L) {
		if (!_lg_typecheck_SetWindowChange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxNavigationKeyEvent::SetWindowChange(bool windowChange) function, expected prototype:\nvoid wxNavigationKeyEvent::SetWindowChange(bool windowChange)\nClass arguments details:\n");
		}

		bool windowChange=(bool)(lua_toboolean(L,2)==1);

		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxNavigationKeyEvent::SetWindowChange(bool)");
		}
		self->SetWindowChange(windowChange);

		return 0;
	}

	// wxClassInfo * wxNavigationKeyEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxNavigationKeyEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxNavigationKeyEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxNavigationKeyEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxNavigationKeyEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxNavigationKeyEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxNavigationKeyEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxNavigationKeyEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxNavigationKeyEvent* self=Luna< wxObject >::checkSubType< wxNavigationKeyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxNavigationKeyEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxNavigationKeyEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxNavigationKeyEvent* LunaTraits< wxNavigationKeyEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxNavigationKeyEvent >::_bind_dtor(wxNavigationKeyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxNavigationKeyEvent >::className[] = "wxNavigationKeyEvent";
const char LunaTraits< wxNavigationKeyEvent >::fullName[] = "wxNavigationKeyEvent";
const char LunaTraits< wxNavigationKeyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxNavigationKeyEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxNavigationKeyEvent >::hash = 15948419;
const int LunaTraits< wxNavigationKeyEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxNavigationKeyEvent >::methods[] = {
	{"GetCurrentFocus", &luna_wrapper_wxNavigationKeyEvent::_bind_GetCurrentFocus},
	{"GetDirection", &luna_wrapper_wxNavigationKeyEvent::_bind_GetDirection},
	{"IsFromTab", &luna_wrapper_wxNavigationKeyEvent::_bind_IsFromTab},
	{"IsWindowChange", &luna_wrapper_wxNavigationKeyEvent::_bind_IsWindowChange},
	{"SetCurrentFocus", &luna_wrapper_wxNavigationKeyEvent::_bind_SetCurrentFocus},
	{"SetDirection", &luna_wrapper_wxNavigationKeyEvent::_bind_SetDirection},
	{"SetFlags", &luna_wrapper_wxNavigationKeyEvent::_bind_SetFlags},
	{"SetFromTab", &luna_wrapper_wxNavigationKeyEvent::_bind_SetFromTab},
	{"SetWindowChange", &luna_wrapper_wxNavigationKeyEvent::_bind_SetWindowChange},
	{"base_GetClassInfo", &luna_wrapper_wxNavigationKeyEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxNavigationKeyEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxNavigationKeyEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxNavigationKeyEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxNavigationKeyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxNavigationKeyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxNavigationKeyEvent >::enumValues[] = {
	{"IsBackward", wxNavigationKeyEvent::IsBackward},
	{"IsForward", wxNavigationKeyEvent::IsForward},
	{"WinChange", wxNavigationKeyEvent::WinChange},
	{"FromTab", wxNavigationKeyEvent::FromTab},
	{0,0}
};


