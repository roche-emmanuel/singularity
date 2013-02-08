#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_mglGroup {
public:
	typedef Luna< std::vector< mglGroup > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21092053) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< mglGroup >*)");
		}

		std::vector< mglGroup >* rhs =(Luna< std::vector< mglGroup > >::check(L,2));
		std::vector< mglGroup >* self=(Luna< std::vector< mglGroup > >::check(L,1));
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

		std::vector< mglGroup >* self=(Luna< std::vector< mglGroup > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< mglGroup >");
		
		return luna_dynamicCast(L,converters,"std::vector< mglGroup >",name);
	}

};

std::vector< mglGroup >* LunaTraits< std::vector< mglGroup > >::_bind_ctor(lua_State *L) {
	return new std::vector< mglGroup >();
}

void LunaTraits< std::vector< mglGroup > >::_bind_dtor(std::vector< mglGroup >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< mglGroup > >::className[] = "std_vector_mglGroup";
const char LunaTraits< std::vector< mglGroup > >::fullName[] = "std::vector< mglGroup >";
const char LunaTraits< std::vector< mglGroup > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< mglGroup > >::parents[] = {0};
const int LunaTraits< std::vector< mglGroup > >::hash = 21092053;
const int LunaTraits< std::vector< mglGroup > >::uniqueIDs[] = {21092053,0};

luna_RegType LunaTraits< std::vector< mglGroup > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_mglGroup::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_mglGroup::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< mglGroup > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< mglGroup > >::enumValues[] = {
	{0,0}
};


