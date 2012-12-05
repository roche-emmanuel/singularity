#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGraphicsObject.h>

class luna_wrapper_wxGraphicsObject {
public:
	typedef Luna< wxGraphicsObject > luna_t;

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
		wxGraphicsObject* ptr= dynamic_cast< wxGraphicsObject* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsObject >::push(L,ptr,false);
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

wxGraphicsObject* LunaTraits< wxGraphicsObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGraphicsObject >::_bind_dtor(wxGraphicsObject* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsObject >::className[] = "wxGraphicsObject";
const char LunaTraits< wxGraphicsObject >::fullName[] = "wxGraphicsObject";
const char LunaTraits< wxGraphicsObject >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsObject >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGraphicsObject >::hash = 94320851;
const int LunaTraits< wxGraphicsObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsObject >::methods[] = {
	{"__eq", &luna_wrapper_wxGraphicsObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsObject >::enumValues[] = {
	{0,0}
};


