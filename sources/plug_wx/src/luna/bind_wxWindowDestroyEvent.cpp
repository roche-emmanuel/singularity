#include <plug_common.h>

class luna_wrapper_wxWindowDestroyEvent {
public:
	typedef Luna< wxWindowDestroyEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxWindowDestroyEvent* ptr= dynamic_cast< wxWindowDestroyEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowDestroyEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxWindow * wxWindowDestroyEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindowDestroyEvent::GetWindow() const function, expected prototype:\nwxWindow * wxWindowDestroyEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxWindowDestroyEvent* self=dynamic_cast< wxWindowDestroyEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindowDestroyEvent::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWindowDestroyEvent* LunaTraits< wxWindowDestroyEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxWindowDestroyEvent >::_bind_dtor(wxWindowDestroyEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowDestroyEvent >::className[] = "wxWindowDestroyEvent";
const char LunaTraits< wxWindowDestroyEvent >::fullName[] = "wxWindowDestroyEvent";
const char LunaTraits< wxWindowDestroyEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowDestroyEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowDestroyEvent >::hash = 77136317;
const int LunaTraits< wxWindowDestroyEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowDestroyEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxWindowDestroyEvent::_bind_GetWindow},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowDestroyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowDestroyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowDestroyEvent >::enumValues[] = {
	{0,0}
};


