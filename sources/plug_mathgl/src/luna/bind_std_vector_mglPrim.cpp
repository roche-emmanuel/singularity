#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_mglPrim {
public:
	typedef Luna< std::vector< mglPrim > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61379625) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< mglPrim >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglPrim >* rhs =(Luna< std::vector< mglPrim > >::check(L,2));
		std::vector< mglPrim >* self=(Luna< std::vector< mglPrim > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		std::vector< mglPrim >* self=(Luna< std::vector< mglPrim > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< mglPrim >");
		
		return luna_dynamicCast(L,converters,"std::vector< mglPrim >",name);
	}

};

std::vector< mglPrim >* LunaTraits< std::vector< mglPrim > >::_bind_ctor(lua_State *L) {
	return new std::vector< mglPrim >();
}

void LunaTraits< std::vector< mglPrim > >::_bind_dtor(std::vector< mglPrim >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< mglPrim > >::className[] = "std_vector_mglPrim";
const char LunaTraits< std::vector< mglPrim > >::fullName[] = "std::vector< mglPrim >";
const char LunaTraits< std::vector< mglPrim > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< mglPrim > >::parents[] = {0};
const int LunaTraits< std::vector< mglPrim > >::hash = 61379625;
const int LunaTraits< std::vector< mglPrim > >::uniqueIDs[] = {61379625,0};

luna_RegType LunaTraits< std::vector< mglPrim > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_mglPrim::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_mglPrim::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< mglPrim > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< mglPrim > >::enumValues[] = {
	{0,0}
};


