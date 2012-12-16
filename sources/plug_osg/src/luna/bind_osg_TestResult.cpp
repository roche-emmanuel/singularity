#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TestResult.h>

class luna_wrapper_osg_TestResult {
public:
	typedef Luna< osg::TestResult > luna_t;

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
		//osg::TestResult* ptr= dynamic_cast< osg::TestResult* >(Luna< osg::Referenced >::check(L,1));
		osg::TestResult* ptr= luna_caster< osg::Referenced, osg::TestResult >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TestResult >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TestResult::TestResult()
	static osg::TestResult* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TestResult::TestResult() function, expected prototype:\nosg::TestResult::TestResult()\nClass arguments details:\n");
		}


		return new osg::TestResult();
	}

	// osg::TestResult::TestResult(lua_Table * data)
	static osg::TestResult* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TestResult::TestResult(lua_Table * data) function, expected prototype:\nosg::TestResult::TestResult(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_TestResult(L,NULL);
	}

	// Overload binder for osg::TestResult::TestResult
	static osg::TestResult* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TestResult, cannot match any of the overloads for function TestResult:\n  TestResult()\n  TestResult(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::TestResult* LunaTraits< osg::TestResult >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TestResult::_bind_ctor(L);
}

void LunaTraits< osg::TestResult >::_bind_dtor(osg::TestResult* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TestResult >::className[] = "TestResult";
const char LunaTraits< osg::TestResult >::fullName[] = "osg::TestResult";
const char LunaTraits< osg::TestResult >::moduleName[] = "osg";
const char* LunaTraits< osg::TestResult >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TestResult >::hash = 49600581;
const int LunaTraits< osg::TestResult >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TestResult >::methods[] = {
	{"__eq", &luna_wrapper_osg_TestResult::_bind___eq},
	{"getTable", &luna_wrapper_osg_TestResult::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TestResult >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TestResult::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TestResult >::enumValues[] = {
	{0,0}
};


