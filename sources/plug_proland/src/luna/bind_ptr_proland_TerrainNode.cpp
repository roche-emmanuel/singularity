#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_proland_TerrainNode {
public:
	typedef Luna< ptr< proland::TerrainNode > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9465964) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< proland::TerrainNode >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< proland::TerrainNode >* rhs =(Luna< ptr< proland::TerrainNode > >::check(L,2));
		ptr< proland::TerrainNode >* self=(Luna< ptr< proland::TerrainNode > >::check(L,1));
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

		ptr< proland::TerrainNode >* self=(Luna< ptr< proland::TerrainNode > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< proland::TerrainNode >");
		
		return luna_dynamicCast(L,converters,"ptr< proland::TerrainNode >",name);
	}

};

ptr< proland::TerrainNode >* LunaTraits< ptr< proland::TerrainNode > >::_bind_ctor(lua_State *L) {
	return new ptr< proland::TerrainNode >();
}

void LunaTraits< ptr< proland::TerrainNode > >::_bind_dtor(ptr< proland::TerrainNode >* obj) {
	delete obj;
}

const char LunaTraits< ptr< proland::TerrainNode > >::className[] = "ptr_proland_TerrainNode";
const char LunaTraits< ptr< proland::TerrainNode > >::fullName[] = "ptr< proland::TerrainNode >";
const char LunaTraits< ptr< proland::TerrainNode > >::moduleName[] = "proland";
const char* LunaTraits< ptr< proland::TerrainNode > >::parents[] = {0};
const int LunaTraits< ptr< proland::TerrainNode > >::hash = 9465964;
const int LunaTraits< ptr< proland::TerrainNode > >::uniqueIDs[] = {9465964,0};

luna_RegType LunaTraits< ptr< proland::TerrainNode > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_proland_TerrainNode::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_proland_TerrainNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< proland::TerrainNode > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< proland::TerrainNode > >::enumValues[] = {
	{0,0}
};


