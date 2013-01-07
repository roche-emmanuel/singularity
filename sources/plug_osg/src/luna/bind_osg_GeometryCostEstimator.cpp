#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GeometryCostEstimator.h>

class luna_wrapper_osg_GeometryCostEstimator {
public:
	typedef Luna< osg::GeometryCostEstimator > luna_t;

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
		//osg::GeometryCostEstimator* ptr= dynamic_cast< osg::GeometryCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		osg::GeometryCostEstimator* ptr= luna_caster< osg::Referenced, osg::GeometryCostEstimator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GeometryCostEstimator >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calibrate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateCompileCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GeometryCostEstimator::GeometryCostEstimator()
	static osg::GeometryCostEstimator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GeometryCostEstimator::GeometryCostEstimator() function, expected prototype:\nosg::GeometryCostEstimator::GeometryCostEstimator()\nClass arguments details:\n");
		}


		return new osg::GeometryCostEstimator();
	}

	// osg::GeometryCostEstimator::GeometryCostEstimator(lua_Table * data)
	static osg::GeometryCostEstimator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GeometryCostEstimator::GeometryCostEstimator(lua_Table * data) function, expected prototype:\nosg::GeometryCostEstimator::GeometryCostEstimator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_GeometryCostEstimator(L,NULL);
	}

	// Overload binder for osg::GeometryCostEstimator::GeometryCostEstimator
	static osg::GeometryCostEstimator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GeometryCostEstimator, cannot match any of the overloads for function GeometryCostEstimator:\n  GeometryCostEstimator()\n  GeometryCostEstimator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::GeometryCostEstimator::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GeometryCostEstimator::setDefaults() function, expected prototype:\nvoid osg::GeometryCostEstimator::setDefaults()\nClass arguments details:\n");
		}


		osg::GeometryCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GeometryCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GeometryCostEstimator::setDefaults(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDefaults();

		return 0;
	}

	// void osg::GeometryCostEstimator::calibrate(osg::RenderInfo & renderInfo)
	static int _bind_calibrate(lua_State *L) {
		if (!_lg_typecheck_calibrate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GeometryCostEstimator::calibrate(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::GeometryCostEstimator::calibrate(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::GeometryCostEstimator::calibrate function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::GeometryCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GeometryCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GeometryCostEstimator::calibrate(osg::RenderInfo &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->calibrate(renderInfo);

		return 0;
	}

	// osg::CostPair osg::GeometryCostEstimator::estimateCompileCost(const osg::Geometry * geometry) const
	static int _bind_estimateCompileCost(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GeometryCostEstimator::estimateCompileCost(const osg::Geometry * geometry) const function, expected prototype:\nosg::CostPair osg::GeometryCostEstimator::estimateCompileCost(const osg::Geometry * geometry) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Geometry* geometry=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osg::GeometryCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GeometryCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GeometryCostEstimator::estimateCompileCost(const osg::Geometry *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::CostPair stack_lret = self->estimateCompileCost(geometry);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GeometryCostEstimator::estimateDrawCost(const osg::Geometry * geometry) const
	static int _bind_estimateDrawCost(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GeometryCostEstimator::estimateDrawCost(const osg::Geometry * geometry) const function, expected prototype:\nosg::CostPair osg::GeometryCostEstimator::estimateDrawCost(const osg::Geometry * geometry) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Geometry* geometry=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osg::GeometryCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GeometryCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GeometryCostEstimator::estimateDrawCost(const osg::Geometry *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::CostPair stack_lret = self->estimateDrawCost(geometry);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// void osg::GeometryCostEstimator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GeometryCostEstimator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GeometryCostEstimator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GeometryCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GeometryCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GeometryCostEstimator::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GeometryCostEstimator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::GeometryCostEstimator* LunaTraits< osg::GeometryCostEstimator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GeometryCostEstimator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::GeometryCostEstimator >::_bind_dtor(osg::GeometryCostEstimator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GeometryCostEstimator >::className[] = "GeometryCostEstimator";
const char LunaTraits< osg::GeometryCostEstimator >::fullName[] = "osg::GeometryCostEstimator";
const char LunaTraits< osg::GeometryCostEstimator >::moduleName[] = "osg";
const char* LunaTraits< osg::GeometryCostEstimator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GeometryCostEstimator >::hash = 69361633;
const int LunaTraits< osg::GeometryCostEstimator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GeometryCostEstimator >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_GeometryCostEstimator::_bind_setDefaults},
	{"calibrate", &luna_wrapper_osg_GeometryCostEstimator::_bind_calibrate},
	{"estimateCompileCost", &luna_wrapper_osg_GeometryCostEstimator::_bind_estimateCompileCost},
	{"estimateDrawCost", &luna_wrapper_osg_GeometryCostEstimator::_bind_estimateDrawCost},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GeometryCostEstimator::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osg_GeometryCostEstimator::_bind___eq},
	{"getTable", &luna_wrapper_osg_GeometryCostEstimator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GeometryCostEstimator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GeometryCostEstimator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GeometryCostEstimator >::enumValues[] = {
	{0,0}
};


