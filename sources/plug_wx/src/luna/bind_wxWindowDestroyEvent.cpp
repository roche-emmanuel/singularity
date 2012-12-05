#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindowDestroyEvent.h>

class luna_wrapper_wxWindowDestroyEvent {
public:
	typedef Luna< wxWindowDestroyEvent > luna_t;

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
	{"__eq", &luna_wrapper_wxWindowDestroyEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowDestroyEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindowDestroyEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowDestroyEvent >::enumValues[] = {
	{0,0}
};


