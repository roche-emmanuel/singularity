#include <plug_common.h>

class luna_wrapper_osg_OperationThread {
public:
	typedef Luna< osg::OperationThread > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::OperationThread* ptr= dynamic_cast< osg::OperationThread* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OperationThread >::push(L,ptr,false);
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

osg::OperationThread* LunaTraits< osg::OperationThread >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::OperationThread >::_bind_dtor(osg::OperationThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OperationThread >::className[] = "OperationThread";
const char LunaTraits< osg::OperationThread >::fullName[] = "osg::OperationThread";
const char LunaTraits< osg::OperationThread >::moduleName[] = "osg";
const char* LunaTraits< osg::OperationThread >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::OperationThread >::hash = 36998034;
const int LunaTraits< osg::OperationThread >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OperationThread >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osg::OperationThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OperationThread::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OperationThread >::enumValues[] = {
	{0,0}
};


