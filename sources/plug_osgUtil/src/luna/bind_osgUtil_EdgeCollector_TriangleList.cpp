#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_TriangleList {
public:
	typedef Luna< osgUtil::EdgeCollector::TriangleList > luna_t;

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

		osgUtil::EdgeCollector::TriangleList* self=(Luna< osgUtil::EdgeCollector::TriangleList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::TriangleList");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::TriangleList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::TriangleList* LunaTraits< osgUtil::EdgeCollector::TriangleList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector::TriangleList >::_bind_dtor(osgUtil::EdgeCollector::TriangleList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::TriangleList >::className[] = "TriangleList";
const char LunaTraits< osgUtil::EdgeCollector::TriangleList >::fullName[] = "osgUtil::EdgeCollector::TriangleList";
const char LunaTraits< osgUtil::EdgeCollector::TriangleList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::TriangleList >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::TriangleList >::hash = 52419701;
const int LunaTraits< osgUtil::EdgeCollector::TriangleList >::uniqueIDs[] = {52419701,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::TriangleList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_TriangleList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::TriangleList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::TriangleList >::enumValues[] = {
	{0,0}
};


