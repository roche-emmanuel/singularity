#include <plug_common.h>

class luna_wrapper_SDL_Cursor {
public:
	typedef Luna< SDL_Cursor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95432031) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Cursor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Cursor* rhs =(Luna< SDL_Cursor >::check(L,2));
		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
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

		SDL_Cursor* self= (SDL_Cursor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Cursor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95432031) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Cursor >::check(L,1));
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

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Cursor");
		
		return luna_dynamicCast(L,converters,"SDL_Cursor",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getArea(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_hot_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_hot_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63173412) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_hot_x(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_hot_y(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// SDL_Rect SDL_Cursor::area()
	static int _bind_getArea(lua_State *L) {
		if (!_lg_typecheck_getArea(L)) {
			luaL_error(L, "luna typecheck failed in SDL_Rect SDL_Cursor::area() function, expected prototype:\nSDL_Rect SDL_Cursor::area()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_Rect SDL_Cursor::area(). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_Rect* lret = &self->area;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_Rect >::push(L,lret,false);

		return 1;
	}

	// signed short SDL_Cursor::hot_x()
	static int _bind_get_hot_x(lua_State *L) {
		if (!_lg_typecheck_get_hot_x(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_Cursor::hot_x() function, expected prototype:\nsigned short SDL_Cursor::hot_x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_Cursor::hot_x(). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->hot_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed short SDL_Cursor::hot_y()
	static int _bind_get_hot_y(lua_State *L) {
		if (!_lg_typecheck_get_hot_y(L)) {
			luaL_error(L, "luna typecheck failed in signed short SDL_Cursor::hot_y() function, expected prototype:\nsigned short SDL_Cursor::hot_y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call signed short SDL_Cursor::hot_y(). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		signed short lret = self->hot_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * SDL_Cursor::data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * SDL_Cursor::data() function, expected prototype:\nunsigned char * SDL_Cursor::data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * SDL_Cursor::data(). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->data;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned char * SDL_Cursor::mask()
	static int _bind_getMask(lua_State *L) {
		if (!_lg_typecheck_getMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * SDL_Cursor::mask() function, expected prototype:\nunsigned char * SDL_Cursor::mask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * SDL_Cursor::mask(). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->mask;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void SDL_Cursor::area(SDL_Rect value)
	static int _bind_setArea(lua_State *L) {
		if (!_lg_typecheck_setArea(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Cursor::area(SDL_Rect value) function, expected prototype:\nvoid SDL_Cursor::area(SDL_Rect value)\nClass arguments details:\narg 1 ID = 63173412\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Rect* value_ptr=(Luna< SDL_Rect >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Cursor::area function");
		}
		SDL_Rect value=*value_ptr;

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Cursor::area(SDL_Rect). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->area = value;

		return 0;
	}

	// void SDL_Cursor::hot_x(signed short value)
	static int _bind_set_hot_x(lua_State *L) {
		if (!_lg_typecheck_set_hot_x(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Cursor::hot_x(signed short value) function, expected prototype:\nvoid SDL_Cursor::hot_x(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Cursor::hot_x(signed short). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hot_x = value;

		return 0;
	}

	// void SDL_Cursor::hot_y(signed short value)
	static int _bind_set_hot_y(lua_State *L) {
		if (!_lg_typecheck_set_hot_y(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Cursor::hot_y(signed short value) function, expected prototype:\nvoid SDL_Cursor::hot_y(signed short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		signed short value=(signed short)lua_tointeger(L,2);

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Cursor::hot_y(signed short). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hot_y = value;

		return 0;
	}

	// void SDL_Cursor::data(unsigned char * value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Cursor::data(unsigned char * value) function, expected prototype:\nvoid SDL_Cursor::data(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Cursor::data(unsigned char *). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->data = &value;

		return 0;
	}

	// void SDL_Cursor::mask(unsigned char * value)
	static int _bind_setMask(lua_State *L) {
		if (!_lg_typecheck_setMask(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Cursor::mask(unsigned char * value) function, expected prototype:\nvoid SDL_Cursor::mask(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_Cursor* self=(Luna< SDL_Cursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Cursor::mask(unsigned char *). Got : '%s'\n%s",typeid(Luna< SDL_Cursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mask = &value;

		return 0;
	}


	// Operator binds:

};

SDL_Cursor* LunaTraits< SDL_Cursor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Cursor >::_bind_dtor(SDL_Cursor* obj) {
	delete obj;
}

const char LunaTraits< SDL_Cursor >::className[] = "SDL_Cursor";
const char LunaTraits< SDL_Cursor >::fullName[] = "SDL_Cursor";
const char LunaTraits< SDL_Cursor >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Cursor >::parents[] = {0};
const int LunaTraits< SDL_Cursor >::hash = 95432031;
const int LunaTraits< SDL_Cursor >::uniqueIDs[] = {95432031,0};

luna_RegType LunaTraits< SDL_Cursor >::methods[] = {
	{"getArea", &luna_wrapper_SDL_Cursor::_bind_getArea},
	{"get_hot_x", &luna_wrapper_SDL_Cursor::_bind_get_hot_x},
	{"get_hot_y", &luna_wrapper_SDL_Cursor::_bind_get_hot_y},
	{"getData", &luna_wrapper_SDL_Cursor::_bind_getData},
	{"getMask", &luna_wrapper_SDL_Cursor::_bind_getMask},
	{"setArea", &luna_wrapper_SDL_Cursor::_bind_setArea},
	{"set_hot_x", &luna_wrapper_SDL_Cursor::_bind_set_hot_x},
	{"set_hot_y", &luna_wrapper_SDL_Cursor::_bind_set_hot_y},
	{"setData", &luna_wrapper_SDL_Cursor::_bind_setData},
	{"setMask", &luna_wrapper_SDL_Cursor::_bind_setMask},
	{"dynCast", &luna_wrapper_SDL_Cursor::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Cursor::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Cursor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Cursor::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Cursor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Cursor >::enumValues[] = {
	{0,0}
};


