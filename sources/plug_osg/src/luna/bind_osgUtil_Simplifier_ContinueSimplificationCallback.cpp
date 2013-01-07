#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Simplifier_ContinueSimplificationCallback.h>

class luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback {
public:
	typedef Luna< osgUtil::Simplifier::ContinueSimplificationCallback > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osgUtil::Simplifier::ContinueSimplificationCallback* ptr= dynamic_cast< osgUtil::Simplifier::ContinueSimplificationCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::Simplifier::ContinueSimplificationCallback* ptr= luna_caster< osg::Referenced, osgUtil::Simplifier::ContinueSimplificationCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_continueSimplification(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_continueSimplification(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback()
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback() function, expected prototype:\nosgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback()\nClass arguments details:\n");
		}


		return new osgUtil::Simplifier::ContinueSimplificationCallback();
	}

	// osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback(lua_Table * data)
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback(lua_Table * data) function, expected prototype:\nosgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_Simplifier_ContinueSimplificationCallback(L,NULL);
	}

	// Overload binder for osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ContinueSimplificationCallback, cannot match any of the overloads for function ContinueSimplificationCallback:\n  ContinueSimplificationCallback()\n  ContinueSimplificationCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_continueSimplification(lua_State *L) {
		if (!_lg_typecheck_continueSimplification(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::Simplifier* simplifier_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,2));
		if( !simplifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplifier in osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification function");
		}
		const osgUtil::Simplifier & simplifier=*simplifier_ptr;
		float nextError=(float)lua_tonumber(L,3);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,4);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,5);

		osgUtil::Simplifier::ContinueSimplificationCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier &, float, unsigned int, unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->continueSimplification(simplifier, nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier::ContinueSimplificationCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ContinueSimplificationCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// bool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_base_continueSimplification(lua_State *L) {
		if (!_lg_typecheck_base_continueSimplification(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::Simplifier* simplifier_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,2));
		if( !simplifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplifier in osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification function");
		}
		const osgUtil::Simplifier & simplifier=*simplifier_ptr;
		float nextError=(float)lua_tonumber(L,3);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,4);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,5);

		osgUtil::Simplifier::ContinueSimplificationCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier &, float, unsigned int, unsigned int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->ContinueSimplificationCallback::continueSimplification(simplifier, nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::Simplifier::ContinueSimplificationCallback* LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::_bind_dtor(osgUtil::Simplifier::ContinueSimplificationCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::className[] = "Simplifier_ContinueSimplificationCallback";
const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::fullName[] = "osgUtil::Simplifier::ContinueSimplificationCallback";
const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::hash = 84446537;
const int LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::methods[] = {
	{"continueSimplification", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_continueSimplification},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_base_setThreadSafeRefUnref},
	{"base_continueSimplification", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_base_continueSimplification},
	{"__eq", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::enumValues[] = {
	{0,0}
};


