#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector_IndexArrayList {
public:
	typedef Luna< osgUtil::EdgeCollector::IndexArrayList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,655286) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::EdgeCollector::IndexArrayList*)");
		}

		osgUtil::EdgeCollector::IndexArrayList* rhs =(Luna< osgUtil::EdgeCollector::IndexArrayList >::check(L,2));
		osgUtil::EdgeCollector::IndexArrayList* self=(Luna< osgUtil::EdgeCollector::IndexArrayList >::check(L,1));
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

		osgUtil::EdgeCollector::IndexArrayList* self=(Luna< osgUtil::EdgeCollector::IndexArrayList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector::IndexArrayList");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector::IndexArrayList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::EdgeCollector::IndexArrayList* LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::_bind_dtor(osgUtil::EdgeCollector::IndexArrayList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::className[] = "IndexArrayList";
const char LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::fullName[] = "osgUtil::EdgeCollector::IndexArrayList";
const char LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::moduleName[] = "osg";
const char* LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::hash = 655286;
const int LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::uniqueIDs[] = {655286,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector_IndexArrayList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_IndexArrayList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::IndexArrayList >::enumValues[] = {
	{0,0}
};


