#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileProgramOp > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IncrementalCompileOperation::CompileProgramOp* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileProgramOp* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileProgramOp >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation::CompileProgramOp* LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileProgramOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::className[] = "CompileProgramOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileProgramOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::parents[] = {"osgUtil.CompileOp", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::hash = 80639499;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::enumValues[] = {
	{0,0}
};


