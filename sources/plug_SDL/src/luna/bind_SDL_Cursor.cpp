#include <plug_common.h>

class luna_wrapper_SDL_Cursor {
public:
	typedef Luna< SDL_Cursor > luna_t;

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

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Cursor");
		
		return luna_dynamicCast(L,converters,"SDL_Cursor",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_Cursor* LunaTraits< SDL_Cursor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Cursor >::_bind_dtor(SDL_Cursor* obj) {
	delete obj;
}

const char LunaTraits< SDL_Cursor >::className[] = "SDL_Cursor";
const char LunaTraits< SDL_Cursor >::fullName[] = "SDL_Cursor";
const char LunaTraits< SDL_Cursor >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Cursor >::parents[] = {0};
const int LunaTraits< SDL_Cursor >::uniqueIDs[] = {95432031,0};

luna_RegType LunaTraits< SDL_Cursor >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_Cursor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Cursor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Cursor >::enumValues[] = {
	{0,0}
};


