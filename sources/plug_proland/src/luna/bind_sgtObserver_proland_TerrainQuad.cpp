#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtObserver_proland_TerrainQuad {
public:
	typedef Luna< sgtObserver< proland::TerrainQuad > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,929176) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtObserver< proland::TerrainQuad >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtObserver< proland::TerrainQuad >* rhs =(Luna< sgtObserver< proland::TerrainQuad > >::check(L,2));
		sgtObserver< proland::TerrainQuad >* self=(Luna< sgtObserver< proland::TerrainQuad > >::check(L,1));
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

		sgtObserver< proland::TerrainQuad >* self=(Luna< sgtObserver< proland::TerrainQuad > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtObserver< proland::TerrainQuad >");
		
		return luna_dynamicCast(L,converters,"sgtObserver< proland::TerrainQuad >",name);
	}

};

sgtObserver< proland::TerrainQuad >* LunaTraits< sgtObserver< proland::TerrainQuad > >::_bind_ctor(lua_State *L) {
	return new sgtObserver< proland::TerrainQuad >();
}

void LunaTraits< sgtObserver< proland::TerrainQuad > >::_bind_dtor(sgtObserver< proland::TerrainQuad >* obj) {
	delete obj;
}

const char LunaTraits< sgtObserver< proland::TerrainQuad > >::className[] = "sgtObserver_proland_TerrainQuad";
const char LunaTraits< sgtObserver< proland::TerrainQuad > >::fullName[] = "sgtObserver< proland::TerrainQuad >";
const char LunaTraits< sgtObserver< proland::TerrainQuad > >::moduleName[] = "proland";
const char* LunaTraits< sgtObserver< proland::TerrainQuad > >::parents[] = {0};
const int LunaTraits< sgtObserver< proland::TerrainQuad > >::hash = 929176;
const int LunaTraits< sgtObserver< proland::TerrainQuad > >::uniqueIDs[] = {929176,0};

luna_RegType LunaTraits< sgtObserver< proland::TerrainQuad > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtObserver_proland_TerrainQuad::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtObserver_proland_TerrainQuad::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtObserver< proland::TerrainQuad > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtObserver< proland::TerrainQuad > >::enumValues[] = {
	{0,0}
};


