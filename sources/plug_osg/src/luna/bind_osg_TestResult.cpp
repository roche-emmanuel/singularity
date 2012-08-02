#include <plug_common.h>

class luna_wrapper_osg_TestResult {
public:
	typedef Luna< osg::TestResult > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::TestResult* ptr= dynamic_cast< osg::TestResult* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TestResult >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TestResult::TestResult()
	static osg::TestResult* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TestResult::TestResult() function, expected prototype:\nosg::TestResult::TestResult()\nClass arguments details:\n");
		}


		return new osg::TestResult();
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
	{0,0}
};

luna_ConverterType LunaTraits< osg::TestResult >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TestResult::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TestResult >::enumValues[] = {
	{0,0}
};


