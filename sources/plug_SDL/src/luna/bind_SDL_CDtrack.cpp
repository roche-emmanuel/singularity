#include <plug_common.h>

class luna_wrapper_SDL_CDtrack {
public:
	typedef Luna< SDL_CDtrack > luna_t;

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

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_CDtrack");
		
		return luna_dynamicCast(L,converters,"SDL_CDtrack",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_CDtrack* LunaTraits< SDL_CDtrack >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_CDtrack >::_bind_dtor(SDL_CDtrack* obj) {
	delete obj;
}

const char LunaTraits< SDL_CDtrack >::className[] = "SDL_CDtrack";
const char LunaTraits< SDL_CDtrack >::fullName[] = "SDL_CDtrack";
const char LunaTraits< SDL_CDtrack >::moduleName[] = "SDL";
const char* LunaTraits< SDL_CDtrack >::parents[] = {0};
const int LunaTraits< SDL_CDtrack >::hash = 57367836;
const int LunaTraits< SDL_CDtrack >::uniqueIDs[] = {57367836,0};

luna_RegType LunaTraits< SDL_CDtrack >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_CDtrack::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_CDtrack >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_CDtrack >::enumValues[] = {
	{0,0}
};


