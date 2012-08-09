#include <plug_common.h>

class luna_wrapper_wxWindowCreateEvent {
public:
	typedef Luna< wxWindowCreateEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxWindowCreateEvent* ptr= dynamic_cast< wxWindowCreateEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindowCreateEvent >::push(L,ptr,false);
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
	// wxWindow * wxWindowCreateEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindowCreateEvent::GetWindow() const function, expected prototype:\nwxWindow * wxWindowCreateEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxWindowCreateEvent* self=dynamic_cast< wxWindowCreateEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxWindowCreateEvent::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWindowCreateEvent* LunaTraits< wxWindowCreateEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxWindowCreateEvent >::_bind_dtor(wxWindowCreateEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWindowCreateEvent >::className[] = "wxWindowCreateEvent";
const char LunaTraits< wxWindowCreateEvent >::fullName[] = "wxWindowCreateEvent";
const char LunaTraits< wxWindowCreateEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWindowCreateEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxWindowCreateEvent >::hash = 53447837;
const int LunaTraits< wxWindowCreateEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWindowCreateEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxWindowCreateEvent::_bind_GetWindow},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowCreateEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowCreateEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowCreateEvent >::enumValues[] = {
	{0,0}
};

