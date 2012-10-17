#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileInfo {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2286263) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::RenderInfo*)");
		}

		osg::RenderInfo* rhs =(Luna< osg::RenderInfo >::check(L,2));
		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::enumValues[] = {
	{0,0}
};


