#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_EdgeSet {
public:
	typedef Luna< osgUtil::EdgeCollector::EdgeSet > luna_t;

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

		osgUtil::EdgeCollector::EdgeSet* self=(Luna< osgUtil::EdgeCollector::EdgeSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::EdgeSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::EdgeSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::EdgeSet* LunaTraits< osgUtil::EdgeCollector::EdgeSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector::EdgeSet >::_bind_dtor(osgUtil::EdgeCollector::EdgeSet* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::EdgeSet >::className[] = "EdgeSet";
const char LunaTraits< osgUtil::EdgeCollector::EdgeSet >::fullName[] = "osgUtil::EdgeCollector::EdgeSet";
const char LunaTraits< osgUtil::EdgeCollector::EdgeSet >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::EdgeSet >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::EdgeSet >::hash = 50528172;
const int LunaTraits< osgUtil::EdgeCollector::EdgeSet >::uniqueIDs[] = {50528172,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::EdgeSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_EdgeSet::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::EdgeSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::EdgeSet >::enumValues[] = {
	{0,0}
};


