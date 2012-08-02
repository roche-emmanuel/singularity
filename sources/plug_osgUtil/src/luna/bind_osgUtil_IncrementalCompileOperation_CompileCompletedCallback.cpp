#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileCompletedCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IncrementalCompileOperation::CompileCompletedCallback* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileCompletedCallback* LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osgUtil::IncrementalCompileOperation::CompileCompletedCallback::compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet * compileSet)

	// Abstract operators:
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileCompletedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::className[] = "CompileCompletedCallback";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileCompletedCallback";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::hash = 59036340;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::enumValues[] = {
	{0,0}
};


