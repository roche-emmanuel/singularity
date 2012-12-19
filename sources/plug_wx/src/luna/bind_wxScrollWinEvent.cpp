#include <plug_common.h>

#include <luna/wrappers/wrapper_wxScrollWinEvent.h>

class luna_wrapper_wxScrollWinEvent {
public:
	typedef Luna< wxScrollWinEvent > luna_t;

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
		//wxScrollWinEvent* ptr= dynamic_cast< wxScrollWinEvent* >(Luna< wxObject >::check(L,1));
		wxScrollWinEvent* ptr= luna_caster< wxObject, wxScrollWinEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxScrollWinEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


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

	// Constructor binds:
	// wxScrollWinEvent::wxScrollWinEvent(lua_Table * data, int commandType = wxEVT_NULL, int pos = 0, int orientation = 0)
	static wxScrollWinEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxScrollWinEvent::wxScrollWinEvent(lua_Table * data, int commandType = wxEVT_NULL, int pos = 0, int orientation = 0) function, expected prototype:\nwxScrollWinEvent::wxScrollWinEvent(lua_Table * data, int commandType = wxEVT_NULL, int pos = 0, int orientation = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int pos=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int orientation=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new wrapper_wxScrollWinEvent(L,NULL, commandType, pos, orientation);
	}


	// Function binds:
	// int wxScrollWinEvent::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollWinEvent::GetOrientation() const function, expected prototype:\nint wxScrollWinEvent::GetOrientation() const\nClass arguments details:\n");
		}


		wxScrollWinEvent* self=Luna< wxObject >::checkSubType< wxScrollWinEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollWinEvent::GetOrientation() const");
		}
		int lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollWinEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxScrollWinEvent::GetPosition() const function, expected prototype:\nint wxScrollWinEvent::GetPosition() const\nClass arguments details:\n");
		}


		wxScrollWinEvent* self=Luna< wxObject >::checkSubType< wxScrollWinEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxScrollWinEvent::GetPosition() const");
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxScrollWinEvent::SetOrientation(int orient)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollWinEvent::SetOrientation(int orient) function, expected prototype:\nvoid wxScrollWinEvent::SetOrientation(int orient)\nClass arguments details:\n");
		}

		int orient=(int)lua_tointeger(L,2);

		wxScrollWinEvent* self=Luna< wxObject >::checkSubType< wxScrollWinEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollWinEvent::SetOrientation(int)");
		}
		self->SetOrientation(orient);

		return 0;
	}

	// void wxScrollWinEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxScrollWinEvent::SetPosition(int pos) function, expected prototype:\nvoid wxScrollWinEvent::SetPosition(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		wxScrollWinEvent* self=Luna< wxObject >::checkSubType< wxScrollWinEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxScrollWinEvent::SetPosition(int)");
		}
		self->SetPosition(pos);

		return 0;
	}

	// wxClassInfo * wxScrollWinEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxScrollWinEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxScrollWinEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxScrollWinEvent* self=Luna< wxObject >::checkSubType< wxScrollWinEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxScrollWinEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxScrollWinEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxScrollWinEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxScrollWinEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxScrollWinEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxScrollWinEvent* self=Luna< wxObject >::checkSubType< wxScrollWinEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxScrollWinEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxScrollWinEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxScrollWinEvent* LunaTraits< wxScrollWinEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxScrollWinEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxScrollWinEvent >::_bind_dtor(wxScrollWinEvent* obj) {
	delete obj;
}

const char LunaTraits< wxScrollWinEvent >::className[] = "wxScrollWinEvent";
const char LunaTraits< wxScrollWinEvent >::fullName[] = "wxScrollWinEvent";
const char LunaTraits< wxScrollWinEvent >::moduleName[] = "wx";
const char* LunaTraits< wxScrollWinEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxScrollWinEvent >::hash = 23060981;
const int LunaTraits< wxScrollWinEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxScrollWinEvent >::methods[] = {
	{"GetOrientation", &luna_wrapper_wxScrollWinEvent::_bind_GetOrientation},
	{"GetPosition", &luna_wrapper_wxScrollWinEvent::_bind_GetPosition},
	{"SetOrientation", &luna_wrapper_wxScrollWinEvent::_bind_SetOrientation},
	{"SetPosition", &luna_wrapper_wxScrollWinEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxScrollWinEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxScrollWinEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxScrollWinEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxScrollWinEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxScrollWinEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxScrollWinEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrollWinEvent >::enumValues[] = {
	{0,0}
};


