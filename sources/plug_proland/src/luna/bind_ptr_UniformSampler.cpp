#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ptr_UniformSampler {
public:
	typedef Luna< ptr< UniformSampler > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42637183) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ptr< UniformSampler >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ptr< UniformSampler >* rhs =(Luna< ptr< UniformSampler > >::check(L,2));
		ptr< UniformSampler >* self=(Luna< ptr< UniformSampler > >::check(L,1));
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

		ptr< UniformSampler >* self=(Luna< ptr< UniformSampler > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ptr< UniformSampler >");
		
		return luna_dynamicCast(L,converters,"ptr< UniformSampler >",name);
	}

};

ptr< UniformSampler >* LunaTraits< ptr< UniformSampler > >::_bind_ctor(lua_State *L) {
	return new ptr< UniformSampler >();
}

void LunaTraits< ptr< UniformSampler > >::_bind_dtor(ptr< UniformSampler >* obj) {
	delete obj;
}

const char LunaTraits< ptr< UniformSampler > >::className[] = "ptr_UniformSampler";
const char LunaTraits< ptr< UniformSampler > >::fullName[] = "ptr< UniformSampler >";
const char LunaTraits< ptr< UniformSampler > >::moduleName[] = "proland";
const char* LunaTraits< ptr< UniformSampler > >::parents[] = {0};
const int LunaTraits< ptr< UniformSampler > >::hash = 42637183;
const int LunaTraits< ptr< UniformSampler > >::uniqueIDs[] = {42637183,0};

luna_RegType LunaTraits< ptr< UniformSampler > >::methods[] = {
	{"dynCast", &luna_wrapper_ptr_UniformSampler::_bind_dynCast},
	{"__eq", &luna_wrapper_ptr_UniformSampler::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ptr< UniformSampler > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ptr< UniformSampler > >::enumValues[] = {
	{0,0}
};


