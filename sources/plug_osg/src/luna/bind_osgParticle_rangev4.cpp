#include <plug_common.h>

class luna_wrapper_osgParticle_rangev4 {
public:
	typedef Luna< osgParticle::rangev4 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18829254) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::rangev4*)");
		}

		osgParticle::rangev4* rhs =(Luna< osgParticle::rangev4 >::check(L,2));
		osgParticle::rangev4* self=(Luna< osgParticle::rangev4 >::check(L,1));
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

		osgParticle::rangev4* self=(Luna< osgParticle::rangev4 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::rangev4");
		
		return luna_dynamicCast(L,converters,"osgParticle::rangev4",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgParticle::rangev4* LunaTraits< osgParticle::rangev4 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgParticle::rangev4 >::_bind_dtor(osgParticle::rangev4* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::rangev4 >::className[] = "rangev4";
const char LunaTraits< osgParticle::rangev4 >::fullName[] = "osgParticle::rangev4";
const char LunaTraits< osgParticle::rangev4 >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::rangev4 >::parents[] = {0};
const int LunaTraits< osgParticle::rangev4 >::hash = 18829254;
const int LunaTraits< osgParticle::rangev4 >::uniqueIDs[] = {18829254,0};

luna_RegType LunaTraits< osgParticle::rangev4 >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_rangev4::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_rangev4::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::rangev4 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::rangev4 >::enumValues[] = {
	{0,0}
};


