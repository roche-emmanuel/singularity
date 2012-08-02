#include <plug_common.h>

class luna_wrapper_osgDB_FinishedObjectReadCallback {
public:
	typedef Luna< osgDB::FinishedObjectReadCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::FinishedObjectReadCallback* ptr= dynamic_cast< osgDB::FinishedObjectReadCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FinishedObjectReadCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

osgDB::FinishedObjectReadCallback* LunaTraits< osgDB::FinishedObjectReadCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgDB::FinishedObjectReadCallback::objectRead(InputStream & is, osg::Object & obj)

	// Abstract operators:
}

void LunaTraits< osgDB::FinishedObjectReadCallback >::_bind_dtor(osgDB::FinishedObjectReadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FinishedObjectReadCallback >::className[] = "FinishedObjectReadCallback";
const char LunaTraits< osgDB::FinishedObjectReadCallback >::fullName[] = "osgDB::FinishedObjectReadCallback";
const char LunaTraits< osgDB::FinishedObjectReadCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FinishedObjectReadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FinishedObjectReadCallback >::hash = 36083873;
const int LunaTraits< osgDB::FinishedObjectReadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FinishedObjectReadCallback >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FinishedObjectReadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FinishedObjectReadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FinishedObjectReadCallback >::enumValues[] = {
	{0,0}
};


