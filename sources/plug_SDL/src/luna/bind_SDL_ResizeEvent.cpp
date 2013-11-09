#include <plug_common.h>

class luna_wrapper_SDL_ResizeEvent {
public:
	typedef Luna< SDL_ResizeEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35035544) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_ResizeEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_ResizeEvent* rhs =(Luna< SDL_ResizeEvent >::check(L,2));
		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
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

		SDL_ResizeEvent* self= (SDL_ResizeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_ResizeEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,35035544) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_ResizeEvent >::check(L,1));
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

		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_ResizeEvent");
		
		return luna_dynamicCast(L,converters,"SDL_ResizeEvent",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getH(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setH(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_ResizeEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_ResizeEvent::type() function, expected prototype:\nunsigned char SDL_ResizeEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_ResizeEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_ResizeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// int SDL_ResizeEvent::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_ResizeEvent::w() function, expected prototype:\nint SDL_ResizeEvent::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_ResizeEvent::w(). Got : '%s'\n%s",typeid(Luna< SDL_ResizeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_ResizeEvent::h()
	static int _bind_getH(lua_State *L) {
		if (!_lg_typecheck_getH(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_ResizeEvent::h() function, expected prototype:\nint SDL_ResizeEvent::h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_ResizeEvent::h(). Got : '%s'\n%s",typeid(Luna< SDL_ResizeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->h;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_ResizeEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ResizeEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_ResizeEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ResizeEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_ResizeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_ResizeEvent::w(int value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ResizeEvent::w(int value) function, expected prototype:\nvoid SDL_ResizeEvent::w(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ResizeEvent::w(int). Got : '%s'\n%s",typeid(Luna< SDL_ResizeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}

	// void SDL_ResizeEvent::h(int value)
	static int _bind_setH(lua_State *L) {
		if (!_lg_typecheck_setH(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ResizeEvent::h(int value) function, expected prototype:\nvoid SDL_ResizeEvent::h(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_ResizeEvent* self=(Luna< SDL_ResizeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ResizeEvent::h(int). Got : '%s'\n%s",typeid(Luna< SDL_ResizeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->h = value;

		return 0;
	}


	// Operator binds:

};

SDL_ResizeEvent* LunaTraits< SDL_ResizeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_ResizeEvent >::_bind_dtor(SDL_ResizeEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_ResizeEvent >::className[] = "SDL_ResizeEvent";
const char LunaTraits< SDL_ResizeEvent >::fullName[] = "SDL_ResizeEvent";
const char LunaTraits< SDL_ResizeEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_ResizeEvent >::parents[] = {0};
const int LunaTraits< SDL_ResizeEvent >::hash = 35035544;
const int LunaTraits< SDL_ResizeEvent >::uniqueIDs[] = {35035544,0};

luna_RegType LunaTraits< SDL_ResizeEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_ResizeEvent::_bind_getType},
	{"getW", &luna_wrapper_SDL_ResizeEvent::_bind_getW},
	{"getH", &luna_wrapper_SDL_ResizeEvent::_bind_getH},
	{"setType", &luna_wrapper_SDL_ResizeEvent::_bind_setType},
	{"setW", &luna_wrapper_SDL_ResizeEvent::_bind_setW},
	{"setH", &luna_wrapper_SDL_ResizeEvent::_bind_setH},
	{"dynCast", &luna_wrapper_SDL_ResizeEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_ResizeEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_ResizeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_ResizeEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_ResizeEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_ResizeEvent >::enumValues[] = {
	{0,0}
};


