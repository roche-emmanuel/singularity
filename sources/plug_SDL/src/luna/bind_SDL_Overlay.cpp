#include <plug_common.h>

class luna_wrapper_SDL_Overlay {
public:
	typedef Luna< SDL_Overlay > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25026059) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Overlay*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Overlay* rhs =(Luna< SDL_Overlay >::check(L,2));
		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
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

		SDL_Overlay* self= (SDL_Overlay*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Overlay >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25026059) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Overlay >::check(L,1));
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

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Overlay");
		
		return luna_dynamicCast(L,converters,"SDL_Overlay",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_hw_overlay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
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

	inline static bool _lg_typecheck_getPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPitches(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_hw_overlay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnusedBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
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

	inline static bool _lg_typecheck_setPlanes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPitches(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int SDL_Overlay::hw_overlay()
	static int _bind_get_hw_overlay(lua_State *L) {
		if (!_lg_typecheck_get_hw_overlay(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Overlay::hw_overlay() function, expected prototype:\nunsigned int SDL_Overlay::hw_overlay()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Overlay::hw_overlay(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->hw_overlay;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_Overlay::UnusedBits()
	static int _bind_getUnusedBits(lua_State *L) {
		if (!_lg_typecheck_getUnusedBits(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Overlay::UnusedBits() function, expected prototype:\nunsigned int SDL_Overlay::UnusedBits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Overlay::UnusedBits(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->UnusedBits;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_Overlay::format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Overlay::format() function, expected prototype:\nunsigned int SDL_Overlay::format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Overlay::format(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_Overlay::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Overlay::w() function, expected prototype:\nint SDL_Overlay::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Overlay::w(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_Overlay::h()
	static int _bind_getH(lua_State *L) {
		if (!_lg_typecheck_getH(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Overlay::h() function, expected prototype:\nint SDL_Overlay::h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Overlay::h(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->h;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_Overlay::planes()
	static int _bind_getPlanes(lua_State *L) {
		if (!_lg_typecheck_getPlanes(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Overlay::planes() function, expected prototype:\nint SDL_Overlay::planes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Overlay::planes(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->planes;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short * SDL_Overlay::pitches()
	static int _bind_getPitches(lua_State *L) {
		if (!_lg_typecheck_getPitches(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short * SDL_Overlay::pitches() function, expected prototype:\nunsigned short * SDL_Overlay::pitches()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short * SDL_Overlay::pitches(). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short * lret = self->pitches;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// void SDL_Overlay::hw_overlay(unsigned int value)
	static int _bind_set_hw_overlay(lua_State *L) {
		if (!_lg_typecheck_set_hw_overlay(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::hw_overlay(unsigned int value) function, expected prototype:\nvoid SDL_Overlay::hw_overlay(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::hw_overlay(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hw_overlay = value;

		return 0;
	}

	// void SDL_Overlay::UnusedBits(unsigned int value)
	static int _bind_setUnusedBits(lua_State *L) {
		if (!_lg_typecheck_setUnusedBits(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::UnusedBits(unsigned int value) function, expected prototype:\nvoid SDL_Overlay::UnusedBits(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::UnusedBits(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnusedBits = value;

		return 0;
	}

	// void SDL_Overlay::format(unsigned int value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::format(unsigned int value) function, expected prototype:\nvoid SDL_Overlay::format(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::format(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->format = value;

		return 0;
	}

	// void SDL_Overlay::w(int value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::w(int value) function, expected prototype:\nvoid SDL_Overlay::w(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::w(int). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}

	// void SDL_Overlay::h(int value)
	static int _bind_setH(lua_State *L) {
		if (!_lg_typecheck_setH(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::h(int value) function, expected prototype:\nvoid SDL_Overlay::h(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::h(int). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->h = value;

		return 0;
	}

	// void SDL_Overlay::planes(int value)
	static int _bind_setPlanes(lua_State *L) {
		if (!_lg_typecheck_setPlanes(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::planes(int value) function, expected prototype:\nvoid SDL_Overlay::planes(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::planes(int). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->planes = value;

		return 0;
	}

	// void SDL_Overlay::pitches(unsigned short * value)
	static int _bind_setPitches(lua_State *L) {
		if (!_lg_typecheck_setPitches(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Overlay::pitches(unsigned short * value) function, expected prototype:\nvoid SDL_Overlay::pitches(unsigned short * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short* value=(unsigned short*)Luna< void >::check(L,2);

		SDL_Overlay* self=(Luna< SDL_Overlay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Overlay::pitches(unsigned short *). Got : '%s'\n%s",typeid(Luna< SDL_Overlay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pitches = value;

		return 0;
	}


	// Operator binds:

};

SDL_Overlay* LunaTraits< SDL_Overlay >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Overlay >::_bind_dtor(SDL_Overlay* obj) {
	delete obj;
}

const char LunaTraits< SDL_Overlay >::className[] = "SDL_Overlay";
const char LunaTraits< SDL_Overlay >::fullName[] = "SDL_Overlay";
const char LunaTraits< SDL_Overlay >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Overlay >::parents[] = {0};
const int LunaTraits< SDL_Overlay >::hash = 25026059;
const int LunaTraits< SDL_Overlay >::uniqueIDs[] = {25026059,0};

luna_RegType LunaTraits< SDL_Overlay >::methods[] = {
	{"get_hw_overlay", &luna_wrapper_SDL_Overlay::_bind_get_hw_overlay},
	{"getUnusedBits", &luna_wrapper_SDL_Overlay::_bind_getUnusedBits},
	{"getFormat", &luna_wrapper_SDL_Overlay::_bind_getFormat},
	{"getW", &luna_wrapper_SDL_Overlay::_bind_getW},
	{"getH", &luna_wrapper_SDL_Overlay::_bind_getH},
	{"getPlanes", &luna_wrapper_SDL_Overlay::_bind_getPlanes},
	{"getPitches", &luna_wrapper_SDL_Overlay::_bind_getPitches},
	{"set_hw_overlay", &luna_wrapper_SDL_Overlay::_bind_set_hw_overlay},
	{"setUnusedBits", &luna_wrapper_SDL_Overlay::_bind_setUnusedBits},
	{"setFormat", &luna_wrapper_SDL_Overlay::_bind_setFormat},
	{"setW", &luna_wrapper_SDL_Overlay::_bind_setW},
	{"setH", &luna_wrapper_SDL_Overlay::_bind_setH},
	{"setPlanes", &luna_wrapper_SDL_Overlay::_bind_setPlanes},
	{"setPitches", &luna_wrapper_SDL_Overlay::_bind_setPitches},
	{"dynCast", &luna_wrapper_SDL_Overlay::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Overlay::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Overlay::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Overlay::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Overlay >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Overlay >::enumValues[] = {
	{0,0}
};


