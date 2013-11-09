#include <plug_common.h>

class luna_wrapper_SDL_MouseMotionEvent {
public:
	typedef Luna< SDL_MouseMotionEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65570431) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_MouseMotionEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_MouseMotionEvent* rhs =(Luna< SDL_MouseMotionEvent >::check(L,2));
		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
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

		SDL_MouseMotionEvent* self= (SDL_MouseMotionEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_MouseMotionEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65570431) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_MouseMotionEvent >::check(L,1));
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

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_MouseMotionEvent");
		
		return luna_dynamicCast(L,converters,"SDL_MouseMotionEvent",name);
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
	// unsigned char SDL_MouseMotionEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseMotionEvent::type() function, expected prototype:\nunsigned char SDL_MouseMotionEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseMotionEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_MouseMotionEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseMotionEvent::which() function, expected prototype:\nunsigned char SDL_MouseMotionEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseMotionEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_MouseMotionEvent::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_MouseMotionEvent::state() function, expected prototype:\nunsigned char SDL_MouseMotionEvent::state()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_MouseMotionEvent::state(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->state;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned short SDL_MouseMotionEvent::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_MouseMotionEvent::x() function, expected prototype:\nunsigned short SDL_MouseMotionEvent::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_MouseMotionEvent::x(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_MouseMotionEvent::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_MouseMotionEvent::y() function, expected prototype:\nunsigned short SDL_MouseMotionEvent::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_MouseMotionEvent::y(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short SDL_MouseMotionEvent::xrel()
	static int _bind_getXrel(lua_State *L) {
		if (!_lg_typecheck_getXrel(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_MouseMotionEvent::xrel() function, expected prototype:\nsigned short SDL_MouseMotionEvent::xrel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_MouseMotionEvent::xrel(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->xrel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short SDL_MouseMotionEvent::yrel()
	static int _bind_getYrel(lua_State *L) {
		if (!_lg_typecheck_getYrel(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_MouseMotionEvent::yrel() function, expected prototype:\nsigned short SDL_MouseMotionEvent::yrel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_MouseMotionEvent::yrel(). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->yrel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_MouseMotionEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_MouseMotionEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_MouseMotionEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_MouseMotionEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_MouseMotionEvent::state(unsigned char value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::state(unsigned char value) function, expected prototype:\nvoid SDL_MouseMotionEvent::state(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::state(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->state = value;

		return 0;
	}

	// void SDL_MouseMotionEvent::x(unsigned short value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::x(unsigned short value) function, expected prototype:\nvoid SDL_MouseMotionEvent::x(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::x(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void SDL_MouseMotionEvent::y(unsigned short value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::y(unsigned short value) function, expected prototype:\nvoid SDL_MouseMotionEvent::y(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::y(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void SDL_MouseMotionEvent::xrel(signed short value)
	static int _bind_setXrel(lua_State *L) {
		if (!_lg_typecheck_setXrel(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::xrel(signed short value) function, expected prototype:\nvoid SDL_MouseMotionEvent::xrel(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::xrel(signed short). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->xrel = value;

		return 0;
	}

	// void SDL_MouseMotionEvent::yrel(signed short value)
	static int _bind_setYrel(lua_State *L) {
		if (!_lg_typecheck_setYrel(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_MouseMotionEvent::yrel(signed short value) function, expected prototype:\nvoid SDL_MouseMotionEvent::yrel(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_MouseMotionEvent* self=(Luna< SDL_MouseMotionEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_MouseMotionEvent::yrel(signed short). Got : '%s'\n%s",typeid(Luna< SDL_MouseMotionEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->yrel = value;

		return 0;
	}


	// Operator binds:

};

SDL_MouseMotionEvent* LunaTraits< SDL_MouseMotionEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_MouseMotionEvent >::_bind_dtor(SDL_MouseMotionEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_MouseMotionEvent >::className[] = "SDL_MouseMotionEvent";
const char LunaTraits< SDL_MouseMotionEvent >::fullName[] = "SDL_MouseMotionEvent";
const char LunaTraits< SDL_MouseMotionEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_MouseMotionEvent >::parents[] = {0};
const int LunaTraits< SDL_MouseMotionEvent >::hash = 65570431;
const int LunaTraits< SDL_MouseMotionEvent >::uniqueIDs[] = {65570431,0};

luna_RegType LunaTraits< SDL_MouseMotionEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_MouseMotionEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_MouseMotionEvent::_bind_getWhich},
	{"getState", &luna_wrapper_SDL_MouseMotionEvent::_bind_getState},
	{"getX", &luna_wrapper_SDL_MouseMotionEvent::_bind_getX},
	{"getY", &luna_wrapper_SDL_MouseMotionEvent::_bind_getY},
	{"getXrel", &luna_wrapper_SDL_MouseMotionEvent::_bind_getXrel},
	{"getYrel", &luna_wrapper_SDL_MouseMotionEvent::_bind_getYrel},
	{"setType", &luna_wrapper_SDL_MouseMotionEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_MouseMotionEvent::_bind_setWhich},
	{"setState", &luna_wrapper_SDL_MouseMotionEvent::_bind_setState},
	{"setX", &luna_wrapper_SDL_MouseMotionEvent::_bind_setX},
	{"setY", &luna_wrapper_SDL_MouseMotionEvent::_bind_setY},
	{"setXrel", &luna_wrapper_SDL_MouseMotionEvent::_bind_setXrel},
	{"setYrel", &luna_wrapper_SDL_MouseMotionEvent::_bind_setYrel},
	{"dynCast", &luna_wrapper_SDL_MouseMotionEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_MouseMotionEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_MouseMotionEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_MouseMotionEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_MouseMotionEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_MouseMotionEvent >::enumValues[] = {
	{0,0}
};


