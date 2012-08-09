#include <plug_common.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell > luna_t;

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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell");
		
		return luna_dynamicCast(L,converters,"osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4475636) ) return false;
		return true;
	}


	// Constructor binds:
	// osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::Cell(int in_i, int in_j, int in_k)
	static osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::Cell(int in_i, int in_j, int in_k) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::Cell(int in_i, int in_j, int in_k)\nClass arguments details:\n");
		}

		int in_i=(int)lua_tointeger(L,1);
		int in_j=(int)lua_tointeger(L,2);
		int in_k=(int)lua_tointeger(L,3);

		return new osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell(in_i, in_j, in_k);
	}


	// Function binds:

	// Operator binds:
	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs) const\nClass arguments details:\narg 1 ID = 4475636\n");
		}

		const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* rhs_ptr=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator< function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs=*rhs_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_ctor(L);
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::className[] = "Cell";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::parents[] = {0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::hash = 4475636;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::uniqueIDs[] = {4475636,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::methods[] = {
	{"__lt", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind___lt},
	{"dynCast", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::enumValues[] = {
	{0,0}
};


