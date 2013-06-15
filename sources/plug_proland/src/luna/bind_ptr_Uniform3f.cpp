#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform3f {
public:
	typedef Luna< ptr< Uniform3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47527440) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform3f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform3f >* rhs =(Luna< ptr< Uniform3f > >::check(L,2));
		ptr< Uniform3f >* self=(Luna< ptr< Uniform3f > >::check(L,1));
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

		ptr< Uniform3f >* self=(Luna< ptr< Uniform3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform3f >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform3f >",name);
	}

};

ptr< Uniform3f >* LunaTraits< ptr< Uniform3f > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform3f >();
}

void LunaTraits< ptr< Uniform3f > >::_bind_dtor(ptr< Uniform3f >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform3f > >::className[] = "ptr_Uniform3f";
const char LunaTraits< ptr< Uniform3f > >::fullName[] = "ptr< Uniform3f >";
const char LunaTraits< ptr< Uniform3f > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform3f > >::parents[] = {0};
const int LunaTraits< ptr< Uniform3f > >::hash = 47527440;
const int LunaTraits< ptr< Uniform3f > >::uniqueIDs[] = {47527440,0};

luna_RegType LunaTraits< ptr< Uniform3f > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform3f::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform3f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform3f > >::enumValues[] = {
	{0,0}
};


