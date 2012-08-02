#include <plug_common.h>

class luna_wrapper_wxShowEvent {
public:
	typedef Luna< wxShowEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxShowEvent* ptr= dynamic_cast< wxShowEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxShowEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_SetShow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxShowEvent::SetShow(bool show)
	static int _bind_SetShow(lua_State *L) {
		if (!_lg_typecheck_SetShow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxShowEvent::SetShow(bool show) function, expected prototype:\nvoid wxShowEvent::SetShow(bool show)\nClass arguments details:\n");
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxShowEvent* self=dynamic_cast< wxShowEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxShowEvent::SetShow(bool)");
		}
		self->SetShow(show);

		return 0;
	}

	// bool wxShowEvent::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxShowEvent::IsShown() const function, expected prototype:\nbool wxShowEvent::IsShown() const\nClass arguments details:\n");
		}


		wxShowEvent* self=dynamic_cast< wxShowEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxShowEvent::IsShown() const");
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxShowEvent::GetShow() const
	static int _bind_GetShow(lua_State *L) {
		if (!_lg_typecheck_GetShow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxShowEvent::GetShow() const function, expected prototype:\nbool wxShowEvent::GetShow() const\nClass arguments details:\n");
		}


		wxShowEvent* self=dynamic_cast< wxShowEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxShowEvent::GetShow() const");
		}
		bool lret = self->GetShow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxShowEvent* LunaTraits< wxShowEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxShowEvent >::_bind_dtor(wxShowEvent* obj) {
	delete obj;
}

const char LunaTraits< wxShowEvent >::className[] = "wxShowEvent";
const char LunaTraits< wxShowEvent >::fullName[] = "wxShowEvent";
const char LunaTraits< wxShowEvent >::moduleName[] = "wx";
const char* LunaTraits< wxShowEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxShowEvent >::hash = 99567489;
const int LunaTraits< wxShowEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxShowEvent >::methods[] = {
	{"SetShow", &luna_wrapper_wxShowEvent::_bind_SetShow},
	{"IsShown", &luna_wrapper_wxShowEvent::_bind_IsShown},
	{"GetShow", &luna_wrapper_wxShowEvent::_bind_GetShow},
	{0,0}
};

luna_ConverterType LunaTraits< wxShowEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxShowEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxShowEvent >::enumValues[] = {
	{0,0}
};


