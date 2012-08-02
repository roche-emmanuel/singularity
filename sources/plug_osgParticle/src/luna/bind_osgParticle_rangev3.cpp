#include <plug_common.h>

class luna_wrapper_osgParticle_rangev3 {
public:
	typedef Luna< osgParticle::rangev3 > luna_t;

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

		osgParticle::rangev3* self=(Luna< osgParticle::rangev3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::rangev3");
		
		return luna_dynamicCast(L,converters,"osgParticle::rangev3",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgParticle::rangev3* LunaTraits< osgParticle::rangev3 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgParticle::rangev3 >::_bind_dtor(osgParticle::rangev3* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::rangev3 >::className[] = "rangev3";
const char LunaTraits< osgParticle::rangev3 >::fullName[] = "osgParticle::rangev3";
const char LunaTraits< osgParticle::rangev3 >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::rangev3 >::parents[] = {0};
const int LunaTraits< osgParticle::rangev3 >::hash = 18829253;
const int LunaTraits< osgParticle::rangev3 >::uniqueIDs[] = {18829253,0};

luna_RegType LunaTraits< osgParticle::rangev3 >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_rangev3::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::rangev3 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::rangev3 >::enumValues[] = {
	{0,0}
};


