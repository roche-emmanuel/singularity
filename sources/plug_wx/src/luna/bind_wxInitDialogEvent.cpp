#include <plug_common.h>

class luna_wrapper_wxInitDialogEvent {
public:
	typedef Luna< wxInitDialogEvent > luna_t;

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
		wxInitDialogEvent* ptr= dynamic_cast< wxInitDialogEvent* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxInitDialogEvent >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

wxInitDialogEvent* LunaTraits< wxInitDialogEvent >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const

	// Abstract operators:
}

void LunaTraits< wxInitDialogEvent >::_bind_dtor(wxInitDialogEvent* obj) {
	delete obj;
}

const char LunaTraits< wxInitDialogEvent >::className[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::fullName[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::moduleName[] = "wx";
const char* LunaTraits< wxInitDialogEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxInitDialogEvent >::hash = 96243584;
const int LunaTraits< wxInitDialogEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxInitDialogEvent >::methods[] = {
	{"__eq", &luna_wrapper_wxInitDialogEvent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxInitDialogEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxInitDialogEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxInitDialogEvent >::enumValues[] = {
	{0,0}
};


