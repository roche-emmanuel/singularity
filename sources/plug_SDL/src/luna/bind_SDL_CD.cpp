#include <plug_common.h>

class luna_wrapper_SDL_CD {
public:
	typedef Luna< SDL_CD > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41376373) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_CD*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_CD* rhs =(Luna< SDL_CD >::check(L,2));
		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
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

		SDL_CD* self= (SDL_CD*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_CD >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41376373) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_CD >::check(L,1));
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

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_CD");
		
		return luna_dynamicCast(L,converters,"SDL_CD",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNumtracks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cur_track(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_cur_frame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumtracks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_cur_track(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_cur_frame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int SDL_CD::numtracks()
	static int _bind_getNumtracks(lua_State *L) {
		if (!_lg_typecheck_getNumtracks(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_CD::numtracks() function, expected prototype:\nint SDL_CD::numtracks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_CD::numtracks(). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numtracks;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_CD::cur_track()
	static int _bind_get_cur_track(lua_State *L) {
		if (!_lg_typecheck_get_cur_track(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_CD::cur_track() function, expected prototype:\nint SDL_CD::cur_track()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_CD::cur_track(). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->cur_track;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_CD::cur_frame()
	static int _bind_get_cur_frame(lua_State *L) {
		if (!_lg_typecheck_get_cur_frame(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_CD::cur_frame() function, expected prototype:\nint SDL_CD::cur_frame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_CD::cur_frame(). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->cur_frame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_CD::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_CD::id() function, expected prototype:\nint SDL_CD::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_CD::id(). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// CDstatus SDL_CD::status()
	static int _bind_getStatus(lua_State *L) {
		if (!_lg_typecheck_getStatus(L)) {
			luaL_error(L, "luna typecheck failed in CDstatus SDL_CD::status() function, expected prototype:\nCDstatus SDL_CD::status()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CDstatus SDL_CD::status(). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CDstatus lret = self->status;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_CD::numtracks(int value)
	static int _bind_setNumtracks(lua_State *L) {
		if (!_lg_typecheck_setNumtracks(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CD::numtracks(int value) function, expected prototype:\nvoid SDL_CD::numtracks(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CD::numtracks(int). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numtracks = value;

		return 0;
	}

	// void SDL_CD::cur_track(int value)
	static int _bind_set_cur_track(lua_State *L) {
		if (!_lg_typecheck_set_cur_track(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CD::cur_track(int value) function, expected prototype:\nvoid SDL_CD::cur_track(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CD::cur_track(int). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cur_track = value;

		return 0;
	}

	// void SDL_CD::cur_frame(int value)
	static int _bind_set_cur_frame(lua_State *L) {
		if (!_lg_typecheck_set_cur_frame(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CD::cur_frame(int value) function, expected prototype:\nvoid SDL_CD::cur_frame(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CD::cur_frame(int). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cur_frame = value;

		return 0;
	}

	// void SDL_CD::id(int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CD::id(int value) function, expected prototype:\nvoid SDL_CD::id(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CD::id(int). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void SDL_CD::status(CDstatus value)
	static int _bind_setStatus(lua_State *L) {
		if (!_lg_typecheck_setStatus(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CD::status(CDstatus value) function, expected prototype:\nvoid SDL_CD::status(CDstatus value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CDstatus value=(CDstatus)lua_tointeger(L,2);

		SDL_CD* self=(Luna< SDL_CD >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CD::status(CDstatus). Got : '%s'\n%s",typeid(Luna< SDL_CD >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->status = value;

		return 0;
	}


	// Operator binds:

};

SDL_CD* LunaTraits< SDL_CD >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_CD >::_bind_dtor(SDL_CD* obj) {
	delete obj;
}

const char LunaTraits< SDL_CD >::className[] = "SDL_CD";
const char LunaTraits< SDL_CD >::fullName[] = "SDL_CD";
const char LunaTraits< SDL_CD >::moduleName[] = "SDL";
const char* LunaTraits< SDL_CD >::parents[] = {0};
const int LunaTraits< SDL_CD >::hash = 41376373;
const int LunaTraits< SDL_CD >::uniqueIDs[] = {41376373,0};

luna_RegType LunaTraits< SDL_CD >::methods[] = {
	{"getNumtracks", &luna_wrapper_SDL_CD::_bind_getNumtracks},
	{"get_cur_track", &luna_wrapper_SDL_CD::_bind_get_cur_track},
	{"get_cur_frame", &luna_wrapper_SDL_CD::_bind_get_cur_frame},
	{"getId", &luna_wrapper_SDL_CD::_bind_getId},
	{"getStatus", &luna_wrapper_SDL_CD::_bind_getStatus},
	{"setNumtracks", &luna_wrapper_SDL_CD::_bind_setNumtracks},
	{"set_cur_track", &luna_wrapper_SDL_CD::_bind_set_cur_track},
	{"set_cur_frame", &luna_wrapper_SDL_CD::_bind_set_cur_frame},
	{"setId", &luna_wrapper_SDL_CD::_bind_setId},
	{"setStatus", &luna_wrapper_SDL_CD::_bind_setStatus},
	{"dynCast", &luna_wrapper_SDL_CD::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_CD::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_CD::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_CD::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_CD >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_CD >::enumValues[] = {
	{0,0}
};


