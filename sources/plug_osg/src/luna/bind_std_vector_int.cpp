#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_int {
public:
	typedef Luna< std::vector< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92299338) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< int >*)");
		}

		std::vector< int >* rhs =(Luna< std::vector< int > >::check(L,2));
		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
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

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< int >");
		
		return luna_dynamicCast(L,converters,"std::vector< int >",name);
	}
};

std::vector< int >* LunaTraits< std::vector< int > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< int > >::_bind_dtor(std::vector< int >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< int > >::className[] = "std_vector_int";
const char LunaTraits< std::vector< int > >::fullName[] = "std::vector< int >";
const char LunaTraits< std::vector< int > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< int > >::parents[] = {0};
const int LunaTraits< std::vector< int > >::hash = 92299338;
const int LunaTraits< std::vector< int > >::uniqueIDs[] = {92299338,0};

luna_RegType LunaTraits< std::vector< int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_int::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< int > >::enumValues[] = {
	{0,0}
};


