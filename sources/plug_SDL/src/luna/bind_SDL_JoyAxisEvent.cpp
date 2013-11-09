#include <plug_common.h>

class luna_wrapper_SDL_JoyAxisEvent {
public:
	typedef Luna< SDL_JoyAxisEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57386537) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_JoyAxisEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_JoyAxisEvent* rhs =(Luna< SDL_JoyAxisEvent >::check(L,2));
		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
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

		SDL_JoyAxisEvent* self= (SDL_JoyAxisEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_JoyAxisEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57386537) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_JoyAxisEvent >::check(L,1));
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

		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_JoyAxisEvent");
		
		return luna_dynamicCast(L,converters,"SDL_JoyAxisEvent",name);
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

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
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

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
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
	// unsigned char SDL_JoyAxisEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyAxisEvent::type() function, expected prototype:\nunsigned char SDL_JoyAxisEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyAxisEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyAxisEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyAxisEvent::which() function, expected prototype:\nunsigned char SDL_JoyAxisEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyAxisEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_JoyAxisEvent::axis()
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_JoyAxisEvent::axis() function, expected prototype:\nunsigned char SDL_JoyAxisEvent::axis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_JoyAxisEvent::axis(). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->axis;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// signed short SDL_JoyAxisEvent::value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_JoyAxisEvent::value() function, expected prototype:\nsigned short SDL_JoyAxisEvent::value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_JoyAxisEvent::value(). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_JoyAxisEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyAxisEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_JoyAxisEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyAxisEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_JoyAxisEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyAxisEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_JoyAxisEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyAxisEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_JoyAxisEvent::axis(unsigned char value)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyAxisEvent::axis(unsigned char value) function, expected prototype:\nvoid SDL_JoyAxisEvent::axis(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyAxisEvent::axis(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->axis = value;

		return 0;
	}

	// void SDL_JoyAxisEvent::value(signed short value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_JoyAxisEvent::value(signed short value) function, expected prototype:\nvoid SDL_JoyAxisEvent::value(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_JoyAxisEvent* self=(Luna< SDL_JoyAxisEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_JoyAxisEvent::value(signed short). Got : '%s'\n%s",typeid(Luna< SDL_JoyAxisEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->value = value;

		return 0;
	}


	// Operator binds:

};

SDL_JoyAxisEvent* LunaTraits< SDL_JoyAxisEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_JoyAxisEvent >::_bind_dtor(SDL_JoyAxisEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_JoyAxisEvent >::className[] = "SDL_JoyAxisEvent";
const char LunaTraits< SDL_JoyAxisEvent >::fullName[] = "SDL_JoyAxisEvent";
const char LunaTraits< SDL_JoyAxisEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_JoyAxisEvent >::parents[] = {0};
const int LunaTraits< SDL_JoyAxisEvent >::hash = 57386537;
const int LunaTraits< SDL_JoyAxisEvent >::uniqueIDs[] = {57386537,0};

luna_RegType LunaTraits< SDL_JoyAxisEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_JoyAxisEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_JoyAxisEvent::_bind_getWhich},
	{"getAxis", &luna_wrapper_SDL_JoyAxisEvent::_bind_getAxis},
	{"getValue", &luna_wrapper_SDL_JoyAxisEvent::_bind_getValue},
	{"setType", &luna_wrapper_SDL_JoyAxisEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_JoyAxisEvent::_bind_setWhich},
	{"setAxis", &luna_wrapper_SDL_JoyAxisEvent::_bind_setAxis},
	{"setValue", &luna_wrapper_SDL_JoyAxisEvent::_bind_setValue},
	{"dynCast", &luna_wrapper_SDL_JoyAxisEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_JoyAxisEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_JoyAxisEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_JoyAxisEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_JoyAxisEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_JoyAxisEvent >::enumValues[] = {
	{0,0}
};


