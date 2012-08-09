#include <plug_common.h>

class luna_wrapper_osgParticle_DomainOperator_Domain {
public:
	typedef Luna< osgParticle::DomainOperator::Domain > luna_t;

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

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::DomainOperator::Domain");
		
		return luna_dynamicCast(L,converters,"osgParticle::DomainOperator::Domain",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::DomainOperator::Domain::Domain(osgParticle::DomainOperator::Domain::Type t)
	static osgParticle::DomainOperator::Domain* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::Domain::Domain(osgParticle::DomainOperator::Domain::Type t) function, expected prototype:\nosgParticle::DomainOperator::Domain::Domain(osgParticle::DomainOperator::Domain::Type t)\nClass arguments details:\n");
		}

		osgParticle::DomainOperator::Domain::Type t=(osgParticle::DomainOperator::Domain::Type)lua_tointeger(L,1);

		return new osgParticle::DomainOperator::Domain(t);
	}


	// Function binds:

	// Operator binds:

};

osgParticle::DomainOperator::Domain* LunaTraits< osgParticle::DomainOperator::Domain >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_DomainOperator_Domain::_bind_ctor(L);
}

void LunaTraits< osgParticle::DomainOperator::Domain >::_bind_dtor(osgParticle::DomainOperator::Domain* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::DomainOperator::Domain >::className[] = "Domain";
const char LunaTraits< osgParticle::DomainOperator::Domain >::fullName[] = "osgParticle::DomainOperator::Domain";
const char LunaTraits< osgParticle::DomainOperator::Domain >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::DomainOperator::Domain >::parents[] = {0};
const int LunaTraits< osgParticle::DomainOperator::Domain >::hash = 60781756;
const int LunaTraits< osgParticle::DomainOperator::Domain >::uniqueIDs[] = {60781756,0};

luna_RegType LunaTraits< osgParticle::DomainOperator::Domain >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::DomainOperator::Domain >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::DomainOperator::Domain >::enumValues[] = {
	{"UNDEFINED_DOMAIN", osgParticle::DomainOperator::Domain::UNDEFINED_DOMAIN},
	{"POINT_DOMAIN", osgParticle::DomainOperator::Domain::POINT_DOMAIN},
	{"LINE_DOMAIN", osgParticle::DomainOperator::Domain::LINE_DOMAIN},
	{"TRI_DOMAIN", osgParticle::DomainOperator::Domain::TRI_DOMAIN},
	{"RECT_DOMAIN", osgParticle::DomainOperator::Domain::RECT_DOMAIN},
	{"PLANE_DOMAIN", osgParticle::DomainOperator::Domain::PLANE_DOMAIN},
	{"SPHERE_DOMAIN", osgParticle::DomainOperator::Domain::SPHERE_DOMAIN},
	{"BOX_DOMAIN", osgParticle::DomainOperator::Domain::BOX_DOMAIN},
	{"DISK_DOMAIN", osgParticle::DomainOperator::Domain::DISK_DOMAIN},
	{0,0}
};


