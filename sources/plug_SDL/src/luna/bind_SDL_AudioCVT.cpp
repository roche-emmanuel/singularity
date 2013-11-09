#include <plug_common.h>

class luna_wrapper_SDL_AudioCVT {
public:
	typedef Luna< SDL_AudioCVT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74863825) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_AudioCVT*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_AudioCVT* rhs =(Luna< SDL_AudioCVT >::check(L,2));
		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
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

		SDL_AudioCVT* self= (SDL_AudioCVT*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_AudioCVT >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74863825) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_AudioCVT >::check(L,1));
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

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_AudioCVT");
		
		return luna_dynamicCast(L,converters,"SDL_AudioCVT",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getNeeded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_src_format(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_dst_format(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_rate_incr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBuf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_len_cvt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_len_mult(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_len_ratio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_filter_index(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNeeded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_src_format(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_dst_format(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_rate_incr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBuf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_len_cvt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_len_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_len_ratio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_filter_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int SDL_AudioCVT::needed()
	static int _bind_getNeeded(lua_State *L) {
		if (!_lg_typecheck_getNeeded(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_AudioCVT::needed() function, expected prototype:\nint SDL_AudioCVT::needed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_AudioCVT::needed(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->needed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_AudioCVT::src_format()
	static int _bind_get_src_format(lua_State *L) {
		if (!_lg_typecheck_get_src_format(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_AudioCVT::src_format() function, expected prototype:\nunsigned short SDL_AudioCVT::src_format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_AudioCVT::src_format(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->src_format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_AudioCVT::dst_format()
	static int _bind_get_dst_format(lua_State *L) {
		if (!_lg_typecheck_get_dst_format(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_AudioCVT::dst_format() function, expected prototype:\nunsigned short SDL_AudioCVT::dst_format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_AudioCVT::dst_format(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->dst_format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double SDL_AudioCVT::rate_incr()
	static int _bind_get_rate_incr(lua_State *L) {
		if (!_lg_typecheck_get_rate_incr(L)) {
			luaL_error(L, "luna typecheck failed in double SDL_AudioCVT::rate_incr() function, expected prototype:\ndouble SDL_AudioCVT::rate_incr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double SDL_AudioCVT::rate_incr(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->rate_incr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * SDL_AudioCVT::buf()
	static int _bind_getBuf(lua_State *L) {
		if (!_lg_typecheck_getBuf(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * SDL_AudioCVT::buf() function, expected prototype:\nunsigned char * SDL_AudioCVT::buf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * SDL_AudioCVT::buf(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->buf;
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int SDL_AudioCVT::len()
	static int _bind_getLen(lua_State *L) {
		if (!_lg_typecheck_getLen(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_AudioCVT::len() function, expected prototype:\nint SDL_AudioCVT::len()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_AudioCVT::len(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->len;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_AudioCVT::len_cvt()
	static int _bind_get_len_cvt(lua_State *L) {
		if (!_lg_typecheck_get_len_cvt(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_AudioCVT::len_cvt() function, expected prototype:\nint SDL_AudioCVT::len_cvt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_AudioCVT::len_cvt(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->len_cvt;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_AudioCVT::len_mult()
	static int _bind_get_len_mult(lua_State *L) {
		if (!_lg_typecheck_get_len_mult(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_AudioCVT::len_mult() function, expected prototype:\nint SDL_AudioCVT::len_mult()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_AudioCVT::len_mult(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->len_mult;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double SDL_AudioCVT::len_ratio()
	static int _bind_get_len_ratio(lua_State *L) {
		if (!_lg_typecheck_get_len_ratio(L)) {
			luaL_error(L, "luna typecheck failed in double SDL_AudioCVT::len_ratio() function, expected prototype:\ndouble SDL_AudioCVT::len_ratio()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double SDL_AudioCVT::len_ratio(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->len_ratio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int SDL_AudioCVT::filter_index()
	static int _bind_get_filter_index(lua_State *L) {
		if (!_lg_typecheck_get_filter_index(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_AudioCVT::filter_index() function, expected prototype:\nint SDL_AudioCVT::filter_index()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_AudioCVT::filter_index(). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->filter_index;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_AudioCVT::needed(int value)
	static int _bind_setNeeded(lua_State *L) {
		if (!_lg_typecheck_setNeeded(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::needed(int value) function, expected prototype:\nvoid SDL_AudioCVT::needed(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::needed(int). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->needed = value;

		return 0;
	}

	// void SDL_AudioCVT::src_format(unsigned short value)
	static int _bind_set_src_format(lua_State *L) {
		if (!_lg_typecheck_set_src_format(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::src_format(unsigned short value) function, expected prototype:\nvoid SDL_AudioCVT::src_format(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::src_format(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->src_format = value;

		return 0;
	}

	// void SDL_AudioCVT::dst_format(unsigned short value)
	static int _bind_set_dst_format(lua_State *L) {
		if (!_lg_typecheck_set_dst_format(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::dst_format(unsigned short value) function, expected prototype:\nvoid SDL_AudioCVT::dst_format(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::dst_format(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dst_format = value;

		return 0;
	}

	// void SDL_AudioCVT::rate_incr(double value)
	static int _bind_set_rate_incr(lua_State *L) {
		if (!_lg_typecheck_set_rate_incr(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::rate_incr(double value) function, expected prototype:\nvoid SDL_AudioCVT::rate_incr(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::rate_incr(double). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rate_incr = value;

		return 0;
	}

	// void SDL_AudioCVT::buf(unsigned char * value)
	static int _bind_setBuf(lua_State *L) {
		if (!_lg_typecheck_setBuf(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::buf(unsigned char * value) function, expected prototype:\nvoid SDL_AudioCVT::buf(unsigned char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::buf(unsigned char *). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buf = &value;

		return 0;
	}

	// void SDL_AudioCVT::len(int value)
	static int _bind_setLen(lua_State *L) {
		if (!_lg_typecheck_setLen(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::len(int value) function, expected prototype:\nvoid SDL_AudioCVT::len(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::len(int). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->len = value;

		return 0;
	}

	// void SDL_AudioCVT::len_cvt(int value)
	static int _bind_set_len_cvt(lua_State *L) {
		if (!_lg_typecheck_set_len_cvt(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::len_cvt(int value) function, expected prototype:\nvoid SDL_AudioCVT::len_cvt(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::len_cvt(int). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->len_cvt = value;

		return 0;
	}

	// void SDL_AudioCVT::len_mult(int value)
	static int _bind_set_len_mult(lua_State *L) {
		if (!_lg_typecheck_set_len_mult(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::len_mult(int value) function, expected prototype:\nvoid SDL_AudioCVT::len_mult(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::len_mult(int). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->len_mult = value;

		return 0;
	}

	// void SDL_AudioCVT::len_ratio(double value)
	static int _bind_set_len_ratio(lua_State *L) {
		if (!_lg_typecheck_set_len_ratio(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::len_ratio(double value) function, expected prototype:\nvoid SDL_AudioCVT::len_ratio(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::len_ratio(double). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->len_ratio = value;

		return 0;
	}

	// void SDL_AudioCVT::filter_index(int value)
	static int _bind_set_filter_index(lua_State *L) {
		if (!_lg_typecheck_set_filter_index(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioCVT::filter_index(int value) function, expected prototype:\nvoid SDL_AudioCVT::filter_index(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_AudioCVT* self=(Luna< SDL_AudioCVT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioCVT::filter_index(int). Got : '%s'\n%s",typeid(Luna< SDL_AudioCVT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->filter_index = value;

		return 0;
	}


	// Operator binds:

};

SDL_AudioCVT* LunaTraits< SDL_AudioCVT >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_AudioCVT >::_bind_dtor(SDL_AudioCVT* obj) {
	delete obj;
}

const char LunaTraits< SDL_AudioCVT >::className[] = "SDL_AudioCVT";
const char LunaTraits< SDL_AudioCVT >::fullName[] = "SDL_AudioCVT";
const char LunaTraits< SDL_AudioCVT >::moduleName[] = "SDL";
const char* LunaTraits< SDL_AudioCVT >::parents[] = {0};
const int LunaTraits< SDL_AudioCVT >::hash = 74863825;
const int LunaTraits< SDL_AudioCVT >::uniqueIDs[] = {74863825,0};

luna_RegType LunaTraits< SDL_AudioCVT >::methods[] = {
	{"getNeeded", &luna_wrapper_SDL_AudioCVT::_bind_getNeeded},
	{"get_src_format", &luna_wrapper_SDL_AudioCVT::_bind_get_src_format},
	{"get_dst_format", &luna_wrapper_SDL_AudioCVT::_bind_get_dst_format},
	{"get_rate_incr", &luna_wrapper_SDL_AudioCVT::_bind_get_rate_incr},
	{"getBuf", &luna_wrapper_SDL_AudioCVT::_bind_getBuf},
	{"getLen", &luna_wrapper_SDL_AudioCVT::_bind_getLen},
	{"get_len_cvt", &luna_wrapper_SDL_AudioCVT::_bind_get_len_cvt},
	{"get_len_mult", &luna_wrapper_SDL_AudioCVT::_bind_get_len_mult},
	{"get_len_ratio", &luna_wrapper_SDL_AudioCVT::_bind_get_len_ratio},
	{"get_filter_index", &luna_wrapper_SDL_AudioCVT::_bind_get_filter_index},
	{"setNeeded", &luna_wrapper_SDL_AudioCVT::_bind_setNeeded},
	{"set_src_format", &luna_wrapper_SDL_AudioCVT::_bind_set_src_format},
	{"set_dst_format", &luna_wrapper_SDL_AudioCVT::_bind_set_dst_format},
	{"set_rate_incr", &luna_wrapper_SDL_AudioCVT::_bind_set_rate_incr},
	{"setBuf", &luna_wrapper_SDL_AudioCVT::_bind_setBuf},
	{"setLen", &luna_wrapper_SDL_AudioCVT::_bind_setLen},
	{"set_len_cvt", &luna_wrapper_SDL_AudioCVT::_bind_set_len_cvt},
	{"set_len_mult", &luna_wrapper_SDL_AudioCVT::_bind_set_len_mult},
	{"set_len_ratio", &luna_wrapper_SDL_AudioCVT::_bind_set_len_ratio},
	{"set_filter_index", &luna_wrapper_SDL_AudioCVT::_bind_set_filter_index},
	{"dynCast", &luna_wrapper_SDL_AudioCVT::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_AudioCVT::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_AudioCVT::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_AudioCVT::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_AudioCVT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_AudioCVT >::enumValues[] = {
	{0,0}
};


