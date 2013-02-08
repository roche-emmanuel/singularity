#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_Area {
public:
	typedef Luna< std::vector< Area > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19421931) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< Area >*)");
		}

		std::vector< Area >* rhs =(Luna< std::vector< Area > >::check(L,2));
		std::vector< Area >* self=(Luna< std::vector< Area > >::check(L,1));
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

		std::vector< Area >* self=(Luna< std::vector< Area > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< Area >");
		
		return luna_dynamicCast(L,converters,"std::vector< Area >",name);
	}

};

std::vector< Area >* LunaTraits< std::vector< Area > >::_bind_ctor(lua_State *L) {
	return new std::vector< Area >();
}

void LunaTraits< std::vector< Area > >::_bind_dtor(std::vector< Area >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< Area > >::className[] = "std_vector_Area";
const char LunaTraits< std::vector< Area > >::fullName[] = "std::vector< Area >";
const char LunaTraits< std::vector< Area > >::moduleName[] = "Awesomium";
const char* LunaTraits< std::vector< Area > >::parents[] = {0};
const int LunaTraits< std::vector< Area > >::hash = 19421931;
const int LunaTraits< std::vector< Area > >::uniqueIDs[] = {19421931,0};

luna_RegType LunaTraits< std::vector< Area > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_Area::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_Area::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< Area > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< Area > >::enumValues[] = {
	{0,0}
};


