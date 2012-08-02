#include <plug_common.h>

class luna_wrapper_SDL_SysWMEvent {
public:
	typedef Luna< SDL_SysWMEvent > luna_t;

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

		SDL_SysWMEvent* self=(Luna< SDL_SysWMEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_SysWMEvent");
		
		return luna_dynamicCast(L,converters,"SDL_SysWMEvent",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_SysWMEvent* LunaTraits< SDL_SysWMEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_SysWMEvent >::_bind_dtor(SDL_SysWMEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_SysWMEvent >::className[] = "SDL_SysWMEvent";
const char LunaTraits< SDL_SysWMEvent >::fullName[] = "SDL_SysWMEvent";
const char LunaTraits< SDL_SysWMEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_SysWMEvent >::parents[] = {0};
const int LunaTraits< SDL_SysWMEvent >::uniqueIDs[] = {2590390,0};

luna_RegType LunaTraits< SDL_SysWMEvent >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_SysWMEvent::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_SysWMEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_SysWMEvent >::enumValues[] = {
	{0,0}
};


