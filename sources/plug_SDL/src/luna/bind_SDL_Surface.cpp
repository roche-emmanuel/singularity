#include <plug_common.h>

class luna_wrapper_SDL_Surface {
public:
	typedef Luna< SDL_Surface > luna_t;

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

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Surface");
		
		return luna_dynamicCast(L,converters,"SDL_Surface",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_Surface* LunaTraits< SDL_Surface >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Surface >::_bind_dtor(SDL_Surface* obj) {
	delete obj;
}

const char LunaTraits< SDL_Surface >::className[] = "SDL_Surface";
const char LunaTraits< SDL_Surface >::fullName[] = "SDL_Surface";
const char LunaTraits< SDL_Surface >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Surface >::parents[] = {0};
const int LunaTraits< SDL_Surface >::uniqueIDs[] = {58049030,0};

luna_RegType LunaTraits< SDL_Surface >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_Surface::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Surface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Surface >::enumValues[] = {
	{0,0}
};


