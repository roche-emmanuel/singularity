#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSysColourChangedEvent.h>

class luna_wrapper_wxSysColourChangedEvent {
public:
	typedef Luna< wxSysColourChangedEvent > luna_t;

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
		//wxSysColourChangedEvent* ptr= dynamic_cast< wxSysColourChangedEvent* >(Luna< wxObject >::check(L,1));
		wxSysColourChangedEvent* ptr= luna_caster< wxObject, wxSysColourChangedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSysColourChangedEvent >::push(L,ptr,false);
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
	// wxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSysColourChangedEvent* self=Luna< wxObject >::checkSubType< wxSysColourChangedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxSysColourChangedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxSysColourChangedEvent* self=Luna< wxObject >::checkSubType< wxSysColourChangedEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxSysColourChangedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSysColourChangedEvent* LunaTraits< wxSysColourChangedEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSysColourChangedEvent >::_bind_dtor(wxSysColourChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSysColourChangedEvent >::className[] = "wxSysColourChangedEvent";
const char LunaTraits< wxSysColourChangedEvent >::fullName[] = "wxSysColourChangedEvent";
const char LunaTraits< wxSysColourChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSysColourChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSysColourChangedEvent >::hash = 19204438;
const int LunaTraits< wxSysColourChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSysColourChangedEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxSysColourChangedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSysColourChangedEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxSysColourChangedEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSysColourChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSysColourChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSysColourChangedEvent >::enumValues[] = {
	{0,0}
};


