#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformBlock {
public:
	typedef Luna< ptr< UniformBlock > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48215627) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformBlock >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformBlock >* rhs =(Luna< ptr< UniformBlock > >::check(L,2));
		ptr< UniformBlock >* self=(Luna< ptr< UniformBlock > >::check(L,1));
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

		ptr< UniformBlock >* self=(Luna< ptr< UniformBlock > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformBlock >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformBlock >",name);
	}

};

ptr< UniformBlock >* LunaTraits< ptr< UniformBlock > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformBlock >();
}

void LunaTraits< ptr< UniformBlock > >::_bind_dtor(ptr< UniformBlock >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformBlock > >::className[] = "ptr_UniformBlock";
const char LunaTraits< ptr< UniformBlock > >::fullName[] = "ptr< UniformBlock >";
const char LunaTraits< ptr< UniformBlock > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformBlock > >::parents[] = {0};
const int LunaTraits< ptr< UniformBlock > >::hash = 48215627;
const int LunaTraits< ptr< UniformBlock > >::uniqueIDs[] = {48215627,0};

luna_RegType LunaTraits< ptr< UniformBlock > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformBlock::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformBlock::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformBlock > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformBlock > >::enumValues[] = {
	{0,0}
};


