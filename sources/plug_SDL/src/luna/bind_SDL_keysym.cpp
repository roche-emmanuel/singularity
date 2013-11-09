#include <plug_common.h>

class luna_wrapper_SDL_keysym {
public:
	typedef Luna< SDL_keysym > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26030457) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_keysym*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_keysym* rhs =(Luna< SDL_keysym >::check(L,2));
		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
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

		SDL_keysym* self= (SDL_keysym*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_keysym >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26030457) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_keysym >::check(L,1));
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

		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_keysym");
		
		return luna_dynamicCast(L,converters,"SDL_keysym",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getScancode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSym(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnicode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScancode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSym(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnicode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_keysym::scancode()
	static int _bind_getScancode(lua_State *L) {
		if (!_lg_typecheck_getScancode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_keysym::scancode() function, expected prototype:\nunsigned char SDL_keysym::scancode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_keysym::scancode(). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->scancode;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// SDLKey SDL_keysym::sym()
	static int _bind_getSym(lua_State *L) {
		if (!_lg_typecheck_getSym(L)) {
			luaL_error(L, "luna typecheck failed in SDLKey SDL_keysym::sym() function, expected prototype:\nSDLKey SDL_keysym::sym()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDLKey SDL_keysym::sym(). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SDLKey lret = self->sym;
		lua_pushnumber(L,lret);

		return 1;
	}

	// SDLMod SDL_keysym::mod()
	static int _bind_getMod(lua_State *L) {
		if (!_lg_typecheck_getMod(L)) {
			luaL_error(L, "luna typecheck failed in SDLMod SDL_keysym::mod() function, expected prototype:\nSDLMod SDL_keysym::mod()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDLMod SDL_keysym::mod(). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SDLMod lret = self->mod;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_keysym::unicode()
	static int _bind_getUnicode(lua_State *L) {
		if (!_lg_typecheck_getUnicode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_keysym::unicode() function, expected prototype:\nunsigned short SDL_keysym::unicode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_keysym::unicode(). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unicode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_keysym::scancode(unsigned char value)
	static int _bind_setScancode(lua_State *L) {
		if (!_lg_typecheck_setScancode(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_keysym::scancode(unsigned char value) function, expected prototype:\nvoid SDL_keysym::scancode(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_keysym::scancode(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->scancode = value;

		return 0;
	}

	// void SDL_keysym::sym(SDLKey value)
	static int _bind_setSym(lua_State *L) {
		if (!_lg_typecheck_setSym(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_keysym::sym(SDLKey value) function, expected prototype:\nvoid SDL_keysym::sym(SDLKey value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SDLKey value=(SDLKey)lua_tointeger(L,2);

		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_keysym::sym(SDLKey). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sym = value;

		return 0;
	}

	// void SDL_keysym::mod(SDLMod value)
	static int _bind_setMod(lua_State *L) {
		if (!_lg_typecheck_setMod(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_keysym::mod(SDLMod value) function, expected prototype:\nvoid SDL_keysym::mod(SDLMod value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		SDLMod value=(SDLMod)lua_tointeger(L,2);

		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_keysym::mod(SDLMod). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mod = value;

		return 0;
	}

	// void SDL_keysym::unicode(unsigned short value)
	static int _bind_setUnicode(lua_State *L) {
		if (!_lg_typecheck_setUnicode(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_keysym::unicode(unsigned short value) function, expected prototype:\nvoid SDL_keysym::unicode(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_keysym* self=(Luna< SDL_keysym >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_keysym::unicode(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_keysym >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unicode = value;

		return 0;
	}


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
	{"getScancode", &luna_wrapper_SDL_keysym::_bind_getScancode},
	{"getSym", &luna_wrapper_SDL_keysym::_bind_getSym},
	{"getMod", &luna_wrapper_SDL_keysym::_bind_getMod},
	{"getUnicode", &luna_wrapper_SDL_keysym::_bind_getUnicode},
	{"setScancode", &luna_wrapper_SDL_keysym::_bind_setScancode},
	{"setSym", &luna_wrapper_SDL_keysym::_bind_setSym},
	{"setMod", &luna_wrapper_SDL_keysym::_bind_setMod},
	{"setUnicode", &luna_wrapper_SDL_keysym::_bind_setUnicode},
	{"dynCast", &luna_wrapper_SDL_keysym::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_keysym::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_keysym::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_keysym::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_keysym >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_keysym >::enumValues[] = {
	{0,0}
};


