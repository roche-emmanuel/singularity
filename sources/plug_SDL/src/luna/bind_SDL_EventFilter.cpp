#include <plug_common.h>

class luna_wrapper_SDL_EventFilter {
public:
	typedef Luna< SDL_EventFilter > luna_t;

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

		SDL_EventFilter* self=(Luna< SDL_EventFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_EventFilter");
		
		return luna_dynamicCast(L,converters,"SDL_EventFilter",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_EventFilter* LunaTraits< SDL_EventFilter >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_EventFilter >::_bind_dtor(SDL_EventFilter* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_EventFilter >::className[] = "SDL_EventFilter";
const char LunaTraits< SDL_EventFilter >::fullName[] = "SDL_EventFilter";
const char LunaTraits< SDL_EventFilter >::moduleName[] = "SDL";
const char* LunaTraits< SDL_EventFilter >::parents[] = {0};
const int LunaTraits< SDL_EventFilter >::hash = 99065423;
const int LunaTraits< SDL_EventFilter >::uniqueIDs[] = {99065423,0};

luna_RegType LunaTraits< SDL_EventFilter >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_EventFilter::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_EventFilter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_EventFilter >::enumValues[] = {
	{0,0}
};


