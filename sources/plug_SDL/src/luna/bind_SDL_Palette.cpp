#include <plug_common.h>

class luna_wrapper_SDL_Palette {
public:
	typedef Luna< SDL_Palette > luna_t;

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

		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Palette");
		
		return luna_dynamicCast(L,converters,"SDL_Palette",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_Palette* LunaTraits< SDL_Palette >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Palette >::_bind_dtor(SDL_Palette* obj) {
	delete obj;
}

const char LunaTraits< SDL_Palette >::className[] = "SDL_Palette";
const char LunaTraits< SDL_Palette >::fullName[] = "SDL_Palette";
const char LunaTraits< SDL_Palette >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Palette >::parents[] = {0};
const int LunaTraits< SDL_Palette >::uniqueIDs[] = {17403157,0};

luna_RegType LunaTraits< SDL_Palette >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_Palette::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Palette >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Palette >::enumValues[] = {
	{0,0}
};


