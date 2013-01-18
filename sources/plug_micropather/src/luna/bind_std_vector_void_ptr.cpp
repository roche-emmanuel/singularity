#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_void_ptr {
public:
	typedef Luna< std::vector< void * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87530881) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< void * >*)");
		}

		std::vector< void * >* rhs =(Luna< std::vector< void * > >::check(L,2));
		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
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

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< void * >");
		
		return luna_dynamicCast(L,converters,"std::vector< void * >",name);
	}

};

std::vector< void * >* LunaTraits< std::vector< void * > >::_bind_ctor(lua_State *L) {
	return new std::vector< void * >();
}

void LunaTraits< std::vector< void * > >::_bind_dtor(std::vector< void * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< void * > >::className[] = "std_vector_void_ptr";
const char LunaTraits< std::vector< void * > >::fullName[] = "std::vector< void * >";
const char LunaTraits< std::vector< void * > >::moduleName[] = "micropather";
const char* LunaTraits< std::vector< void * > >::parents[] = {0};
const int LunaTraits< std::vector< void * > >::hash = 87530881;
const int LunaTraits< std::vector< void * > >::uniqueIDs[] = {87530881,0};

luna_RegType LunaTraits< std::vector< void * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_void_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_void_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< void * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< void * > >::enumValues[] = {
	{0,0}
};


