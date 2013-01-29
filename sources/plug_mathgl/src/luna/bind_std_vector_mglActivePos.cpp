#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_mglActivePos {
public:
	typedef Luna< std::vector< mglActivePos > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82850976) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< mglActivePos >*)");
		}

		std::vector< mglActivePos >* rhs =(Luna< std::vector< mglActivePos > >::check(L,2));
		std::vector< mglActivePos >* self=(Luna< std::vector< mglActivePos > >::check(L,1));
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

		std::vector< mglActivePos >* self=(Luna< std::vector< mglActivePos > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< mglActivePos >");
		
		return luna_dynamicCast(L,converters,"std::vector< mglActivePos >",name);
	}

};

std::vector< mglActivePos >* LunaTraits< std::vector< mglActivePos > >::_bind_ctor(lua_State *L) {
	return new std::vector< mglActivePos >();
}

void LunaTraits< std::vector< mglActivePos > >::_bind_dtor(std::vector< mglActivePos >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< mglActivePos > >::className[] = "std_vector_mglActivePos";
const char LunaTraits< std::vector< mglActivePos > >::fullName[] = "std::vector< mglActivePos >";
const char LunaTraits< std::vector< mglActivePos > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< mglActivePos > >::parents[] = {0};
const int LunaTraits< std::vector< mglActivePos > >::hash = 82850976;
const int LunaTraits< std::vector< mglActivePos > >::uniqueIDs[] = {82850976,0};

luna_RegType LunaTraits< std::vector< mglActivePos > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_mglActivePos::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_mglActivePos::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< mglActivePos > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< mglActivePos > >::enumValues[] = {
	{0,0}
};


