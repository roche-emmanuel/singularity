#include <plug_common.h>

class luna_wrapper_SDL_ActiveEvent {
public:
	typedef Luna< SDL_ActiveEvent > luna_t;

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

		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_ActiveEvent");
		
		return luna_dynamicCast(L,converters,"SDL_ActiveEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_ActiveEvent* LunaTraits< SDL_ActiveEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_ActiveEvent >::_bind_dtor(SDL_ActiveEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_ActiveEvent >::className[] = "SDL_ActiveEvent";
const char LunaTraits< SDL_ActiveEvent >::fullName[] = "SDL_ActiveEvent";
const char LunaTraits< SDL_ActiveEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_ActiveEvent >::parents[] = {0};
const int LunaTraits< SDL_ActiveEvent >::hash = 47816679;
const int LunaTraits< SDL_ActiveEvent >::uniqueIDs[] = {47816679,0};

luna_RegType LunaTraits< SDL_ActiveEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_ActiveEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_ActiveEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_ActiveEvent >::enumValues[] = {
	{0,0}
};


