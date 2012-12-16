#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMaximizeEvent.h>

class luna_wrapper_wxMaximizeEvent {
public:
	typedef Luna< wxMaximizeEvent > luna_t;

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
		//wxMaximizeEvent* ptr= dynamic_cast< wxMaximizeEvent* >(Luna< wxObject >::check(L,1));
		wxMaximizeEvent* ptr= luna_caster< wxObject, wxMaximizeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMaximizeEvent >::push(L,ptr,false);
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
	// wxClassInfo * wxMaximizeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMaximizeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMaximizeEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxMaximizeEvent* self=Luna< wxObject >::checkSubType< wxMaximizeEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMaximizeEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxMaximizeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMaximizeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMaximizeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMaximizeEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxMaximizeEvent* self=Luna< wxObject >::checkSubType< wxMaximizeEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxMaximizeEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxMaximizeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMaximizeEvent* LunaTraits< wxMaximizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMaximizeEvent >::_bind_dtor(wxMaximizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMaximizeEvent >::className[] = "wxMaximizeEvent";
const char LunaTraits< wxMaximizeEvent >::fullName[] = "wxMaximizeEvent";
const char LunaTraits< wxMaximizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMaximizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMaximizeEvent >::hash = 65226599;
const int LunaTraits< wxMaximizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMaximizeEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMaximizeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMaximizeEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxMaximizeEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxMaximizeEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMaximizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMaximizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMaximizeEvent >::enumValues[] = {
	{0,0}
};


