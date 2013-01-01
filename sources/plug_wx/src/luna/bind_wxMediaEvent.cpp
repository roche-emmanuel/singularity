#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMediaEvent.h>

class luna_wrapper_wxMediaEvent {
public:
	typedef Luna< wxMediaEvent > luna_t;

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
		//wxMediaEvent* ptr= dynamic_cast< wxMediaEvent* >(Luna< wxObject >::check(L,1));
		wxMediaEvent* ptr= luna_caster< wxObject, wxMediaEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMediaEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
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
	// wxMediaEvent::wxMediaEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0)
	static wxMediaEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMediaEvent::wxMediaEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0) function, expected prototype:\nwxMediaEvent::wxMediaEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		return new wrapper_wxMediaEvent(L,NULL, commandType, winid);
	}


	// Function binds:
	// wxClassInfo * wxMediaEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMediaEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMediaEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMediaEvent* self=Luna< wxObject >::checkSubType< wxMediaEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMediaEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxMediaEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMediaEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMediaEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMediaEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxMediaEvent* self=Luna< wxObject >::checkSubType< wxMediaEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxMediaEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxMediaEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMediaEvent* LunaTraits< wxMediaEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMediaEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMediaEvent >::_bind_dtor(wxMediaEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMediaEvent >::className[] = "wxMediaEvent";
const char LunaTraits< wxMediaEvent >::fullName[] = "wxMediaEvent";
const char LunaTraits< wxMediaEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMediaEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxMediaEvent >::hash = 87188630;
const int LunaTraits< wxMediaEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMediaEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMediaEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMediaEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxMediaEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxMediaEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMediaEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMediaEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMediaEvent >::enumValues[] = {
	{0,0}
};


