#include <plug_common.h>

class luna_wrapper_wxIconizeEvent {
public:
	typedef Luna< wxIconizeEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxIconizeEvent* ptr= dynamic_cast< wxIconizeEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIconizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Iconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxIconizeEvent::IsIconized() const
	static int _bind_IsIconized(lua_State *L) {
		if (!_lg_typecheck_IsIconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIconizeEvent::IsIconized() const function, expected prototype:\nbool wxIconizeEvent::IsIconized() const\nClass arguments details:\n");
		}


		wxIconizeEvent* self=dynamic_cast< wxIconizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIconizeEvent::IsIconized() const");
		}
		bool lret = self->IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIconizeEvent::Iconized() const
	static int _bind_Iconized(lua_State *L) {
		if (!_lg_typecheck_Iconized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIconizeEvent::Iconized() const function, expected prototype:\nbool wxIconizeEvent::Iconized() const\nClass arguments details:\n");
		}


		wxIconizeEvent* self=dynamic_cast< wxIconizeEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIconizeEvent::Iconized() const");
		}
		bool lret = self->Iconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxIconizeEvent* LunaTraits< wxIconizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxIconizeEvent >::_bind_dtor(wxIconizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxIconizeEvent >::className[] = "wxIconizeEvent";
const char LunaTraits< wxIconizeEvent >::fullName[] = "wxIconizeEvent";
const char LunaTraits< wxIconizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxIconizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxIconizeEvent >::hash = 42419818;
const int LunaTraits< wxIconizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIconizeEvent >::methods[] = {
	{"IsIconized", &luna_wrapper_wxIconizeEvent::_bind_IsIconized},
	{"Iconized", &luna_wrapper_wxIconizeEvent::_bind_Iconized},
	{0,0}
};

luna_ConverterType LunaTraits< wxIconizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxIconizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIconizeEvent >::enumValues[] = {
	{0,0}
};


