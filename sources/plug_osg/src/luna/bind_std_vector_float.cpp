#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_float {
public:
	typedef Luna< std::vector< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77249888) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< float >*)");
		}

		std::vector< float >* rhs =(Luna< std::vector< float > >::check(L,2));
		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
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

		std::vector< float >* self=(Luna< std::vector< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< float >");
		
		return luna_dynamicCast(L,converters,"std::vector< float >",name);
	}

};

std::vector< float >* LunaTraits< std::vector< float > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< float > >::_bind_dtor(std::vector< float >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< float > >::className[] = "std_vector_float";
const char LunaTraits< std::vector< float > >::fullName[] = "std::vector< float >";
const char LunaTraits< std::vector< float > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< float > >::parents[] = {0};
const int LunaTraits< std::vector< float > >::hash = 77249888;
const int LunaTraits< std::vector< float > >::uniqueIDs[] = {77249888,0};

luna_RegType LunaTraits< std::vector< float > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_float::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< float > >::enumValues[] = {
	{0,0}
};


