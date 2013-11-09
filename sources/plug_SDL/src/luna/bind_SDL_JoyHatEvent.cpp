#include <plug_common.h>

class luna_wrapper_SDL_JoyHatEvent {
public:
	typedef Luna< SDL_JoyHatEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38522231) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_JoyHatEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyHatEvent* rhs =(Luna< SDL_JoyHatEvent >::check(L,2));
		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
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

		SDL_JoyHatEvent* self= (SDL_JoyHatEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_JoyHatEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38522231) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_JoyHatEvent >::check(L,1));
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

		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyHatEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyHatEvent",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWhich(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWhich(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_JoyHatEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyHatEvent::type() function, expected prototype:\nunsigned char SDL_JoyHatEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyHatEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyHatEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyHatEvent::which() function, expected prototype:\nunsigned char SDL_JoyHatEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyHatEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyHatEvent::hat()
	static int _bind_getHat(lua_State *L) {
		if (!_lg_typecheck_getHat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyHatEvent::hat() function, expected prototype:\nunsigned char SDL_JoyHatEvent::hat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyHatEvent::hat(). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->hat;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyHatEvent::value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyHatEvent::value() function, expected prototype:\nunsigned char SDL_JoyHatEvent::value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyHatEvent::value(). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->value;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_JoyHatEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyHatEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_JoyHatEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyHatEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_JoyHatEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyHatEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_JoyHatEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyHatEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_JoyHatEvent::hat(unsigned char value)
	static int _bind_setHat(lua_State *L) {
		if (!_lg_typecheck_setHat(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyHatEvent::hat(unsigned char value) function, expected prototype:\nvoid SDL_JoyHatEvent::hat(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyHatEvent::hat(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hat = value;

		return 0;
	}

	// void SDL_JoyHatEvent::value(unsigned char value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyHatEvent::value(unsigned char value) function, expected prototype:\nvoid SDL_JoyHatEvent::value(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyHatEvent* self=(Luna< SDL_JoyHatEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyHatEvent::value(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyHatEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->value = value;

		return 0;
	}


	// Operator binds:

};

SDL_JoyHatEvent* LunaTraits< SDL_JoyHatEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyHatEvent >::_bind_dtor(SDL_JoyHatEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyHatEvent >::className[] = "SDL_JoyHatEvent";
const char LunaTraits< SDL_JoyHatEvent >::fullName[] = "SDL_JoyHatEvent";
const char LunaTraits< SDL_JoyHatEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyHatEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyHatEvent >::hash = 38522231;
const int LunaTraits< SDL_JoyHatEvent >::uniqueIDs[] = {38522231,0};

luna_RegType LunaTraits< SDL_JoyHatEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_JoyHatEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_JoyHatEvent::_bind_getWhich},
	{"getHat", &luna_wrapper_SDL_JoyHatEvent::_bind_getHat},
	{"getValue", &luna_wrapper_SDL_JoyHatEvent::_bind_getValue},
	{"setType", &luna_wrapper_SDL_JoyHatEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_JoyHatEvent::_bind_setWhich},
	{"setHat", &luna_wrapper_SDL_JoyHatEvent::_bind_setHat},
	{"setValue", &luna_wrapper_SDL_JoyHatEvent::_bind_setValue},
	{"dynCast", &luna_wrapper_SDL_JoyHatEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_JoyHatEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_JoyHatEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_JoyHatEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyHatEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyHatEvent >::enumValues[] = {
	{0,0}
};


