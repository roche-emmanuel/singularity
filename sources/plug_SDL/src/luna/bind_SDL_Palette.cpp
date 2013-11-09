#include <plug_common.h>

class luna_wrapper_SDL_Palette {
public:
	typedef Luna< SDL_Palette > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17403157) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Palette*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Palette* rhs =(Luna< SDL_Palette >::check(L,2));
		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Palette* self= (SDL_Palette*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Palette >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17403157) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Palette");
		
		return luna_dynamicCast(L,converters,"SDL_Palette",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNcolors(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColors(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNcolors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44829304)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int SDL_Palette::ncolors()
	static int _bind_getNcolors(lua_State *L) {
		if (!_lg_typecheck_getNcolors(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Palette::ncolors() function, expected prototype:\nint SDL_Palette::ncolors()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Palette::ncolors(). Got : '%s'\n%s",typeid(Luna< SDL_Palette >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ncolors;
		lua_pushnumber(L,lret);

		return 1;
	}

	// SDL_Color * SDL_Palette::colors()
	static int _bind_getColors(lua_State *L) {
		if (!_lg_typecheck_getColors(L)) {
			luaL_error(L, "luna typecheck failed in SDL_Color * SDL_Palette::colors() function, expected prototype:\nSDL_Color * SDL_Palette::colors()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_Color * SDL_Palette::colors(). Got : '%s'\n%s",typeid(Luna< SDL_Palette >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SDL_Color * lret = self->colors;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_Color >::push(L,lret,false);

		return 1;
	}

	// void SDL_Palette::ncolors(int value)
	static int _bind_setNcolors(lua_State *L) {
		if (!_lg_typecheck_setNcolors(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Palette::ncolors(int value) function, expected prototype:\nvoid SDL_Palette::ncolors(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Palette::ncolors(int). Got : '%s'\n%s",typeid(Luna< SDL_Palette >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ncolors = value;

		return 0;
	}

	// void SDL_Palette::colors(SDL_Color * value)
	static int _bind_setColors(lua_State *L) {
		if (!_lg_typecheck_setColors(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Palette::colors(SDL_Color * value) function, expected prototype:\nvoid SDL_Palette::colors(SDL_Color * value)\nClass arguments details:\narg 1 ID = 44829304\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Color* value=(Luna< SDL_Color >::check(L,2));

		SDL_Palette* self=(Luna< SDL_Palette >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Palette::colors(SDL_Color *). Got : '%s'\n%s",typeid(Luna< SDL_Palette >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->colors = value;

		return 0;
	}


	// Operator binds:

};

SDL_Palette* LunaTraits< SDL_Palette >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Palette >::_bind_dtor(SDL_Palette* obj) {
	delete obj;
}

const char LunaTraits< SDL_Palette >::className[] = "SDL_Palette";
const char LunaTraits< SDL_Palette >::fullName[] = "SDL_Palette";
const char LunaTraits< SDL_Palette >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Palette >::parents[] = {0};
const int LunaTraits< SDL_Palette >::hash = 17403157;
const int LunaTraits< SDL_Palette >::uniqueIDs[] = {17403157,0};

luna_RegType LunaTraits< SDL_Palette >::methods[] = {
	{"getNcolors", &luna_wrapper_SDL_Palette::_bind_getNcolors},
	{"getColors", &luna_wrapper_SDL_Palette::_bind_getColors},
	{"setNcolors", &luna_wrapper_SDL_Palette::_bind_setNcolors},
	{"setColors", &luna_wrapper_SDL_Palette::_bind_setColors},
	{"dynCast", &luna_wrapper_SDL_Palette::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Palette::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Palette::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Palette::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Palette >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Palette >::enumValues[] = {
	{0,0}
};


