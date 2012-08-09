#include <plug_common.h>

class luna_wrapper_osg_GraphicsThread {
public:
	typedef Luna< osg::GraphicsThread > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsThread* ptr= dynamic_cast< osg::GraphicsThread* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsThread >::push(L,ptr,false);
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

osg::GraphicsThread* LunaTraits< osg::GraphicsThread >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::GraphicsThread >::_bind_dtor(osg::GraphicsThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsThread >::className[] = "GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::fullName[] = "osg::GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsThread >::parents[] = {"osg.OperationThread", 0};
const int LunaTraits< osg::GraphicsThread >::hash = 55022762;
const int LunaTraits< osg::GraphicsThread >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsThread >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsThread::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsThread >::enumValues[] = {
	{0,0}
};


