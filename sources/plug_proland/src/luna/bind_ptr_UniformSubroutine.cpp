#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformSubroutine {
public:
	typedef Luna< ptr< UniformSubroutine > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55652485) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformSubroutine >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformSubroutine >* rhs =(Luna< ptr< UniformSubroutine > >::check(L,2));
		ptr< UniformSubroutine >* self=(Luna< ptr< UniformSubroutine > >::check(L,1));
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

		ptr< UniformSubroutine >* self=(Luna< ptr< UniformSubroutine > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformSubroutine >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformSubroutine >",name);
	}

};

ptr< UniformSubroutine >* LunaTraits< ptr< UniformSubroutine > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformSubroutine >();
}

void LunaTraits< ptr< UniformSubroutine > >::_bind_dtor(ptr< UniformSubroutine >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformSubroutine > >::className[] = "ptr_UniformSubroutine";
const char LunaTraits< ptr< UniformSubroutine > >::fullName[] = "ptr< UniformSubroutine >";
const char LunaTraits< ptr< UniformSubroutine > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformSubroutine > >::parents[] = {0};
const int LunaTraits< ptr< UniformSubroutine > >::hash = 55652485;
const int LunaTraits< ptr< UniformSubroutine > >::uniqueIDs[] = {55652485,0};

luna_RegType LunaTraits< ptr< UniformSubroutine > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformSubroutine::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformSubroutine::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformSubroutine > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformSubroutine > >::enumValues[] = {
	{0,0}
};


