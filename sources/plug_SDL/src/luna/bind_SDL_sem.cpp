#include <plug_common.h>

class luna_wrapper_SDL_sem {
public:
	typedef Luna< SDL_sem > luna_t;

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

		SDL_sem* self=(Luna< SDL_sem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_sem");
		
		return luna_dynamicCast(L,converters,"SDL_sem",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_sem* LunaTraits< SDL_sem >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_sem >::_bind_dtor(SDL_sem* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_sem >::className[] = "SDL_sem";
const char LunaTraits< SDL_sem >::fullName[] = "SDL_sem";
const char LunaTraits< SDL_sem >::moduleName[] = "SDL";
const char* LunaTraits< SDL_sem >::parents[] = {0};
const int LunaTraits< SDL_sem >::uniqueIDs[] = {82714739,0};

luna_RegType LunaTraits< SDL_sem >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_sem::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_sem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_sem >::enumValues[] = {
	{0,0}
};


