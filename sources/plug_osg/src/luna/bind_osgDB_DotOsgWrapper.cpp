#include <plug_common.h>

class luna_wrapper_osgDB_DotOsgWrapper {
public:
	typedef Luna< osgDB::DotOsgWrapper > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::DotOsgWrapper* ptr= dynamic_cast< osgDB::DotOsgWrapper* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DotOsgWrapper >::push(L,ptr,false);
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

osgDB::DotOsgWrapper* LunaTraits< osgDB::DotOsgWrapper >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::DotOsgWrapper >::_bind_dtor(osgDB::DotOsgWrapper* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DotOsgWrapper >::className[] = "DotOsgWrapper";
const char LunaTraits< osgDB::DotOsgWrapper >::fullName[] = "osgDB::DotOsgWrapper";
const char LunaTraits< osgDB::DotOsgWrapper >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DotOsgWrapper >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::DotOsgWrapper >::hash = 47273893;
const int LunaTraits< osgDB::DotOsgWrapper >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DotOsgWrapper >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DotOsgWrapper >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DotOsgWrapper::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DotOsgWrapper >::enumValues[] = {
	{"READ_AND_WRITE", osgDB::DotOsgWrapper::READ_AND_WRITE},
	{"READ_ONLY", osgDB::DotOsgWrapper::READ_ONLY},
	{0,0}
};


