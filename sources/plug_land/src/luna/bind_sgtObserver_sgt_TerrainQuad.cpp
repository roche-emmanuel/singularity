#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtObserver_sgt_TerrainQuad {
public:
	typedef Luna< sgtObserver< sgt::TerrainQuad > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,39952981) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtObserver< sgt::TerrainQuad >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtObserver< sgt::TerrainQuad >* rhs =(Luna< sgtObserver< sgt::TerrainQuad > >::check(L,2));
		sgtObserver< sgt::TerrainQuad >* self=(Luna< sgtObserver< sgt::TerrainQuad > >::check(L,1));
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

		sgtObserver< sgt::TerrainQuad >* self=(Luna< sgtObserver< sgt::TerrainQuad > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtObserver< sgt::TerrainQuad >");
		
		return luna_dynamicCast(L,converters,"sgtObserver< sgt::TerrainQuad >",name);
	}

};

sgtObserver< sgt::TerrainQuad >* LunaTraits< sgtObserver< sgt::TerrainQuad > >::_bind_ctor(lua_State *L) {
	return new sgtObserver< sgt::TerrainQuad >();
}

void LunaTraits< sgtObserver< sgt::TerrainQuad > >::_bind_dtor(sgtObserver< sgt::TerrainQuad >* obj) {
	delete obj;
}

const char LunaTraits< sgtObserver< sgt::TerrainQuad > >::className[] = "sgtObserver_sgt_TerrainQuad";
const char LunaTraits< sgtObserver< sgt::TerrainQuad > >::fullName[] = "sgtObserver< sgt::TerrainQuad >";
const char LunaTraits< sgtObserver< sgt::TerrainQuad > >::moduleName[] = "land";
const char* LunaTraits< sgtObserver< sgt::TerrainQuad > >::parents[] = {0};
const int LunaTraits< sgtObserver< sgt::TerrainQuad > >::hash = 39952981;
const int LunaTraits< sgtObserver< sgt::TerrainQuad > >::uniqueIDs[] = {39952981,0};

luna_RegType LunaTraits< sgtObserver< sgt::TerrainQuad > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtObserver_sgt_TerrainQuad::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtObserver_sgt_TerrainQuad::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtObserver< sgt::TerrainQuad > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtObserver< sgt::TerrainQuad > >::enumValues[] = {
	{0,0}
};


