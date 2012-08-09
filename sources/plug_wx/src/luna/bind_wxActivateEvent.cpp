#include <plug_common.h>

class luna_wrapper_wxActivateEvent {
public:
	typedef Luna< wxActivateEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxActivateEvent* ptr= dynamic_cast< wxActivateEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxActivateEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxActivateEvent::GetActive() const
	static int _bind_GetActive(lua_State *L) {
		if (!_lg_typecheck_GetActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxActivateEvent::GetActive() const function, expected prototype:\nbool wxActivateEvent::GetActive() const\nClass arguments details:\n");
		}


		wxActivateEvent* self=dynamic_cast< wxActivateEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxActivateEvent::GetActive() const");
		}
		bool lret = self->GetActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxActivateEvent* LunaTraits< wxActivateEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxActivateEvent >::_bind_dtor(wxActivateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxActivateEvent >::className[] = "wxActivateEvent";
const char LunaTraits< wxActivateEvent >::fullName[] = "wxActivateEvent";
const char LunaTraits< wxActivateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxActivateEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxActivateEvent >::hash = 65731750;
const int LunaTraits< wxActivateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxActivateEvent >::methods[] = {
	{"GetActive", &luna_wrapper_wxActivateEvent::_bind_GetActive},
	{0,0}
};

luna_ConverterType LunaTraits< wxActivateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxActivateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxActivateEvent >::enumValues[] = {
	{0,0}
};

