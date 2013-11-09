#include <plug_common.h>

class luna_wrapper_SDL_Rect {
public:
	typedef Luna< SDL_Rect > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63173412) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Rect*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Rect* rhs =(Luna< SDL_Rect >::check(L,2));
		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
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

		SDL_Rect* self= (SDL_Rect*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Rect >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63173412) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Rect >::check(L,1));
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

		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Rect");
		
		return luna_dynamicCast(L,converters,"SDL_Rect",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
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
	// signed short SDL_Rect::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_Rect::x() function, expected prototype:\nsigned short SDL_Rect::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_Rect::x(). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short SDL_Rect::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_Rect::y() function, expected prototype:\nsigned short SDL_Rect::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_Rect::y(). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_Rect::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_Rect::w() function, expected prototype:\nunsigned short SDL_Rect::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_Rect::w(). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_Rect::h()
	static int _bind_getH(lua_State *L) {
		if (!_lg_typecheck_getH(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_Rect::h() function, expected prototype:\nunsigned short SDL_Rect::h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_Rect::h(). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->h;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_Rect::x(signed short value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Rect::x(signed short value) function, expected prototype:\nvoid SDL_Rect::x(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Rect::x(signed short). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void SDL_Rect::y(signed short value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Rect::y(signed short value) function, expected prototype:\nvoid SDL_Rect::y(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Rect::y(signed short). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void SDL_Rect::w(unsigned short value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Rect::w(unsigned short value) function, expected prototype:\nvoid SDL_Rect::w(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Rect::w(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}

	// void SDL_Rect::h(unsigned short value)
	static int _bind_setH(lua_State *L) {
		if (!_lg_typecheck_setH(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Rect::h(unsigned short value) function, expected prototype:\nvoid SDL_Rect::h(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_Rect* self=(Luna< SDL_Rect >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Rect::h(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_Rect >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->h = value;

		return 0;
	}


	// Operator binds:

};

SDL_Rect* LunaTraits< SDL_Rect >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Rect >::_bind_dtor(SDL_Rect* obj) {
	delete obj;
}

const char LunaTraits< SDL_Rect >::className[] = "SDL_Rect";
const char LunaTraits< SDL_Rect >::fullName[] = "SDL_Rect";
const char LunaTraits< SDL_Rect >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Rect >::parents[] = {0};
const int LunaTraits< SDL_Rect >::hash = 63173412;
const int LunaTraits< SDL_Rect >::uniqueIDs[] = {63173412,0};

luna_RegType LunaTraits< SDL_Rect >::methods[] = {
	{"getX", &luna_wrapper_SDL_Rect::_bind_getX},
	{"getY", &luna_wrapper_SDL_Rect::_bind_getY},
	{"getW", &luna_wrapper_SDL_Rect::_bind_getW},
	{"getH", &luna_wrapper_SDL_Rect::_bind_getH},
	{"setX", &luna_wrapper_SDL_Rect::_bind_setX},
	{"setY", &luna_wrapper_SDL_Rect::_bind_setY},
	{"setW", &luna_wrapper_SDL_Rect::_bind_setW},
	{"setH", &luna_wrapper_SDL_Rect::_bind_setH},
	{"dynCast", &luna_wrapper_SDL_Rect::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Rect::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Rect::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Rect::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Rect >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Rect >::enumValues[] = {
	{0,0}
};


