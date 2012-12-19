#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEraseEvent.h>

class luna_wrapper_wxEraseEvent {
public:
	typedef Luna< wxEraseEvent > luna_t;

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
		//wxEraseEvent* ptr= dynamic_cast< wxEraseEvent* >(Luna< wxObject >::check(L,1));
		wxEraseEvent* ptr= luna_caster< wxObject, wxEraseEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEraseEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetDC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// wxEraseEvent::wxEraseEvent(lua_Table * data, int id = 0, wxDC * dc = NULL)
	static wxEraseEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEraseEvent::wxEraseEvent(lua_Table * data, int id = 0, wxDC * dc = NULL) function, expected prototype:\nwxEraseEvent::wxEraseEvent(lua_Table * data, int id = 0, wxDC * dc = NULL)\nClass arguments details:\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		wxDC* dc=luatop>2 ? (Luna< wxObject >::checkSubType< wxDC >(L,3)) : (wxDC*)NULL;

		return new wrapper_wxEraseEvent(L,NULL, id, dc);
	}


	// Function binds:
	// wxDC * wxEraseEvent::GetDC() const
	static int _bind_GetDC(lua_State *L) {
		if (!_lg_typecheck_GetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDC * wxEraseEvent::GetDC() const function, expected prototype:\nwxDC * wxEraseEvent::GetDC() const\nClass arguments details:\n");
		}


		wxEraseEvent* self=Luna< wxObject >::checkSubType< wxEraseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDC * wxEraseEvent::GetDC() const");
		}
		wxDC * lret = self->GetDC();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDC >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxEraseEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxEraseEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxEraseEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxEraseEvent* self=Luna< wxObject >::checkSubType< wxEraseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxEraseEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxEraseEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxEraseEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxEraseEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxEraseEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxEraseEvent* self=Luna< wxObject >::checkSubType< wxEraseEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxEraseEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxEraseEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxEraseEvent* LunaTraits< wxEraseEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEraseEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxEraseEvent >::_bind_dtor(wxEraseEvent* obj) {
	delete obj;
}

const char LunaTraits< wxEraseEvent >::className[] = "wxEraseEvent";
const char LunaTraits< wxEraseEvent >::fullName[] = "wxEraseEvent";
const char LunaTraits< wxEraseEvent >::moduleName[] = "wx";
const char* LunaTraits< wxEraseEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxEraseEvent >::hash = 60385200;
const int LunaTraits< wxEraseEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxEraseEvent >::methods[] = {
	{"GetDC", &luna_wrapper_wxEraseEvent::_bind_GetDC},
	{"base_GetClassInfo", &luna_wrapper_wxEraseEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxEraseEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxEraseEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxEraseEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxEraseEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxEraseEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEraseEvent >::enumValues[] = {
	{0,0}
};


