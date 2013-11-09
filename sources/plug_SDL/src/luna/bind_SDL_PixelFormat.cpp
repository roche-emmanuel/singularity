#include <plug_common.h>

class luna_wrapper_SDL_PixelFormat {
public:
	typedef Luna< SDL_PixelFormat > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19743188) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_PixelFormat*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_PixelFormat* rhs =(Luna< SDL_PixelFormat >::check(L,2));
		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
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

		SDL_PixelFormat* self= (SDL_PixelFormat*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_PixelFormat >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19743188) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_PixelFormat >::check(L,1));
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

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_PixelFormat");
		
		return luna_dynamicCast(L,converters,"SDL_PixelFormat",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPalette(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBitsPerPixel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBytesPerPixel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRloss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGloss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBloss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAloss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRshift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGshift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBshift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAshift(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRmask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGmask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBmask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAmask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorkey(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17403157)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBitsPerPixel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBytesPerPixel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRloss(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGloss(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBloss(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAloss(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRshift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGshift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBshift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAshift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRmask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGmask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBmask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAmask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorkey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// SDL_Palette * SDL_PixelFormat::palette()
	static int _bind_getPalette(lua_State *L) {
		if (!_lg_typecheck_getPalette(L)) {
			luaL_error(L, "luna typecheck failed in SDL_Palette * SDL_PixelFormat::palette() function, expected prototype:\nSDL_Palette * SDL_PixelFormat::palette()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_Palette * SDL_PixelFormat::palette(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SDL_Palette * lret = self->palette;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_Palette >::push(L,lret,false);

		return 1;
	}

	// unsigned char SDL_PixelFormat::BitsPerPixel()
	static int _bind_getBitsPerPixel(lua_State *L) {
		if (!_lg_typecheck_getBitsPerPixel(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::BitsPerPixel() function, expected prototype:\nunsigned char SDL_PixelFormat::BitsPerPixel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::BitsPerPixel(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->BitsPerPixel;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::BytesPerPixel()
	static int _bind_getBytesPerPixel(lua_State *L) {
		if (!_lg_typecheck_getBytesPerPixel(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::BytesPerPixel() function, expected prototype:\nunsigned char SDL_PixelFormat::BytesPerPixel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::BytesPerPixel(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->BytesPerPixel;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Rloss()
	static int _bind_getRloss(lua_State *L) {
		if (!_lg_typecheck_getRloss(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Rloss() function, expected prototype:\nunsigned char SDL_PixelFormat::Rloss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Rloss(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Rloss;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Gloss()
	static int _bind_getGloss(lua_State *L) {
		if (!_lg_typecheck_getGloss(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Gloss() function, expected prototype:\nunsigned char SDL_PixelFormat::Gloss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Gloss(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Gloss;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Bloss()
	static int _bind_getBloss(lua_State *L) {
		if (!_lg_typecheck_getBloss(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Bloss() function, expected prototype:\nunsigned char SDL_PixelFormat::Bloss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Bloss(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Bloss;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Aloss()
	static int _bind_getAloss(lua_State *L) {
		if (!_lg_typecheck_getAloss(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Aloss() function, expected prototype:\nunsigned char SDL_PixelFormat::Aloss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Aloss(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Aloss;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Rshift()
	static int _bind_getRshift(lua_State *L) {
		if (!_lg_typecheck_getRshift(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Rshift() function, expected prototype:\nunsigned char SDL_PixelFormat::Rshift()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Rshift(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Rshift;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Gshift()
	static int _bind_getGshift(lua_State *L) {
		if (!_lg_typecheck_getGshift(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Gshift() function, expected prototype:\nunsigned char SDL_PixelFormat::Gshift()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Gshift(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Gshift;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Bshift()
	static int _bind_getBshift(lua_State *L) {
		if (!_lg_typecheck_getBshift(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Bshift() function, expected prototype:\nunsigned char SDL_PixelFormat::Bshift()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Bshift(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Bshift;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::Ashift()
	static int _bind_getAshift(lua_State *L) {
		if (!_lg_typecheck_getAshift(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::Ashift() function, expected prototype:\nunsigned char SDL_PixelFormat::Ashift()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::Ashift(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Ashift;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned int SDL_PixelFormat::Rmask()
	static int _bind_getRmask(lua_State *L) {
		if (!_lg_typecheck_getRmask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_PixelFormat::Rmask() function, expected prototype:\nunsigned int SDL_PixelFormat::Rmask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_PixelFormat::Rmask(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Rmask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_PixelFormat::Gmask()
	static int _bind_getGmask(lua_State *L) {
		if (!_lg_typecheck_getGmask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_PixelFormat::Gmask() function, expected prototype:\nunsigned int SDL_PixelFormat::Gmask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_PixelFormat::Gmask(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Gmask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_PixelFormat::Bmask()
	static int _bind_getBmask(lua_State *L) {
		if (!_lg_typecheck_getBmask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_PixelFormat::Bmask() function, expected prototype:\nunsigned int SDL_PixelFormat::Bmask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_PixelFormat::Bmask(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Bmask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_PixelFormat::Amask()
	static int _bind_getAmask(lua_State *L) {
		if (!_lg_typecheck_getAmask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_PixelFormat::Amask() function, expected prototype:\nunsigned int SDL_PixelFormat::Amask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_PixelFormat::Amask(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Amask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_PixelFormat::colorkey()
	static int _bind_getColorkey(lua_State *L) {
		if (!_lg_typecheck_getColorkey(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_PixelFormat::colorkey() function, expected prototype:\nunsigned int SDL_PixelFormat::colorkey()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_PixelFormat::colorkey(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->colorkey;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char SDL_PixelFormat::alpha()
	static int _bind_getAlpha(lua_State *L) {
		if (!_lg_typecheck_getAlpha(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_PixelFormat::alpha() function, expected prototype:\nunsigned char SDL_PixelFormat::alpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_PixelFormat::alpha(). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->alpha;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void SDL_PixelFormat::palette(SDL_Palette * value)
	static int _bind_setPalette(lua_State *L) {
		if (!_lg_typecheck_setPalette(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::palette(SDL_Palette * value) function, expected prototype:\nvoid SDL_PixelFormat::palette(SDL_Palette * value)\nClass arguments details:\narg 1 ID = 17403157\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_Palette* value=(Luna< SDL_Palette >::check(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::palette(SDL_Palette *). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->palette = value;

		return 0;
	}

	// void SDL_PixelFormat::BitsPerPixel(unsigned char value)
	static int _bind_setBitsPerPixel(lua_State *L) {
		if (!_lg_typecheck_setBitsPerPixel(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::BitsPerPixel(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::BitsPerPixel(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::BitsPerPixel(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BitsPerPixel = value;

		return 0;
	}

	// void SDL_PixelFormat::BytesPerPixel(unsigned char value)
	static int _bind_setBytesPerPixel(lua_State *L) {
		if (!_lg_typecheck_setBytesPerPixel(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::BytesPerPixel(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::BytesPerPixel(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::BytesPerPixel(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BytesPerPixel = value;

		return 0;
	}

	// void SDL_PixelFormat::Rloss(unsigned char value)
	static int _bind_setRloss(lua_State *L) {
		if (!_lg_typecheck_setRloss(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Rloss(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Rloss(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Rloss(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rloss = value;

		return 0;
	}

	// void SDL_PixelFormat::Gloss(unsigned char value)
	static int _bind_setGloss(lua_State *L) {
		if (!_lg_typecheck_setGloss(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Gloss(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Gloss(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Gloss(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Gloss = value;

		return 0;
	}

	// void SDL_PixelFormat::Bloss(unsigned char value)
	static int _bind_setBloss(lua_State *L) {
		if (!_lg_typecheck_setBloss(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Bloss(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Bloss(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Bloss(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bloss = value;

		return 0;
	}

	// void SDL_PixelFormat::Aloss(unsigned char value)
	static int _bind_setAloss(lua_State *L) {
		if (!_lg_typecheck_setAloss(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Aloss(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Aloss(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Aloss(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Aloss = value;

		return 0;
	}

	// void SDL_PixelFormat::Rshift(unsigned char value)
	static int _bind_setRshift(lua_State *L) {
		if (!_lg_typecheck_setRshift(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Rshift(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Rshift(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Rshift(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rshift = value;

		return 0;
	}

	// void SDL_PixelFormat::Gshift(unsigned char value)
	static int _bind_setGshift(lua_State *L) {
		if (!_lg_typecheck_setGshift(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Gshift(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Gshift(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Gshift(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Gshift = value;

		return 0;
	}

	// void SDL_PixelFormat::Bshift(unsigned char value)
	static int _bind_setBshift(lua_State *L) {
		if (!_lg_typecheck_setBshift(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Bshift(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Bshift(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Bshift(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bshift = value;

		return 0;
	}

	// void SDL_PixelFormat::Ashift(unsigned char value)
	static int _bind_setAshift(lua_State *L) {
		if (!_lg_typecheck_setAshift(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Ashift(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::Ashift(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Ashift(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Ashift = value;

		return 0;
	}

	// void SDL_PixelFormat::Rmask(unsigned int value)
	static int _bind_setRmask(lua_State *L) {
		if (!_lg_typecheck_setRmask(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Rmask(unsigned int value) function, expected prototype:\nvoid SDL_PixelFormat::Rmask(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Rmask(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rmask = value;

		return 0;
	}

	// void SDL_PixelFormat::Gmask(unsigned int value)
	static int _bind_setGmask(lua_State *L) {
		if (!_lg_typecheck_setGmask(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Gmask(unsigned int value) function, expected prototype:\nvoid SDL_PixelFormat::Gmask(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Gmask(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Gmask = value;

		return 0;
	}

	// void SDL_PixelFormat::Bmask(unsigned int value)
	static int _bind_setBmask(lua_State *L) {
		if (!_lg_typecheck_setBmask(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Bmask(unsigned int value) function, expected prototype:\nvoid SDL_PixelFormat::Bmask(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Bmask(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bmask = value;

		return 0;
	}

	// void SDL_PixelFormat::Amask(unsigned int value)
	static int _bind_setAmask(lua_State *L) {
		if (!_lg_typecheck_setAmask(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::Amask(unsigned int value) function, expected prototype:\nvoid SDL_PixelFormat::Amask(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::Amask(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Amask = value;

		return 0;
	}

	// void SDL_PixelFormat::colorkey(unsigned int value)
	static int _bind_setColorkey(lua_State *L) {
		if (!_lg_typecheck_setColorkey(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::colorkey(unsigned int value) function, expected prototype:\nvoid SDL_PixelFormat::colorkey(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::colorkey(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->colorkey = value;

		return 0;
	}

	// void SDL_PixelFormat::alpha(unsigned char value)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_PixelFormat::alpha(unsigned char value) function, expected prototype:\nvoid SDL_PixelFormat::alpha(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_PixelFormat* self=(Luna< SDL_PixelFormat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_PixelFormat::alpha(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_PixelFormat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->alpha = value;

		return 0;
	}


	// Operator binds:

};

SDL_PixelFormat* LunaTraits< SDL_PixelFormat >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_PixelFormat >::_bind_dtor(SDL_PixelFormat* obj) {
	delete obj;
}

const char LunaTraits< SDL_PixelFormat >::className[] = "SDL_PixelFormat";
const char LunaTraits< SDL_PixelFormat >::fullName[] = "SDL_PixelFormat";
const char LunaTraits< SDL_PixelFormat >::moduleName[] = "SDL";
const char* LunaTraits< SDL_PixelFormat >::parents[] = {0};
const int LunaTraits< SDL_PixelFormat >::hash = 19743188;
const int LunaTraits< SDL_PixelFormat >::uniqueIDs[] = {19743188,0};

luna_RegType LunaTraits< SDL_PixelFormat >::methods[] = {
	{"getPalette", &luna_wrapper_SDL_PixelFormat::_bind_getPalette},
	{"getBitsPerPixel", &luna_wrapper_SDL_PixelFormat::_bind_getBitsPerPixel},
	{"getBytesPerPixel", &luna_wrapper_SDL_PixelFormat::_bind_getBytesPerPixel},
	{"getRloss", &luna_wrapper_SDL_PixelFormat::_bind_getRloss},
	{"getGloss", &luna_wrapper_SDL_PixelFormat::_bind_getGloss},
	{"getBloss", &luna_wrapper_SDL_PixelFormat::_bind_getBloss},
	{"getAloss", &luna_wrapper_SDL_PixelFormat::_bind_getAloss},
	{"getRshift", &luna_wrapper_SDL_PixelFormat::_bind_getRshift},
	{"getGshift", &luna_wrapper_SDL_PixelFormat::_bind_getGshift},
	{"getBshift", &luna_wrapper_SDL_PixelFormat::_bind_getBshift},
	{"getAshift", &luna_wrapper_SDL_PixelFormat::_bind_getAshift},
	{"getRmask", &luna_wrapper_SDL_PixelFormat::_bind_getRmask},
	{"getGmask", &luna_wrapper_SDL_PixelFormat::_bind_getGmask},
	{"getBmask", &luna_wrapper_SDL_PixelFormat::_bind_getBmask},
	{"getAmask", &luna_wrapper_SDL_PixelFormat::_bind_getAmask},
	{"getColorkey", &luna_wrapper_SDL_PixelFormat::_bind_getColorkey},
	{"getAlpha", &luna_wrapper_SDL_PixelFormat::_bind_getAlpha},
	{"setPalette", &luna_wrapper_SDL_PixelFormat::_bind_setPalette},
	{"setBitsPerPixel", &luna_wrapper_SDL_PixelFormat::_bind_setBitsPerPixel},
	{"setBytesPerPixel", &luna_wrapper_SDL_PixelFormat::_bind_setBytesPerPixel},
	{"setRloss", &luna_wrapper_SDL_PixelFormat::_bind_setRloss},
	{"setGloss", &luna_wrapper_SDL_PixelFormat::_bind_setGloss},
	{"setBloss", &luna_wrapper_SDL_PixelFormat::_bind_setBloss},
	{"setAloss", &luna_wrapper_SDL_PixelFormat::_bind_setAloss},
	{"setRshift", &luna_wrapper_SDL_PixelFormat::_bind_setRshift},
	{"setGshift", &luna_wrapper_SDL_PixelFormat::_bind_setGshift},
	{"setBshift", &luna_wrapper_SDL_PixelFormat::_bind_setBshift},
	{"setAshift", &luna_wrapper_SDL_PixelFormat::_bind_setAshift},
	{"setRmask", &luna_wrapper_SDL_PixelFormat::_bind_setRmask},
	{"setGmask", &luna_wrapper_SDL_PixelFormat::_bind_setGmask},
	{"setBmask", &luna_wrapper_SDL_PixelFormat::_bind_setBmask},
	{"setAmask", &luna_wrapper_SDL_PixelFormat::_bind_setAmask},
	{"setColorkey", &luna_wrapper_SDL_PixelFormat::_bind_setColorkey},
	{"setAlpha", &luna_wrapper_SDL_PixelFormat::_bind_setAlpha},
	{"dynCast", &luna_wrapper_SDL_PixelFormat::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_PixelFormat::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_PixelFormat::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_PixelFormat::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_PixelFormat >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_PixelFormat >::enumValues[] = {
	{0,0}
};


