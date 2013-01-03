#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileCompletedCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgUtil::IncrementalCompileOperation::CompileCompletedCallback* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IncrementalCompileOperation::CompileCompletedCallback* ptr= luna_caster< osg::Referenced, osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation::CompileCompletedCallback* LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgUtil::IncrementalCompileOperation::CompileCompletedCallback::compileCompleted(osgUtil::IncrementalCompileOperation::CompileSet * compileSet)
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileCompletedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::className[] = "IncrementalCompileOperation_CompileCompletedCallback";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileCompletedCallback";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::hash = 59036340;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::methods[] = {
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileCompletedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >::enumValues[] = {
	{0,0}
};


