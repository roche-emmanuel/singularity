#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtPtr_proland_TerrainQuad {
public:
	typedef Luna< sgtPtr< proland::TerrainQuad > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41173863) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtPtr< proland::TerrainQuad >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< proland::TerrainQuad >* rhs =(Luna< sgtPtr< proland::TerrainQuad > >::check(L,2));
		sgtPtr< proland::TerrainQuad >* self=(Luna< sgtPtr< proland::TerrainQuad > >::check(L,1));
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

		sgtPtr< proland::TerrainQuad >* self=(Luna< sgtPtr< proland::TerrainQuad > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtPtr< proland::TerrainQuad >");
		
		return luna_dynamicCast(L,converters,"sgtPtr< proland::TerrainQuad >",name);
	}

};

sgtPtr< proland::TerrainQuad >* LunaTraits< sgtPtr< proland::TerrainQuad > >::_bind_ctor(lua_State *L) {
	return new sgtPtr< proland::TerrainQuad >();
}

void LunaTraits< sgtPtr< proland::TerrainQuad > >::_bind_dtor(sgtPtr< proland::TerrainQuad >* obj) {
	delete obj;
}

const char LunaTraits< sgtPtr< proland::TerrainQuad > >::className[] = "sgtPtr_proland_TerrainQuad";
const char LunaTraits< sgtPtr< proland::TerrainQuad > >::fullName[] = "sgtPtr< proland::TerrainQuad >";
const char LunaTraits< sgtPtr< proland::TerrainQuad > >::moduleName[] = "proland";
const char* LunaTraits< sgtPtr< proland::TerrainQuad > >::parents[] = {0};
const int LunaTraits< sgtPtr< proland::TerrainQuad > >::hash = 41173863;
const int LunaTraits< sgtPtr< proland::TerrainQuad > >::uniqueIDs[] = {41173863,0};

luna_RegType LunaTraits< sgtPtr< proland::TerrainQuad > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtPtr_proland_TerrainQuad::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtPtr_proland_TerrainQuad::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtPtr< proland::TerrainQuad > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtPtr< proland::TerrainQuad > >::enumValues[] = {
	{0,0}
};


