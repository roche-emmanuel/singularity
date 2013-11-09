#include <plug_common.h>

class luna_wrapper_SDL_ActiveEvent {
public:
	typedef Luna< SDL_ActiveEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47816679) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_ActiveEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_ActiveEvent* rhs =(Luna< SDL_ActiveEvent >::check(L,2));
		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
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

		SDL_ActiveEvent* self= (SDL_ActiveEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_ActiveEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47816679) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_ActiveEvent >::check(L,1));
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

		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_ActiveEvent");
		
		return luna_dynamicCast(L,converters,"SDL_ActiveEvent",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_ActiveEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_ActiveEvent::type() function, expected prototype:\nunsigned char SDL_ActiveEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_ActiveEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_ActiveEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_ActiveEvent::gain()
	static int _bind_getGain(lua_State *L) {
		if (!_lg_typecheck_getGain(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_ActiveEvent::gain() function, expected prototype:\nunsigned char SDL_ActiveEvent::gain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_ActiveEvent::gain(). Got : '%s'\n%s",typeid(Luna< SDL_ActiveEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->gain;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_ActiveEvent::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_ActiveEvent::state() function, expected prototype:\nunsigned char SDL_ActiveEvent::state()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_ActiveEvent::state(). Got : '%s'\n%s",typeid(Luna< SDL_ActiveEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->state;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_ActiveEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ActiveEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_ActiveEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ActiveEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_ActiveEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_ActiveEvent::gain(unsigned char value)
	static int _bind_setGain(lua_State *L) {
		if (!_lg_typecheck_setGain(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ActiveEvent::gain(unsigned char value) function, expected prototype:\nvoid SDL_ActiveEvent::gain(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ActiveEvent::gain(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_ActiveEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->gain = value;

		return 0;
	}

	// void SDL_ActiveEvent::state(unsigned char value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ActiveEvent::state(unsigned char value) function, expected prototype:\nvoid SDL_ActiveEvent::state(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_ActiveEvent* self=(Luna< SDL_ActiveEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ActiveEvent::state(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_ActiveEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->state = value;

		return 0;
	}


	// Operator binds:

};

SDL_ActiveEvent* LunaTraits< SDL_ActiveEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_ActiveEvent >::_bind_dtor(SDL_ActiveEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_ActiveEvent >::className[] = "SDL_ActiveEvent";
const char LunaTraits< SDL_ActiveEvent >::fullName[] = "SDL_ActiveEvent";
const char LunaTraits< SDL_ActiveEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_ActiveEvent >::parents[] = {0};
const int LunaTraits< SDL_ActiveEvent >::hash = 47816679;
const int LunaTraits< SDL_ActiveEvent >::uniqueIDs[] = {47816679,0};

luna_RegType LunaTraits< SDL_ActiveEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_ActiveEvent::_bind_getType},
	{"getGain", &luna_wrapper_SDL_ActiveEvent::_bind_getGain},
	{"getState", &luna_wrapper_SDL_ActiveEvent::_bind_getState},
	{"setType", &luna_wrapper_SDL_ActiveEvent::_bind_setType},
	{"setGain", &luna_wrapper_SDL_ActiveEvent::_bind_setGain},
	{"setState", &luna_wrapper_SDL_ActiveEvent::_bind_setState},
	{"dynCast", &luna_wrapper_SDL_ActiveEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_ActiveEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_ActiveEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_ActiveEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_ActiveEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_ActiveEvent >::enumValues[] = {
	{0,0}
};


