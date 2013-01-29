#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_complex_double {
public:
	typedef Luna< std::complex< double > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37931827) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::complex< double >*)");
		}

		std::complex< double >* rhs =(Luna< std::complex< double > >::check(L,2));
		std::complex< double >* self=(Luna< std::complex< double > >::check(L,1));
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

		std::complex< double >* self=(Luna< std::complex< double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::complex< double >");
		
		return luna_dynamicCast(L,converters,"std::complex< double >",name);
	}

};

std::complex< double >* LunaTraits< std::complex< double > >::_bind_ctor(lua_State *L) {
	return new std::complex< double >();
}

void LunaTraits< std::complex< double > >::_bind_dtor(std::complex< double >* obj) {
	delete obj;
}

const char LunaTraits< std::complex< double > >::className[] = "std_complex_double";
const char LunaTraits< std::complex< double > >::fullName[] = "std::complex< double >";
const char LunaTraits< std::complex< double > >::moduleName[] = "mathgl";
const char* LunaTraits< std::complex< double > >::parents[] = {0};
const int LunaTraits< std::complex< double > >::hash = 37931827;
const int LunaTraits< std::complex< double > >::uniqueIDs[] = {37931827,0};

luna_RegType LunaTraits< std::complex< double > >::methods[] = {
	{"dynCast", &luna_wrapper_std_complex_double::_bind_dynCast},
	{"__eq", &luna_wrapper_std_complex_double::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::complex< double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::complex< double > >::enumValues[] = {
	{0,0}
};


