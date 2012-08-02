#include <plug_common.h>

class luna_wrapper_SDL_Event {
public:
	typedef Luna< SDL_Event > luna_t;

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

		SDL_Event* self=(Luna< SDL_Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Event");
		
		return luna_dynamicCast(L,converters,"SDL_Event",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_Event* LunaTraits< SDL_Event >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Event >::_bind_dtor(SDL_Event* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_Event >::className[] = "SDL_Event";
const char LunaTraits< SDL_Event >::fullName[] = "SDL_Event";
const char LunaTraits< SDL_Event >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Event >::parents[] = {0};
const int LunaTraits< SDL_Event >::uniqueIDs[] = {46878127,0};

luna_RegType LunaTraits< SDL_Event >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_Event::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Event >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Event >::enumValues[] = {
	{0,0}
};


