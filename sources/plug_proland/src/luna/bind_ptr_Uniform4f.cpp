#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform4f {
public:
	typedef Luna< ptr< Uniform4f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47557231) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform4f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform4f >* rhs =(Luna< ptr< Uniform4f > >::check(L,2));
		ptr< Uniform4f >* self=(Luna< ptr< Uniform4f > >::check(L,1));
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

		ptr< Uniform4f >* self=(Luna< ptr< Uniform4f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform4f >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform4f >",name);
	}

};

ptr< Uniform4f >* LunaTraits< ptr< Uniform4f > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform4f >();
}

void LunaTraits< ptr< Uniform4f > >::_bind_dtor(ptr< Uniform4f >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform4f > >::className[] = "ptr_Uniform4f";
const char LunaTraits< ptr< Uniform4f > >::fullName[] = "ptr< Uniform4f >";
const char LunaTraits< ptr< Uniform4f > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform4f > >::parents[] = {0};
const int LunaTraits< ptr< Uniform4f > >::hash = 47557231;
const int LunaTraits< ptr< Uniform4f > >::uniqueIDs[] = {47557231,0};

luna_RegType LunaTraits< ptr< Uniform4f > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform4f::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform4f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform4f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform4f > >::enumValues[] = {
	{0,0}
};


