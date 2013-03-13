#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_dual {
public:
	typedef Luna< std::vector< dual > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24103996) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< dual >*)");
		}

		std::vector< dual >* rhs =(Luna< std::vector< dual > >::check(L,2));
		std::vector< dual >* self=(Luna< std::vector< dual > >::check(L,1));
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

		std::vector< dual >* self=(Luna< std::vector< dual > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< dual >");
		
		return luna_dynamicCast(L,converters,"std::vector< dual >",name);
	}

};

std::vector< dual >* LunaTraits< std::vector< dual > >::_bind_ctor(lua_State *L) {
	return new std::vector< dual >();
}

void LunaTraits< std::vector< dual > >::_bind_dtor(std::vector< dual >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< dual > >::className[] = "std_vector_dual";
const char LunaTraits< std::vector< dual > >::fullName[] = "std::vector< dual >";
const char LunaTraits< std::vector< dual > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< dual > >::parents[] = {0};
const int LunaTraits< std::vector< dual > >::hash = 24103996;
const int LunaTraits< std::vector< dual > >::uniqueIDs[] = {24103996,0};

luna_RegType LunaTraits< std::vector< dual > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_dual::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_dual::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< dual > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< dual > >::enumValues[] = {
	{0,0}
};

