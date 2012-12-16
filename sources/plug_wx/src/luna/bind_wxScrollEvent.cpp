#include <plug_common.h>

#include <luna/wrappers/wrapper_wxScrollEvent.h>

class luna_wrapper_wxScrollEvent {
public:
	typedef Luna< wxScrollEvent > luna_t;

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
		//wxScrollEvent* ptr= dynamic_cast< wxScrollEvent* >(Luna< wxObject >::check(L,1));
		wxScrollEvent* ptr= luna_caster< wxObject, wxScrollEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxScrollEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
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
	// int wxScrollEvent::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollEvent::GetOrientation() const function, expected prototype:\nint wxScrollEvent::GetOrientation() const\nClass arguments details:\n");
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollEvent::GetOrientation() const");
		}
		int lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollEvent::GetPosition() const function, expected prototype:\nint wxScrollEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollEvent::GetPosition() const");
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxScrollEvent::SetOrientation(int orient)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollEvent::SetOrientation(int orient) function, expected prototype:\nvoid wxScrollEvent::SetOrientation(int orient)\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollEvent::SetOrientation(int)");
		}
		self->SetOrientation(orient);

		return 0;
	}

	// void wxScrollEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollEvent::SetPosition(int pos) function, expected prototype:\nvoid wxScrollEvent::SetPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollEvent::SetPosition(int)");
		}
		self->SetPosition(pos);

		return 0;
	}

	// wxClassInfo * wxScrollEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxScrollEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxScrollEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxScrollEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxScrollEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxScrollEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxScrollEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxScrollEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxScrollEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxScrollEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxScrollEvent* LunaTraits< wxScrollEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxScrollEvent >::_bind_dtor(wxScrollEvent* obj) {
	delete obj;
}

const char LunaTraits< wxScrollEvent >::className[] = "wxScrollEvent";
const char LunaTraits< wxScrollEvent >::fullName[] = "wxScrollEvent";
const char LunaTraits< wxScrollEvent >::moduleName[] = "wx";
const char* LunaTraits< wxScrollEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxScrollEvent >::hash = 54815679;
const int LunaTraits< wxScrollEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxScrollEvent >::methods[] = {
	{"GetOrientation", &luna_wrapper_wxScrollEvent::_bind_GetOrientation},
	{"GetPosition", &luna_wrapper_wxScrollEvent::_bind_GetPosition},
	{"SetOrientation", &luna_wrapper_wxScrollEvent::_bind_SetOrientation},
	{"SetPosition", &luna_wrapper_wxScrollEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxScrollEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxScrollEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxScrollEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxScrollEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxScrollEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxScrollEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrollEvent >::enumValues[] = {
	{0,0}
};


