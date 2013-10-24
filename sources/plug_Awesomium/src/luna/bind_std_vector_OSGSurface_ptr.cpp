#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_OSGSurface_ptr {
public:
	typedef Luna< std::vector< OSGSurface * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64985157) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< OSGSurface * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< OSGSurface * >* rhs =(Luna< std::vector< OSGSurface * > >::check(L,2));
		std::vector< OSGSurface * >* self=(Luna< std::vector< OSGSurface * > >::check(L,1));
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

		std::vector< OSGSurface * >* self=(Luna< std::vector< OSGSurface * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< OSGSurface * >");
		
		return luna_dynamicCast(L,converters,"std::vector< OSGSurface * >",name);
	}

};

std::vector< OSGSurface * >* LunaTraits< std::vector< OSGSurface * > >::_bind_ctor(lua_State *L) {
	return new std::vector< OSGSurface * >();
}

void LunaTraits< std::vector< OSGSurface * > >::_bind_dtor(std::vector< OSGSurface * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< OSGSurface * > >::className[] = "std_vector_OSGSurface_ptr";
const char LunaTraits< std::vector< OSGSurface * > >::fullName[] = "std::vector< OSGSurface * >";
const char LunaTraits< std::vector< OSGSurface * > >::moduleName[] = "Awesomium";
const char* LunaTraits< std::vector< OSGSurface * > >::parents[] = {0};
const int LunaTraits< std::vector< OSGSurface * > >::hash = 64985157;
const int LunaTraits< std::vector< OSGSurface * > >::uniqueIDs[] = {64985157,0};

luna_RegType LunaTraits< std::vector< OSGSurface * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_OSGSurface_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_OSGSurface_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< OSGSurface * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< OSGSurface * > >::enumValues[] = {
	{0,0}
};


