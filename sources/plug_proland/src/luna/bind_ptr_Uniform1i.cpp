#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform1i {
public:
	typedef Luna< ptr< Uniform1i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47470741) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform1i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform1i >* rhs =(Luna< ptr< Uniform1i > >::check(L,2));
		ptr< Uniform1i >* self=(Luna< ptr< Uniform1i > >::check(L,1));
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

		ptr< Uniform1i >* self=(Luna< ptr< Uniform1i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform1i >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform1i >",name);
	}

};

ptr< Uniform1i >* LunaTraits< ptr< Uniform1i > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform1i >();
}

void LunaTraits< ptr< Uniform1i > >::_bind_dtor(ptr< Uniform1i >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform1i > >::className[] = "ptr_Uniform1i";
const char LunaTraits< ptr< Uniform1i > >::fullName[] = "ptr< Uniform1i >";
const char LunaTraits< ptr< Uniform1i > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform1i > >::parents[] = {0};
const int LunaTraits< ptr< Uniform1i > >::hash = 47470741;
const int LunaTraits< ptr< Uniform1i > >::uniqueIDs[] = {47470741,0};

luna_RegType LunaTraits< ptr< Uniform1i > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform1i::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform1i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform1i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform1i > >::enumValues[] = {
	{0,0}
};


