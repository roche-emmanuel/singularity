#include <plug_common.h>

class luna_wrapper_osgUtil_PlaneIntersector_Intersections {
public:
	typedef Luna< osgUtil::PlaneIntersector::Intersections > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23612133) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PlaneIntersector::Intersections*)");
		}

		osgUtil::PlaneIntersector::Intersections* rhs =(Luna< osgUtil::PlaneIntersector::Intersections >::check(L,2));
		osgUtil::PlaneIntersector::Intersections* self=(Luna< osgUtil::PlaneIntersector::Intersections >::check(L,1));
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

		osgUtil::PlaneIntersector::Intersections* self=(Luna< osgUtil::PlaneIntersector::Intersections >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PlaneIntersector::Intersections");
		
		return luna_dynamicCast(L,converters,"osgUtil::PlaneIntersector::Intersections",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::PlaneIntersector::Intersections* LunaTraits< osgUtil::PlaneIntersector::Intersections >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::PlaneIntersector::Intersections >::_bind_dtor(osgUtil::PlaneIntersector::Intersections* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PlaneIntersector::Intersections >::className[] = "Intersections";
const char LunaTraits< osgUtil::PlaneIntersector::Intersections >::fullName[] = "osgUtil::PlaneIntersector::Intersections";
const char LunaTraits< osgUtil::PlaneIntersector::Intersections >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PlaneIntersector::Intersections >::parents[] = {0};
const int LunaTraits< osgUtil::PlaneIntersector::Intersections >::hash = 23612133;
const int LunaTraits< osgUtil::PlaneIntersector::Intersections >::uniqueIDs[] = {23612133,0};

luna_RegType LunaTraits< osgUtil::PlaneIntersector::Intersections >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_PlaneIntersector_Intersections::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PlaneIntersector_Intersections::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PlaneIntersector::Intersections >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PlaneIntersector::Intersections >::enumValues[] = {
	{0,0}
};


