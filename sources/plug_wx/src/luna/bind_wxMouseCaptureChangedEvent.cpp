#include <plug_common.h>

class luna_wrapper_wxMouseCaptureChangedEvent {
public:
	typedef Luna< wxMouseCaptureChangedEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxMouseCaptureChangedEvent* ptr= dynamic_cast< wxMouseCaptureChangedEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseCaptureChangedEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetCapturedWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const
	static int _bind_GetCapturedWindow(lua_State *L) {
		if (!_lg_typecheck_GetCapturedWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const function, expected prototype:\nwxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const\nClass arguments details:\n");
		}


		wxMouseCaptureChangedEvent* self=dynamic_cast< wxMouseCaptureChangedEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxMouseCaptureChangedEvent::GetCapturedWindow() const");
		}
		wxWindow * lret = self->GetCapturedWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMouseCaptureChangedEvent* LunaTraits< wxMouseCaptureChangedEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxMouseCaptureChangedEvent >::_bind_dtor(wxMouseCaptureChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMouseCaptureChangedEvent >::className[] = "wxMouseCaptureChangedEvent";
const char LunaTraits< wxMouseCaptureChangedEvent >::fullName[] = "wxMouseCaptureChangedEvent";
const char LunaTraits< wxMouseCaptureChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMouseCaptureChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMouseCaptureChangedEvent >::hash = 39085411;
const int LunaTraits< wxMouseCaptureChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMouseCaptureChangedEvent >::methods[] = {
	{"GetCapturedWindow", &luna_wrapper_wxMouseCaptureChangedEvent::_bind_GetCapturedWindow},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseCaptureChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseCaptureChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseCaptureChangedEvent >::enumValues[] = {
	{0,0}
};


