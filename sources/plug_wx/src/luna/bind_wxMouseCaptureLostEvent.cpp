#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMouseCaptureLostEvent.h>

class luna_wrapper_wxMouseCaptureLostEvent {
public:
	typedef Luna< wxMouseCaptureLostEvent > luna_t;

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
		wxMouseCaptureLostEvent* ptr= dynamic_cast< wxMouseCaptureLostEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseCaptureLostEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxMouseCaptureLostEvent* LunaTraits< wxMouseCaptureLostEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMouseCaptureLostEvent >::_bind_dtor(wxMouseCaptureLostEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMouseCaptureLostEvent >::className[] = "wxMouseCaptureLostEvent";
const char LunaTraits< wxMouseCaptureLostEvent >::fullName[] = "wxMouseCaptureLostEvent";
const char LunaTraits< wxMouseCaptureLostEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMouseCaptureLostEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMouseCaptureLostEvent >::hash = 86144117;
const int LunaTraits< wxMouseCaptureLostEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMouseCaptureLostEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxMouseCaptureLostEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseCaptureLostEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseCaptureLostEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseCaptureLostEvent >::enumValues[] = {
	{0,0}
};


