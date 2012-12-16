#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDisplayChangedEvent.h>

class luna_wrapper_wxDisplayChangedEvent {
public:
	typedef Luna< wxDisplayChangedEvent > luna_t;

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
		//wxDisplayChangedEvent* ptr= dynamic_cast< wxDisplayChangedEvent* >(Luna< wxObject >::check(L,1));
		wxDisplayChangedEvent* ptr= luna_caster< wxObject, wxDisplayChangedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDisplayChangedEvent >::push(L,ptr,false);
		return 1;
	};


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

	// Function binds:
	// wxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxDisplayChangedEvent* self=Luna< wxObject >::checkSubType< wxDisplayChangedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxDisplayChangedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxDisplayChangedEvent* self=Luna< wxObject >::checkSubType< wxDisplayChangedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxDisplayChangedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDisplayChangedEvent* LunaTraits< wxDisplayChangedEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxDisplayChangedEvent >::_bind_dtor(wxDisplayChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDisplayChangedEvent >::className[] = "wxDisplayChangedEvent";
const char LunaTraits< wxDisplayChangedEvent >::fullName[] = "wxDisplayChangedEvent";
const char LunaTraits< wxDisplayChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDisplayChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxDisplayChangedEvent >::hash = 53874927;
const int LunaTraits< wxDisplayChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDisplayChangedEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDisplayChangedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxDisplayChangedEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxDisplayChangedEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxDisplayChangedEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDisplayChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDisplayChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDisplayChangedEvent >::enumValues[] = {
	{0,0}
};


