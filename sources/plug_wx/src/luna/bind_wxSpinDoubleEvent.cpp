#include <plug_common.h>

class luna_wrapper_wxSpinDoubleEvent {
public:
	typedef Luna< wxSpinDoubleEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxSpinDoubleEvent* ptr= dynamic_cast< wxSpinDoubleEvent* >(Luna< wxObject >::check(L,1));
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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// double wxSpinDoubleEvent::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double wxSpinDoubleEvent::GetValue() const function, expected prototype:\ndouble wxSpinDoubleEvent::GetValue() const\nClass arguments details:\n");
		}


		wxSpinDoubleEvent* self=dynamic_cast< wxSpinDoubleEvent* >(Luna< wxObject >::check(L,1));
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

		wxSpinDoubleEvent* self=dynamic_cast< wxSpinDoubleEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSpinDoubleEvent::SetValue(double)");
		}
		self->SetValue(value);

		return 0;
	}


	// Operator binds:

};

wxSpinDoubleEvent* LunaTraits< wxSpinDoubleEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
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
	{0,0}
};

luna_ConverterType LunaTraits< wxSpinDoubleEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSpinDoubleEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSpinDoubleEvent >::enumValues[] = {
	{0,0}
};


