#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTaskBarIconEvent.h>

class luna_wrapper_wxTaskBarIconEvent {
public:
	typedef Luna< wxTaskBarIconEvent > luna_t;

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
		//wxTaskBarIconEvent* ptr= dynamic_cast< wxTaskBarIconEvent* >(Luna< wxObject >::check(L,1));
		wxTaskBarIconEvent* ptr= luna_caster< wxObject, wxTaskBarIconEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTaskBarIconEvent >::push(L,ptr,false);
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
	// wxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxTaskBarIconEvent* self=Luna< wxObject >::checkSubType< wxTaskBarIconEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxTaskBarIconEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxTaskBarIconEvent* self=Luna< wxObject >::checkSubType< wxTaskBarIconEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxTaskBarIconEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTaskBarIconEvent* LunaTraits< wxTaskBarIconEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxTaskBarIconEvent >::_bind_dtor(wxTaskBarIconEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTaskBarIconEvent >::className[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::fullName[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTaskBarIconEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxTaskBarIconEvent >::hash = 93929872;
const int LunaTraits< wxTaskBarIconEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTaskBarIconEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxTaskBarIconEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxTaskBarIconEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxTaskBarIconEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxTaskBarIconEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTaskBarIconEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTaskBarIconEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTaskBarIconEvent >::enumValues[] = {
	{0,0}
};


