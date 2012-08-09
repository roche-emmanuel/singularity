#include <plug_common.h>

class luna_wrapper_osgUtil_Statistics_PrimitivePair {
public:
	typedef Luna< osgUtil::Statistics::PrimitivePair > luna_t;

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

		osgUtil::Statistics::PrimitivePair* self=(Luna< osgUtil::Statistics::PrimitivePair >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Statistics::PrimitivePair");
		
		return luna_dynamicCast(L,converters,"osgUtil::Statistics::PrimitivePair",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::Statistics::PrimitivePair* LunaTraits< osgUtil::Statistics::PrimitivePair >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::Statistics::PrimitivePair >::_bind_dtor(osgUtil::Statistics::PrimitivePair* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Statistics::PrimitivePair >::className[] = "PrimitivePair";
const char LunaTraits< osgUtil::Statistics::PrimitivePair >::fullName[] = "osgUtil::Statistics::PrimitivePair";
const char LunaTraits< osgUtil::Statistics::PrimitivePair >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Statistics::PrimitivePair >::parents[] = {0};
const int LunaTraits< osgUtil::Statistics::PrimitivePair >::hash = 48492479;
const int LunaTraits< osgUtil::Statistics::PrimitivePair >::uniqueIDs[] = {48492479,0};

luna_RegType LunaTraits< osgUtil::Statistics::PrimitivePair >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_Statistics_PrimitivePair::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Statistics::PrimitivePair >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Statistics::PrimitivePair >::enumValues[] = {
	{0,0}
};


