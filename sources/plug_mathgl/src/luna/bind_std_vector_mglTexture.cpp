#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_mglTexture {
public:
	typedef Luna< std::vector< mglTexture > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52583290) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< mglTexture >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< mglTexture >* rhs =(Luna< std::vector< mglTexture > >::check(L,2));
		std::vector< mglTexture >* self=(Luna< std::vector< mglTexture > >::check(L,1));
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

		std::vector< mglTexture >* self=(Luna< std::vector< mglTexture > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< mglTexture >");
		
		return luna_dynamicCast(L,converters,"std::vector< mglTexture >",name);
	}

};

std::vector< mglTexture >* LunaTraits< std::vector< mglTexture > >::_bind_ctor(lua_State *L) {
	return new std::vector< mglTexture >();
}

void LunaTraits< std::vector< mglTexture > >::_bind_dtor(std::vector< mglTexture >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< mglTexture > >::className[] = "std_vector_mglTexture";
const char LunaTraits< std::vector< mglTexture > >::fullName[] = "std::vector< mglTexture >";
const char LunaTraits< std::vector< mglTexture > >::moduleName[] = "mathgl";
const char* LunaTraits< std::vector< mglTexture > >::parents[] = {0};
const int LunaTraits< std::vector< mglTexture > >::hash = 52583290;
const int LunaTraits< std::vector< mglTexture > >::uniqueIDs[] = {52583290,0};

luna_RegType LunaTraits< std::vector< mglTexture > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_mglTexture::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_mglTexture::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< mglTexture > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< mglTexture > >::enumValues[] = {
	{0,0}
};


