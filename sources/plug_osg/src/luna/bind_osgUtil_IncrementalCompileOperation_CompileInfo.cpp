#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileInfo {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileInfo > luna_t;

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileInfo* LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileInfo* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::className[] = "CompileInfo";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileInfo";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::parents[] = {"osg.RenderInfo", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::hash = 36834898;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::uniqueIDs[] = {2286263,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::enumValues[] = {
	{0,0}
};


