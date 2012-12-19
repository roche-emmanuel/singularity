#include <plug_common.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87684634) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime*)");
		}

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* rhs =(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,2));
		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime");
		
		return luna_dynamicCast(L,converters,"osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87684634) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:

	// Operator binds:
	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs) const\nClass arguments details:\narg 1 ID = 87684634\n");
		}

		const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* rhs_ptr=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator< function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs=*rhs_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::className[] = "DepthMatrixStartTime";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::parents[] = {0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::hash = 87684634;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::uniqueIDs[] = {87684634,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::methods[] = {
	{"__lt", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind___lt},
	{"dynCast", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::enumValues[] = {
	{0,0}
};


