#include <plug_common.h>

class luna_wrapper_SDL_mutex {
public:
	typedef Luna< SDL_mutex > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83803316) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SDL_mutex*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SDL_mutex* rhs =(Luna< SDL_mutex >::check(L,2));
		SDL_mutex* self=(Luna< SDL_mutex >::check(L,1));
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

		SDL_mutex* self= (SDL_mutex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SDL_mutex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83803316) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< SDL_mutex >::check(L,1));
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

		SDL_mutex* self=(Luna< SDL_mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SDL_mutex");
		
		return luna_dynamicCast(L,converters,"SDL_mutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SDL_mutex* LunaTraits< SDL_mutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SDL_mutex >::_bind_dtor(SDL_mutex* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SDL_mutex >::className[] = "SDL_mutex";
const char LunaTraits< SDL_mutex >::fullName[] = "SDL_mutex";
const char LunaTraits< SDL_mutex >::moduleName[] = "SDL";
const char* LunaTraits< SDL_mutex >::parents[] = {0};
const int LunaTraits< SDL_mutex >::hash = 83803316;
const int LunaTraits< SDL_mutex >::uniqueIDs[] = {83803316,0};

luna_RegType LunaTraits< SDL_mutex >::methods[] = {
	{"dynCast", &luna_wrapper_SDL_mutex::_bind_dynCast},
	{"__eq", &luna_wrapper_SDL_mutex::_bind___eq},
	{"fromVoid", &luna_wrapper_SDL_mutex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SDL_mutex::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SDL_mutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SDL_mutex >::enumValues[] = {
	{0,0}
};


