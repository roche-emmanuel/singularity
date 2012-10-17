#include <plug_common.h>

class luna_wrapper_osg_QueryGeometry {
public:
	typedef Luna< osg::QueryGeometry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::QueryGeometry* ptr= dynamic_cast< osg::QueryGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::QueryGeometry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::QueryGeometry* LunaTraits< osg::QueryGeometry >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::QueryGeometry >::_bind_dtor(osg::QueryGeometry* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::QueryGeometry >::className[] = "QueryGeometry";
const char LunaTraits< osg::QueryGeometry >::fullName[] = "osg::QueryGeometry";
const char LunaTraits< osg::QueryGeometry >::moduleName[] = "osg";
const char* LunaTraits< osg::QueryGeometry >::parents[] = {"osg.Geometry", 0};
const int LunaTraits< osg::QueryGeometry >::hash = 47248904;
const int LunaTraits< osg::QueryGeometry >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::QueryGeometry >::methods[] = {
	{"__eq", &luna_wrapper_osg_QueryGeometry::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::QueryGeometry >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_QueryGeometry::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::QueryGeometry >::enumValues[] = {
	{0,0}
};


