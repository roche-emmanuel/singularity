#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_SPK_Pool_SPK_Particle {
public:
	typedef Luna< SPK::Pool< SPK::Particle > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60129051) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Pool< SPK::Particle >*)");
		}

		SPK::Pool< SPK::Particle >* rhs =(Luna< SPK::Pool< SPK::Particle > >::check(L,2));
		SPK::Pool< SPK::Particle >* self=(Luna< SPK::Pool< SPK::Particle > >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Pool< SPK::Particle >* self=(Luna< SPK::Pool< SPK::Particle > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Pool< SPK::Particle >");
		
		return luna_dynamicCast(L,converters,"SPK::Pool< SPK::Particle >",name);
	}

};

SPK::Pool< SPK::Particle >* LunaTraits< SPK::Pool< SPK::Particle > >::_bind_ctor(lua_State *L) {
	return new SPK::Pool< SPK::Particle >();
}

void LunaTraits< SPK::Pool< SPK::Particle > >::_bind_dtor(SPK::Pool< SPK::Particle >* obj) {
	delete obj;
}

const char LunaTraits< SPK::Pool< SPK::Particle > >::className[] = "SPK_Pool_SPK_Particle";
const char LunaTraits< SPK::Pool< SPK::Particle > >::fullName[] = "SPK::Pool< SPK::Particle >";
const char LunaTraits< SPK::Pool< SPK::Particle > >::moduleName[] = "spark";
const char* LunaTraits< SPK::Pool< SPK::Particle > >::parents[] = {0};
const int LunaTraits< SPK::Pool< SPK::Particle > >::hash = 60129051;
const int LunaTraits< SPK::Pool< SPK::Particle > >::uniqueIDs[] = {60129051,0};

luna_RegType LunaTraits< SPK::Pool< SPK::Particle > >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_Pool_SPK_Particle::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Pool_SPK_Particle::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Pool< SPK::Particle > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Pool< SPK::Particle > >::enumValues[] = {
	{0,0}
};


