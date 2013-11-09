#include <plug_common.h>

class luna_wrapper_SDL_Color {
public:
	typedef Luna< SDL_Color > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44829304) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Color*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Color* rhs =(Luna< SDL_Color >::check(L,2));
		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
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

		SDL_Color* self= (SDL_Color*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Color >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44829304) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Color >::check(L,1));
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

		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Color");
		
		return luna_dynamicCast(L,converters,"SDL_Color",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getG(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setG(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_Color::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_Color::r() function, expected prototype:\nunsigned char SDL_Color::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_Color::r(). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->r;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_Color::g()
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_Color::g() function, expected prototype:\nunsigned char SDL_Color::g()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_Color::g(). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->g;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_Color::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_Color::b() function, expected prototype:\nunsigned char SDL_Color::b()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_Color::b(). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->b;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_Color::unused()
	static int _bind_getUnused(lua_State *L) {
		if (!_lg_typecheck_getUnused(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_Color::unused() function, expected prototype:\nunsigned char SDL_Color::unused()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_Color::unused(). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->unused;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_Color::r(unsigned char value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Color::r(unsigned char value) function, expected prototype:\nvoid SDL_Color::r(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Color::r(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r = value;

		return 0;
	}

	// void SDL_Color::g(unsigned char value)
	static int _bind_setG(lua_State *L) {
		if (!_lg_typecheck_setG(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Color::g(unsigned char value) function, expected prototype:\nvoid SDL_Color::g(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Color::g(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->g = value;

		return 0;
	}

	// void SDL_Color::b(unsigned char value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Color::b(unsigned char value) function, expected prototype:\nvoid SDL_Color::b(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Color::b(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->b = value;

		return 0;
	}

	// void SDL_Color::unused(unsigned char value)
	static int _bind_setUnused(lua_State *L) {
		if (!_lg_typecheck_setUnused(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Color::unused(unsigned char value) function, expected prototype:\nvoid SDL_Color::unused(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Color* self=(Luna< SDL_Color >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Color::unused(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_Color >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused = value;

		return 0;
	}


	// Operator binds:

};

SDL_Color* LunaTraits< SDL_Color >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Color >::_bind_dtor(SDL_Color* obj) {
	delete obj;
}

const char LunaTraits< SDL_Color >::className[] = "SDL_Color";
const char LunaTraits< SDL_Color >::fullName[] = "SDL_Color";
const char LunaTraits< SDL_Color >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Color >::parents[] = {0};
const int LunaTraits< SDL_Color >::hash = 44829304;
const int LunaTraits< SDL_Color >::uniqueIDs[] = {44829304,0};

luna_RegType LunaTraits< SDL_Color >::methods[] = {
	{"getR", &luna_wrapper_SDL_Color::_bind_getR},
	{"getG", &luna_wrapper_SDL_Color::_bind_getG},
	{"getB", &luna_wrapper_SDL_Color::_bind_getB},
	{"getUnused", &luna_wrapper_SDL_Color::_bind_getUnused},
	{"setR", &luna_wrapper_SDL_Color::_bind_setR},
	{"setG", &luna_wrapper_SDL_Color::_bind_setG},
	{"setB", &luna_wrapper_SDL_Color::_bind_setB},
	{"setUnused", &luna_wrapper_SDL_Color::_bind_setUnused},
	{"dynCast", &luna_wrapper_SDL_Color::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Color::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Color::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Color::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Color >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Color >::enumValues[] = {
	{0,0}
};


