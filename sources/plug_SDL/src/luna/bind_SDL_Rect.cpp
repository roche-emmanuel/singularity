#include <plug_common.h>

class luna_wrapper_SDL_Rect {
public:
	typedef Luna< SDL_Rect > luna_t;

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

		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Rect");
		
		return luna_dynamicCast(L,converters,"SDL_Rect",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_Rect* LunaTraits< SDL_Rect >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Rect >::_bind_dtor(SDL_Rect* obj) {
	delete obj;
}

const char LunaTraits< SDL_Rect >::className[] = "SDL_Rect";
const char LunaTraits< SDL_Rect >::fullName[] = "SDL_Rect";
const char LunaTraits< SDL_Rect >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Rect >::parents[] = {0};
const int LunaTraits< SDL_Rect >::hash = 63173412;
const int LunaTraits< SDL_Rect >::uniqueIDs[] = {63173412,0};

luna_RegType LunaTraits< SDL_Rect >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_Rect::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Rect >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Rect >::enumValues[] = {
	{0,0}
};


