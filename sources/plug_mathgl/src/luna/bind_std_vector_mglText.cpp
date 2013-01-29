#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_mglText {
public:
	typedef Luna< std::vector< mglText > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64344026) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< mglText >*)");
		}

		std::vector< mglText >* rhs =(Luna< std::vector< mglText > >::check(L,2));
		std::vector< mglText >* self=(Luna< std::vector< mglText > >::check(L,1));
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

		std::vector< mglText >* self=(Luna< std::vector< mglText > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< mglText >");
		
		return luna_dynamicCast(L,converters,"std::vector< mglText >",name);
	}

};

std::vector< mglText >* LunaTraits< std::vector< mglText > >::_bind_ctor(lua_State *L) {
	return new std::vector< mglText >();
}

void LunaTraits< std::vector< mglText > >::_bind_dtor(std::vector< mglText >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< mglText > >::className[] = "std_vector_mglText";
const char LunaTraits< std::vector< mglText > >::fullName[] = "std::vector< mglText >";
const char LunaTraits< std::vector< mglText > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< mglText > >::parents[] = {0};
const int LunaTraits< std::vector< mglText > >::hash = 64344026;
const int LunaTraits< std::vector< mglText > >::uniqueIDs[] = {64344026,0};

luna_RegType LunaTraits< std::vector< mglText > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_mglText::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_mglText::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< mglText > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< mglText > >::enumValues[] = {
	{0,0}
};


