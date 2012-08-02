#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_EdgeloopList {
public:
	typedef Luna< osgUtil::EdgeCollector::EdgeloopList > luna_t;

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

		osgUtil::EdgeCollector::EdgeloopList* self=(Luna< osgUtil::EdgeCollector::EdgeloopList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::EdgeloopList");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::EdgeloopList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::EdgeloopList* LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::_bind_dtor(osgUtil::EdgeCollector::EdgeloopList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::className[] = "EdgeloopList";
const char LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::fullName[] = "osgUtil::EdgeCollector::EdgeloopList";
const char LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::hash = 55216760;
const int LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::uniqueIDs[] = {55216760,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_EdgeloopList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::EdgeloopList >::enumValues[] = {
	{0,0}
};


