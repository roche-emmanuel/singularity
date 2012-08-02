#include <plug_common.h>

class luna_wrapper_wxEraseEvent {
public:
	typedef Luna< wxEraseEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxEraseEvent* ptr= dynamic_cast< wxEraseEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEraseEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetDC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxDC * wxEraseEvent::GetDC() const
	static int _bind_GetDC(lua_State *L) {
		if (!_lg_typecheck_GetDC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDC * wxEraseEvent::GetDC() const function, expected prototype:\nwxDC * wxEraseEvent::GetDC() const\nClass arguments details:\n");
		}


		wxEraseEvent* self=dynamic_cast< wxEraseEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDC * wxEraseEvent::GetDC() const");
		}
		wxDC * lret = self->GetDC();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDC >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxEraseEvent* LunaTraits< wxEraseEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxEraseEvent >::_bind_dtor(wxEraseEvent* obj) {
	delete obj;
}

const char LunaTraits< wxEraseEvent >::className[] = "wxEraseEvent";
const char LunaTraits< wxEraseEvent >::fullName[] = "wxEraseEvent";
const char LunaTraits< wxEraseEvent >::moduleName[] = "wx";
const char* LunaTraits< wxEraseEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxEraseEvent >::hash = 60385200;
const int LunaTraits< wxEraseEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxEraseEvent >::methods[] = {
	{"GetDC", &luna_wrapper_wxEraseEvent::_bind_GetDC},
	{0,0}
};

luna_ConverterType LunaTraits< wxEraseEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxEraseEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEraseEvent >::enumValues[] = {
	{0,0}
};


