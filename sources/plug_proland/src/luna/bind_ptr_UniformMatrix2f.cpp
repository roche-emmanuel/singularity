#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformMatrix2f {
public:
	typedef Luna< ptr< UniformMatrix2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82470569) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformMatrix2f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformMatrix2f >* rhs =(Luna< ptr< UniformMatrix2f > >::check(L,2));
		ptr< UniformMatrix2f >* self=(Luna< ptr< UniformMatrix2f > >::check(L,1));
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

		ptr< UniformMatrix2f >* self=(Luna< ptr< UniformMatrix2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformMatrix2f >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformMatrix2f >",name);
	}

};

ptr< UniformMatrix2f >* LunaTraits< ptr< UniformMatrix2f > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformMatrix2f >();
}

void LunaTraits< ptr< UniformMatrix2f > >::_bind_dtor(ptr< UniformMatrix2f >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformMatrix2f > >::className[] = "ptr_UniformMatrix2f";
const char LunaTraits< ptr< UniformMatrix2f > >::fullName[] = "ptr< UniformMatrix2f >";
const char LunaTraits< ptr< UniformMatrix2f > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformMatrix2f > >::parents[] = {0};
const int LunaTraits< ptr< UniformMatrix2f > >::hash = 82470569;
const int LunaTraits< ptr< UniformMatrix2f > >::uniqueIDs[] = {82470569,0};

luna_RegType LunaTraits< ptr< UniformMatrix2f > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformMatrix2f::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformMatrix2f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformMatrix2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformMatrix2f > >::enumValues[] = {
	{0,0}
};


