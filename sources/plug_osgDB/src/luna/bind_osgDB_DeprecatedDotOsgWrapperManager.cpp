#include <plug_common.h>

class luna_wrapper_osgDB_DeprecatedDotOsgWrapperManager {
public:
	typedef Luna< osgDB::DeprecatedDotOsgWrapperManager > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::DeprecatedDotOsgWrapperManager* ptr= dynamic_cast< osgDB::DeprecatedDotOsgWrapperManager* >(Luna< osg::Referenced >::check(L,1));
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
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DeprecatedDotOsgWrapperManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DeprecatedDotOsgWrapperManager >::enumValues[] = {
	{0,0}
};


