#include <plug_common.h>

class luna_wrapper_SDL_AudioCVT {
public:
	typedef Luna< SDL_AudioCVT > luna_t;

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

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_AudioCVT");
		
		return luna_dynamicCast(L,converters,"SDL_AudioCVT",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_AudioCVT* LunaTraits< SDL_AudioCVT >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_AudioCVT >::_bind_dtor(SDL_AudioCVT* obj) {
	delete obj;
}

const char LunaTraits< SDL_AudioCVT >::className[] = "SDL_AudioCVT";
const char LunaTraits< SDL_AudioCVT >::fullName[] = "SDL_AudioCVT";
const char LunaTraits< SDL_AudioCVT >::moduleName[] = "SDL";
const char* LunaTraits< SDL_AudioCVT >::parents[] = {0};
const int LunaTraits< SDL_AudioCVT >::uniqueIDs[] = {74863825,0};

luna_RegType LunaTraits< SDL_AudioCVT >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_AudioCVT::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_AudioCVT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_AudioCVT >::enumValues[] = {
	{0,0}
};


