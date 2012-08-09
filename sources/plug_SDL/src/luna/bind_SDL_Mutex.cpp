#include <plug_common.h>

class luna_wrapper_SDL_mutex {
public:
	typedef Luna< SDL_mutex > luna_t;

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

		SDL_mutex* self=(Luna< SDL_mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_mutex");
		
		return luna_dynamicCast(L,converters,"SDL_mutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_mutex* LunaTraits< SDL_mutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_mutex >::_bind_dtor(SDL_mutex* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_mutex >::className[] = "SDL_mutex";
const char LunaTraits< SDL_mutex >::fullName[] = "SDL_mutex";
const char LunaTraits< SDL_mutex >::moduleName[] = "SDL";
const char* LunaTraits< SDL_mutex >::parents[] = {0};
const int LunaTraits< SDL_mutex >::uniqueIDs[] = {83803316,0};

luna_RegType LunaTraits< SDL_mutex >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_mutex::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_mutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_mutex >::enumValues[] = {
	{0,0}
};

