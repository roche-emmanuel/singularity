#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_OperationThread.h>

class luna_wrapper_osg_OperationThread {
public:
	typedef Luna< osg::OperationThread > luna_t;

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
		//osg::OperationThread* ptr= dynamic_cast< osg::OperationThread* >(Luna< osg::Referenced >::check(L,1));
		osg::OperationThread* ptr= luna_caster< osg::Referenced, osg::OperationThread >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OperationThread >::push(L,ptr,false);
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

osg::OperationThread* LunaTraits< osg::OperationThread >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::OperationThread >::_bind_dtor(osg::OperationThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OperationThread >::className[] = "OperationThread";
const char LunaTraits< osg::OperationThread >::fullName[] = "osg::OperationThread";
const char LunaTraits< osg::OperationThread >::moduleName[] = "osg";
const char* LunaTraits< osg::OperationThread >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::OperationThread >::hash = 36998034;
const int LunaTraits< osg::OperationThread >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OperationThread >::methods[] = {
	{"__eq", &luna_wrapper_osg_OperationThread::_bind___eq},
	{"getTable", &luna_wrapper_osg_OperationThread::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OperationThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OperationThread::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OperationThread >::enumValues[] = {
	{0,0}
};


