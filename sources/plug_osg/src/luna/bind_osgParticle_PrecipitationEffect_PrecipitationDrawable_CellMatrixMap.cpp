#include <plug_common.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_CellMatrixMap {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30297084) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap*)");
		}

		osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* rhs =(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::check(L,2));
		osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::check(L,1));
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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap");
		
		return luna_dynamicCast(L,converters,"osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::className[] = "CellMatrixMap";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::parents[] = {0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::hash = 30297084;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::uniqueIDs[] = {30297084,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_CellMatrixMap::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_CellMatrixMap::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap >::enumValues[] = {
	{0,0}
};


