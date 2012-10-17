#include <plug_common.h>

class luna_wrapper_wxFocusEvent {
public:
	typedef Luna< wxFocusEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFocusEvent* ptr= dynamic_cast< wxFocusEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFocusEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// wxWindow * wxFocusEvent::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWindow * wxFocusEvent::GetWindow() const function, expected prototype:\nwxWindow * wxFocusEvent::GetWindow() const\nClass arguments details:\n");
		}


		wxFocusEvent* self=dynamic_cast< wxFocusEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxWindow * wxFocusEvent::GetWindow() const");
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxFocusEvent::SetWindow(wxWindow * win)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFocusEvent::SetWindow(wxWindow * win) function, expected prototype:\nvoid wxFocusEvent::SetWindow(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxFocusEvent* self=dynamic_cast< wxFocusEvent* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFocusEvent::SetWindow(wxWindow *)");
		}
		self->SetWindow(win);

		return 0;
	}


	// Operator binds:

};

wxFocusEvent* LunaTraits< wxFocusEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxFocusEvent >::_bind_dtor(wxFocusEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFocusEvent >::className[] = "wxFocusEvent";
const char LunaTraits< wxFocusEvent >::fullName[] = "wxFocusEvent";
const char LunaTraits< wxFocusEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFocusEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxFocusEvent >::hash = 9245182;
const int LunaTraits< wxFocusEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFocusEvent >::methods[] = {
	{"GetWindow", &luna_wrapper_wxFocusEvent::_bind_GetWindow},
	{"SetWindow", &luna_wrapper_wxFocusEvent::_bind_SetWindow},
	{"__eq", &luna_wrapper_wxFocusEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxFocusEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFocusEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFocusEvent >::enumValues[] = {
	{0,0}
};


