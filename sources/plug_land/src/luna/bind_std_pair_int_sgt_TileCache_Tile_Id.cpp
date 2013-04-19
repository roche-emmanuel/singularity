#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_int_sgt_TileCache_Tile_Id {
public:
	typedef Luna< std::pair< int, sgt::TileCache::Tile::Id > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29265223) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< int, sgt::TileCache::Tile::Id >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< int, sgt::TileCache::Tile::Id >* rhs =(Luna< std::pair< int, sgt::TileCache::Tile::Id > >::check(L,2));
		std::pair< int, sgt::TileCache::Tile::Id >* self=(Luna< std::pair< int, sgt::TileCache::Tile::Id > >::check(L,1));
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

		std::pair< int, sgt::TileCache::Tile::Id >* self=(Luna< std::pair< int, sgt::TileCache::Tile::Id > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< int, sgt::TileCache::Tile::Id >");
		
		return luna_dynamicCast(L,converters,"std::pair< int, sgt::TileCache::Tile::Id >",name);
	}

};

std::pair< int, sgt::TileCache::Tile::Id >* LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::_bind_ctor(lua_State *L) {
	return new std::pair< int, sgt::TileCache::Tile::Id >();
}

void LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::_bind_dtor(std::pair< int, sgt::TileCache::Tile::Id >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::className[] = "std_pair_int_sgt_TileCache_Tile_Id";
const char LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::fullName[] = "std::pair< int, sgt::TileCache::Tile::Id >";
const char LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::moduleName[] = "land";
const char* LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::parents[] = {0};
const int LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::hash = 29265223;
const int LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::uniqueIDs[] = {29265223,0};

luna_RegType LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_int_sgt_TileCache_Tile_Id::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_int_sgt_TileCache_Tile_Id::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< int, sgt::TileCache::Tile::Id > >::enumValues[] = {
	{0,0}
};


