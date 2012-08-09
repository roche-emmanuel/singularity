#include <plug_common.h>

class luna_wrapper_osgUtil_StateToCompile_ProgramSet {
public:
	typedef Luna< osgUtil::StateToCompile::ProgramSet > luna_t;

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

		osgUtil::StateToCompile::ProgramSet* self=(Luna< osgUtil::StateToCompile::ProgramSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::StateToCompile::ProgramSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::StateToCompile::ProgramSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::StateToCompile::ProgramSet* LunaTraits< osgUtil::StateToCompile::ProgramSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::StateToCompile::ProgramSet >::_bind_dtor(osgUtil::StateToCompile::ProgramSet* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< osgUtil::StateToCompile::ProgramSet >::className[] = "ProgramSet";
const char LunaTraits< osgUtil::StateToCompile::ProgramSet >::fullName[] = "osgUtil::StateToCompile::ProgramSet";
const char LunaTraits< osgUtil::StateToCompile::ProgramSet >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateToCompile::ProgramSet >::parents[] = {0};
const int LunaTraits< osgUtil::StateToCompile::ProgramSet >::hash = 13242464;
const int LunaTraits< osgUtil::StateToCompile::ProgramSet >::uniqueIDs[] = {13242464,0};

luna_RegType LunaTraits< osgUtil::StateToCompile::ProgramSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_StateToCompile_ProgramSet::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateToCompile::ProgramSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateToCompile::ProgramSet >::enumValues[] = {
	{0,0}
};


