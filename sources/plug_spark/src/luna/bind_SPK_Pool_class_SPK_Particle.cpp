#include <plug_common.h>

class luna_wrapper_SPK_Pool_class_SPK_Particle {
public:
	typedef Luna< SPK::Pool< class SPK::Particle > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49606317) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Pool< class SPK::Particle >*)");
		}

		SPK::Pool< class SPK::Particle >* rhs =(Luna< SPK::Pool< class SPK::Particle > >::check(L,2));
		SPK::Pool< class SPK::Particle >* self=(Luna< SPK::Pool< class SPK::Particle > >::check(L,1));
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

		SPK::Pool< class SPK::Particle >* self=(Luna< SPK::Pool< class SPK::Particle > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Pool< class SPK::Particle >");
		
		return luna_dynamicCast(L,converters,"SPK::Pool< class SPK::Particle >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

SPK::Pool< class SPK::Particle >* LunaTraits< SPK::Pool< class SPK::Particle > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SPK::Pool< class SPK::Particle > >::_bind_dtor(SPK::Pool< class SPK::Particle >* obj) {
	delete obj;
}

const char LunaTraits< SPK::Pool< class SPK::Particle > >::className[] = "Pool_class_SPK_Particle";
const char LunaTraits< SPK::Pool< class SPK::Particle > >::fullName[] = "SPK::Pool< class SPK::Particle >";
const char LunaTraits< SPK::Pool< class SPK::Particle > >::moduleName[] = "spark";
const char* LunaTraits< SPK::Pool< class SPK::Particle > >::parents[] = {0};
const int LunaTraits< SPK::Pool< class SPK::Particle > >::hash = 49606317;
const int LunaTraits< SPK::Pool< class SPK::Particle > >::uniqueIDs[] = {49606317,0};

luna_RegType LunaTraits< SPK::Pool< class SPK::Particle > >::methods[] = {
	{"dynCast", &luna_wrapper_SPK_Pool_class_SPK_Particle::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Pool_class_SPK_Particle::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Pool< class SPK::Particle > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Pool< class SPK::Particle > >::enumValues[] = {
	{0,0}
};


