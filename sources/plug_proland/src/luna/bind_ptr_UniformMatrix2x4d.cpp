#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformMatrix2x4d {
public:
	typedef Luna< ptr< UniformMatrix2x4d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71455346) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformMatrix2x4d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformMatrix2x4d >* rhs =(Luna< ptr< UniformMatrix2x4d > >::check(L,2));
		ptr< UniformMatrix2x4d >* self=(Luna< ptr< UniformMatrix2x4d > >::check(L,1));
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

		ptr< UniformMatrix2x4d >* self=(Luna< ptr< UniformMatrix2x4d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformMatrix2x4d >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformMatrix2x4d >",name);
	}

};

ptr< UniformMatrix2x4d >* LunaTraits< ptr< UniformMatrix2x4d > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformMatrix2x4d >();
}

void LunaTraits< ptr< UniformMatrix2x4d > >::_bind_dtor(ptr< UniformMatrix2x4d >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformMatrix2x4d > >::className[] = "ptr_UniformMatrix2x4d";
const char LunaTraits< ptr< UniformMatrix2x4d > >::fullName[] = "ptr< UniformMatrix2x4d >";
const char LunaTraits< ptr< UniformMatrix2x4d > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformMatrix2x4d > >::parents[] = {0};
const int LunaTraits< ptr< UniformMatrix2x4d > >::hash = 71455346;
const int LunaTraits< ptr< UniformMatrix2x4d > >::uniqueIDs[] = {71455346,0};

luna_RegType LunaTraits< ptr< UniformMatrix2x4d > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformMatrix2x4d::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformMatrix2x4d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformMatrix2x4d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformMatrix2x4d > >::enumValues[] = {
	{0,0}
};


