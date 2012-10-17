#include <plug_common.h>

class luna_wrapper_wxGraphicsPen {
public:
	typedef Luna< wxGraphicsPen > luna_t;

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
		wxGraphicsPen* ptr= dynamic_cast< wxGraphicsPen* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsPen >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxGraphicsPen* LunaTraits< wxGraphicsPen >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsPen >::_bind_dtor(wxGraphicsPen* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsPen >::className[] = "wxGraphicsPen";
const char LunaTraits< wxGraphicsPen >::fullName[] = "wxGraphicsPen";
const char LunaTraits< wxGraphicsPen >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsPen >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsPen >::hash = 65389749;
const int LunaTraits< wxGraphicsPen >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsPen >::methods[] = {
	{"__eq", &luna_wrapper_wxGraphicsPen::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsPen >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsPen::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsPen >::enumValues[] = {
	{0,0}
};


