#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_ork_SceneManager {
public:
	typedef Luna< ptr< ork::SceneManager > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47272914) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< ork::SceneManager >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< ork::SceneManager >* rhs =(Luna< ptr< ork::SceneManager > >::check(L,2));
		ptr< ork::SceneManager >* self=(Luna< ptr< ork::SceneManager > >::check(L,1));
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

		ptr< ork::SceneManager >* self=(Luna< ptr< ork::SceneManager > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< ork::SceneManager >");
		
		return luna_dynamicCast(L,converters,"ptr< ork::SceneManager >",name);
	}

};

ptr< ork::SceneManager >* LunaTraits< ptr< ork::SceneManager > >::_bind_ctor(lua_State *L) {
	return new ptr< ork::SceneManager >();
}

void LunaTraits< ptr< ork::SceneManager > >::_bind_dtor(ptr< ork::SceneManager >* obj) {
	delete obj;
}

const char LunaTraits< ptr< ork::SceneManager > >::className[] = "ptr_ork_SceneManager";
const char LunaTraits< ptr< ork::SceneManager > >::fullName[] = "ptr< ork::SceneManager >";
const char LunaTraits< ptr< ork::SceneManager > >::moduleName[] = "proland";
const char* LunaTraits< ptr< ork::SceneManager > >::parents[] = {0};
const int LunaTraits< ptr< ork::SceneManager > >::hash = 47272914;
const int LunaTraits< ptr< ork::SceneManager > >::uniqueIDs[] = {47272914,0};

luna_RegType LunaTraits< ptr< ork::SceneManager > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_ork_SceneManager::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_ork_SceneManager::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< ork::SceneManager > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< ork::SceneManager > >::enumValues[] = {
	{0,0}
};


