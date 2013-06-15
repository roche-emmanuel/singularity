#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_TerrainQuad {
public:
	typedef Luna< ptr< TerrainQuad > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12456143) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< TerrainQuad >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< TerrainQuad >* rhs =(Luna< ptr< TerrainQuad > >::check(L,2));
		ptr< TerrainQuad >* self=(Luna< ptr< TerrainQuad > >::check(L,1));
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

		ptr< TerrainQuad >* self=(Luna< ptr< TerrainQuad > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< TerrainQuad >");
		
		return luna_dynamicCast(L,converters,"ptr< TerrainQuad >",name);
	}

};

ptr< TerrainQuad >* LunaTraits< ptr< TerrainQuad > >::_bind_ctor(lua_State *L) {
	return new ptr< TerrainQuad >();
}

void LunaTraits< ptr< TerrainQuad > >::_bind_dtor(ptr< TerrainQuad >* obj) {
	delete obj;
}

const char LunaTraits< ptr< TerrainQuad > >::className[] = "ptr_TerrainQuad";
const char LunaTraits< ptr< TerrainQuad > >::fullName[] = "ptr< TerrainQuad >";
const char LunaTraits< ptr< TerrainQuad > >::moduleName[] = "proland";
const char* LunaTraits< ptr< TerrainQuad > >::parents[] = {0};
const int LunaTraits< ptr< TerrainQuad > >::hash = 12456143;
const int LunaTraits< ptr< TerrainQuad > >::uniqueIDs[] = {12456143,0};

luna_RegType LunaTraits< ptr< TerrainQuad > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_TerrainQuad::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_TerrainQuad::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< TerrainQuad > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< TerrainQuad > >::enumValues[] = {
	{0,0}
};


