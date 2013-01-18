#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_micropather_StateCost {
public:
	typedef Luna< std::vector< micropather::StateCost > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74098665) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< micropather::StateCost >*)");
		}

		std::vector< micropather::StateCost >* rhs =(Luna< std::vector< micropather::StateCost > >::check(L,2));
		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		std::vector< micropather::StateCost >* self=(Luna< std::vector< micropather::StateCost > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< micropather::StateCost >");
		
		return luna_dynamicCast(L,converters,"std::vector< micropather::StateCost >",name);
	}

};

std::vector< micropather::StateCost >* LunaTraits< std::vector< micropather::StateCost > >::_bind_ctor(lua_State *L) {
	return new std::vector< micropather::StateCost >();
}

void LunaTraits< std::vector< micropather::StateCost > >::_bind_dtor(std::vector< micropather::StateCost >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< micropather::StateCost > >::className[] = "std_vector_micropather_StateCost";
const char LunaTraits< std::vector< micropather::StateCost > >::fullName[] = "std::vector< micropather::StateCost >";
const char LunaTraits< std::vector< micropather::StateCost > >::moduleName[] = "micropather";
const char* LunaTraits< std::vector< micropather::StateCost > >::parents[] = {0};
const int LunaTraits< std::vector< micropather::StateCost > >::hash = 74098665;
const int LunaTraits< std::vector< micropather::StateCost > >::uniqueIDs[] = {74098665,0};

luna_RegType LunaTraits< std::vector< micropather::StateCost > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_micropather_StateCost::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_micropather_StateCost::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< micropather::StateCost > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< micropather::StateCost > >::enumValues[] = {
	{0,0}
};


