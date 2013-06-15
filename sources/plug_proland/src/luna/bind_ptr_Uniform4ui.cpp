#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform4ui {
public:
	typedef Luna< ptr< Uniform4ui > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74790073) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform4ui >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform4ui >* rhs =(Luna< ptr< Uniform4ui > >::check(L,2));
		ptr< Uniform4ui >* self=(Luna< ptr< Uniform4ui > >::check(L,1));
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

		ptr< Uniform4ui >* self=(Luna< ptr< Uniform4ui > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform4ui >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform4ui >",name);
	}

};

ptr< Uniform4ui >* LunaTraits< ptr< Uniform4ui > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform4ui >();
}

void LunaTraits< ptr< Uniform4ui > >::_bind_dtor(ptr< Uniform4ui >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform4ui > >::className[] = "ptr_Uniform4ui";
const char LunaTraits< ptr< Uniform4ui > >::fullName[] = "ptr< Uniform4ui >";
const char LunaTraits< ptr< Uniform4ui > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform4ui > >::parents[] = {0};
const int LunaTraits< ptr< Uniform4ui > >::hash = 74790073;
const int LunaTraits< ptr< Uniform4ui > >::uniqueIDs[] = {74790073,0};

luna_RegType LunaTraits< ptr< Uniform4ui > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform4ui::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform4ui::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform4ui > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform4ui > >::enumValues[] = {
	{0,0}
};


