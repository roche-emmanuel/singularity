#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformMatrix2d {
public:
	typedef Luna< ptr< UniformMatrix2d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82468647) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformMatrix2d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformMatrix2d >* rhs =(Luna< ptr< UniformMatrix2d > >::check(L,2));
		ptr< UniformMatrix2d >* self=(Luna< ptr< UniformMatrix2d > >::check(L,1));
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

		ptr< UniformMatrix2d >* self=(Luna< ptr< UniformMatrix2d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformMatrix2d >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformMatrix2d >",name);
	}

};

ptr< UniformMatrix2d >* LunaTraits< ptr< UniformMatrix2d > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformMatrix2d >();
}

void LunaTraits< ptr< UniformMatrix2d > >::_bind_dtor(ptr< UniformMatrix2d >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformMatrix2d > >::className[] = "ptr_UniformMatrix2d";
const char LunaTraits< ptr< UniformMatrix2d > >::fullName[] = "ptr< UniformMatrix2d >";
const char LunaTraits< ptr< UniformMatrix2d > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformMatrix2d > >::parents[] = {0};
const int LunaTraits< ptr< UniformMatrix2d > >::hash = 82468647;
const int LunaTraits< ptr< UniformMatrix2d > >::uniqueIDs[] = {82468647,0};

luna_RegType LunaTraits< ptr< UniformMatrix2d > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformMatrix2d::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformMatrix2d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformMatrix2d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformMatrix2d > >::enumValues[] = {
	{0,0}
};


