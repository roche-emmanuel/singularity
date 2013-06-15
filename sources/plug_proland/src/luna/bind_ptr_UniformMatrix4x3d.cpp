#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformMatrix4x3d {
public:
	typedef Luna< ptr< UniformMatrix4x3d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28683833) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformMatrix4x3d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformMatrix4x3d >* rhs =(Luna< ptr< UniformMatrix4x3d > >::check(L,2));
		ptr< UniformMatrix4x3d >* self=(Luna< ptr< UniformMatrix4x3d > >::check(L,1));
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

		ptr< UniformMatrix4x3d >* self=(Luna< ptr< UniformMatrix4x3d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformMatrix4x3d >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformMatrix4x3d >",name);
	}

};

ptr< UniformMatrix4x3d >* LunaTraits< ptr< UniformMatrix4x3d > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformMatrix4x3d >();
}

void LunaTraits< ptr< UniformMatrix4x3d > >::_bind_dtor(ptr< UniformMatrix4x3d >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformMatrix4x3d > >::className[] = "ptr_UniformMatrix4x3d";
const char LunaTraits< ptr< UniformMatrix4x3d > >::fullName[] = "ptr< UniformMatrix4x3d >";
const char LunaTraits< ptr< UniformMatrix4x3d > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformMatrix4x3d > >::parents[] = {0};
const int LunaTraits< ptr< UniformMatrix4x3d > >::hash = 28683833;
const int LunaTraits< ptr< UniformMatrix4x3d > >::uniqueIDs[] = {28683833,0};

luna_RegType LunaTraits< ptr< UniformMatrix4x3d > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformMatrix4x3d::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformMatrix4x3d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformMatrix4x3d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformMatrix4x3d > >::enumValues[] = {
	{0,0}
};


