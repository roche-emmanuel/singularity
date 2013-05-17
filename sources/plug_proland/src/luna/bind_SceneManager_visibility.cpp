#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SceneManager_visibility {
public:
	typedef Luna< SceneManager::visibility > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39027497) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SceneManager::visibility*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		SceneManager::visibility* rhs =(Luna< SceneManager::visibility >::check(L,2));
		SceneManager::visibility* self=(Luna< SceneManager::visibility >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		SceneManager::visibility* self=(Luna< SceneManager::visibility >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SceneManager::visibility");
		
		return luna_dynamicCast(L,converters,"SceneManager::visibility",name);
	}

};

SceneManager::visibility* LunaTraits< SceneManager::visibility >::_bind_ctor(lua_State *L) {
	return new SceneManager::visibility();
}

void LunaTraits< SceneManager::visibility >::_bind_dtor(SceneManager::visibility* obj) {
	delete obj;
}

const char LunaTraits< SceneManager::visibility >::className[] = "SceneManager_visibility";
const char LunaTraits< SceneManager::visibility >::fullName[] = "SceneManager::visibility";
const char LunaTraits< SceneManager::visibility >::moduleName[] = "proland";
const char* LunaTraits< SceneManager::visibility >::parents[] = {0};
const int LunaTraits< SceneManager::visibility >::hash = 39027497;
const int LunaTraits< SceneManager::visibility >::uniqueIDs[] = {39027497,0};

luna_RegType LunaTraits< SceneManager::visibility >::methods[] = {
	{"dynCast", &luna_wrapper_SceneManager_visibility::_bind_dynCast},
	{"__eq", &luna_wrapper_SceneManager_visibility::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< SceneManager::visibility >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SceneManager::visibility >::enumValues[] = {
	{0,0}
};


