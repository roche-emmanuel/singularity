#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindowDestroyEvent.h>

class luna_wrapper_wxWindowDestroyEvent {
public:
	typedef Luna< wxWindowDestroyEvent > luna_t;

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
		//wxWindowDestroyEvent* ptr= dynamic_cast< wxWindowDestroyEvent* >(Luna< wxObject >::check(L,1));
		wxWindowDestroyEvent* ptr= luna_caster< wxObject, wxWindowDestroyEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowDestroyEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


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

	// Constructor binds:
	// wxWindowDestroyEvent::wxWindowDestroyEvent(lua_Table * data, wxWindow * win = NULL)
	static wxWindowDestroyEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindowDestroyEvent::wxWindowDestroyEvent(lua_Table * data, wxWindow * win = NULL) function, expected prototype:\nwxWindowDestroyEvent::wxWindowDestroyEvent(lua_Table * data, wxWindow * win = NULL)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* win=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wrapper_wxWindowDestroyEvent(L,NULL, win);
	}


	// Function binds:
	// wxWindow * wxWindowDestroyEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindowDestroyEvent::GetWindow() const function, expected prototype:\nwxWindow * wxWindowDestroyEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindowDestroyEvent::GetWindow() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWindowDestroyEvent::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxWindowDestroyEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxWindowDestroyEvent* self=Luna< wxObject >::checkSubType< wxWindowDestroyEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxWindowDestroyEvent::base_GetEventCategory() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxEventCategory lret = self->wxWindowDestroyEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxWindowDestroyEvent* LunaTraits< wxWindowDestroyEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowDestroyEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxWindowDestroyEvent >::_bind_dtor(wxWindowDestroyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowDestroyEvent >::className[] = "wxWindowDestroyEvent";
const char LunaTraits< wxWindowDestroyEvent >::fullName[] = "wxWindowDestroyEvent";
const char LunaTraits< wxWindowDestroyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowDestroyEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowDestroyEvent >::hash = 77136317;
const int LunaTraits< wxWindowDestroyEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowDestroyEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxWindowDestroyEvent::_bind_GetWindow},
	{"base_GetClassInfo", &luna_wrapper_wxWindowDestroyEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWindowDestroyEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxWindowDestroyEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxWindowDestroyEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowDestroyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowDestroyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowDestroyEvent >::enumValues[] = {
	{0,0}
};


