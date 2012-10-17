#include <plug_common.h>

class luna_wrapper_osgParticle_rangev2 {
public:
	typedef Luna< osgParticle::rangev2 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18829252) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::rangev2*)");
		}

		osgParticle::rangev2* rhs =(Luna< osgParticle::rangev2 >::check(L,2));
		osgParticle::rangev2* self=(Luna< osgParticle::rangev2 >::check(L,1));
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

		osgParticle::rangev2* self=(Luna< osgParticle::rangev2 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::rangev2");
		
		return luna_dynamicCast(L,converters,"osgParticle::rangev2",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgParticle::rangev2* LunaTraits< osgParticle::rangev2 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgParticle::rangev2 >::_bind_dtor(osgParticle::rangev2* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::rangev2 >::className[] = "rangev2";
const char LunaTraits< osgParticle::rangev2 >::fullName[] = "osgParticle::rangev2";
const char LunaTraits< osgParticle::rangev2 >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::rangev2 >::parents[] = {0};
const int LunaTraits< osgParticle::rangev2 >::hash = 18829252;
const int LunaTraits< osgParticle::rangev2 >::uniqueIDs[] = {18829252,0};

luna_RegType LunaTraits< osgParticle::rangev2 >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_rangev2::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_rangev2::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::rangev2 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::rangev2 >::enumValues[] = {
	{0,0}
};


