#include <plug_common.h>

class luna_wrapper_wxChildFocusEvent {
public:
	typedef Luna< wxChildFocusEvent > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxChildFocusEvent* ptr= dynamic_cast< wxChildFocusEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChildFocusEvent >::push(L,ptr,false);
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
	// wxWindow * wxChildFocusEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxChildFocusEvent::GetWindow() const function, expected prototype:\nwxWindow * wxChildFocusEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxChildFocusEvent* self=dynamic_cast< wxChildFocusEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxChildFocusEvent::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxChildFocusEvent* LunaTraits< wxChildFocusEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxChildFocusEvent >::_bind_dtor(wxChildFocusEvent* obj) {
	delete obj;
}

const char LunaTraits< wxChildFocusEvent >::className[] = "wxChildFocusEvent";
const char LunaTraits< wxChildFocusEvent >::fullName[] = "wxChildFocusEvent";
const char LunaTraits< wxChildFocusEvent >::moduleName[] = "wx";
const char* LunaTraits< wxChildFocusEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxChildFocusEvent >::hash = 89457684;
const int LunaTraits< wxChildFocusEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxChildFocusEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxChildFocusEvent::_bind_GetWindow},
	{0,0}
};

luna_ConverterType LunaTraits< wxChildFocusEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxChildFocusEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxChildFocusEvent >::enumValues[] = {
	{0,0}
};


