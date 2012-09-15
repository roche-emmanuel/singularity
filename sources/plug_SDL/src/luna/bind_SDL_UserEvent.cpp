#include <plug_common.h>

class luna_wrapper_SDL_UserEvent {
public:
	typedef Luna< SDL_UserEvent > luna_t;

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

		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_UserEvent");
		
		return luna_dynamicCast(L,converters,"SDL_UserEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_UserEvent* LunaTraits< SDL_UserEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_UserEvent >::_bind_dtor(SDL_UserEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_UserEvent >::className[] = "SDL_UserEvent";
const char LunaTraits< SDL_UserEvent >::fullName[] = "SDL_UserEvent";
const char LunaTraits< SDL_UserEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_UserEvent >::parents[] = {0};
const int LunaTraits< SDL_UserEvent >::hash = 22520081;
const int LunaTraits< SDL_UserEvent >::uniqueIDs[] = {22520081,0};

luna_RegType LunaTraits< SDL_UserEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_UserEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_UserEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_UserEvent >::enumValues[] = {
	{0,0}
};


