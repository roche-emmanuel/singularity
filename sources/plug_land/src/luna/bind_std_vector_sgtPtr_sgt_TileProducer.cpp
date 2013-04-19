#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_sgtPtr_sgt_TileProducer {
public:
	typedef Luna< std::vector< sgtPtr< sgt::TileProducer > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23986170) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< sgtPtr< sgt::TileProducer > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< sgtPtr< sgt::TileProducer > >* rhs =(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,2));
		std::vector< sgtPtr< sgt::TileProducer > >* self=(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,1));
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

		std::vector< sgtPtr< sgt::TileProducer > >* self=(Luna< std::vector< sgtPtr< sgt::TileProducer > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< sgtPtr< sgt::TileProducer > >");
		
		return luna_dynamicCast(L,converters,"std::vector< sgtPtr< sgt::TileProducer > >",name);
	}

};

std::vector< sgtPtr< sgt::TileProducer > >* LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::_bind_ctor(lua_State *L) {
	return new std::vector< sgtPtr< sgt::TileProducer > >();
}

void LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::_bind_dtor(std::vector< sgtPtr< sgt::TileProducer > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::className[] = "std_vector_sgtPtr_sgt_TileProducer";
const char LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::fullName[] = "std::vector< sgtPtr< sgt::TileProducer > >";
const char LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::moduleName[] = "land";
const char* LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::parents[] = {0};
const int LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::hash = 23986170;
const int LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::uniqueIDs[] = {23986170,0};

luna_RegType LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_sgtPtr_sgt_TileProducer::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_sgtPtr_sgt_TileProducer::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< sgtPtr< sgt::TileProducer > > >::enumValues[] = {
	{0,0}
};


