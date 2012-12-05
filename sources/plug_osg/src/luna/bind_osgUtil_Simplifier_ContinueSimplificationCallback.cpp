#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Simplifier_ContinueSimplificationCallback.h>

class luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback {
public:
	typedef Luna< osgUtil::Simplifier::ContinueSimplificationCallback > luna_t;

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
		osgUtil::Simplifier::ContinueSimplificationCallback* ptr= dynamic_cast< osgUtil::Simplifier::ContinueSimplificationCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,ptr,false);
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

osgUtil::Simplifier::ContinueSimplificationCallback* LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::_bind_dtor(osgUtil::Simplifier::ContinueSimplificationCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::className[] = "ContinueSimplificationCallback";
const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::fullName[] = "osgUtil::Simplifier::ContinueSimplificationCallback";
const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::hash = 84446537;
const int LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::methods[] = {
	{"__eq", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::enumValues[] = {
	{0,0}
};


