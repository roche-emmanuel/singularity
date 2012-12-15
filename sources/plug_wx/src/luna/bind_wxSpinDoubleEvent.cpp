#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSpinDoubleEvent.h>

class luna_wrapper_wxSpinDoubleEvent {
public:
	typedef Luna< wxSpinDoubleEvent > luna_t;

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
	return NULL; // Class is abstract.
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
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinDoubleEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinDoubleEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinDoubleEvent >::enumValues[] = {
	{0,0}
};


