#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ProgramCostEstimator.h>

class luna_wrapper_osg_ProgramCostEstimator {
public:
	typedef Luna< osg::ProgramCostEstimator > luna_t;

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
		osg::ProgramCostEstimator* ptr= dynamic_cast< osg::ProgramCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ProgramCostEstimator >::push(L,ptr,false);
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ProgramCostEstimator::ProgramCostEstimator()
	static osg::ProgramCostEstimator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ProgramCostEstimator::ProgramCostEstimator() function, expected prototype:\nosg::ProgramCostEstimator::ProgramCostEstimator()\nClass arguments details:\n");
		}


		return new osg::ProgramCostEstimator();
	}

	// osg::ProgramCostEstimator::ProgramCostEstimator(lua_Table * data)
	static osg::ProgramCostEstimator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ProgramCostEstimator::ProgramCostEstimator(lua_Table * data) function, expected prototype:\nosg::ProgramCostEstimator::ProgramCostEstimator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ProgramCostEstimator(L,NULL);
	}

	// Overload binder for osg::ProgramCostEstimator::ProgramCostEstimator
	static osg::ProgramCostEstimator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProgramCostEstimator, cannot match any of the overloads for function ProgramCostEstimator:\n  ProgramCostEstimator()\n  ProgramCostEstimator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ProgramCostEstimator::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProgramCostEstimator::setDefaults() function, expected prototype:\nvoid osg::ProgramCostEstimator::setDefaults()\nClass arguments details:\n");
		}


		osg::ProgramCostEstimator* self=dynamic_cast< osg::ProgramCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProgramCostEstimator::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osg::ProgramCostEstimator::calibrate(osg::RenderInfo & renderInfo)
	static int _bind_calibrate(lua_State *L) {
		if (!_lg_typecheck_calibrate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProgramCostEstimator::calibrate(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::ProgramCostEstimator::calibrate(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::ProgramCostEstimator::calibrate function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::ProgramCostEstimator* self=dynamic_cast< osg::ProgramCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProgramCostEstimator::calibrate(osg::RenderInfo &)");
		}
		self->calibrate(renderInfo);

		return 0;
	}

	// osg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program * program) const
	static int _bind_estimateCompileCost(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program * program) const function, expected prototype:\nosg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program * program) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Program* program=dynamic_cast< osg::Program* >(Luna< osg::Referenced >::check(L,2));

		osg::ProgramCostEstimator* self=dynamic_cast< osg::ProgramCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program *) const");
		}
		osg::CostPair stack_lret = self->estimateCompileCost(program);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program * program) const
	static int _bind_estimateDrawCost(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program * program) const function, expected prototype:\nosg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program * program) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Program* program=dynamic_cast< osg::Program* >(Luna< osg::Referenced >::check(L,2));

		osg::ProgramCostEstimator* self=dynamic_cast< osg::ProgramCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program *) const");
		}
		osg::CostPair stack_lret = self->estimateDrawCost(program);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::ProgramCostEstimator* LunaTraits< osg::ProgramCostEstimator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ProgramCostEstimator::_bind_ctor(L);
}

void LunaTraits< osg::ProgramCostEstimator >::_bind_dtor(osg::ProgramCostEstimator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ProgramCostEstimator >::className[] = "ProgramCostEstimator";
const char LunaTraits< osg::ProgramCostEstimator >::fullName[] = "osg::ProgramCostEstimator";
const char LunaTraits< osg::ProgramCostEstimator >::moduleName[] = "osg";
const char* LunaTraits< osg::ProgramCostEstimator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ProgramCostEstimator >::hash = 38869562;
const int LunaTraits< osg::ProgramCostEstimator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ProgramCostEstimator >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_ProgramCostEstimator::_bind_setDefaults},
	{"calibrate", &luna_wrapper_osg_ProgramCostEstimator::_bind_calibrate},
	{"estimateCompileCost", &luna_wrapper_osg_ProgramCostEstimator::_bind_estimateCompileCost},
	{"estimateDrawCost", &luna_wrapper_osg_ProgramCostEstimator::_bind_estimateDrawCost},
	{"__eq", &luna_wrapper_osg_ProgramCostEstimator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ProgramCostEstimator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ProgramCostEstimator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ProgramCostEstimator >::enumValues[] = {
	{0,0}
};


