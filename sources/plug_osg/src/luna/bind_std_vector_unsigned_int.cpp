#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_unsigned_int {
public:
	typedef Luna< std::vector< unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27834872) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< unsigned int >*)");
		}

		std::vector< unsigned int >* rhs =(Luna< std::vector< unsigned int > >::check(L,2));
		std::vector< unsigned int >* self=(Luna< std::vector< unsigned int > >::check(L,1));
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

		std::vector< unsigned int >* self=(Luna< std::vector< unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< unsigned int >");
		
		return luna_dynamicCast(L,converters,"std::vector< unsigned int >",name);
	}

};

std::vector< unsigned int >* LunaTraits< std::vector< unsigned int > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< unsigned int > >::_bind_dtor(std::vector< unsigned int >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< unsigned int > >::className[] = "std_vector_unsigned_int";
const char LunaTraits< std::vector< unsigned int > >::fullName[] = "std::vector< unsigned int >";
const char LunaTraits< std::vector< unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< unsigned int > >::parents[] = {0};
const int LunaTraits< std::vector< unsigned int > >::hash = 27834872;
const int LunaTraits< std::vector< unsigned int > >::uniqueIDs[] = {27834872,0};

luna_RegType LunaTraits< std::vector< unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< unsigned int > >::enumValues[] = {
	{0,0}
};


