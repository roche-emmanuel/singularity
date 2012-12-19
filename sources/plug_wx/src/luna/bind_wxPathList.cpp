#include <plug_common.h>

class luna_wrapper_wxPathList {
public:
	typedef Luna< wxPathList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59507769) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxArrayString*)");
		}

		wxArrayString* rhs =(Luna< wxArrayString >::check(L,2));
		wxArrayString* self=(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxPathList* LunaTraits< wxPathList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxPathList >::_bind_dtor(wxPathList* obj) {
	delete obj;
}

const char LunaTraits< wxPathList >::className[] = "wxPathList";
const char LunaTraits< wxPathList >::fullName[] = "wxPathList";
const char LunaTraits< wxPathList >::moduleName[] = "wx";
const char* LunaTraits< wxPathList >::parents[] = {"wx.wxArrayString", 0};
const int LunaTraits< wxPathList >::hash = 11372467;
const int LunaTraits< wxPathList >::uniqueIDs[] = {59507769,0};

luna_RegType LunaTraits< wxPathList >::methods[] = {
	{"__eq", &luna_wrapper_wxPathList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxPathList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPathList >::enumValues[] = {
	{0,0}
};


