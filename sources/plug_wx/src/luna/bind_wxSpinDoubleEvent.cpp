#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSpinDoubleEvent.h>

class luna_wrapper_wxSpinDoubleEvent {
public:
	typedef Luna< wxSpinDoubleEvent > luna_t;

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
		//wxSpinDoubleEvent* ptr= dynamic_cast< wxSpinDoubleEvent* >(Luna< wxObject >::check(L,1));
		wxSpinDoubleEvent* ptr= luna_caster< wxObject, wxSpinDoubleEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSpinDoubleEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSpinDoubleEvent >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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
	// wxSpinDoubleEvent::wxSpinDoubleEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0, double value = 0)
	static wxSpinDoubleEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinDoubleEvent::wxSpinDoubleEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0, double value = 0) function, expected prototype:\nwxSpinDoubleEvent::wxSpinDoubleEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0, double value = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : wxEVT_NULL;
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		double value=luatop>3 ? (double)lua_tonumber(L,4) : 0;

		return new wrapper_wxSpinDoubleEvent(L,NULL, commandType, winid, value);
	}

	// wxSpinDoubleEvent::wxSpinDoubleEvent(lua_Table * data, const wxSpinDoubleEvent & event)
	static wxSpinDoubleEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSpinDoubleEvent::wxSpinDoubleEvent(lua_Table * data, const wxSpinDoubleEvent & event) function, expected prototype:\nwxSpinDoubleEvent::wxSpinDoubleEvent(lua_Table * data, const wxSpinDoubleEvent & event)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		const wxSpinDoubleEvent* event_ptr=(Luna< wxObject >::checkSubType< wxSpinDoubleEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSpinDoubleEvent::wxSpinDoubleEvent function");
		}
		const wxSpinDoubleEvent & event=*event_ptr;

		return new wrapper_wxSpinDoubleEvent(L,NULL, event);
	}

	// Overload binder for wxSpinDoubleEvent::wxSpinDoubleEvent
	static wxSpinDoubleEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSpinDoubleEvent, cannot match any of the overloads for function wxSpinDoubleEvent:\n  wxSpinDoubleEvent(lua_Table *, int, int, double)\n  wxSpinDoubleEvent(lua_Table *, const wxSpinDoubleEvent &)\n");
		return NULL;
	}


	// Function binds:
	// double wxSpinDoubleEvent::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxSpinDoubleEvent::GetValue() const function, expected prototype:\ndouble wxSpinDoubleEvent::GetValue() const\nClass arguments details:\n");
		}


		wxSpinDoubleEvent* self=Luna< wxObject >::checkSubType< wxSpinDoubleEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double wxSpinDoubleEvent::GetValue() const");
		}
		double lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSpinDoubleEvent::SetValue(double value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSpinDoubleEvent::SetValue(double value) function, expected prototype:\nvoid wxSpinDoubleEvent::SetValue(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		wxSpinDoubleEvent* self=Luna< wxObject >::checkSubType< wxSpinDoubleEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinDoubleEvent::SetValue(double)");
		}
		self->SetValue(value);

		return 0;
	}

	// wxClassInfo * wxSpinDoubleEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSpinDoubleEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSpinDoubleEvent::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSpinDoubleEvent* self=Luna< wxObject >::checkSubType< wxSpinDoubleEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSpinDoubleEvent::base_GetClassInfo() const");
		}
		wxClassInfo * lret = self->wxSpinDoubleEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSpinDoubleEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSpinDoubleEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSpinDoubleEvent::base_GetEventCategory() const\nClass arguments details:\n");
		}


		wxSpinDoubleEvent* self=Luna< wxObject >::checkSubType< wxSpinDoubleEvent >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEventCategory wxSpinDoubleEvent::base_GetEventCategory() const");
		}
		wxEventCategory lret = self->wxSpinDoubleEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSpinDoubleEvent* LunaTraits< wxSpinDoubleEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSpinDoubleEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSpinDoubleEvent >::_bind_dtor(wxSpinDoubleEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSpinDoubleEvent >::className[] = "wxSpinDoubleEvent";
const char LunaTraits< wxSpinDoubleEvent >::fullName[] = "wxSpinDoubleEvent";
const char LunaTraits< wxSpinDoubleEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSpinDoubleEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxSpinDoubleEvent >::hash = 31247527;
const int LunaTraits< wxSpinDoubleEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSpinDoubleEvent >::methods[] = {
	{"GetValue", &luna_wrapper_wxSpinDoubleEvent::_bind_GetValue},
	{"SetValue", &luna_wrapper_wxSpinDoubleEvent::_bind_SetValue},
	{"base_GetClassInfo", &luna_wrapper_wxSpinDoubleEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSpinDoubleEvent::_bind_base_GetEventCategory},
	{"__eq", &luna_wrapper_wxSpinDoubleEvent::_bind___eq},
	{"getTable", &luna_wrapper_wxSpinDoubleEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinDoubleEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinDoubleEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinDoubleEvent >::enumValues[] = {
	{0,0}
};


