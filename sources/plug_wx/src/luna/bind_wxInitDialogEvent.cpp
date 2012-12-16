#include <plug_common.h>

#include <luna/wrappers/wrapper_wxInitDialogEvent.h>

class luna_wrapper_wxInitDialogEvent {
public:
	typedef Luna< wxInitDialogEvent > luna_t;

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
		//wxInitDialogEvent* ptr= dynamic_cast< wxInitDialogEvent* >(Luna< wxObject >::check(L,1));
		wxInitDialogEvent* ptr= luna_caster< wxObject, wxInitDialogEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxInitDialogEvent >::push(L,ptr,false);
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
	// wxClassInfo * wxInitDialogEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxInitDialogEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxInitDialogEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxInitDialogEvent* self=Luna< wxObject >::checkSubType< wxInitDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxInitDialogEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxInitDialogEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxInitDialogEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxInitDialogEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxInitDialogEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxInitDialogEvent* self=Luna< wxObject >::checkSubType< wxInitDialogEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxInitDialogEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxInitDialogEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxInitDialogEvent* LunaTraits< wxInitDialogEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxInitDialogEvent >::_bind_dtor(wxInitDialogEvent* obj) {
	delete obj;
}

const char LunaTraits< wxInitDialogEvent >::className[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::fullName[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::moduleName[] = "wx";
const char* LunaTraits< wxInitDialogEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxInitDialogEvent >::hash = 96243584;
const int LunaTraits< wxInitDialogEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxInitDialogEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxInitDialogEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxInitDialogEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxInitDialogEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxInitDialogEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxInitDialogEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxInitDialogEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxInitDialogEvent >::enumValues[] = {
	{0,0}
};


