#include <plug_common.h>

class luna_wrapper_SDL_keysym {
public:
	typedef Luna< SDL_keysym > luna_t;

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

		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_keysym");
		
		return luna_dynamicCast(L,converters,"SDL_keysym",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_keysym* LunaTraits< SDL_keysym >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_keysym >::_bind_dtor(SDL_keysym* obj) {
	delete obj;
}

const char LunaTraits< SDL_keysym >::className[] = "SDL_keysym";
const char LunaTraits< SDL_keysym >::fullName[] = "SDL_keysym";
const char LunaTraits< SDL_keysym >::moduleName[] = "SDL";
const char* LunaTraits< SDL_keysym >::parents[] = {0};
const int LunaTraits< SDL_keysym >::hash = 26030457;
const int LunaTraits< SDL_keysym >::uniqueIDs[] = {26030457,0};

luna_RegType LunaTraits< SDL_keysym >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_keysym::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_keysym >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_keysym >::enumValues[] = {
	{0,0}
};


