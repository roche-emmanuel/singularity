#include <plug_common.h>

class luna_wrapper_SDL_JoyButtonEvent {
public:
	typedef Luna< SDL_JoyButtonEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94708358) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_JoyButtonEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyButtonEvent* rhs =(Luna< SDL_JoyButtonEvent >::check(L,2));
		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
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

		SDL_JoyButtonEvent* self= (SDL_JoyButtonEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_JoyButtonEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94708358) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_JoyButtonEvent >::check(L,1));
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

		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyButtonEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyButtonEvent",name);
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

	inline static bool _lg_typecheck_getButton(lua_State *L) {
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

	inline static bool _lg_typecheck_setWhich(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setButton(lua_State *L) {
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
	// unsigned char SDL_JoyButtonEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyButtonEvent::type() function, expected prototype:\nunsigned char SDL_JoyButtonEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyButtonEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyButtonEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyButtonEvent::which() function, expected prototype:\nunsigned char SDL_JoyButtonEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyButtonEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyButtonEvent::button()
	static int _bind_getButton(lua_State *L) {
		if (!_lg_typecheck_getButton(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyButtonEvent::button() function, expected prototype:\nunsigned char SDL_JoyButtonEvent::button()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyButtonEvent::button(). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->button;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyButtonEvent::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyButtonEvent::state() function, expected prototype:\nunsigned char SDL_JoyButtonEvent::state()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyButtonEvent::state(). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->state;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_JoyButtonEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyButtonEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_JoyButtonEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyButtonEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_JoyButtonEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyButtonEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_JoyButtonEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyButtonEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_JoyButtonEvent::button(unsigned char value)
	static int _bind_setButton(lua_State *L) {
		if (!_lg_typecheck_setButton(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyButtonEvent::button(unsigned char value) function, expected prototype:\nvoid SDL_JoyButtonEvent::button(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyButtonEvent::button(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->button = value;

		return 0;
	}

	// void SDL_JoyButtonEvent::state(unsigned char value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyButtonEvent::state(unsigned char value) function, expected prototype:\nvoid SDL_JoyButtonEvent::state(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyButtonEvent* self=(Luna< SDL_JoyButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyButtonEvent::state(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->state = value;

		return 0;
	}


	// Operator binds:

};

SDL_JoyButtonEvent* LunaTraits< SDL_JoyButtonEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyButtonEvent >::_bind_dtor(SDL_JoyButtonEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyButtonEvent >::className[] = "SDL_JoyButtonEvent";
const char LunaTraits< SDL_JoyButtonEvent >::fullName[] = "SDL_JoyButtonEvent";
const char LunaTraits< SDL_JoyButtonEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyButtonEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyButtonEvent >::hash = 94708358;
const int LunaTraits< SDL_JoyButtonEvent >::uniqueIDs[] = {94708358,0};

luna_RegType LunaTraits< SDL_JoyButtonEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_JoyButtonEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_JoyButtonEvent::_bind_getWhich},
	{"getButton", &luna_wrapper_SDL_JoyButtonEvent::_bind_getButton},
	{"getState", &luna_wrapper_SDL_JoyButtonEvent::_bind_getState},
	{"setType", &luna_wrapper_SDL_JoyButtonEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_JoyButtonEvent::_bind_setWhich},
	{"setButton", &luna_wrapper_SDL_JoyButtonEvent::_bind_setButton},
	{"setState", &luna_wrapper_SDL_JoyButtonEvent::_bind_setState},
	{"dynCast", &luna_wrapper_SDL_JoyButtonEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_JoyButtonEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_JoyButtonEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_JoyButtonEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyButtonEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyButtonEvent >::enumValues[] = {
	{0,0}
};


