#include <plug_common.h>

class luna_wrapper_wxMouseState {
public:
	typedef Luna< wxMouseState > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92036952) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxKeyboardState*)");
		}

		wxKeyboardState* rhs =(Luna< wxKeyboardState >::check(L,2));
		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
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

wxMouseState* LunaTraits< wxMouseState >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMouseState >::_bind_dtor(wxMouseState* obj) {
	delete obj;
}

const char LunaTraits< wxMouseState >::className[] = "wxMouseState";
const char LunaTraits< wxMouseState >::fullName[] = "wxMouseState";
const char LunaTraits< wxMouseState >::moduleName[] = "wx";
const char* LunaTraits< wxMouseState >::parents[] = {"wx.wxKeyboardState", 0};
const int LunaTraits< wxMouseState >::hash = 13611458;
const int LunaTraits< wxMouseState >::uniqueIDs[] = {92036952,0};

luna_RegType LunaTraits< wxMouseState >::methods[] = {
	{"__eq", &luna_wrapper_wxMouseState::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseState >::enumValues[] = {
	{0,0}
};


