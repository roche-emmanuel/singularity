#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtPtr_sgt_TerrainQuad {
public:
	typedef Luna< sgtPtr< sgt::TerrainQuad > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59711174) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtPtr< sgt::TerrainQuad >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::TerrainQuad >* rhs =(Luna< sgtPtr< sgt::TerrainQuad > >::check(L,2));
		sgtPtr< sgt::TerrainQuad >* self=(Luna< sgtPtr< sgt::TerrainQuad > >::check(L,1));
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

		sgtPtr< sgt::TerrainQuad >* self=(Luna< sgtPtr< sgt::TerrainQuad > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtPtr< sgt::TerrainQuad >");
		
		return luna_dynamicCast(L,converters,"sgtPtr< sgt::TerrainQuad >",name);
	}

};

sgtPtr< sgt::TerrainQuad >* LunaTraits< sgtPtr< sgt::TerrainQuad > >::_bind_ctor(lua_State *L) {
	return new sgtPtr< sgt::TerrainQuad >();
}

void LunaTraits< sgtPtr< sgt::TerrainQuad > >::_bind_dtor(sgtPtr< sgt::TerrainQuad >* obj) {
	delete obj;
}

const char LunaTraits< sgtPtr< sgt::TerrainQuad > >::className[] = "sgtPtr_sgt_TerrainQuad";
const char LunaTraits< sgtPtr< sgt::TerrainQuad > >::fullName[] = "sgtPtr< sgt::TerrainQuad >";
const char LunaTraits< sgtPtr< sgt::TerrainQuad > >::moduleName[] = "land";
const char* LunaTraits< sgtPtr< sgt::TerrainQuad > >::parents[] = {0};
const int LunaTraits< sgtPtr< sgt::TerrainQuad > >::hash = 59711174;
const int LunaTraits< sgtPtr< sgt::TerrainQuad > >::uniqueIDs[] = {59711174,0};

luna_RegType LunaTraits< sgtPtr< sgt::TerrainQuad > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtPtr_sgt_TerrainQuad::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtPtr_sgt_TerrainQuad::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtPtr< sgt::TerrainQuad > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtPtr< sgt::TerrainQuad > >::enumValues[] = {
	{0,0}
};


