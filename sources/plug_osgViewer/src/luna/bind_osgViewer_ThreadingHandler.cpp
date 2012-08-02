#include <plug_common.h>

class luna_wrapper_osgViewer_ThreadingHandler {
public:
	typedef Luna< osgViewer::ThreadingHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::ThreadingHandler* ptr= dynamic_cast< osgViewer::ThreadingHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ThreadingHandler >::push(L,ptr,false);
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

osgViewer::ThreadingHandler* LunaTraits< osgViewer::ThreadingHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::ThreadingHandler >::_bind_dtor(osgViewer::ThreadingHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ThreadingHandler >::className[] = "ThreadingHandler";
const char LunaTraits< osgViewer::ThreadingHandler >::fullName[] = "osgViewer::ThreadingHandler";
const char LunaTraits< osgViewer::ThreadingHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ThreadingHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< osgViewer::ThreadingHandler >::hash = 9446248;
const int LunaTraits< osgViewer::ThreadingHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ThreadingHandler >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ThreadingHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ThreadingHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ThreadingHandler >::enumValues[] = {
	{0,0}
};


