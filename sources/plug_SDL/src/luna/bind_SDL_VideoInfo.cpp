#include <plug_common.h>

class luna_wrapper_SDL_VideoInfo {
public:
	typedef Luna< SDL_VideoInfo > luna_t;

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

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_VideoInfo");
		
		return luna_dynamicCast(L,converters,"SDL_VideoInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_VideoInfo* LunaTraits< SDL_VideoInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_VideoInfo >::_bind_dtor(SDL_VideoInfo* obj) {
	delete obj;
}

const char LunaTraits< SDL_VideoInfo >::className[] = "SDL_VideoInfo";
const char LunaTraits< SDL_VideoInfo >::fullName[] = "SDL_VideoInfo";
const char LunaTraits< SDL_VideoInfo >::moduleName[] = "SDL";
const char* LunaTraits< SDL_VideoInfo >::parents[] = {0};
const int LunaTraits< SDL_VideoInfo >::uniqueIDs[] = {65126038,0};

luna_RegType LunaTraits< SDL_VideoInfo >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_VideoInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_VideoInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_VideoInfo >::enumValues[] = {
	{0,0}
};


