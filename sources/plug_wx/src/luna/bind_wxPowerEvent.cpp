#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPowerEvent.h>

class luna_wrapper_wxPowerEvent {
public:
	typedef Luna< wxPowerEvent > luna_t;

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
		//wxPowerEvent* ptr= dynamic_cast< wxPowerEvent* >(Luna< wxObject >::check(L,1));
		wxPowerEvent* ptr= luna_caster< wxObject, wxPowerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPowerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Veto(lua_State *L) {
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
	// void wxPowerEvent::Veto()
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPowerEvent::Veto() function, expected prototype:\nvoid wxPowerEvent::Veto()\nClass arguments details:\n");
		}


		wxPowerEvent* self=Luna< wxObject >::checkSubType< wxPowerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPowerEvent::Veto()");
		}
		self->Veto();

		return 0;
	}

	// wxClassInfo * wxPowerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPowerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPowerEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxPowerEvent* self=Luna< wxObject >::checkSubType< wxPowerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPowerEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxPowerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxPowerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxPowerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxPowerEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxPowerEvent* self=Luna< wxObject >::checkSubType< wxPowerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxPowerEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxPowerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPowerEvent* LunaTraits< wxPowerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxPowerEvent >::_bind_dtor(wxPowerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPowerEvent >::className[] = "wxPowerEvent";
const char LunaTraits< wxPowerEvent >::fullName[] = "wxPowerEvent";
const char LunaTraits< wxPowerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPowerEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxPowerEvent >::hash = 32451441;
const int LunaTraits< wxPowerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPowerEvent >::methods[] = {
	{"Veto", &luna_wrapper_wxPowerEvent::_bind_Veto},
	{"base_GetClassInfo", &luna_wrapper_wxPowerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxPowerEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxPowerEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxPowerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPowerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPowerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPowerEvent >::enumValues[] = {
	{0,0}
};


