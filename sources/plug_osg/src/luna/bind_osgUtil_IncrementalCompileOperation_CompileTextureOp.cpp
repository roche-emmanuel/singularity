#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileTextureOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileTextureOp > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IncrementalCompileOperation::CompileTextureOp* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileTextureOp* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileTextureOp >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation::CompileTextureOp* LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileTextureOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::className[] = "CompileTextureOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileTextureOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::parents[] = {"osgUtil.CompileOp", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::hash = 42224763;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileTextureOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp >::enumValues[] = {
	{0,0}
};


