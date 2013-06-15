#include <plug_common.h>

class luna_wrapper_proland_LandManager {
public:
	typedef Luna< proland::LandManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22298504) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::LandManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::LandManager* rhs =(Luna< proland::LandManager >::check(L,2));
		proland::LandManager* self=(Luna< proland::LandManager >::check(L,1));
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

		proland::LandManager* self= (proland::LandManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LandManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22298504) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::LandManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		proland::LandManager* self=(Luna< proland::LandManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::LandManager");
		
		return luna_dynamicCast(L,converters,"proland::LandManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setCurrentContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void proland::LandManager::setCurrentContext(int contextId)
	static int _bind_setCurrentContext(lua_State *L) {
		if (!_lg_typecheck_setCurrentContext(L)) {
			luaL_error(L, "luna typecheck failed in static void proland::LandManager::setCurrentContext(int contextId) function, expected prototype:\nstatic void proland::LandManager::setCurrentContext(int contextId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int contextId=(int)lua_tointeger(L,1);

		proland::LandManager::setCurrentContext(contextId);

		return 0;
	}


	// Operator binds:

};

proland::LandManager* LunaTraits< proland::LandManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::LandManager >::_bind_dtor(proland::LandManager* obj) {
	delete obj;
}

const char LunaTraits< proland::LandManager >::className[] = "LandManager";
const char LunaTraits< proland::LandManager >::fullName[] = "proland::LandManager";
const char LunaTraits< proland::LandManager >::moduleName[] = "proland";
const char* LunaTraits< proland::LandManager >::parents[] = {0};
const int LunaTraits< proland::LandManager >::hash = 22298504;
const int LunaTraits< proland::LandManager >::uniqueIDs[] = {22298504,0};

luna_RegType LunaTraits< proland::LandManager >::methods[] = {
	{"setCurrentContext", &luna_wrapper_proland_LandManager::_bind_setCurrentContext},
	{"dynCast", &luna_wrapper_proland_LandManager::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_LandManager::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_LandManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LandManager::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LandManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LandManager >::enumValues[] = {
	{0,0}
};


