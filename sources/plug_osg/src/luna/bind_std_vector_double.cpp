#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_double {
public:
	typedef Luna< std::vector< double > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4564820) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< double >*)");
		}

		std::vector< double >* rhs =(Luna< std::vector< double > >::check(L,2));
		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
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

		std::vector< double >* self=(Luna< std::vector< double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< double >");
		
		return luna_dynamicCast(L,converters,"std::vector< double >",name);
	}
};

std::vector< double >* LunaTraits< std::vector< double > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< double > >::_bind_dtor(std::vector< double >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< double > >::className[] = "std_vector_double";
const char LunaTraits< std::vector< double > >::fullName[] = "std::vector< double >";
const char LunaTraits< std::vector< double > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< double > >::parents[] = {0};
const int LunaTraits< std::vector< double > >::hash = 4564820;
const int LunaTraits< std::vector< double > >::uniqueIDs[] = {4564820,0};

luna_RegType LunaTraits< std::vector< double > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_double::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_double::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< double > >::enumValues[] = {
	{0,0}
};


