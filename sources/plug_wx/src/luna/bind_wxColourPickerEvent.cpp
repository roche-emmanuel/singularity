#include <plug_common.h>

#include <luna/wrappers/wrapper_wxColourPickerEvent.h>

class luna_wrapper_wxColourPickerEvent {
public:
	typedef Luna< wxColourPickerEvent > luna_t;

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
		//wxColourPickerEvent* ptr= dynamic_cast< wxColourPickerEvent* >(Luna< wxObject >::check(L,1));
		wxColourPickerEvent* ptr= luna_caster< wxObject, wxColourPickerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColourPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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
	// wxColour wxColourPickerEvent::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxColourPickerEvent::GetColour() const function, expected prototype:\nwxColour wxColourPickerEvent::GetColour() const\nClass arguments details:\n");
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxColourPickerEvent::GetColour() const");
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxColourPickerEvent::SetColour(const wxColour & pos)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColourPickerEvent::SetColour(const wxColour & pos) function, expected prototype:\nvoid wxColourPickerEvent::SetColour(const wxColour & pos)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* pos_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxColourPickerEvent::SetColour function");
		}
		const wxColour & pos=*pos_ptr;

		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColourPickerEvent::SetColour(const wxColour &)");
		}
		self->SetColour(pos);

		return 0;
	}

	// wxClassInfo * wxColourPickerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxColourPickerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxColourPickerEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxColourPickerEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxColourPickerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxColourPickerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxColourPickerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxColourPickerEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxColourPickerEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxColourPickerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxColourPickerEvent* LunaTraits< wxColourPickerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxColourPickerEvent >::_bind_dtor(wxColourPickerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxColourPickerEvent >::className[] = "wxColourPickerEvent";
const char LunaTraits< wxColourPickerEvent >::fullName[] = "wxColourPickerEvent";
const char LunaTraits< wxColourPickerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxColourPickerEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxColourPickerEvent >::hash = 43152060;
const int LunaTraits< wxColourPickerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxColourPickerEvent >::methods[] = {
	{"GetColour", &luna_wrapper_wxColourPickerEvent::_bind_GetColour},
	{"SetColour", &luna_wrapper_wxColourPickerEvent::_bind_SetColour},
	{"base_GetClassInfo", &luna_wrapper_wxColourPickerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxColourPickerEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxColourPickerEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxColourPickerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxColourPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourPickerEvent >::enumValues[] = {
	{0,0}
};


