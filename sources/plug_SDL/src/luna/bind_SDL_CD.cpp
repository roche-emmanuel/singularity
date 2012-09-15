#include <plug_common.h>

class luna_wrapper_SDL_CD {
public:
	typedef Luna< SDL_CD > luna_t;

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

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_CD");
		
		return luna_dynamicCast(L,converters,"SDL_CD",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_CD* LunaTraits< SDL_CD >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_CD >::_bind_dtor(SDL_CD* obj) {
	delete obj;
}

const char LunaTraits< SDL_CD >::className[] = "SDL_CD";
const char LunaTraits< SDL_CD >::fullName[] = "SDL_CD";
const char LunaTraits< SDL_CD >::moduleName[] = "SDL";
const char* LunaTraits< SDL_CD >::parents[] = {0};
const int LunaTraits< SDL_CD >::hash = 41376373;
const int LunaTraits< SDL_CD >::uniqueIDs[] = {41376373,0};

luna_RegType LunaTraits< SDL_CD >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_CD::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_CD >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_CD >::enumValues[] = {
	{0,0}
};


