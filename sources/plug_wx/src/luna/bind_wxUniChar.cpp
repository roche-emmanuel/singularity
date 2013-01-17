#include <plug_common.h>

class luna_wrapper_wxUniChar {
public:
	typedef Luna< wxUniChar > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27861770) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxUniChar*)");
		}

		wxUniChar* rhs =(Luna< wxUniChar >::check(L,2));
		wxUniChar* self=(Luna< wxUniChar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxUniChar* self=(Luna< wxUniChar >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxUniChar");
		
		return luna_dynamicCast(L,converters,"wxUniChar",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxUniChar* LunaTraits< wxUniChar >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxUniChar >::_bind_dtor(wxUniChar* obj) {
	delete obj;
}

const char LunaTraits< wxUniChar >::className[] = "wxUniChar";
const char LunaTraits< wxUniChar >::fullName[] = "wxUniChar";
const char LunaTraits< wxUniChar >::moduleName[] = "wx";
const char* LunaTraits< wxUniChar >::parents[] = {0};
const int LunaTraits< wxUniChar >::hash = 27861770;
const int LunaTraits< wxUniChar >::uniqueIDs[] = {27861770,0};

luna_RegType LunaTraits< wxUniChar >::methods[] = {
	{"dynCast", &luna_wrapper_wxUniChar::_bind_dynCast},
	{"__eq", &luna_wrapper_wxUniChar::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxUniChar >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxUniChar >::enumValues[] = {
	{0,0}
};


