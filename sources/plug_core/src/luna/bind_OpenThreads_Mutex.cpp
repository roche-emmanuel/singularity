#include <plug_common.h>

class luna_wrapper_OpenThreads_Mutex {
public:
	typedef Luna< OpenThreads::Mutex > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3168391) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Mutex*)");
		}

		OpenThreads::Mutex* rhs =(Luna< OpenThreads::Mutex >::check(L,2));
		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
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

		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Mutex");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Mutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

OpenThreads::Mutex* LunaTraits< OpenThreads::Mutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OpenThreads::Mutex >::_bind_dtor(OpenThreads::Mutex* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Mutex >::className[] = "Mutex";
const char LunaTraits< OpenThreads::Mutex >::fullName[] = "OpenThreads::Mutex";
const char LunaTraits< OpenThreads::Mutex >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Mutex >::parents[] = {0};
const int LunaTraits< OpenThreads::Mutex >::hash = 3168391;
const int LunaTraits< OpenThreads::Mutex >::uniqueIDs[] = {3168391,0};

luna_RegType LunaTraits< OpenThreads::Mutex >::methods[] = {
	{"dynCast", &luna_wrapper_OpenThreads_Mutex::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Mutex::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Mutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Mutex >::enumValues[] = {
	{0,0}
};


