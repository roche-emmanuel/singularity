#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_EdgeList {
public:
	typedef Luna< osgUtil::EdgeCollector::EdgeList > luna_t;

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

		osgUtil::EdgeCollector::EdgeList* self=(Luna< osgUtil::EdgeCollector::EdgeList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::EdgeList");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::EdgeList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::EdgeList* LunaTraits< osgUtil::EdgeCollector::EdgeList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector::EdgeList >::_bind_dtor(osgUtil::EdgeCollector::EdgeList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::EdgeList >::className[] = "EdgeList";
const char LunaTraits< osgUtil::EdgeCollector::EdgeList >::fullName[] = "osgUtil::EdgeCollector::EdgeList";
const char LunaTraits< osgUtil::EdgeCollector::EdgeList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::EdgeList >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::EdgeList >::hash = 66168244;
const int LunaTraits< osgUtil::EdgeCollector::EdgeList >::uniqueIDs[] = {66168244,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::EdgeList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_EdgeList::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::EdgeList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::EdgeList >::enumValues[] = {
	{0,0}
};


