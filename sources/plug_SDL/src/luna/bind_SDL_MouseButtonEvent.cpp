#include <plug_common.h>

class luna_wrapper_SDL_MouseButtonEvent {
public:
	typedef Luna< SDL_MouseButtonEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83012203) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_MouseButtonEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_MouseButtonEvent* rhs =(Luna< SDL_MouseButtonEvent >::check(L,2));
		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
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

		SDL_MouseButtonEvent* self= (SDL_MouseButtonEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_MouseButtonEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83012203) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_MouseButtonEvent >::check(L,1));
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

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_MouseButtonEvent");
		
		return luna_dynamicCast(L,converters,"SDL_MouseButtonEvent",name);
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

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
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

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_MouseButtonEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseButtonEvent::type() function, expected prototype:\nunsigned char SDL_MouseButtonEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseButtonEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_MouseButtonEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseButtonEvent::which() function, expected prototype:\nunsigned char SDL_MouseButtonEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseButtonEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_MouseButtonEvent::button()
	static int _bind_getButton(lua_State *L) {
		if (!_lg_typecheck_getButton(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseButtonEvent::button() function, expected prototype:\nunsigned char SDL_MouseButtonEvent::button()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseButtonEvent::button(). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->button;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_MouseButtonEvent::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseButtonEvent::state() function, expected prototype:\nunsigned char SDL_MouseButtonEvent::state()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseButtonEvent::state(). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->state;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned short SDL_MouseButtonEvent::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_MouseButtonEvent::x() function, expected prototype:\nunsigned short SDL_MouseButtonEvent::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_MouseButtonEvent::x(). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_MouseButtonEvent::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_MouseButtonEvent::y() function, expected prototype:\nunsigned short SDL_MouseButtonEvent::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_MouseButtonEvent::y(). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_MouseButtonEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseButtonEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_MouseButtonEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseButtonEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_MouseButtonEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseButtonEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_MouseButtonEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseButtonEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_MouseButtonEvent::button(unsigned char value)
	static int _bind_setButton(lua_State *L) {
		if (!_lg_typecheck_setButton(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseButtonEvent::button(unsigned char value) function, expected prototype:\nvoid SDL_MouseButtonEvent::button(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseButtonEvent::button(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->button = value;

		return 0;
	}

	// void SDL_MouseButtonEvent::state(unsigned char value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseButtonEvent::state(unsigned char value) function, expected prototype:\nvoid SDL_MouseButtonEvent::state(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseButtonEvent::state(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->state = value;

		return 0;
	}

	// void SDL_MouseButtonEvent::x(unsigned short value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseButtonEvent::x(unsigned short value) function, expected prototype:\nvoid SDL_MouseButtonEvent::x(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseButtonEvent::x(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void SDL_MouseButtonEvent::y(unsigned short value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseButtonEvent::y(unsigned short value) function, expected prototype:\nvoid SDL_MouseButtonEvent::y(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_MouseButtonEvent* self=(Luna< SDL_MouseButtonEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseButtonEvent::y(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_MouseButtonEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:

};

SDL_MouseButtonEvent* LunaTraits< SDL_MouseButtonEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_MouseButtonEvent >::_bind_dtor(SDL_MouseButtonEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_MouseButtonEvent >::className[] = "SDL_MouseButtonEvent";
const char LunaTraits< SDL_MouseButtonEvent >::fullName[] = "SDL_MouseButtonEvent";
const char LunaTraits< SDL_MouseButtonEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_MouseButtonEvent >::parents[] = {0};
const int LunaTraits< SDL_MouseButtonEvent >::hash = 83012203;
const int LunaTraits< SDL_MouseButtonEvent >::uniqueIDs[] = {83012203,0};

luna_RegType LunaTraits< SDL_MouseButtonEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_MouseButtonEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_MouseButtonEvent::_bind_getWhich},
	{"getButton", &luna_wrapper_SDL_MouseButtonEvent::_bind_getButton},
	{"getState", &luna_wrapper_SDL_MouseButtonEvent::_bind_getState},
	{"getX", &luna_wrapper_SDL_MouseButtonEvent::_bind_getX},
	{"getY", &luna_wrapper_SDL_MouseButtonEvent::_bind_getY},
	{"setType", &luna_wrapper_SDL_MouseButtonEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_MouseButtonEvent::_bind_setWhich},
	{"setButton", &luna_wrapper_SDL_MouseButtonEvent::_bind_setButton},
	{"setState", &luna_wrapper_SDL_MouseButtonEvent::_bind_setState},
	{"setX", &luna_wrapper_SDL_MouseButtonEvent::_bind_setX},
	{"setY", &luna_wrapper_SDL_MouseButtonEvent::_bind_setY},
	{"dynCast", &luna_wrapper_SDL_MouseButtonEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_MouseButtonEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_MouseButtonEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_MouseButtonEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_MouseButtonEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_MouseButtonEvent >::enumValues[] = {
	{0,0}
};


