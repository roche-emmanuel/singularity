#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform4i {
public:
	typedef Luna< ptr< Uniform4i > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47560114) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform4i >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform4i >* rhs =(Luna< ptr< Uniform4i > >::check(L,2));
		ptr< Uniform4i >* self=(Luna< ptr< Uniform4i > >::check(L,1));
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

		ptr< Uniform4i >* self=(Luna< ptr< Uniform4i > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform4i >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform4i >",name);
	}

};

ptr< Uniform4i >* LunaTraits< ptr< Uniform4i > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform4i >();
}

void LunaTraits< ptr< Uniform4i > >::_bind_dtor(ptr< Uniform4i >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform4i > >::className[] = "ptr_Uniform4i";
const char LunaTraits< ptr< Uniform4i > >::fullName[] = "ptr< Uniform4i >";
const char LunaTraits< ptr< Uniform4i > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform4i > >::parents[] = {0};
const int LunaTraits< ptr< Uniform4i > >::hash = 47560114;
const int LunaTraits< ptr< Uniform4i > >::uniqueIDs[] = {47560114,0};

luna_RegType LunaTraits< ptr< Uniform4i > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform4i::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform4i::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform4i > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform4i > >::enumValues[] = {
	{0,0}
};


