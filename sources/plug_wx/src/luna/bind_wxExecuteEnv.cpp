#include <plug_common.h>

class luna_wrapper_wxExecuteEnv {
public:
	typedef Luna< wxExecuteEnv > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57480074) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxExecuteEnv*)");
		}

		wxExecuteEnv* rhs =(Luna< wxExecuteEnv >::check(L,2));
		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
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

		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxExecuteEnv");
		
		return luna_dynamicCast(L,converters,"wxExecuteEnv",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxExecuteEnv* LunaTraits< wxExecuteEnv >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxExecuteEnv >::_bind_dtor(wxExecuteEnv* obj) {
	delete obj;
}

const char LunaTraits< wxExecuteEnv >::className[] = "wxExecuteEnv";
const char LunaTraits< wxExecuteEnv >::fullName[] = "wxExecuteEnv";
const char LunaTraits< wxExecuteEnv >::moduleName[] = "wx";
const char* LunaTraits< wxExecuteEnv >::parents[] = {0};
const int LunaTraits< wxExecuteEnv >::hash = 57480074;
const int LunaTraits< wxExecuteEnv >::uniqueIDs[] = {57480074,0};

luna_RegType LunaTraits< wxExecuteEnv >::methods[] = {
	{"dynCast", &luna_wrapper_wxExecuteEnv::_bind_dynCast},
	{"__eq", &luna_wrapper_wxExecuteEnv::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxExecuteEnv >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxExecuteEnv >::enumValues[] = {
	{0,0}
};


