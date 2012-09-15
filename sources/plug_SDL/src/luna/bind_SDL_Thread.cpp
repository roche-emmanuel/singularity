#include <plug_common.h>

class luna_wrapper_SDL_Thread {
public:
	typedef Luna< SDL_Thread > luna_t;

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

		SDL_Thread* self=(Luna< SDL_Thread >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Thread");
		
		return luna_dynamicCast(L,converters,"SDL_Thread",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_Thread* LunaTraits< SDL_Thread >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Thread >::_bind_dtor(SDL_Thread* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_Thread >::className[] = "SDL_Thread";
const char LunaTraits< SDL_Thread >::fullName[] = "SDL_Thread";
const char LunaTraits< SDL_Thread >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Thread >::parents[] = {0};
const int LunaTraits< SDL_Thread >::hash = 70107873;
const int LunaTraits< SDL_Thread >::uniqueIDs[] = {70107873,0};

luna_RegType LunaTraits< SDL_Thread >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_Thread::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Thread >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Thread >::enumValues[] = {
	{0,0}
};


