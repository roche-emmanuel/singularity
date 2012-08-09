#include <plug_common.h>

class luna_wrapper_osgUtil_StateToCompile_DrawableSet {
public:
	typedef Luna< osgUtil::StateToCompile::DrawableSet > luna_t;

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

		osgUtil::StateToCompile::DrawableSet* self=(Luna< osgUtil::StateToCompile::DrawableSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::StateToCompile::DrawableSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::StateToCompile::DrawableSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::StateToCompile::DrawableSet* LunaTraits< osgUtil::StateToCompile::DrawableSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::StateToCompile::DrawableSet >::_bind_dtor(osgUtil::StateToCompile::DrawableSet* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::StateToCompile::DrawableSet >::className[] = "DrawableSet";
const char LunaTraits< osgUtil::StateToCompile::DrawableSet >::fullName[] = "osgUtil::StateToCompile::DrawableSet";
const char LunaTraits< osgUtil::StateToCompile::DrawableSet >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateToCompile::DrawableSet >::parents[] = {0};
const int LunaTraits< osgUtil::StateToCompile::DrawableSet >::hash = 70884799;
const int LunaTraits< osgUtil::StateToCompile::DrawableSet >::uniqueIDs[] = {70884799,0};

luna_RegType LunaTraits< osgUtil::StateToCompile::DrawableSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_StateToCompile_DrawableSet::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateToCompile::DrawableSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateToCompile::DrawableSet >::enumValues[] = {
	{0,0}
};


