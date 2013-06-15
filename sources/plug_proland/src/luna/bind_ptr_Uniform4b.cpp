#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform4b {
public:
	typedef Luna< ptr< Uniform4b > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47553387) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform4b >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform4b >* rhs =(Luna< ptr< Uniform4b > >::check(L,2));
		ptr< Uniform4b >* self=(Luna< ptr< Uniform4b > >::check(L,1));
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

		ptr< Uniform4b >* self=(Luna< ptr< Uniform4b > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform4b >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform4b >",name);
	}

};

ptr< Uniform4b >* LunaTraits< ptr< Uniform4b > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform4b >();
}

void LunaTraits< ptr< Uniform4b > >::_bind_dtor(ptr< Uniform4b >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform4b > >::className[] = "ptr_Uniform4b";
const char LunaTraits< ptr< Uniform4b > >::fullName[] = "ptr< Uniform4b >";
const char LunaTraits< ptr< Uniform4b > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform4b > >::parents[] = {0};
const int LunaTraits< ptr< Uniform4b > >::hash = 47553387;
const int LunaTraits< ptr< Uniform4b > >::uniqueIDs[] = {47553387,0};

luna_RegType LunaTraits< ptr< Uniform4b > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform4b::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform4b::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform4b > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform4b > >::enumValues[] = {
	{0,0}
};


