#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform2f {
public:
	typedef Luna< ptr< Uniform2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47497649) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform2f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform2f >* rhs =(Luna< ptr< Uniform2f > >::check(L,2));
		ptr< Uniform2f >* self=(Luna< ptr< Uniform2f > >::check(L,1));
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

		ptr< Uniform2f >* self=(Luna< ptr< Uniform2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform2f >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform2f >",name);
	}

};

ptr< Uniform2f >* LunaTraits< ptr< Uniform2f > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform2f >();
}

void LunaTraits< ptr< Uniform2f > >::_bind_dtor(ptr< Uniform2f >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform2f > >::className[] = "ptr_Uniform2f";
const char LunaTraits< ptr< Uniform2f > >::fullName[] = "ptr< Uniform2f >";
const char LunaTraits< ptr< Uniform2f > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform2f > >::parents[] = {0};
const int LunaTraits< ptr< Uniform2f > >::hash = 47497649;
const int LunaTraits< ptr< Uniform2f > >::uniqueIDs[] = {47497649,0};

luna_RegType LunaTraits< ptr< Uniform2f > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform2f::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform2f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform2f > >::enumValues[] = {
	{0,0}
};


