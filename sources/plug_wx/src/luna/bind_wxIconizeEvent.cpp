#include <plug_common.h>

#include <luna/wrappers/wrapper_wxIconizeEvent.h>

class luna_wrapper_wxIconizeEvent {
public:
	typedef Luna< wxIconizeEvent > luna_t;

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
		//wxIconizeEvent* ptr= dynamic_cast< wxIconizeEvent* >(Luna< wxObject >::check(L,1));
		wxIconizeEvent* ptr= luna_caster< wxObject, wxIconizeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIconizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Iconized(lua_State *L) {
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
	// bool wxIconizeEvent::IsIconized() const
	static int _bind_IsIconized(lua_State *L) {
		if (!_lg_typecheck_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIconizeEvent::IsIconized() const function, expected prototype:\nbool wxIconizeEvent::IsIconized() const\nClass arguments details:\n");
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIconizeEvent::IsIconized() const");
		}
		bool lret = self->IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIconizeEvent::Iconized() const
	static int _bind_Iconized(lua_State *L) {
		if (!_lg_typecheck_Iconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIconizeEvent::Iconized() const function, expected prototype:\nbool wxIconizeEvent::Iconized() const\nClass arguments details:\n");
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIconizeEvent::Iconized() const");
		}
		bool lret = self->Iconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxIconizeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxIconizeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxIconizeEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxIconizeEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxIconizeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxIconizeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxIconizeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxIconizeEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxIconizeEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxIconizeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxIconizeEvent* LunaTraits< wxIconizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxIconizeEvent >::_bind_dtor(wxIconizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxIconizeEvent >::className[] = "wxIconizeEvent";
const char LunaTraits< wxIconizeEvent >::fullName[] = "wxIconizeEvent";
const char LunaTraits< wxIconizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxIconizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxIconizeEvent >::hash = 42419818;
const int LunaTraits< wxIconizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIconizeEvent >::methods[] = {
	{"IsIconized", &luna_wrapper_wxIconizeEvent::_bind_IsIconized},
	{"Iconized", &luna_wrapper_wxIconizeEvent::_bind_Iconized},
	{"base_GetClassInfo", &luna_wrapper_wxIconizeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxIconizeEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxIconizeEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxIconizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxIconizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIconizeEvent >::enumValues[] = {
	{0,0}
};


