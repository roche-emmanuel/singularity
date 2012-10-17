#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation > luna_t;

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
		osgUtil::IncrementalCompileOperation* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation* LunaTraits< osgUtil::IncrementalCompileOperation >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation >::_bind_dtor(osgUtil::IncrementalCompileOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation >::className[] = "IncrementalCompileOperation";
const char LunaTraits< osgUtil::IncrementalCompileOperation >::fullName[] = "osgUtil::IncrementalCompileOperation";
const char LunaTraits< osgUtil::IncrementalCompileOperation >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation >::hash = 36159365;
const int LunaTraits< osgUtil::IncrementalCompileOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation >::methods[] = {
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation >::enumValues[] = {
	{0,0}
};


