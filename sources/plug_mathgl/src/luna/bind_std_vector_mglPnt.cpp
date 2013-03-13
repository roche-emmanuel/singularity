#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_mglPnt {
public:
	typedef Luna< std::vector< mglPnt > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,43804529) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< mglPnt >*)");
		}

		std::vector< mglPnt >* rhs =(Luna< std::vector< mglPnt > >::check(L,2));
		std::vector< mglPnt >* self=(Luna< std::vector< mglPnt > >::check(L,1));
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

		std::vector< mglPnt >* self=(Luna< std::vector< mglPnt > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< mglPnt >");
		
		return luna_dynamicCast(L,converters,"std::vector< mglPnt >",name);
	}

};

std::vector< mglPnt >* LunaTraits< std::vector< mglPnt > >::_bind_ctor(lua_State *L) {
	return new std::vector< mglPnt >();
}

void LunaTraits< std::vector< mglPnt > >::_bind_dtor(std::vector< mglPnt >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< mglPnt > >::className[] = "std_vector_mglPnt";
const char LunaTraits< std::vector< mglPnt > >::fullName[] = "std::vector< mglPnt >";
const char LunaTraits< std::vector< mglPnt > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< mglPnt > >::parents[] = {0};
const int LunaTraits< std::vector< mglPnt > >::hash = 43804529;
const int LunaTraits< std::vector< mglPnt > >::uniqueIDs[] = {43804529,0};

luna_RegType LunaTraits< std::vector< mglPnt > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_mglPnt::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_mglPnt::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< mglPnt > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< mglPnt > >::enumValues[] = {
	{0,0}
};

