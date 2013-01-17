#include <plug_common.h>

class luna_wrapper_wxSortedArrayString {
public:
	typedef Luna< wxSortedArrayString > luna_t;

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

wxSortedArrayString* LunaTraits< wxSortedArrayString >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxSortedArrayString >::_bind_dtor(wxSortedArrayString* obj) {
	delete obj;
}

const char LunaTraits< wxSortedArrayString >::className[] = "wxSortedArrayString";
const char LunaTraits< wxSortedArrayString >::fullName[] = "wxSortedArrayString";
const char LunaTraits< wxSortedArrayString >::moduleName[] = "wx";
const char* LunaTraits< wxSortedArrayString >::parents[] = {"wx.wxArrayString", 0};
const int LunaTraits< wxSortedArrayString >::hash = 74743139;
const int LunaTraits< wxSortedArrayString >::uniqueIDs[] = {59507769,0};

luna_RegType LunaTraits< wxSortedArrayString >::methods[] = {
	{"__eq", &luna_wrapper_wxSortedArrayString::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSortedArrayString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSortedArrayString >::enumValues[] = {
	{0,0}
};


