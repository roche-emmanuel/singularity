#include <plug_common.h>

class luna_wrapper_osg_ConvexPlanarOccluder_HoleList {
public:
	typedef Luna< osg::ConvexPlanarOccluder::HoleList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25393619) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ConvexPlanarOccluder::HoleList*)");
		}

		osg::ConvexPlanarOccluder::HoleList* rhs =(Luna< osg::ConvexPlanarOccluder::HoleList >::check(L,2));
		osg::ConvexPlanarOccluder::HoleList* self=(Luna< osg::ConvexPlanarOccluder::HoleList >::check(L,1));
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

		osg::ConvexPlanarOccluder::HoleList* self=(Luna< osg::ConvexPlanarOccluder::HoleList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConvexPlanarOccluder::HoleList");
		
		return luna_dynamicCast(L,converters,"osg::ConvexPlanarOccluder::HoleList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ConvexPlanarOccluder::HoleList* LunaTraits< osg::ConvexPlanarOccluder::HoleList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::ConvexPlanarOccluder::HoleList >::_bind_dtor(osg::ConvexPlanarOccluder::HoleList* obj) {
	delete obj;
}

const char LunaTraits< osg::ConvexPlanarOccluder::HoleList >::className[] = "HoleList";
const char LunaTraits< osg::ConvexPlanarOccluder::HoleList >::fullName[] = "osg::ConvexPlanarOccluder::HoleList";
const char LunaTraits< osg::ConvexPlanarOccluder::HoleList >::moduleName[] = "osg";
const char* LunaTraits< osg::ConvexPlanarOccluder::HoleList >::parents[] = {0};
const int LunaTraits< osg::ConvexPlanarOccluder::HoleList >::hash = 25393619;
const int LunaTraits< osg::ConvexPlanarOccluder::HoleList >::uniqueIDs[] = {25393619,0};

luna_RegType LunaTraits< osg::ConvexPlanarOccluder::HoleList >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ConvexPlanarOccluder_HoleList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ConvexPlanarOccluder_HoleList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConvexPlanarOccluder::HoleList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConvexPlanarOccluder::HoleList >::enumValues[] = {
	{0,0}
};


