#include <plug_common.h>

class luna_wrapper_osgParticle_rangef {
public:
	typedef Luna< osgParticle::rangef > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13510606) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::rangef*)");
		}

		osgParticle::rangef* rhs =(Luna< osgParticle::rangef >::check(L,2));
		osgParticle::rangef* self=(Luna< osgParticle::rangef >::check(L,1));
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

		osgParticle::rangef* self=(Luna< osgParticle::rangef >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::rangef");
		
		return luna_dynamicCast(L,converters,"osgParticle::rangef",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgParticle::rangef* LunaTraits< osgParticle::rangef >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgParticle::rangef >::_bind_dtor(osgParticle::rangef* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::rangef >::className[] = "rangef";
const char LunaTraits< osgParticle::rangef >::fullName[] = "osgParticle::rangef";
const char LunaTraits< osgParticle::rangef >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::rangef >::parents[] = {0};
const int LunaTraits< osgParticle::rangef >::hash = 13510606;
const int LunaTraits< osgParticle::rangef >::uniqueIDs[] = {13510606,0};

luna_RegType LunaTraits< osgParticle::rangef >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_rangef::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_rangef::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::rangef >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::rangef >::enumValues[] = {
	{0,0}
};


