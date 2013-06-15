#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform2b {
public:
	typedef Luna< ptr< Uniform2b > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47493805) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform2b >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform2b >* rhs =(Luna< ptr< Uniform2b > >::check(L,2));
		ptr< Uniform2b >* self=(Luna< ptr< Uniform2b > >::check(L,1));
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

		ptr< Uniform2b >* self=(Luna< ptr< Uniform2b > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform2b >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform2b >",name);
	}

};

ptr< Uniform2b >* LunaTraits< ptr< Uniform2b > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform2b >();
}

void LunaTraits< ptr< Uniform2b > >::_bind_dtor(ptr< Uniform2b >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform2b > >::className[] = "ptr_Uniform2b";
const char LunaTraits< ptr< Uniform2b > >::fullName[] = "ptr< Uniform2b >";
const char LunaTraits< ptr< Uniform2b > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform2b > >::parents[] = {0};
const int LunaTraits< ptr< Uniform2b > >::hash = 47493805;
const int LunaTraits< ptr< Uniform2b > >::uniqueIDs[] = {47493805,0};

luna_RegType LunaTraits< ptr< Uniform2b > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform2b::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform2b::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform2b > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform2b > >::enumValues[] = {
	{0,0}
};


