#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_SPK_System_ptr {
public:
	typedef Luna< std::vector< SPK::System * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36285581) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< SPK::System * >*)");
		}

		std::vector< SPK::System * >* rhs =(Luna< std::vector< SPK::System * > >::check(L,2));
		std::vector< SPK::System * >* self=(Luna< std::vector< SPK::System * > >::check(L,1));
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

		std::vector< SPK::System * >* self=(Luna< std::vector< SPK::System * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< SPK::System * >");
		
		return luna_dynamicCast(L,converters,"std::vector< SPK::System * >",name);
	}
};

std::vector< SPK::System * >* LunaTraits< std::vector< SPK::System * > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::vector< SPK::System * > >::_bind_dtor(std::vector< SPK::System * >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::vector< SPK::System * > >::className[] = "std_vector_SPK_System_ptr";
const char LunaTraits< std::vector< SPK::System * > >::fullName[] = "std::vector< SPK::System * >";
const char LunaTraits< std::vector< SPK::System * > >::moduleName[] = "spark";
const char* LunaTraits< std::vector< SPK::System * > >::parents[] = {0};
const int LunaTraits< std::vector< SPK::System * > >::hash = 36285581;
const int LunaTraits< std::vector< SPK::System * > >::uniqueIDs[] = {36285581,0};

luna_RegType LunaTraits< std::vector< SPK::System * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_SPK_System_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_SPK_System_ptr::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< SPK::System * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< SPK::System * > >::enumValues[] = {
	{0,0}
};


