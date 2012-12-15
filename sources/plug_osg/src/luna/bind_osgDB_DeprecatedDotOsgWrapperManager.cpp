#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_DeprecatedDotOsgWrapperManager.h>

class luna_wrapper_osgDB_DeprecatedDotOsgWrapperManager {
public:
	typedef Luna< osgDB::DeprecatedDotOsgWrapperManager > luna_t;

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
		//osgDB::DeprecatedDotOsgWrapperManager* ptr= dynamic_cast< osgDB::DeprecatedDotOsgWrapperManager* >(Luna< osg::Referenced >::check(L,1));
		osgDB::DeprecatedDotOsgWrapperManager* ptr= luna_caster< osg::Referenced, osgDB::DeprecatedDotOsgWrapperManager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DeprecatedDotOsgWrapperManager >::push(L,ptr,false);
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

osgDB::DeprecatedDotOsgWrapperManager* LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::_bind_dtor(osgDB::DeprecatedDotOsgWrapperManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::className[] = "DeprecatedDotOsgWrapperManager";
const char LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::fullName[] = "osgDB::DeprecatedDotOsgWrapperManager";
const char LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::hash = 23901804;
const int LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::methods[] = {
	{"__eq", &luna_wrapper_osgDB_DeprecatedDotOsgWrapperManager::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DeprecatedDotOsgWrapperManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::enumValues[] = {
	{0,0}
};


