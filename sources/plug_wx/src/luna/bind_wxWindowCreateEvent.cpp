#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindowCreateEvent.h>

class luna_wrapper_wxWindowCreateEvent {
public:
	typedef Luna< wxWindowCreateEvent > luna_t;

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
		//wxWindowCreateEvent* ptr= dynamic_cast< wxWindowCreateEvent* >(Luna< wxObject >::check(L,1));
		wxWindowCreateEvent* ptr= luna_caster< wxObject, wxWindowCreateEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowCreateEvent >::push(L,ptr,false);
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
	// wxWindow * wxWindowCreateEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindowCreateEvent::GetWindow() const function, expected prototype:\nwxWindow * wxWindowCreateEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindowCreateEvent::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWindowCreateEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxWindowCreateEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWindowCreateEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWindowCreateEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWindowCreateEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxWindowCreateEvent* self=Luna< wxObject >::checkSubType< wxWindowCreateEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxWindowCreateEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxWindowCreateEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxWindowCreateEvent* LunaTraits< wxWindowCreateEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxWindowCreateEvent >::_bind_dtor(wxWindowCreateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowCreateEvent >::className[] = "wxWindowCreateEvent";
const char LunaTraits< wxWindowCreateEvent >::fullName[] = "wxWindowCreateEvent";
const char LunaTraits< wxWindowCreateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowCreateEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowCreateEvent >::hash = 53447837;
const int LunaTraits< wxWindowCreateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowCreateEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxWindowCreateEvent::_bind_GetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxWindowCreateEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWindowCreateEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxWindowCreateEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowCreateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowCreateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowCreateEvent >::enumValues[] = {
	{0,0}
};


