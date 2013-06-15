#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_Uniform2ui {
public:
	typedef Luna< ptr< Uniform2ui > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72943031) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< Uniform2ui >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< Uniform2ui >* rhs =(Luna< ptr< Uniform2ui > >::check(L,2));
		ptr< Uniform2ui >* self=(Luna< ptr< Uniform2ui > >::check(L,1));
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

		ptr< Uniform2ui >* self=(Luna< ptr< Uniform2ui > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< Uniform2ui >");
		
		return luna_dynamicCast(L,converters,"ptr< Uniform2ui >",name);
	}

};

ptr< Uniform2ui >* LunaTraits< ptr< Uniform2ui > >::_bind_ctor(lua_State *L) {
	return new ptr< Uniform2ui >();
}

void LunaTraits< ptr< Uniform2ui > >::_bind_dtor(ptr< Uniform2ui >* obj) {
	delete obj;
}

const char LunaTraits< ptr< Uniform2ui > >::className[] = "ptr_Uniform2ui";
const char LunaTraits< ptr< Uniform2ui > >::fullName[] = "ptr< Uniform2ui >";
const char LunaTraits< ptr< Uniform2ui > >::moduleName[] = "proland";
const char* LunaTraits< ptr< Uniform2ui > >::parents[] = {0};
const int LunaTraits< ptr< Uniform2ui > >::hash = 72943031;
const int LunaTraits< ptr< Uniform2ui > >::uniqueIDs[] = {72943031,0};

luna_RegType LunaTraits< ptr< Uniform2ui > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_Uniform2ui::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_Uniform2ui::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< Uniform2ui > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< Uniform2ui > >::enumValues[] = {
	{0,0}
};


