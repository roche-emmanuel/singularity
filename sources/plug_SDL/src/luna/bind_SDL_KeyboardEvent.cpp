#include <plug_common.h>

class luna_wrapper_SDL_KeyboardEvent {
public:
	typedef Luna< SDL_KeyboardEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54883043) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_KeyboardEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_KeyboardEvent* rhs =(Luna< SDL_KeyboardEvent >::check(L,2));
		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
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

		SDL_KeyboardEvent* self= (SDL_KeyboardEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_KeyboardEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,54883043) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_KeyboardEvent >::check(L,1));
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

		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_KeyboardEvent");
		
		return luna_dynamicCast(L,converters,"SDL_KeyboardEvent",name);
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

	inline static bool _lg_typecheck_getKeysym(lua_State *L) {
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

	inline static bool _lg_typecheck_setKeysym(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26030457) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_KeyboardEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_KeyboardEvent::type() function, expected prototype:\nunsigned char SDL_KeyboardEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_KeyboardEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_KeyboardEvent::which()
	static int _bind_getWhich(lua_State *L) {
		if (!_lg_typecheck_getWhich(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_KeyboardEvent::which() function, expected prototype:\nunsigned char SDL_KeyboardEvent::which()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_KeyboardEvent::which(). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->which;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_KeyboardEvent::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_KeyboardEvent::state() function, expected prototype:\nunsigned char SDL_KeyboardEvent::state()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_KeyboardEvent::state(). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->state;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// SDL_keysym SDL_KeyboardEvent::keysym()
	static int _bind_getKeysym(lua_State *L) {
		if (!_lg_typecheck_getKeysym(L)) {
			luaL_error(L, "luna typecheck failed in SDL_keysym SDL_KeyboardEvent::keysym() function, expected prototype:\nSDL_keysym SDL_KeyboardEvent::keysym()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_keysym SDL_KeyboardEvent::keysym(). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_keysym* lret = &self->keysym;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_keysym >::push(L,lret,false);

		return 1;
	}

	// void SDL_KeyboardEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_KeyboardEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_KeyboardEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_KeyboardEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_KeyboardEvent::which(unsigned char value)
	static int _bind_setWhich(lua_State *L) {
		if (!_lg_typecheck_setWhich(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_KeyboardEvent::which(unsigned char value) function, expected prototype:\nvoid SDL_KeyboardEvent::which(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_KeyboardEvent::which(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->which = value;

		return 0;
	}

	// void SDL_KeyboardEvent::state(unsigned char value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_KeyboardEvent::state(unsigned char value) function, expected prototype:\nvoid SDL_KeyboardEvent::state(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_KeyboardEvent::state(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->state = value;

		return 0;
	}

	// void SDL_KeyboardEvent::keysym(SDL_keysym value)
	static int _bind_setKeysym(lua_State *L) {
		if (!_lg_typecheck_setKeysym(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_KeyboardEvent::keysym(SDL_keysym value) function, expected prototype:\nvoid SDL_KeyboardEvent::keysym(SDL_keysym value)\nClass arguments details:\narg 1 ID = 26030457\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_keysym* value_ptr=(Luna< SDL_keysym >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_KeyboardEvent::keysym function");
		}
		SDL_keysym value=*value_ptr;

		SDL_KeyboardEvent* self=(Luna< SDL_KeyboardEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_KeyboardEvent::keysym(SDL_keysym). Got : '%s'\n%s",typeid(Luna< SDL_KeyboardEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->keysym = value;

		return 0;
	}


	// Operator binds:

};

SDL_KeyboardEvent* LunaTraits< SDL_KeyboardEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_KeyboardEvent >::_bind_dtor(SDL_KeyboardEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_KeyboardEvent >::className[] = "SDL_KeyboardEvent";
const char LunaTraits< SDL_KeyboardEvent >::fullName[] = "SDL_KeyboardEvent";
const char LunaTraits< SDL_KeyboardEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_KeyboardEvent >::parents[] = {0};
const int LunaTraits< SDL_KeyboardEvent >::hash = 54883043;
const int LunaTraits< SDL_KeyboardEvent >::uniqueIDs[] = {54883043,0};

luna_RegType LunaTraits< SDL_KeyboardEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_KeyboardEvent::_bind_getType},
	{"getWhich", &luna_wrapper_SDL_KeyboardEvent::_bind_getWhich},
	{"getState", &luna_wrapper_SDL_KeyboardEvent::_bind_getState},
	{"getKeysym", &luna_wrapper_SDL_KeyboardEvent::_bind_getKeysym},
	{"setType", &luna_wrapper_SDL_KeyboardEvent::_bind_setType},
	{"setWhich", &luna_wrapper_SDL_KeyboardEvent::_bind_setWhich},
	{"setState", &luna_wrapper_SDL_KeyboardEvent::_bind_setState},
	{"setKeysym", &luna_wrapper_SDL_KeyboardEvent::_bind_setKeysym},
	{"dynCast", &luna_wrapper_SDL_KeyboardEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_KeyboardEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_KeyboardEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_KeyboardEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_KeyboardEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_KeyboardEvent >::enumValues[] = {
	{0,0}
};


