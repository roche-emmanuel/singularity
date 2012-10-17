#include <plug_common.h>

class luna_wrapper_wxTaskBarIconEvent {
public:
	typedef Luna< wxTaskBarIconEvent > luna_t;

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
		wxTaskBarIconEvent* ptr= dynamic_cast< wxTaskBarIconEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTaskBarIconEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxTaskBarIconEvent* LunaTraits< wxTaskBarIconEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxTaskBarIconEvent >::_bind_dtor(wxTaskBarIconEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTaskBarIconEvent >::className[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::fullName[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTaskBarIconEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxTaskBarIconEvent >::hash = 93929872;
const int LunaTraits< wxTaskBarIconEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTaskBarIconEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxTaskBarIconEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTaskBarIconEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTaskBarIconEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTaskBarIconEvent >::enumValues[] = {
	{0,0}
};


