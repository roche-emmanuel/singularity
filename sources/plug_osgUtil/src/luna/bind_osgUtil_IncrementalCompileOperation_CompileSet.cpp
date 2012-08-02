#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSet {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileSet > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IncrementalCompileOperation::CompileSet* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileSet* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileSet >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation::CompileSet* LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::className[] = "CompileSet";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileSet";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::hash = 7649180;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet >::enumValues[] = {
	{0,0}
};


