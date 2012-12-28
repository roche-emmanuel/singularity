#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_TriangleSet {
public:
	typedef Luna< osgUtil::EdgeCollector::TriangleSet > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62987903) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::EdgeCollector::TriangleSet*)");
		}

		osgUtil::EdgeCollector::TriangleSet* rhs =(Luna< osgUtil::EdgeCollector::TriangleSet >::check(L,2));
		osgUtil::EdgeCollector::TriangleSet* self=(Luna< osgUtil::EdgeCollector::TriangleSet >::check(L,1));
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

		osgUtil::EdgeCollector::TriangleSet* self=(Luna< osgUtil::EdgeCollector::TriangleSet >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::TriangleSet");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::TriangleSet",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::TriangleSet* LunaTraits< osgUtil::EdgeCollector::TriangleSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::EdgeCollector::TriangleSet >::_bind_dtor(osgUtil::EdgeCollector::TriangleSet* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::TriangleSet >::className[] = "TriangleSet";
const char LunaTraits< osgUtil::EdgeCollector::TriangleSet >::fullName[] = "osgUtil::EdgeCollector::TriangleSet";
const char LunaTraits< osgUtil::EdgeCollector::TriangleSet >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::EdgeCollector::TriangleSet >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::TriangleSet >::hash = 62987903;
const int LunaTraits< osgUtil::EdgeCollector::TriangleSet >::uniqueIDs[] = {62987903,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::TriangleSet >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_TriangleSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_TriangleSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::TriangleSet >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::TriangleSet >::enumValues[] = {
	{0,0}
};


