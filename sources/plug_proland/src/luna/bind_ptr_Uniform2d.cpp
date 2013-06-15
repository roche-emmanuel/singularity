#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform2d {
public:
	typedef Luna< ptr< Uniform2d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47495727) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform2d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform2d >* rhs =(Luna< ptr< Uniform2d > >::check(L,2));
		ptr< Uniform2d >* self=(Luna< ptr< Uniform2d > >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ptr< Uniform2d >* self=(Luna< ptr< Uniform2d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform2d >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform2d >",name);
	}

};

ptr< Uniform2d >* LunaTraits< ptr< Uniform2d > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform2d >();
}

void LunaTraits< ptr< Uniform2d > >::_bind_dtor(ptr< Uniform2d >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform2d > >::className[] = "ptr_Uniform2d";
const char LunaTraits< ptr< Uniform2d > >::fullName[] = "ptr< Uniform2d >";
const char LunaTraits< ptr< Uniform2d > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform2d > >::parents[] = {0};
const int LunaTraits< ptr< Uniform2d > >::hash = 47495727;
const int LunaTraits< ptr< Uniform2d > >::uniqueIDs[] = {47495727,0};

luna_RegType LunaTraits< ptr< Uniform2d > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform2d::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform2d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform2d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform2d > >::enumValues[] = {
	{0,0}
};


