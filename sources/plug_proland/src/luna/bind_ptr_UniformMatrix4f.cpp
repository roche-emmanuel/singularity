#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformMatrix4f {
public:
	typedef Luna< ptr< UniformMatrix4f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82530151) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformMatrix4f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformMatrix4f >* rhs =(Luna< ptr< UniformMatrix4f > >::check(L,2));
		ptr< UniformMatrix4f >* self=(Luna< ptr< UniformMatrix4f > >::check(L,1));
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

		ptr< UniformMatrix4f >* self=(Luna< ptr< UniformMatrix4f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformMatrix4f >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformMatrix4f >",name);
	}

};

ptr< UniformMatrix4f >* LunaTraits< ptr< UniformMatrix4f > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformMatrix4f >();
}

void LunaTraits< ptr< UniformMatrix4f > >::_bind_dtor(ptr< UniformMatrix4f >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformMatrix4f > >::className[] = "ptr_UniformMatrix4f";
const char LunaTraits< ptr< UniformMatrix4f > >::fullName[] = "ptr< UniformMatrix4f >";
const char LunaTraits< ptr< UniformMatrix4f > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformMatrix4f > >::parents[] = {0};
const int LunaTraits< ptr< UniformMatrix4f > >::hash = 82530151;
const int LunaTraits< ptr< UniformMatrix4f > >::uniqueIDs[] = {82530151,0};

luna_RegType LunaTraits< ptr< UniformMatrix4f > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformMatrix4f::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformMatrix4f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformMatrix4f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformMatrix4f > >::enumValues[] = {
	{0,0}
};


