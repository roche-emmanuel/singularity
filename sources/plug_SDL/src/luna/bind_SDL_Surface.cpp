#include <plug_common.h>

class luna_wrapper_SDL_Surface {
public:
	typedef Luna< SDL_Surface > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58049030) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_Surface*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Surface* rhs =(Luna< SDL_Surface >::check(L,2));
		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
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

		SDL_Surface* self= (SDL_Surface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_Surface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58049030) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_Surface >::check(L,1));
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

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_Surface");
		
		return luna_dynamicCast(L,converters,"SDL_Surface",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getFlags(lua_State *L) {
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

	inline static bool _lg_typecheck_getPitch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPixels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_clip_rect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_format_version(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRefcount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19743188)) ) return false;
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

	inline static bool _lg_typecheck_setPitch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_clip_rect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63173412) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_format_version(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRefcount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int SDL_Surface::flags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Surface::flags() function, expected prototype:\nunsigned int SDL_Surface::flags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Surface::flags(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// SDL_PixelFormat * SDL_Surface::format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in SDL_PixelFormat * SDL_Surface::format() function, expected prototype:\nSDL_PixelFormat * SDL_Surface::format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_PixelFormat * SDL_Surface::format(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SDL_PixelFormat * lret = self->format;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_PixelFormat >::push(L,lret,false);

		return 1;
	}

	// int SDL_Surface::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Surface::w() function, expected prototype:\nint SDL_Surface::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Surface::w(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_Surface::h()
	static int _bind_getH(lua_State *L) {
		if (!_lg_typecheck_getH(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Surface::h() function, expected prototype:\nint SDL_Surface::h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Surface::h(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->h;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_Surface::pitch()
	static int _bind_getPitch(lua_State *L) {
		if (!_lg_typecheck_getPitch(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_Surface::pitch() function, expected prototype:\nunsigned short SDL_Surface::pitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_Surface::pitch(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->pitch;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * SDL_Surface::pixels()
	static int _bind_getPixels(lua_State *L) {
		if (!_lg_typecheck_getPixels(L)) {
			luaL_error(L, "luna typecheck failed in void * SDL_Surface::pixels() function, expected prototype:\nvoid * SDL_Surface::pixels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * SDL_Surface::pixels(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->pixels;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int SDL_Surface::offset()
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Surface::offset() function, expected prototype:\nint SDL_Surface::offset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Surface::offset(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->offset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// SDL_Rect SDL_Surface::clip_rect()
	static int _bind_get_clip_rect(lua_State *L) {
		if (!_lg_typecheck_get_clip_rect(L)) {
			luaL_error(L, "luna typecheck failed in SDL_Rect SDL_Surface::clip_rect() function, expected prototype:\nSDL_Rect SDL_Surface::clip_rect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_Rect SDL_Surface::clip_rect(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const SDL_Rect* lret = &self->clip_rect;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_Rect >::push(L,lret,false);

		return 1;
	}

	// unsigned int SDL_Surface::unused1()
	static int _bind_getUnused1(lua_State *L) {
		if (!_lg_typecheck_getUnused1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Surface::unused1() function, expected prototype:\nunsigned int SDL_Surface::unused1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Surface::unused1(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->unused1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_Surface::locked()
	static int _bind_getLocked(lua_State *L) {
		if (!_lg_typecheck_getLocked(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Surface::locked() function, expected prototype:\nunsigned int SDL_Surface::locked()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Surface::locked(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->locked;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_Surface::format_version()
	static int _bind_get_format_version(lua_State *L) {
		if (!_lg_typecheck_get_format_version(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_Surface::format_version() function, expected prototype:\nunsigned int SDL_Surface::format_version()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_Surface::format_version(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->format_version;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_Surface::refcount()
	static int _bind_getRefcount(lua_State *L) {
		if (!_lg_typecheck_getRefcount(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_Surface::refcount() function, expected prototype:\nint SDL_Surface::refcount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_Surface::refcount(). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->refcount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_Surface::flags(unsigned int value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::flags(unsigned int value) function, expected prototype:\nvoid SDL_Surface::flags(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::flags(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flags = value;

		return 0;
	}

	// void SDL_Surface::format(SDL_PixelFormat * value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::format(SDL_PixelFormat * value) function, expected prototype:\nvoid SDL_Surface::format(SDL_PixelFormat * value)\nClass arguments details:\narg 1 ID = 19743188\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_PixelFormat* value=(Luna< SDL_PixelFormat >::check(L,2));

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::format(SDL_PixelFormat *). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->format = value;

		return 0;
	}

	// void SDL_Surface::w(int value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::w(int value) function, expected prototype:\nvoid SDL_Surface::w(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::w(int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->w = value;

		return 0;
	}

	// void SDL_Surface::h(int value)
	static int _bind_setH(lua_State *L) {
		if (!_lg_typecheck_setH(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::h(int value) function, expected prototype:\nvoid SDL_Surface::h(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::h(int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->h = value;

		return 0;
	}

	// void SDL_Surface::pitch(unsigned short value)
	static int _bind_setPitch(lua_State *L) {
		if (!_lg_typecheck_setPitch(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::pitch(unsigned short value) function, expected prototype:\nvoid SDL_Surface::pitch(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::pitch(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pitch = value;

		return 0;
	}

	// void SDL_Surface::pixels(void * value)
	static int _bind_setPixels(lua_State *L) {
		if (!_lg_typecheck_setPixels(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::pixels(void * value) function, expected prototype:\nvoid SDL_Surface::pixels(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::pixels(void *). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pixels = value;

		return 0;
	}

	// void SDL_Surface::offset(int value)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::offset(int value) function, expected prototype:\nvoid SDL_Surface::offset(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::offset(int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offset = value;

		return 0;
	}

	// void SDL_Surface::clip_rect(SDL_Rect value)
	static int _bind_set_clip_rect(lua_State *L) {
		if (!_lg_typecheck_set_clip_rect(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::clip_rect(SDL_Rect value) function, expected prototype:\nvoid SDL_Surface::clip_rect(SDL_Rect value)\nClass arguments details:\narg 1 ID = 63173412\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Rect* value_ptr=(Luna< SDL_Rect >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in SDL_Surface::clip_rect function");
		}
		SDL_Rect value=*value_ptr;

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::clip_rect(SDL_Rect). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clip_rect = value;

		return 0;
	}

	// void SDL_Surface::unused1(unsigned int value)
	static int _bind_setUnused1(lua_State *L) {
		if (!_lg_typecheck_setUnused1(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::unused1(unsigned int value) function, expected prototype:\nvoid SDL_Surface::unused1(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::unused1(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused1 = value;

		return 0;
	}

	// void SDL_Surface::locked(unsigned int value)
	static int _bind_setLocked(lua_State *L) {
		if (!_lg_typecheck_setLocked(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::locked(unsigned int value) function, expected prototype:\nvoid SDL_Surface::locked(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::locked(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->locked = value;

		return 0;
	}

	// void SDL_Surface::format_version(unsigned int value)
	static int _bind_set_format_version(lua_State *L) {
		if (!_lg_typecheck_set_format_version(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::format_version(unsigned int value) function, expected prototype:\nvoid SDL_Surface::format_version(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::format_version(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->format_version = value;

		return 0;
	}

	// void SDL_Surface::refcount(int value)
	static int _bind_setRefcount(lua_State *L) {
		if (!_lg_typecheck_setRefcount(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_Surface::refcount(int value) function, expected prototype:\nvoid SDL_Surface::refcount(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_Surface* self=(Luna< SDL_Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_Surface::refcount(int). Got : '%s'\n%s",typeid(Luna< SDL_Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->refcount = value;

		return 0;
	}


	// Operator binds:

};

SDL_Surface* LunaTraits< SDL_Surface >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_Surface >::_bind_dtor(SDL_Surface* obj) {
	delete obj;
}

const char LunaTraits< SDL_Surface >::className[] = "SDL_Surface";
const char LunaTraits< SDL_Surface >::fullName[] = "SDL_Surface";
const char LunaTraits< SDL_Surface >::moduleName[] = "SDL";
const char* LunaTraits< SDL_Surface >::parents[] = {0};
const int LunaTraits< SDL_Surface >::hash = 58049030;
const int LunaTraits< SDL_Surface >::uniqueIDs[] = {58049030,0};

luna_RegType LunaTraits< SDL_Surface >::methods[] = {
	{"getFlags", &luna_wrapper_SDL_Surface::_bind_getFlags},
	{"getFormat", &luna_wrapper_SDL_Surface::_bind_getFormat},
	{"getW", &luna_wrapper_SDL_Surface::_bind_getW},
	{"getH", &luna_wrapper_SDL_Surface::_bind_getH},
	{"getPitch", &luna_wrapper_SDL_Surface::_bind_getPitch},
	{"getPixels", &luna_wrapper_SDL_Surface::_bind_getPixels},
	{"getOffset", &luna_wrapper_SDL_Surface::_bind_getOffset},
	{"get_clip_rect", &luna_wrapper_SDL_Surface::_bind_get_clip_rect},
	{"getUnused1", &luna_wrapper_SDL_Surface::_bind_getUnused1},
	{"getLocked", &luna_wrapper_SDL_Surface::_bind_getLocked},
	{"get_format_version", &luna_wrapper_SDL_Surface::_bind_get_format_version},
	{"getRefcount", &luna_wrapper_SDL_Surface::_bind_getRefcount},
	{"setFlags", &luna_wrapper_SDL_Surface::_bind_setFlags},
	{"setFormat", &luna_wrapper_SDL_Surface::_bind_setFormat},
	{"setW", &luna_wrapper_SDL_Surface::_bind_setW},
	{"setH", &luna_wrapper_SDL_Surface::_bind_setH},
	{"setPitch", &luna_wrapper_SDL_Surface::_bind_setPitch},
	{"setPixels", &luna_wrapper_SDL_Surface::_bind_setPixels},
	{"setOffset", &luna_wrapper_SDL_Surface::_bind_setOffset},
	{"set_clip_rect", &luna_wrapper_SDL_Surface::_bind_set_clip_rect},
	{"setUnused1", &luna_wrapper_SDL_Surface::_bind_setUnused1},
	{"setLocked", &luna_wrapper_SDL_Surface::_bind_setLocked},
	{"set_format_version", &luna_wrapper_SDL_Surface::_bind_set_format_version},
	{"setRefcount", &luna_wrapper_SDL_Surface::_bind_setRefcount},
	{"dynCast", &luna_wrapper_SDL_Surface::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_Surface::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_Surface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_Surface::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_Surface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_Surface >::enumValues[] = {
	{0,0}
};


