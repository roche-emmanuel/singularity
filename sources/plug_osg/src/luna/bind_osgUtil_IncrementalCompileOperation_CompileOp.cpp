#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileOp > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IncrementalCompileOperation::CompileOp* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileOp* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileOp >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileOp* LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// double osgUtil::IncrementalCompileOperation::CompileOp::estimatedTimeForCompile(osgUtil::IncrementalCompileOperation::CompileInfo & compileInfo) const
	// bool osgUtil::IncrementalCompileOperation::CompileOp::compile(osgUtil::IncrementalCompileOperation::CompileInfo & compileInfo)

	// Abstract operators:
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::className[] = "CompileOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::hash = 74440215;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::enumValues[] = {
	{0,0}
};


