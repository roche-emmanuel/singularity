#include <plug_common.h>

class luna_wrapper_SDL_CDtrack {
public:
	typedef Luna< SDL_CDtrack > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57367836) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_CDtrack*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_CDtrack* rhs =(Luna< SDL_CDtrack >::check(L,2));
		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
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

		SDL_CDtrack* self= (SDL_CDtrack*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_CDtrack >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57367836) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_CDtrack >::check(L,1));
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

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_CDtrack");
		
		return luna_dynamicCast(L,converters,"SDL_CDtrack",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUnused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUnused(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char SDL_CDtrack::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_CDtrack::id() function, expected prototype:\nunsigned char SDL_CDtrack::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_CDtrack::id(). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->id;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char SDL_CDtrack::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char SDL_CDtrack::type() function, expected prototype:\nunsigned char SDL_CDtrack::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char SDL_CDtrack::type(). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned short SDL_CDtrack::unused()
	static int _bind_getUnused(lua_State *L) {
		if (!_lg_typecheck_getUnused(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short SDL_CDtrack::unused() function, expected prototype:\nunsigned short SDL_CDtrack::unused()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short SDL_CDtrack::unused(). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unused;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_CDtrack::length()
	static int _bind_getLength(lua_State *L) {
		if (!_lg_typecheck_getLength(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_CDtrack::length() function, expected prototype:\nunsigned int SDL_CDtrack::length()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_CDtrack::length(). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->length;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int SDL_CDtrack::offset()
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int SDL_CDtrack::offset() function, expected prototype:\nunsigned int SDL_CDtrack::offset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int SDL_CDtrack::offset(). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->offset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SDL_CDtrack::id(unsigned char value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CDtrack::id(unsigned char value) function, expected prototype:\nvoid SDL_CDtrack::id(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CDtrack::id(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void SDL_CDtrack::type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CDtrack::type(unsigned char value) function, expected prototype:\nvoid SDL_CDtrack::type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CDtrack::type(unsigned char). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void SDL_CDtrack::unused(unsigned short value)
	static int _bind_setUnused(lua_State *L) {
		if (!_lg_typecheck_setUnused(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CDtrack::unused(unsigned short value) function, expected prototype:\nvoid SDL_CDtrack::unused(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CDtrack::unused(unsigned short). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unused = value;

		return 0;
	}

	// void SDL_CDtrack::length(unsigned int value)
	static int _bind_setLength(lua_State *L) {
		if (!_lg_typecheck_setLength(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CDtrack::length(unsigned int value) function, expected prototype:\nvoid SDL_CDtrack::length(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CDtrack::length(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->length = value;

		return 0;
	}

	// void SDL_CDtrack::offset(unsigned int value)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luaL_error(L, "luna typecheck failed in void SDL_CDtrack::offset(unsigned int value) function, expected prototype:\nvoid SDL_CDtrack::offset(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		SDL_CDtrack* self=(Luna< SDL_CDtrack >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void SDL_CDtrack::offset(unsigned int). Got : '%s'\n%s",typeid(Luna< SDL_CDtrack >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offset = value;

		return 0;
	}


	// Operator binds:

};

SDL_CDtrack* LunaTraits< SDL_CDtrack >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_CDtrack >::_bind_dtor(SDL_CDtrack* obj) {
	delete obj;
}

const char LunaTraits< SDL_CDtrack >::className[] = "SDL_CDtrack";
const char LunaTraits< SDL_CDtrack >::fullName[] = "SDL_CDtrack";
const char LunaTraits< SDL_CDtrack >::moduleName[] = "SDL";
const char* LunaTraits< SDL_CDtrack >::parents[] = {0};
const int LunaTraits< SDL_CDtrack >::hash = 57367836;
const int LunaTraits< SDL_CDtrack >::uniqueIDs[] = {57367836,0};

luna_RegType LunaTraits< SDL_CDtrack >::methods[] = {
	{"getId", &luna_wrapper_SDL_CDtrack::_bind_getId},
	{"getType", &luna_wrapper_SDL_CDtrack::_bind_getType},
	{"getUnused", &luna_wrapper_SDL_CDtrack::_bind_getUnused},
	{"getLength", &luna_wrapper_SDL_CDtrack::_bind_getLength},
	{"getOffset", &luna_wrapper_SDL_CDtrack::_bind_getOffset},
	{"setId", &luna_wrapper_SDL_CDtrack::_bind_setId},
	{"setType", &luna_wrapper_SDL_CDtrack::_bind_setType},
	{"setUnused", &luna_wrapper_SDL_CDtrack::_bind_setUnused},
	{"setLength", &luna_wrapper_SDL_CDtrack::_bind_setLength},
	{"setOffset", &luna_wrapper_SDL_CDtrack::_bind_setOffset},
	{"dynCast", &luna_wrapper_SDL_CDtrack::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_CDtrack::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_CDtrack::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_CDtrack::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_CDtrack >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_CDtrack >::enumValues[] = {
	{0,0}
};


