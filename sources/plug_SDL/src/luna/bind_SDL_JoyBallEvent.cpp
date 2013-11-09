#include <plug_common.h>

class luna_wrapper_SDL_JoyBallEvent {
public:
	typedef Luna< SDL_JoyBallEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20374949) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_JoyBallEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyBallEvent* rhs =(Luna< SDL_JoyBallEvent >::check(L,2));
		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
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

		SDL_JoyBallEvent* self= (SDL_JoyBallEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_JoyBallEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20374949) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_JoyBallEvent >::check(L,1));
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

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyBallEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyBallEvent",name);
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

	inline static bool _lg_typecheck_getBall(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXrel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYrel(lua_State *L) {
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

	inline static bool _lg_typecheck_setBall(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXrel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYrel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_JoyBallEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyBallEvent::type() function, expected prototype:\nunsigned char SDL_JoyBallEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyBallEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyBallEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyBallEvent::which() function, expected prototype:\nunsigned char SDL_JoyBallEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyBallEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyBallEvent::ball()
	static int _bind_getBall(lua_State *L) {
		if (!_lg_typecheck_getBall(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyBallEvent::ball() function, expected prototype:\nunsigned char SDL_JoyBallEvent::ball()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyBallEvent::ball(). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->ball;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// signed short SDL_JoyBallEvent::xrel()
	static int _bind_getXrel(lua_State *L) {
		if (!_lg_typecheck_getXrel(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_JoyBallEvent::xrel() function, expected prototype:\nsigned short SDL_JoyBallEvent::xrel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_JoyBallEvent::xrel(). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->xrel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short SDL_JoyBallEvent::yrel()
	static int _bind_getYrel(lua_State *L) {
		if (!_lg_typecheck_getYrel(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_JoyBallEvent::yrel() function, expected prototype:\nsigned short SDL_JoyBallEvent::yrel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_JoyBallEvent::yrel(). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->yrel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_JoyBallEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyBallEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_JoyBallEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyBallEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_JoyBallEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyBallEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_JoyBallEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyBallEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_JoyBallEvent::ball(unsigned char value)
	static int _bind_setBall(lua_State *L) {
		if (!_lg_typecheck_setBall(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyBallEvent::ball(unsigned char value) function, expected prototype:\nvoid SDL_JoyBallEvent::ball(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyBallEvent::ball(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ball = value;

		return 0;
	}

	// void SDL_JoyBallEvent::xrel(signed short value)
	static int _bind_setXrel(lua_State *L) {
		if (!_lg_typecheck_setXrel(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyBallEvent::xrel(signed short value) function, expected prototype:\nvoid SDL_JoyBallEvent::xrel(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyBallEvent::xrel(signed short). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xrel = value;

		return 0;
	}

	// void SDL_JoyBallEvent::yrel(signed short value)
	static int _bind_setYrel(lua_State *L) {
		if (!_lg_typecheck_setYrel(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyBallEvent::yrel(signed short value) function, expected prototype:\nvoid SDL_JoyBallEvent::yrel(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_JoyBallEvent* self=(Luna< SDL_JoyBallEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyBallEvent::yrel(signed short). Got : '%s'\n%s",typeid(Luna< SDL_JoyBallEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->yrel = value;

		return 0;
	}


	// Operator binds:

};

SDL_JoyBallEvent* LunaTraits< SDL_JoyBallEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyBallEvent >::_bind_dtor(SDL_JoyBallEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyBallEvent >::className[] = "SDL_JoyBallEvent";
const char LunaTraits< SDL_JoyBallEvent >::fullName[] = "SDL_JoyBallEvent";
const char LunaTraits< SDL_JoyBallEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyBallEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyBallEvent >::hash = 20374949;
const int LunaTraits< SDL_JoyBallEvent >::uniqueIDs[] = {20374949,0};

luna_RegType LunaTraits< SDL_JoyBallEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_JoyBallEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_JoyBallEvent::_bind_getWhich},
	{"getBall", &luna_wrapper_SDL_JoyBallEvent::_bind_getBall},
	{"getXrel", &luna_wrapper_SDL_JoyBallEvent::_bind_getXrel},
	{"getYrel", &luna_wrapper_SDL_JoyBallEvent::_bind_getYrel},
	{"setType", &luna_wrapper_SDL_JoyBallEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_JoyBallEvent::_bind_setWhich},
	{"setBall", &luna_wrapper_SDL_JoyBallEvent::_bind_setBall},
	{"setXrel", &luna_wrapper_SDL_JoyBallEvent::_bind_setXrel},
	{"setYrel", &luna_wrapper_SDL_JoyBallEvent::_bind_setYrel},
	{"dynCast", &luna_wrapper_SDL_JoyBallEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_JoyBallEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_JoyBallEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_JoyBallEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyBallEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyBallEvent >::enumValues[] = {
	{0,0}
};


