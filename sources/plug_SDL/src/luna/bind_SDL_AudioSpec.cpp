#include <plug_common.h>

class luna_wrapper_SDL_AudioSpec {
public:
	typedef Luna< SDL_AudioSpec > luna_t;

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

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_AudioSpec");
		
		return luna_dynamicCast(L,converters,"SDL_AudioSpec",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_void(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for '1 *'
		////////////////////////////////////////////////////////////////////
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	static int _bind_void(lua_State *L) {
		if (!_lg_typecheck_void(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void function, expected prototype:\nvoid(1 *)");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for '1 *' baseTypeName is '1'
		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		// ERROR: Invalid return type object for function 'SDL_AudioSpec::void'
		////////////////////////////////////////////////////////////////////
		return 0;
	}


	// Operator binds:

};

SDL_AudioSpec* LunaTraits< SDL_AudioSpec >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_AudioSpec >::_bind_dtor(SDL_AudioSpec* obj) {
	delete obj;
}

const char LunaTraits< SDL_AudioSpec >::className[] = "SDL_AudioSpec";
const char LunaTraits< SDL_AudioSpec >::fullName[] = "SDL_AudioSpec";
const char LunaTraits< SDL_AudioSpec >::moduleName[] = "SDL";
const char* LunaTraits< SDL_AudioSpec >::parents[] = {0};
const int LunaTraits< SDL_AudioSpec >::uniqueIDs[] = {21280544,0};

luna_RegType LunaTraits< SDL_AudioSpec >::methods[] = {
	{"void", &luna_wrapper_SDL_AudioSpec::_bind_void},
	{"dynCast", &luna_wrapper_SDL_AudioSpec::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_AudioSpec >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_AudioSpec >::enumValues[] = {
	{0,0}
};


