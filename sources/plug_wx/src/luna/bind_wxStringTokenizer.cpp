#include <plug_common.h>

class luna_wrapper_wxStringTokenizer {
public:
	typedef Luna< wxStringTokenizer > luna_t;

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
		wxStringTokenizer* ptr= dynamic_cast< wxStringTokenizer* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStringTokenizer >::push(L,ptr,false);
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

wxStringTokenizer* LunaTraits< wxStringTokenizer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStringTokenizer >::_bind_dtor(wxStringTokenizer* obj) {
	delete obj;
}

const char LunaTraits< wxStringTokenizer >::className[] = "wxStringTokenizer";
const char LunaTraits< wxStringTokenizer >::fullName[] = "wxStringTokenizer";
const char LunaTraits< wxStringTokenizer >::moduleName[] = "wx";
const char* LunaTraits< wxStringTokenizer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxStringTokenizer >::hash = 85016560;
const int LunaTraits< wxStringTokenizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStringTokenizer >::methods[] = {
	{"__eq", &luna_wrapper_wxStringTokenizer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxStringTokenizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxStringTokenizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStringTokenizer >::enumValues[] = {
	{0,0}
};


