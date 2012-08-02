#include <plug_common.h>

class luna_wrapper_wxPowerEvent {
public:
	typedef Luna< wxPowerEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxPowerEvent* ptr= dynamic_cast< wxPowerEvent* >(Luna< wxObject >::check(L,1));
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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void wxPowerEvent::Veto()
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxPowerEvent::Veto() function, expected prototype:\nvoid wxPowerEvent::Veto()\nClass arguments details:\n");
		}


		wxPowerEvent* self=dynamic_cast< wxPowerEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxPowerEvent::Veto()");
		}
		self->Veto();

		return 0;
	}


	// Operator binds:

};

wxPowerEvent* LunaTraits< wxPowerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
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
	{0,0}
};

luna_ConverterType LunaTraits< wxPowerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPowerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPowerEvent >::enumValues[] = {
	{0,0}
};


