#include <plug_common.h>

class luna_wrapper_SDL_AudioSpec {
public:
	typedef Luna< SDL_AudioSpec > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21280544) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_AudioSpec*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_AudioSpec* rhs =(Luna< SDL_AudioSpec >::check(L,2));
		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
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

		SDL_AudioSpec* self= (SDL_AudioSpec*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_AudioSpec >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21280544) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_AudioSpec >::check(L,1));
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

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_AudioSpec");
		
		return luna_dynamicCast(L,converters,"SDL_AudioSpec",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_void(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for '1 *'
		////////////////////////////////////////////////////////////////////
		return true;
	}

	inline static bool _lg_typecheck_getFreq(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChannels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSilence(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPadding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserdata(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFreq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChannels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSilence(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPadding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserdata(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// SDL_AudioSpec::void(1 * callback)
	static int _bind_void(lua_State *L) {
		if (!_lg_typecheck_void(L)) {
			luaL_error(L, "luna typecheck failed in SDL_AudioSpec::void(1 * callback) function, expected prototype:\nSDL_AudioSpec::void(1 * callback)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for '1 *' baseTypeName is '1'
		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		// ERROR: Invalid return type object for function 'SDL_AudioSpec::void'
		////////////////////////////////////////////////////////////////////
		return 0;
	}

	// int SDL_AudioSpec::freq()
	static int _bind_getFreq(lua_State *L) {
		if (!_lg_typecheck_getFreq(L)) {
			luaL_error(L, "luna typecheck failed in int SDL_AudioSpec::freq() function, expected prototype:\nint SDL_AudioSpec::freq()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int SDL_AudioSpec::freq(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->freq;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_AudioSpec::format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_AudioSpec::format() function, expected prototype:\nunsigned short SDL_AudioSpec::format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_AudioSpec::format(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char SDL_AudioSpec::channels()
	static int _bind_getChannels(lua_State *L) {
		if (!_lg_typecheck_getChannels(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_AudioSpec::channels() function, expected prototype:\nunsigned char SDL_AudioSpec::channels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_AudioSpec::channels(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->channels;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_AudioSpec::silence()
	static int _bind_getSilence(lua_State *L) {
		if (!_lg_typecheck_getSilence(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_AudioSpec::silence() function, expected prototype:\nunsigned char SDL_AudioSpec::silence()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_AudioSpec::silence(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->silence;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned short SDL_AudioSpec::samples()
	static int _bind_getSamples(lua_State *L) {
		if (!_lg_typecheck_getSamples(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_AudioSpec::samples() function, expected prototype:\nunsigned short SDL_AudioSpec::samples()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_AudioSpec::samples(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->samples;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short SDL_AudioSpec::padding()
	static int _bind_getPadding(lua_State *L) {
		if (!_lg_typecheck_getPadding(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_AudioSpec::padding() function, expected prototype:\nunsigned short SDL_AudioSpec::padding()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_AudioSpec::padding(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->padding;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_AudioSpec::size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_AudioSpec::size() function, expected prototype:\nunsigned int SDL_AudioSpec::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_AudioSpec::size(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * SDL_AudioSpec::userdata()
	static int _bind_getUserdata(lua_State *L) {
		if (!_lg_typecheck_getUserdata(L)) {
			luaL_error(L, "luna typecheck failed in void * SDL_AudioSpec::userdata() function, expected prototype:\nvoid * SDL_AudioSpec::userdata()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * SDL_AudioSpec::userdata(). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->userdata;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void SDL_AudioSpec::freq(int value)
	static int _bind_setFreq(lua_State *L) {
		if (!_lg_typecheck_setFreq(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::freq(int value) function, expected prototype:\nvoid SDL_AudioSpec::freq(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::freq(int). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->freq = value;

		return 0;
	}

	// void SDL_AudioSpec::format(unsigned short value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::format(unsigned short value) function, expected prototype:\nvoid SDL_AudioSpec::format(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::format(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->format = value;

		return 0;
	}

	// void SDL_AudioSpec::channels(unsigned char value)
	static int _bind_setChannels(lua_State *L) {
		if (!_lg_typecheck_setChannels(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::channels(unsigned char value) function, expected prototype:\nvoid SDL_AudioSpec::channels(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::channels(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->channels = value;

		return 0;
	}

	// void SDL_AudioSpec::silence(unsigned char value)
	static int _bind_setSilence(lua_State *L) {
		if (!_lg_typecheck_setSilence(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::silence(unsigned char value) function, expected prototype:\nvoid SDL_AudioSpec::silence(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::silence(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->silence = value;

		return 0;
	}

	// void SDL_AudioSpec::samples(unsigned short value)
	static int _bind_setSamples(lua_State *L) {
		if (!_lg_typecheck_setSamples(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::samples(unsigned short value) function, expected prototype:\nvoid SDL_AudioSpec::samples(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::samples(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->samples = value;

		return 0;
	}

	// void SDL_AudioSpec::padding(unsigned short value)
	static int _bind_setPadding(lua_State *L) {
		if (!_lg_typecheck_setPadding(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::padding(unsigned short value) function, expected prototype:\nvoid SDL_AudioSpec::padding(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::padding(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->padding = value;

		return 0;
	}

	// void SDL_AudioSpec::size(unsigned int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::size(unsigned int value) function, expected prototype:\nvoid SDL_AudioSpec::size(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::size(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->size = value;

		return 0;
	}

	// void SDL_AudioSpec::userdata(void * value)
	static int _bind_setUserdata(lua_State *L) {
		if (!_lg_typecheck_setUserdata(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_AudioSpec::userdata(void * value) function, expected prototype:\nvoid SDL_AudioSpec::userdata(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		SDL_AudioSpec* self=(Luna< SDL_AudioSpec >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_AudioSpec::userdata(void *). Got : '%s'\n%s",typeid(Luna< SDL_AudioSpec >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->userdata = value;

		return 0;
	}


	// Operator binds:

};

SDL_AudioSpec* LunaTraits< SDL_AudioSpec >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_AudioSpec >::_bind_dtor(SDL_AudioSpec* obj) {
	delete obj;
}

const char LunaTraits< SDL_AudioSpec >::className[] = "SDL_AudioSpec";
const char LunaTraits< SDL_AudioSpec >::fullName[] = "SDL_AudioSpec";
const char LunaTraits< SDL_AudioSpec >::moduleName[] = "SDL";
const char* LunaTraits< SDL_AudioSpec >::parents[] = {0};
const int LunaTraits< SDL_AudioSpec >::hash = 21280544;
const int LunaTraits< SDL_AudioSpec >::uniqueIDs[] = {21280544,0};

luna_RegType LunaTraits< SDL_AudioSpec >::methods[] = {
	{"void", &luna_wrapper_SDL_AudioSpec::_bind_void},
	{"getFreq", &luna_wrapper_SDL_AudioSpec::_bind_getFreq},
	{"getFormat", &luna_wrapper_SDL_AudioSpec::_bind_getFormat},
	{"getChannels", &luna_wrapper_SDL_AudioSpec::_bind_getChannels},
	{"getSilence", &luna_wrapper_SDL_AudioSpec::_bind_getSilence},
	{"getSamples", &luna_wrapper_SDL_AudioSpec::_bind_getSamples},
	{"getPadding", &luna_wrapper_SDL_AudioSpec::_bind_getPadding},
	{"getSize", &luna_wrapper_SDL_AudioSpec::_bind_getSize},
	{"getUserdata", &luna_wrapper_SDL_AudioSpec::_bind_getUserdata},
	{"setFreq", &luna_wrapper_SDL_AudioSpec::_bind_setFreq},
	{"setFormat", &luna_wrapper_SDL_AudioSpec::_bind_setFormat},
	{"setChannels", &luna_wrapper_SDL_AudioSpec::_bind_setChannels},
	{"setSilence", &luna_wrapper_SDL_AudioSpec::_bind_setSilence},
	{"setSamples", &luna_wrapper_SDL_AudioSpec::_bind_setSamples},
	{"setPadding", &luna_wrapper_SDL_AudioSpec::_bind_setPadding},
	{"setSize", &luna_wrapper_SDL_AudioSpec::_bind_setSize},
	{"setUserdata", &luna_wrapper_SDL_AudioSpec::_bind_setUserdata},
	{"dynCast", &luna_wrapper_SDL_AudioSpec::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_AudioSpec::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_AudioSpec::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_AudioSpec::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_AudioSpec >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_AudioSpec >::enumValues[] = {
	{0,0}
};


