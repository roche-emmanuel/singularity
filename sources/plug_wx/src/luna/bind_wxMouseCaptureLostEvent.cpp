#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMouseCaptureLostEvent.h>

class luna_wrapper_wxMouseCaptureLostEvent {
public:
	typedef Luna< wxMouseCaptureLostEvent > luna_t;

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
		//wxMouseCaptureLostEvent* ptr= dynamic_cast< wxMouseCaptureLostEvent* >(Luna< wxObject >::check(L,1));
		wxMouseCaptureLostEvent* ptr= luna_caster< wxObject, wxMouseCaptureLostEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseCaptureLostEvent >::push(L,ptr,false);
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
	// wxMouseCaptureLostEvent::wxMouseCaptureLostEvent(lua_Table * data, int windowId = 0)
	static wxMouseCaptureLostEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxMouseCaptureLostEvent::wxMouseCaptureLostEvent(lua_Table * data, int windowId = 0) function, expected prototype:\nwxMouseCaptureLostEvent::wxMouseCaptureLostEvent(lua_Table * data, int windowId = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int windowId=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		return new wrapper_wxMouseCaptureLostEvent(L,NULL, windowId);
	}


	// Function binds:
	// wxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMouseCaptureLostEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureLostEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxMouseCaptureLostEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxMouseCaptureLostEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureLostEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxMouseCaptureLostEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMouseCaptureLostEvent* LunaTraits< wxMouseCaptureLostEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMouseCaptureLostEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMouseCaptureLostEvent >::_bind_dtor(wxMouseCaptureLostEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMouseCaptureLostEvent >::className[] = "wxMouseCaptureLostEvent";
const char LunaTraits< wxMouseCaptureLostEvent >::fullName[] = "wxMouseCaptureLostEvent";
const char LunaTraits< wxMouseCaptureLostEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMouseCaptureLostEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMouseCaptureLostEvent >::hash = 86144117;
const int LunaTraits< wxMouseCaptureLostEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMouseCaptureLostEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMouseCaptureLostEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMouseCaptureLostEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxMouseCaptureLostEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxMouseCaptureLostEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseCaptureLostEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseCaptureLostEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseCaptureLostEvent >::enumValues[] = {
	{0,0}
};


