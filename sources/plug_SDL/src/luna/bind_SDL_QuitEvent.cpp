#include <plug_common.h>

class luna_wrapper_SDL_QuitEvent {
public:
	typedef Luna< SDL_QuitEvent > luna_t;

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

		SDL_QuitEvent* self=(Luna< SDL_QuitEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_QuitEvent");
		
		return luna_dynamicCast(L,converters,"SDL_QuitEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_QuitEvent* LunaTraits< SDL_QuitEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_QuitEvent >::_bind_dtor(SDL_QuitEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_QuitEvent >::className[] = "SDL_QuitEvent";
const char LunaTraits< SDL_QuitEvent >::fullName[] = "SDL_QuitEvent";
const char LunaTraits< SDL_QuitEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_QuitEvent >::parents[] = {0};
const int LunaTraits< SDL_QuitEvent >::hash = 91180727;
const int LunaTraits< SDL_QuitEvent >::uniqueIDs[] = {91180727,0};

luna_RegType LunaTraits< SDL_QuitEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_QuitEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_QuitEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_QuitEvent >::enumValues[] = {
	{0,0}
};


