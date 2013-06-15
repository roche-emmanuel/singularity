#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform {
public:
	typedef Luna< ptr< Uniform > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58841759) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform >* rhs =(Luna< ptr< Uniform > >::check(L,2));
		ptr< Uniform >* self=(Luna< ptr< Uniform > >::check(L,1));
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

		ptr< Uniform >* self=(Luna< ptr< Uniform > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform >",name);
	}

};

ptr< Uniform >* LunaTraits< ptr< Uniform > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform >();
}

void LunaTraits< ptr< Uniform > >::_bind_dtor(ptr< Uniform >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform > >::className[] = "ptr_Uniform";
const char LunaTraits< ptr< Uniform > >::fullName[] = "ptr< Uniform >";
const char LunaTraits< ptr< Uniform > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform > >::parents[] = {0};
const int LunaTraits< ptr< Uniform > >::hash = 58841759;
const int LunaTraits< ptr< Uniform > >::uniqueIDs[] = {58841759,0};

luna_RegType LunaTraits< ptr< Uniform > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform > >::enumValues[] = {
	{0,0}
};


