#include <plug_common.h>

class luna_wrapper_SDL_ExposeEvent {
public:
	typedef Luna< SDL_ExposeEvent > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17901200) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_ExposeEvent*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_ExposeEvent* rhs =(Luna< SDL_ExposeEvent >::check(L,2));
		SDL_ExposeEvent* self=(Luna< SDL_ExposeEvent >::check(L,1));
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

		SDL_ExposeEvent* self= (SDL_ExposeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_ExposeEvent >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17901200) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_ExposeEvent >::check(L,1));
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

		SDL_ExposeEvent* self=(Luna< SDL_ExposeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_ExposeEvent");
		
		return luna_dynamicCast(L,converters,"SDL_ExposeEvent",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_ExposeEvent::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_ExposeEvent::type() function, expected prototype:\nunsigned char SDL_ExposeEvent::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_ExposeEvent* self=(Luna< SDL_ExposeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_ExposeEvent::type(). Got : '%s'\n%s",typeid(Luna< SDL_ExposeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_ExposeEvent::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_ExposeEvent::type(unsigned char value) function, expected prototype:\nvoid SDL_ExposeEvent::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_ExposeEvent* self=(Luna< SDL_ExposeEvent >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_ExposeEvent::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_ExposeEvent >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}


	// Operator binds:

};

SDL_ExposeEvent* LunaTraits< SDL_ExposeEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_ExposeEvent >::_bind_dtor(SDL_ExposeEvent* obj) {
	delete obj;
}

const char LunaTraits< SDL_ExposeEvent >::className[] = "SDL_ExposeEvent";
const char LunaTraits< SDL_ExposeEvent >::fullName[] = "SDL_ExposeEvent";
const char LunaTraits< SDL_ExposeEvent >::moduleName[] = "SDL";
const char* LunaTraits< SDL_ExposeEvent >::parents[] = {0};
const int LunaTraits< SDL_ExposeEvent >::hash = 17901200;
const int LunaTraits< SDL_ExposeEvent >::uniqueIDs[] = {17901200,0};

luna_RegType LunaTraits< SDL_ExposeEvent >::methods[] = {
	{"getType", &luna_wrapper_SDL_ExposeEvent::_bind_getType},
	{"setType", &luna_wrapper_SDL_ExposeEvent::_bind_setType},
	{"dynCast", &luna_wrapper_SDL_ExposeEvent::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_ExposeEvent::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_ExposeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_ExposeEvent::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_ExposeEvent >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_ExposeEvent >::enumValues[] = {
	{0,0}
};


