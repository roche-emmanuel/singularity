#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform4d {
public:
	typedef Luna< ptr< Uniform4d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47555309) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform4d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform4d >* rhs =(Luna< ptr< Uniform4d > >::check(L,2));
		ptr< Uniform4d >* self=(Luna< ptr< Uniform4d > >::check(L,1));
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

		ptr< Uniform4d >* self=(Luna< ptr< Uniform4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform4d >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform4d >",name);
	}

};

ptr< Uniform4d >* LunaTraits< ptr< Uniform4d > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform4d >();
}

void LunaTraits< ptr< Uniform4d > >::_bind_dtor(ptr< Uniform4d >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform4d > >::className[] = "ptr_Uniform4d";
const char LunaTraits< ptr< Uniform4d > >::fullName[] = "ptr< Uniform4d >";
const char LunaTraits< ptr< Uniform4d > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform4d > >::parents[] = {0};
const int LunaTraits< ptr< Uniform4d > >::hash = 47555309;
const int LunaTraits< ptr< Uniform4d > >::uniqueIDs[] = {47555309,0};

luna_RegType LunaTraits< ptr< Uniform4d > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform4d::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform4d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform4d > >::enumValues[] = {
	{0,0}
};


