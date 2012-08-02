#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapperManager {
public:
	typedef Luna< osgDB::ObjectWrapperManager > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ObjectWrapperManager* ptr= dynamic_cast< osgDB::ObjectWrapperManager* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ObjectWrapperManager >::push(L,ptr,false);
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

osgDB::ObjectWrapperManager* LunaTraits< osgDB::ObjectWrapperManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapperManager >::_bind_dtor(osgDB::ObjectWrapperManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ObjectWrapperManager >::className[] = "ObjectWrapperManager";
const char LunaTraits< osgDB::ObjectWrapperManager >::fullName[] = "osgDB::ObjectWrapperManager";
const char LunaTraits< osgDB::ObjectWrapperManager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapperManager >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ObjectWrapperManager >::hash = 11391365;
const int LunaTraits< osgDB::ObjectWrapperManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ObjectWrapperManager >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapperManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ObjectWrapperManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapperManager >::enumValues[] = {
	{0,0}
};


