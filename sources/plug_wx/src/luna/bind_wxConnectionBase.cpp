#include <plug_common.h>

#include <luna/wrappers/wrapper_wxConnectionBase.h>

class luna_wrapper_wxConnectionBase {
public:
	typedef Luna< wxConnectionBase > luna_t;

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
		wxConnectionBase* ptr= dynamic_cast< wxConnectionBase* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxConnectionBase >::push(L,ptr,false);
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

wxConnectionBase* LunaTraits< wxConnectionBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxConnectionBase >::_bind_dtor(wxConnectionBase* obj) {
	delete obj;
}

const char LunaTraits< wxConnectionBase >::className[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::fullName[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::moduleName[] = "wx";
const char* LunaTraits< wxConnectionBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxConnectionBase >::hash = 67238063;
const int LunaTraits< wxConnectionBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxConnectionBase >::methods[] = {
	{"__eq", &luna_wrapper_wxConnectionBase::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxConnectionBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxConnectionBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxConnectionBase >::enumValues[] = {
	{0,0}
};


