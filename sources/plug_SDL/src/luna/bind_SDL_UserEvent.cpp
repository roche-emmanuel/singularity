#include <plug_common.h>

class luna_wrapper_SDL_UserEvent {
public:
	typedef Luna< SDL_UserEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22520081) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_UserEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_UserEvent* rhs =(Luna< SDL_UserEvent >::check(L,2));
		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
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

		SDL_UserEvent* self= (SDL_UserEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_UserEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22520081) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_UserEvent >::check(L,1));
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

		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_UserEvent");
		
		return luna_dynamicCast(L,converters,"SDL_UserEvent",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setData1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setData2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_UserEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_UserEvent::type() function, expected prototype:\nunsigned char SDL_UserEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_UserEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// int SDL_UserEvent::code()
	static int _bind_getCode(lua_State *L) {
		if (!_lg_typecheck_getCode(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_UserEvent::code() function, expected prototype:\nint SDL_UserEvent::code()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_UserEvent::code(). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->code;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * SDL_UserEvent::data1()
	static int _bind_getData1(lua_State *L) {
		if (!_lg_typecheck_getData1(L)) {
			luaL_error(L, "luna typecheck failed in void * SDL_UserEvent::data1() function, expected prototype:\nvoid * SDL_UserEvent::data1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * SDL_UserEvent::data1(). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->data1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * SDL_UserEvent::data2()
	static int _bind_getData2(lua_State *L) {
		if (!_lg_typecheck_getData2(L)) {
			luaL_error(L, "luna typecheck failed in void * SDL_UserEvent::data2() function, expected prototype:\nvoid * SDL_UserEvent::data2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * SDL_UserEvent::data2(). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->data2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void SDL_UserEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_UserEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_UserEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_UserEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_UserEvent::code(int value)
	static int _bind_setCode(lua_State *L) {
		if (!_lg_typecheck_setCode(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_UserEvent::code(int value) function, expected prototype:\nvoid SDL_UserEvent::code(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_UserEvent::code(int). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->code = value;

		return 0;
	}

	// void SDL_UserEvent::data1(void * value)
	static int _bind_setData1(lua_State *L) {
		if (!_lg_typecheck_setData1(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_UserEvent::data1(void * value) function, expected prototype:\nvoid SDL_UserEvent::data1(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_UserEvent::data1(void *). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->data1 = value;

		return 0;
	}

	// void SDL_UserEvent::data2(void * value)
	static int _bind_setData2(lua_State *L) {
		if (!_lg_typecheck_setData2(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_UserEvent::data2(void * value) function, expected prototype:\nvoid SDL_UserEvent::data2(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		SDL_UserEvent* self=(Luna< SDL_UserEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_UserEvent::data2(void *). Got : '%s'\n%s",typeid(Luna< SDL_UserEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->data2 = value;

		return 0;
	}


	// Operator binds:

};

SDL_UserEvent* LunaTraits< SDL_UserEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_UserEvent >::_bind_dtor(SDL_UserEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_UserEvent >::className[] = "SDL_UserEvent";
const char LunaTraits< SDL_UserEvent >::fullName[] = "SDL_UserEvent";
const char LunaTraits< SDL_UserEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_UserEvent >::parents[] = {0};
const int LunaTraits< SDL_UserEvent >::hash = 22520081;
const int LunaTraits< SDL_UserEvent >::uniqueIDs[] = {22520081,0};

luna_RegType LunaTraits< SDL_UserEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_UserEvent::_bind_getType},
	{"getCode", &luna_wrapper_SDL_UserEvent::_bind_getCode},
	{"getData1", &luna_wrapper_SDL_UserEvent::_bind_getData1},
	{"getData2", &luna_wrapper_SDL_UserEvent::_bind_getData2},
	{"setType", &luna_wrapper_SDL_UserEvent::_bind_setType},
	{"setCode", &luna_wrapper_SDL_UserEvent::_bind_setCode},
	{"setData1", &luna_wrapper_SDL_UserEvent::_bind_setData1},
	{"setData2", &luna_wrapper_SDL_UserEvent::_bind_setData2},
	{"dynCast", &luna_wrapper_SDL_UserEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_UserEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_UserEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_UserEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_UserEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_UserEvent >::enumValues[] = {
	{0,0}
};


