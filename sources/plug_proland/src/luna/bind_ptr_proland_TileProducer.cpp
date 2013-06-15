#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_proland_TileProducer {
public:
	typedef Luna< ptr< proland::TileProducer > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45761065) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< proland::TileProducer >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< proland::TileProducer >* rhs =(Luna< ptr< proland::TileProducer > >::check(L,2));
		ptr< proland::TileProducer >* self=(Luna< ptr< proland::TileProducer > >::check(L,1));
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

		ptr< proland::TileProducer >* self=(Luna< ptr< proland::TileProducer > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< proland::TileProducer >");
		
		return luna_dynamicCast(L,converters,"ptr< proland::TileProducer >",name);
	}

};

ptr< proland::TileProducer >* LunaTraits< ptr< proland::TileProducer > >::_bind_ctor(lua_State *L) {
	return new ptr< proland::TileProducer >();
}

void LunaTraits< ptr< proland::TileProducer > >::_bind_dtor(ptr< proland::TileProducer >* obj) {
	delete obj;
}

const char LunaTraits< ptr< proland::TileProducer > >::className[] = "ptr_proland_TileProducer";
const char LunaTraits< ptr< proland::TileProducer > >::fullName[] = "ptr< proland::TileProducer >";
const char LunaTraits< ptr< proland::TileProducer > >::moduleName[] = "proland";
const char* LunaTraits< ptr< proland::TileProducer > >::parents[] = {0};
const int LunaTraits< ptr< proland::TileProducer > >::hash = 45761065;
const int LunaTraits< ptr< proland::TileProducer > >::uniqueIDs[] = {45761065,0};

luna_RegType LunaTraits< ptr< proland::TileProducer > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_proland_TileProducer::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_proland_TileProducer::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< proland::TileProducer > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< proland::TileProducer > >::enumValues[] = {
	{0,0}
};


