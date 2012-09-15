#include <plug_common.h>

class luna_wrapper_SDL_ExposeEvent {
public:
	typedef Luna< SDL_ExposeEvent > luna_t;

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

		SDL_ExposeEvent* self=(Luna< SDL_ExposeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_ExposeEvent");
		
		return luna_dynamicCast(L,converters,"SDL_ExposeEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_ExposeEvent* LunaTraits< SDL_ExposeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_ExposeEvent >::_bind_dtor(SDL_ExposeEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_ExposeEvent >::className[] = "SDL_ExposeEvent";
const char LunaTraits< SDL_ExposeEvent >::fullName[] = "SDL_ExposeEvent";
const char LunaTraits< SDL_ExposeEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_ExposeEvent >::parents[] = {0};
const int LunaTraits< SDL_ExposeEvent >::hash = 17901200;
const int LunaTraits< SDL_ExposeEvent >::uniqueIDs[] = {17901200,0};

luna_RegType LunaTraits< SDL_ExposeEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_ExposeEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_ExposeEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_ExposeEvent >::enumValues[] = {
	{0,0}
};


