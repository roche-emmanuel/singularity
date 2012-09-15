#include <plug_common.h>

class luna_wrapper_SDL_JoyHatEvent {
public:
	typedef Luna< SDL_JoyHatEvent > luna_t;

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

		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyHatEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyHatEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_JoyHatEvent* LunaTraits< SDL_JoyHatEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyHatEvent >::_bind_dtor(SDL_JoyHatEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyHatEvent >::className[] = "SDL_JoyHatEvent";
const char LunaTraits< SDL_JoyHatEvent >::fullName[] = "SDL_JoyHatEvent";
const char LunaTraits< SDL_JoyHatEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyHatEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyHatEvent >::hash = 38522231;
const int LunaTraits< SDL_JoyHatEvent >::uniqueIDs[] = {38522231,0};

luna_RegType LunaTraits< SDL_JoyHatEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_JoyHatEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyHatEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyHatEvent >::enumValues[] = {
	{0,0}
};


