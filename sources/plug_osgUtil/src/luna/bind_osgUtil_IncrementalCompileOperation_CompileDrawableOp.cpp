#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileDrawableOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileDrawableOp > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IncrementalCompileOperation::CompileDrawableOp* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileDrawableOp* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation::CompileDrawableOp* LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileDrawableOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::className[] = "CompileDrawableOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileDrawableOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::parents[] = {"osgUtil.CompileOp", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::hash = 33076037;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileDrawableOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::enumValues[] = {
	{0,0}
};


