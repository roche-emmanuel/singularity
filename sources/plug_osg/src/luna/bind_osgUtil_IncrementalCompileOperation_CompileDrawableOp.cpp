#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileDrawableOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileDrawableOp > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileDrawableOp::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileDrawableOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp >::enumValues[] = {
	{0,0}
};


