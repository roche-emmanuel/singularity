#include <plug_common.h>

class luna_wrapper_ork_SceneManager {
public:
	typedef Luna< ork::SceneManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53477594) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::SceneManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager* rhs =(Luna< ork::SceneManager >::check(L,2));
		ork::SceneManager* self=(Luna< ork::SceneManager >::check(L,1));
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

		ork::SceneManager* self= (ork::SceneManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SceneManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53477594) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::SceneManager >::check(L,1));
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

		ork::SceneManager* self=(Luna< ork::SceneManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::SceneManager");
		
		return luna_dynamicCast(L,converters,"ork::SceneManager",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

ork::SceneManager* LunaTraits< ork::SceneManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::SceneManager >::_bind_dtor(ork::SceneManager* obj) {
	delete obj;
}

const char LunaTraits< ork::SceneManager >::className[] = "SceneManager";
const char LunaTraits< ork::SceneManager >::fullName[] = "ork::SceneManager";
const char LunaTraits< ork::SceneManager >::moduleName[] = "ork";
const char* LunaTraits< ork::SceneManager >::parents[] = {0};
const int LunaTraits< ork::SceneManager >::hash = 53477594;
const int LunaTraits< ork::SceneManager >::uniqueIDs[] = {53477594,0};

luna_RegType LunaTraits< ork::SceneManager >::methods[] = {
	{"dynCast", &luna_wrapper_ork_SceneManager::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_SceneManager::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_SceneManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SceneManager::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SceneManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SceneManager >::enumValues[] = {
	{0,0}
};


