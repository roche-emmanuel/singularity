#include <plug_common.h>

class luna_wrapper_osg_ProxyNode {
public:
	typedef Luna< osg::ProxyNode > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ProxyNode* ptr= dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ProxyNode >::push(L,ptr,false);
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

osg::ProxyNode* LunaTraits< osg::ProxyNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ProxyNode >::_bind_dtor(osg::ProxyNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ProxyNode >::className[] = "ProxyNode";
const char LunaTraits< osg::ProxyNode >::fullName[] = "osg::ProxyNode";
const char LunaTraits< osg::ProxyNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ProxyNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ProxyNode >::hash = 1600235;
const int LunaTraits< osg::ProxyNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ProxyNode >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osg::ProxyNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ProxyNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ProxyNode >::enumValues[] = {
	{"USE_BOUNDING_SPHERE_CENTER", osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER},
	{"USER_DEFINED_CENTER", osg::ProxyNode::USER_DEFINED_CENTER},
	{"LOAD_IMMEDIATELY", osg::ProxyNode::LOAD_IMMEDIATELY},
	{"DEFER_LOADING_TO_DATABASE_PAGER", osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER},
	{"NO_AUTOMATIC_LOADING", osg::ProxyNode::NO_AUTOMATIC_LOADING},
	{0,0}
};


