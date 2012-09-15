#include <plug_common.h>

class luna_wrapper_SDL_JoyBallEvent {
public:
	typedef Luna< SDL_JoyBallEvent > luna_t;

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

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyBallEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyBallEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_JoyBallEvent* LunaTraits< SDL_JoyBallEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyBallEvent >::_bind_dtor(SDL_JoyBallEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyBallEvent >::className[] = "SDL_JoyBallEvent";
const char LunaTraits< SDL_JoyBallEvent >::fullName[] = "SDL_JoyBallEvent";
const char LunaTraits< SDL_JoyBallEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyBallEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyBallEvent >::hash = 20374949;
const int LunaTraits< SDL_JoyBallEvent >::uniqueIDs[] = {20374949,0};

luna_RegType LunaTraits< SDL_JoyBallEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_JoyBallEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyBallEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyBallEvent >::enumValues[] = {
	{0,0}
};


