#include <plug_common.h>

class luna_wrapper_SDL_JoyAxisEvent {
public:
	typedef Luna< SDL_JoyAxisEvent > luna_t;

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

		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyAxisEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyAxisEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_JoyAxisEvent* LunaTraits< SDL_JoyAxisEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyAxisEvent >::_bind_dtor(SDL_JoyAxisEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyAxisEvent >::className[] = "SDL_JoyAxisEvent";
const char LunaTraits< SDL_JoyAxisEvent >::fullName[] = "SDL_JoyAxisEvent";
const char LunaTraits< SDL_JoyAxisEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyAxisEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyAxisEvent >::hash = 57386537;
const int LunaTraits< SDL_JoyAxisEvent >::uniqueIDs[] = {57386537,0};

luna_RegType LunaTraits< SDL_JoyAxisEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_JoyAxisEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyAxisEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyAxisEvent >::enumValues[] = {
	{0,0}
};


