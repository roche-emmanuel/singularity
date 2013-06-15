#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_ptr_Uniform {
public:
	typedef Luna< std::vector< ptr< Uniform > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79520723) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< ptr< Uniform > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ptr< Uniform > >* rhs =(Luna< std::vector< ptr< Uniform > > >::check(L,2));
		std::vector< ptr< Uniform > >* self=(Luna< std::vector< ptr< Uniform > > >::check(L,1));
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

		std::vector< ptr< Uniform > >* self=(Luna< std::vector< ptr< Uniform > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< ptr< Uniform > >");
		
		return luna_dynamicCast(L,converters,"std::vector< ptr< Uniform > >",name);
	}

};

std::vector< ptr< Uniform > >* LunaTraits< std::vector< ptr< Uniform > > >::_bind_ctor(lua_State *L) {
	return new std::vector< ptr< Uniform > >();
}

void LunaTraits< std::vector< ptr< Uniform > > >::_bind_dtor(std::vector< ptr< Uniform > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< ptr< Uniform > > >::className[] = "std_vector_ptr_Uniform";
const char LunaTraits< std::vector< ptr< Uniform > > >::fullName[] = "std::vector< ptr< Uniform > >";
const char LunaTraits< std::vector< ptr< Uniform > > >::moduleName[] = "proland";
const char* LunaTraits< std::vector< ptr< Uniform > > >::parents[] = {0};
const int LunaTraits< std::vector< ptr< Uniform > > >::hash = 79520723;
const int LunaTraits< std::vector< ptr< Uniform > > >::uniqueIDs[] = {79520723,0};

luna_RegType LunaTraits< std::vector< ptr< Uniform > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_ptr_Uniform::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_ptr_Uniform::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< ptr< Uniform > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< ptr< Uniform > > >::enumValues[] = {
	{0,0}
};


