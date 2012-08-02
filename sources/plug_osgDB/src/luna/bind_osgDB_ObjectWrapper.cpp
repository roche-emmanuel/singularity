#include <plug_common.h>

class luna_wrapper_osgDB_ObjectWrapper {
public:
	typedef Luna< osgDB::ObjectWrapper > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ObjectWrapper* ptr= dynamic_cast< osgDB::ObjectWrapper* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ObjectWrapper >::push(L,ptr,false);
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

osgDB::ObjectWrapper* LunaTraits< osgDB::ObjectWrapper >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapper >::_bind_dtor(osgDB::ObjectWrapper* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ObjectWrapper >::className[] = "ObjectWrapper";
const char LunaTraits< osgDB::ObjectWrapper >::fullName[] = "osgDB::ObjectWrapper";
const char LunaTraits< osgDB::ObjectWrapper >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapper >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ObjectWrapper >::hash = 93921320;
const int LunaTraits< osgDB::ObjectWrapper >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ObjectWrapper >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapper >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ObjectWrapper::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapper >::enumValues[] = {
	{0,0}
};


