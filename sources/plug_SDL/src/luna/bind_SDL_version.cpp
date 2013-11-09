#include <plug_common.h>

class luna_wrapper_SDL_version {
public:
	typedef Luna< SDL_version > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63003745) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_version*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_version* rhs =(Luna< SDL_version >::check(L,2));
		SDL_version* self=(Luna< SDL_version >::check(L,1));
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

		SDL_version* self= (SDL_version*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_version >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63003745) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_version >::check(L,1));
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

		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_version");
		
		return luna_dynamicCast(L,converters,"SDL_version",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMajor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMajor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPatch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_version::major()
	static int _bind_getMajor(lua_State *L) {
		if (!_lg_typecheck_getMajor(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_version::major() function, expected prototype:\nunsigned char SDL_version::major()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_version::major(). Got : '%s'\n%s",typeid(Luna< SDL_version >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->major;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_version::minor()
	static int _bind_getMinor(lua_State *L) {
		if (!_lg_typecheck_getMinor(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_version::minor() function, expected prototype:\nunsigned char SDL_version::minor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_version::minor(). Got : '%s'\n%s",typeid(Luna< SDL_version >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->minor;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_version::patch()
	static int _bind_getPatch(lua_State *L) {
		if (!_lg_typecheck_getPatch(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_version::patch() function, expected prototype:\nunsigned char SDL_version::patch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_version::patch(). Got : '%s'\n%s",typeid(Luna< SDL_version >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->patch;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_version::major(unsigned char value)
	static int _bind_setMajor(lua_State *L) {
		if (!_lg_typecheck_setMajor(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_version::major(unsigned char value) function, expected prototype:\nvoid SDL_version::major(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_version::major(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_version >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->major = value;

		return 0;
	}

	// void SDL_version::minor(unsigned char value)
	static int _bind_setMinor(lua_State *L) {
		if (!_lg_typecheck_setMinor(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_version::minor(unsigned char value) function, expected prototype:\nvoid SDL_version::minor(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_version::minor(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_version >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->minor = value;

		return 0;
	}

	// void SDL_version::patch(unsigned char value)
	static int _bind_setPatch(lua_State *L) {
		if (!_lg_typecheck_setPatch(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_version::patch(unsigned char value) function, expected prototype:\nvoid SDL_version::patch(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_version* self=(Luna< SDL_version >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_version::patch(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_version >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->patch = value;

		return 0;
	}


	// Operator binds:

};

SDL_version* LunaTraits< SDL_version >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_version >::_bind_dtor(SDL_version* obj) {
	delete obj;
}

const char LunaTraits< SDL_version >::className[] = "SDL_version";
const char LunaTraits< SDL_version >::fullName[] = "SDL_version";
const char LunaTraits< SDL_version >::moduleName[] = "SDL";
const char* LunaTraits< SDL_version >::parents[] = {0};
const int LunaTraits< SDL_version >::hash = 63003745;
const int LunaTraits< SDL_version >::uniqueIDs[] = {63003745,0};

luna_RegType LunaTraits< SDL_version >::methods[] = {
	{"getMajor", &luna_wrapper_SDL_version::_bind_getMajor},
	{"getMinor", &luna_wrapper_SDL_version::_bind_getMinor},
	{"getPatch", &luna_wrapper_SDL_version::_bind_getPatch},
	{"setMajor", &luna_wrapper_SDL_version::_bind_setMajor},
	{"setMinor", &luna_wrapper_SDL_version::_bind_setMinor},
	{"setPatch", &luna_wrapper_SDL_version::_bind_setPatch},
	{"dynCast", &luna_wrapper_SDL_version::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_version::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_version::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_version::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_version >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_version >::enumValues[] = {
	{0,0}
};


