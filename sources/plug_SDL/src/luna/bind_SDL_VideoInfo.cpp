#include <plug_common.h>

class luna_wrapper_SDL_VideoInfo {
public:
	typedef Luna< SDL_VideoInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65126038) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_VideoInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_VideoInfo* rhs =(Luna< SDL_VideoInfo >::check(L,2));
		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
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

		SDL_VideoInfo* self= (SDL_VideoInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_VideoInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65126038) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_VideoInfo >::check(L,1));
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

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_VideoInfo");
		
		return luna_dynamicCast(L,converters,"SDL_VideoInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_hw_available(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_wm_available(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedBits1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedBits2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_hw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_hw_CC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_hw_A(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_sw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_sw_CC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_sw_A(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_blit_fill(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnusedBits3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_video_mem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVfmt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_current_w(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_current_h(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_hw_available(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_wm_available(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnusedBits1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnusedBits2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_hw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_hw_CC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_hw_A(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_sw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_sw_CC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_sw_A(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_blit_fill(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnusedBits3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_video_mem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVfmt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19743188)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_current_w(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_current_h(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int SDL_VideoInfo::hw_available()
	static int _bind_get_hw_available(lua_State *L) {
		if (!_lg_typecheck_get_hw_available(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::hw_available() function, expected prototype:\nunsigned int SDL_VideoInfo::hw_available()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::hw_available(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->hw_available;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::wm_available()
	static int _bind_get_wm_available(lua_State *L) {
		if (!_lg_typecheck_get_wm_available(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::wm_available() function, expected prototype:\nunsigned int SDL_VideoInfo::wm_available()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::wm_available(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wm_available;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::UnusedBits1()
	static int _bind_getUnusedBits1(lua_State *L) {
		if (!_lg_typecheck_getUnusedBits1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::UnusedBits1() function, expected prototype:\nunsigned int SDL_VideoInfo::UnusedBits1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::UnusedBits1(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->UnusedBits1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::UnusedBits2()
	static int _bind_getUnusedBits2(lua_State *L) {
		if (!_lg_typecheck_getUnusedBits2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::UnusedBits2() function, expected prototype:\nunsigned int SDL_VideoInfo::UnusedBits2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::UnusedBits2(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->UnusedBits2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_hw()
	static int _bind_get_blit_hw(lua_State *L) {
		if (!_lg_typecheck_get_blit_hw(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_hw() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_hw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_hw(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_hw;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_hw_CC()
	static int _bind_get_blit_hw_CC(lua_State *L) {
		if (!_lg_typecheck_get_blit_hw_CC(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_hw_CC() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_hw_CC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_hw_CC(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_hw_CC;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_hw_A()
	static int _bind_get_blit_hw_A(lua_State *L) {
		if (!_lg_typecheck_get_blit_hw_A(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_hw_A() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_hw_A()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_hw_A(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_hw_A;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_sw()
	static int _bind_get_blit_sw(lua_State *L) {
		if (!_lg_typecheck_get_blit_sw(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_sw() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_sw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_sw(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_sw;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_sw_CC()
	static int _bind_get_blit_sw_CC(lua_State *L) {
		if (!_lg_typecheck_get_blit_sw_CC(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_sw_CC() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_sw_CC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_sw_CC(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_sw_CC;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_sw_A()
	static int _bind_get_blit_sw_A(lua_State *L) {
		if (!_lg_typecheck_get_blit_sw_A(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_sw_A() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_sw_A()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_sw_A(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_sw_A;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::blit_fill()
	static int _bind_get_blit_fill(lua_State *L) {
		if (!_lg_typecheck_get_blit_fill(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::blit_fill() function, expected prototype:\nunsigned int SDL_VideoInfo::blit_fill()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::blit_fill(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blit_fill;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::UnusedBits3()
	static int _bind_getUnusedBits3(lua_State *L) {
		if (!_lg_typecheck_getUnusedBits3(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::UnusedBits3() function, expected prototype:\nunsigned int SDL_VideoInfo::UnusedBits3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::UnusedBits3(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->UnusedBits3;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_VideoInfo::video_mem()
	static int _bind_get_video_mem(lua_State *L) {
		if (!_lg_typecheck_get_video_mem(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_VideoInfo::video_mem() function, expected prototype:\nunsigned int SDL_VideoInfo::video_mem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_VideoInfo::video_mem(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->video_mem;
		lua_pushnumber(L,lret);

		return 1;
	}

	// SDL_PixelFormat * SDL_VideoInfo::vfmt()
	static int _bind_getVfmt(lua_State *L) {
		if (!_lg_typecheck_getVfmt(L)) {
			luaL_error(L, "luna typecheck failed in SDL_PixelFormat * SDL_VideoInfo::vfmt() function, expected prototype:\nSDL_PixelFormat * SDL_VideoInfo::vfmt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call SDL_PixelFormat * SDL_VideoInfo::vfmt(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		SDL_PixelFormat * lret = self->vfmt;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SDL_PixelFormat >::push(L,lret,false);

		return 1;
	}

	// int SDL_VideoInfo::current_w()
	static int _bind_get_current_w(lua_State *L) {
		if (!_lg_typecheck_get_current_w(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_VideoInfo::current_w() function, expected prototype:\nint SDL_VideoInfo::current_w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_VideoInfo::current_w(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->current_w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_VideoInfo::current_h()
	static int _bind_get_current_h(lua_State *L) {
		if (!_lg_typecheck_get_current_h(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_VideoInfo::current_h() function, expected prototype:\nint SDL_VideoInfo::current_h()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_VideoInfo::current_h(). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->current_h;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_VideoInfo::hw_available(unsigned int value)
	static int _bind_set_hw_available(lua_State *L) {
		if (!_lg_typecheck_set_hw_available(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::hw_available(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::hw_available(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::hw_available(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hw_available = value;

		return 0;
	}

	// void SDL_VideoInfo::wm_available(unsigned int value)
	static int _bind_set_wm_available(lua_State *L) {
		if (!_lg_typecheck_set_wm_available(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::wm_available(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::wm_available(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::wm_available(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wm_available = value;

		return 0;
	}

	// void SDL_VideoInfo::UnusedBits1(unsigned int value)
	static int _bind_setUnusedBits1(lua_State *L) {
		if (!_lg_typecheck_setUnusedBits1(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::UnusedBits1(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::UnusedBits1(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::UnusedBits1(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnusedBits1 = value;

		return 0;
	}

	// void SDL_VideoInfo::UnusedBits2(unsigned int value)
	static int _bind_setUnusedBits2(lua_State *L) {
		if (!_lg_typecheck_setUnusedBits2(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::UnusedBits2(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::UnusedBits2(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::UnusedBits2(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnusedBits2 = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_hw(unsigned int value)
	static int _bind_set_blit_hw(lua_State *L) {
		if (!_lg_typecheck_set_blit_hw(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_hw(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_hw(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_hw(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_hw = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_hw_CC(unsigned int value)
	static int _bind_set_blit_hw_CC(lua_State *L) {
		if (!_lg_typecheck_set_blit_hw_CC(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_hw_CC(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_hw_CC(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_hw_CC(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_hw_CC = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_hw_A(unsigned int value)
	static int _bind_set_blit_hw_A(lua_State *L) {
		if (!_lg_typecheck_set_blit_hw_A(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_hw_A(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_hw_A(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_hw_A(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_hw_A = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_sw(unsigned int value)
	static int _bind_set_blit_sw(lua_State *L) {
		if (!_lg_typecheck_set_blit_sw(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_sw(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_sw(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_sw(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_sw = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_sw_CC(unsigned int value)
	static int _bind_set_blit_sw_CC(lua_State *L) {
		if (!_lg_typecheck_set_blit_sw_CC(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_sw_CC(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_sw_CC(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_sw_CC(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_sw_CC = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_sw_A(unsigned int value)
	static int _bind_set_blit_sw_A(lua_State *L) {
		if (!_lg_typecheck_set_blit_sw_A(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_sw_A(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_sw_A(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_sw_A(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_sw_A = value;

		return 0;
	}

	// void SDL_VideoInfo::blit_fill(unsigned int value)
	static int _bind_set_blit_fill(lua_State *L) {
		if (!_lg_typecheck_set_blit_fill(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::blit_fill(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::blit_fill(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::blit_fill(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blit_fill = value;

		return 0;
	}

	// void SDL_VideoInfo::UnusedBits3(unsigned int value)
	static int _bind_setUnusedBits3(lua_State *L) {
		if (!_lg_typecheck_setUnusedBits3(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::UnusedBits3(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::UnusedBits3(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::UnusedBits3(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnusedBits3 = value;

		return 0;
	}

	// void SDL_VideoInfo::video_mem(unsigned int value)
	static int _bind_set_video_mem(lua_State *L) {
		if (!_lg_typecheck_set_video_mem(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::video_mem(unsigned int value) function, expected prototype:\nvoid SDL_VideoInfo::video_mem(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::video_mem(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->video_mem = value;

		return 0;
	}

	// void SDL_VideoInfo::vfmt(SDL_PixelFormat * value)
	static int _bind_setVfmt(lua_State *L) {
		if (!_lg_typecheck_setVfmt(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::vfmt(SDL_PixelFormat * value) function, expected prototype:\nvoid SDL_VideoInfo::vfmt(SDL_PixelFormat * value)\nClass arguments details:\narg 1 ID = 19743188\n\n%s",luna_dumpStack(L).c_str());
		}

		SDL_PixelFormat* value=(Luna< SDL_PixelFormat >::check(L,2));

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::vfmt(SDL_PixelFormat *). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vfmt = value;

		return 0;
	}

	// void SDL_VideoInfo::current_w(int value)
	static int _bind_set_current_w(lua_State *L) {
		if (!_lg_typecheck_set_current_w(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::current_w(int value) function, expected prototype:\nvoid SDL_VideoInfo::current_w(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::current_w(int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->current_w = value;

		return 0;
	}

	// void SDL_VideoInfo::current_h(int value)
	static int _bind_set_current_h(lua_State *L) {
		if (!_lg_typecheck_set_current_h(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_VideoInfo::current_h(int value) function, expected prototype:\nvoid SDL_VideoInfo::current_h(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_VideoInfo* self=(Luna< SDL_VideoInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_VideoInfo::current_h(int). Got : '%s'\n%s",typeid(Luna< SDL_VideoInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->current_h = value;

		return 0;
	}


	// Operator binds:

};

SDL_VideoInfo* LunaTraits< SDL_VideoInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_VideoInfo >::_bind_dtor(SDL_VideoInfo* obj) {
	delete obj;
}

const char LunaTraits< SDL_VideoInfo >::className[] = "SDL_VideoInfo";
const char LunaTraits< SDL_VideoInfo >::fullName[] = "SDL_VideoInfo";
const char LunaTraits< SDL_VideoInfo >::moduleName[] = "SDL";
const char* LunaTraits< SDL_VideoInfo >::parents[] = {0};
const int LunaTraits< SDL_VideoInfo >::hash = 65126038;
const int LunaTraits< SDL_VideoInfo >::uniqueIDs[] = {65126038,0};

luna_RegType LunaTraits< SDL_VideoInfo >::methods[] = {
	{"get_hw_available", &luna_wrapper_SDL_VideoInfo::_bind_get_hw_available},
	{"get_wm_available", &luna_wrapper_SDL_VideoInfo::_bind_get_wm_available},
	{"getUnusedBits1", &luna_wrapper_SDL_VideoInfo::_bind_getUnusedBits1},
	{"getUnusedBits2", &luna_wrapper_SDL_VideoInfo::_bind_getUnusedBits2},
	{"get_blit_hw", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_hw},
	{"get_blit_hw_CC", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_hw_CC},
	{"get_blit_hw_A", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_hw_A},
	{"get_blit_sw", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_sw},
	{"get_blit_sw_CC", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_sw_CC},
	{"get_blit_sw_A", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_sw_A},
	{"get_blit_fill", &luna_wrapper_SDL_VideoInfo::_bind_get_blit_fill},
	{"getUnusedBits3", &luna_wrapper_SDL_VideoInfo::_bind_getUnusedBits3},
	{"get_video_mem", &luna_wrapper_SDL_VideoInfo::_bind_get_video_mem},
	{"getVfmt", &luna_wrapper_SDL_VideoInfo::_bind_getVfmt},
	{"get_current_w", &luna_wrapper_SDL_VideoInfo::_bind_get_current_w},
	{"get_current_h", &luna_wrapper_SDL_VideoInfo::_bind_get_current_h},
	{"set_hw_available", &luna_wrapper_SDL_VideoInfo::_bind_set_hw_available},
	{"set_wm_available", &luna_wrapper_SDL_VideoInfo::_bind_set_wm_available},
	{"setUnusedBits1", &luna_wrapper_SDL_VideoInfo::_bind_setUnusedBits1},
	{"setUnusedBits2", &luna_wrapper_SDL_VideoInfo::_bind_setUnusedBits2},
	{"set_blit_hw", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_hw},
	{"set_blit_hw_CC", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_hw_CC},
	{"set_blit_hw_A", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_hw_A},
	{"set_blit_sw", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_sw},
	{"set_blit_sw_CC", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_sw_CC},
	{"set_blit_sw_A", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_sw_A},
	{"set_blit_fill", &luna_wrapper_SDL_VideoInfo::_bind_set_blit_fill},
	{"setUnusedBits3", &luna_wrapper_SDL_VideoInfo::_bind_setUnusedBits3},
	{"set_video_mem", &luna_wrapper_SDL_VideoInfo::_bind_set_video_mem},
	{"setVfmt", &luna_wrapper_SDL_VideoInfo::_bind_setVfmt},
	{"set_current_w", &luna_wrapper_SDL_VideoInfo::_bind_set_current_w},
	{"set_current_h", &luna_wrapper_SDL_VideoInfo::_bind_set_current_h},
	{"dynCast", &luna_wrapper_SDL_VideoInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_VideoInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_VideoInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_VideoInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_VideoInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_VideoInfo >::enumValues[] = {
	{0,0}
};


