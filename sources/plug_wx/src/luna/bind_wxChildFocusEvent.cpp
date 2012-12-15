#include <plug_common.h>

#include <luna/wrappers/wrapper_wxChildFocusEvent.h>

class luna_wrapper_wxChildFocusEvent {
public:
	typedef Luna< wxChildFocusEvent > luna_t;

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
		//wxChildFocusEvent* ptr= dynamic_cast< wxChildFocusEvent* >(Luna< wxObject >::check(L,1));
		wxChildFocusEvent* ptr= luna_caster< wxObject, wxChildFocusEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChildFocusEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
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
	// wxWindow * wxChildFocusEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxChildFocusEvent::GetWindow() const function, expected prototype:\nwxWindow * wxChildFocusEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxChildFocusEvent::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxChildFocusEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxChildFocusEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxChildFocusEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxChildFocusEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxChildFocusEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxChildFocusEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxChildFocusEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxChildFocusEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxChildFocusEvent* self=Luna< wxObject >::checkSubType< wxChildFocusEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxChildFocusEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxChildFocusEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxChildFocusEvent* LunaTraits< wxChildFocusEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxChildFocusEvent >::_bind_dtor(wxChildFocusEvent* obj) {
	delete obj;
}

const char LunaTraits< wxChildFocusEvent >::className[] = "wxChildFocusEvent";
const char LunaTraits< wxChildFocusEvent >::fullName[] = "wxChildFocusEvent";
const char LunaTraits< wxChildFocusEvent >::moduleName[] = "wx";
const char* LunaTraits< wxChildFocusEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxChildFocusEvent >::hash = 89457684;
const int LunaTraits< wxChildFocusEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxChildFocusEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxChildFocusEvent::_bind_GetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxChildFocusEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxChildFocusEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxChildFocusEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxChildFocusEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxChildFocusEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxChildFocusEvent >::enumValues[] = {
	{0,0}
};


