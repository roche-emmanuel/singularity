#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_long {
public:
	typedef Luna< std::vector< long > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47978518) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< long >*)");
		}

		std::vector< long >* rhs =(Luna< std::vector< long > >::check(L,2));
		std::vector< long >* self=(Luna< std::vector< long > >::check(L,1));
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

		std::vector< long >* self=(Luna< std::vector< long > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< long >");
		
		return luna_dynamicCast(L,converters,"std::vector< long >",name);
	}

};

std::vector< long >* LunaTraits< std::vector< long > >::_bind_ctor(lua_State *L) {
	return new std::vector< long >();
}

void LunaTraits< std::vector< long > >::_bind_dtor(std::vector< long >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< long > >::className[] = "std_vector_long";
const char LunaTraits< std::vector< long > >::fullName[] = "std::vector< long >";
const char LunaTraits< std::vector< long > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< long > >::parents[] = {0};
const int LunaTraits< std::vector< long > >::hash = 47978518;
const int LunaTraits< std::vector< long > >::uniqueIDs[] = {47978518,0};

luna_RegType LunaTraits< std::vector< long > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_long::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_long::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< long > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< long > >::enumValues[] = {
	{0,0}
};


