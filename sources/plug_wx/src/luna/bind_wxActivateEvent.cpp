#include <plug_common.h>

#include <luna/wrappers/wrapper_wxActivateEvent.h>

class luna_wrapper_wxActivateEvent {
public:
	typedef Luna< wxActivateEvent > luna_t;

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
		//wxActivateEvent* ptr= dynamic_cast< wxActivateEvent* >(Luna< wxObject >::check(L,1));
		wxActivateEvent* ptr= luna_caster< wxObject, wxActivateEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxActivateEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetActive(lua_State *L) {
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

	// Function binds:
	// bool wxActivateEvent::GetActive() const
	static int _bind_GetActive(lua_State *L) {
		if (!_lg_typecheck_GetActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxActivateEvent::GetActive() const function, expected prototype:\nbool wxActivateEvent::GetActive() const\nClass arguments details:\n");
		}


		wxActivateEvent* self=Luna< wxObject >::checkSubType< wxActivateEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxActivateEvent::GetActive() const");
		}
		bool lret = self->GetActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxActivateEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxActivateEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxActivateEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxActivateEvent* self=Luna< wxObject >::checkSubType< wxActivateEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxActivateEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxActivateEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxActivateEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxActivateEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxActivateEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxActivateEvent* self=Luna< wxObject >::checkSubType< wxActivateEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxActivateEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxActivateEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxActivateEvent* LunaTraits< wxActivateEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxActivateEvent >::_bind_dtor(wxActivateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxActivateEvent >::className[] = "wxActivateEvent";
const char LunaTraits< wxActivateEvent >::fullName[] = "wxActivateEvent";
const char LunaTraits< wxActivateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxActivateEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxActivateEvent >::hash = 65731750;
const int LunaTraits< wxActivateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxActivateEvent >::methods[] = {
	{"GetActive", &luna_wrapper_wxActivateEvent::_bind_GetActive},
	{"base_GetClassInfo", &luna_wrapper_wxActivateEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxActivateEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxActivateEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxActivateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxActivateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxActivateEvent >::enumValues[] = {
	{0,0}
};


