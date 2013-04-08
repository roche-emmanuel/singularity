#include <plug_common.h>

#include <luna/wrappers/wrapper_btTypedConstraint.h>

class luna_wrapper_btTypedConstraint {
public:
	typedef Luna< btTypedConstraint > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btTypedObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66271199) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btTypedObject*)");
		}

		btTypedObject* rhs =(Luna< btTypedObject >::check(L,2));
		btTypedObject* self=(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btTypedConstraint* self= (btTypedConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTypedConstraint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66271199) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btTypedObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btTypedObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btTypedConstraint* ptr= dynamic_cast< btTypedConstraint* >(Luna< btTypedObject >::check(L,1));
		btTypedConstraint* ptr= luna_caster< btTypedObject, btTypedConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTypedConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOverrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOverrideNumSolverIterations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setupSolverConstraint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36629303) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalSetAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalGetAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBreakingImpulseThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBreakingImpulseThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_solveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyA_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyA_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyB_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyB_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserConstraintPtr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserConstraintPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setJointFeedback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18466422)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getJointFeedback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJointFeedback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needsFeedback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enableFeedback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAppliedImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConstraintType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDbgDrawSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDbgDrawSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFixedBody(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setupSolverConstraint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36629303) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_solveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTypedConstraint::btTypedConstraint(lua_Table * data, btTypedConstraintType type, btRigidBody & rbA)
	static btTypedConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint::btTypedConstraint(lua_Table * data, btTypedConstraintType type, btRigidBody & rbA) function, expected prototype:\nbtTypedConstraint::btTypedConstraint(lua_Table * data, btTypedConstraintType type, btRigidBody & rbA)\nClass arguments details:\narg 3 ID = 85758361\n");
		}

		btTypedConstraintType type=(btTypedConstraintType)lua_tointeger(L,2);
		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btTypedConstraint::btTypedConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;

		return new wrapper_btTypedConstraint(L,NULL, type, rbA);
	}

	// btTypedConstraint::btTypedConstraint(lua_Table * data, btTypedConstraintType type, btRigidBody & rbA, btRigidBody & rbB)
	static btTypedConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint::btTypedConstraint(lua_Table * data, btTypedConstraintType type, btRigidBody & rbA, btRigidBody & rbB) function, expected prototype:\nbtTypedConstraint::btTypedConstraint(lua_Table * data, btTypedConstraintType type, btRigidBody & rbA, btRigidBody & rbB)\nClass arguments details:\narg 3 ID = 85758361\narg 4 ID = 85758361\n");
		}

		btTypedConstraintType type=(btTypedConstraintType)lua_tointeger(L,2);
		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btTypedConstraint::btTypedConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,4));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btTypedConstraint::btTypedConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;

		return new wrapper_btTypedConstraint(L,NULL, type, rbA, rbB);
	}

	// Overload binder for btTypedConstraint::btTypedConstraint
	static btTypedConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btTypedConstraint, cannot match any of the overloads for function btTypedConstraint:\n  btTypedConstraint(lua_Table *, btTypedConstraintType, btRigidBody &)\n  btTypedConstraint(lua_Table *, btTypedConstraintType, btRigidBody &, btRigidBody &)\n");
		return NULL;
	}


	// Function binds:
	// int btTypedConstraint::getOverrideNumSolverIterations() const
	static int _bind_getOverrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_getOverrideNumSolverIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::getOverrideNumSolverIterations() const function, expected prototype:\nint btTypedConstraint::getOverrideNumSolverIterations() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::getOverrideNumSolverIterations() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getOverrideNumSolverIterations();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::setOverrideNumSolverIterations(int overideNumIterations)
	static int _bind_setOverrideNumSolverIterations(lua_State *L) {
		if (!_lg_typecheck_setOverrideNumSolverIterations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setOverrideNumSolverIterations(int overideNumIterations) function, expected prototype:\nvoid btTypedConstraint::setOverrideNumSolverIterations(int overideNumIterations)\nClass arguments details:\n");
		}

		int overideNumIterations=(int)lua_tointeger(L,2);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setOverrideNumSolverIterations(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setOverrideNumSolverIterations(overideNumIterations);

		return 0;
	}

	// void btTypedConstraint::buildJacobian()
	static int _bind_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::buildJacobian() function, expected prototype:\nvoid btTypedConstraint::buildJacobian()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->buildJacobian();

		return 0;
	}

	// void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btTypedConstraint::setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btTypedConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btTypedConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btTypedConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btTypedConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btTypedConstraint::internalSetAppliedImpulse(float appliedImpulse)
	static int _bind_internalSetAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_internalSetAppliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::internalSetAppliedImpulse(float appliedImpulse) function, expected prototype:\nvoid btTypedConstraint::internalSetAppliedImpulse(float appliedImpulse)\nClass arguments details:\n");
		}

		float appliedImpulse=(float)lua_tonumber(L,2);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::internalSetAppliedImpulse(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->internalSetAppliedImpulse(appliedImpulse);

		return 0;
	}

	// float btTypedConstraint::internalGetAppliedImpulse()
	static int _bind_internalGetAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_internalGetAppliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::internalGetAppliedImpulse() function, expected prototype:\nfloat btTypedConstraint::internalGetAppliedImpulse()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::internalGetAppliedImpulse(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->internalGetAppliedImpulse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTypedConstraint::getBreakingImpulseThreshold() const
	static int _bind_getBreakingImpulseThreshold(lua_State *L) {
		if (!_lg_typecheck_getBreakingImpulseThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::getBreakingImpulseThreshold() const function, expected prototype:\nfloat btTypedConstraint::getBreakingImpulseThreshold() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::getBreakingImpulseThreshold() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getBreakingImpulseThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::setBreakingImpulseThreshold(float threshold)
	static int _bind_setBreakingImpulseThreshold(lua_State *L) {
		if (!_lg_typecheck_setBreakingImpulseThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setBreakingImpulseThreshold(float threshold) function, expected prototype:\nvoid btTypedConstraint::setBreakingImpulseThreshold(float threshold)\nClass arguments details:\n");
		}

		float threshold=(float)lua_tonumber(L,2);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setBreakingImpulseThreshold(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setBreakingImpulseThreshold(threshold);

		return 0;
	}

	// bool btTypedConstraint::isEnabled() const
	static int _bind_isEnabled(lua_State *L) {
		if (!_lg_typecheck_isEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTypedConstraint::isEnabled() const function, expected prototype:\nbool btTypedConstraint::isEnabled() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTypedConstraint::isEnabled() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->isEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTypedConstraint::setEnabled(bool enabled)
	static int _bind_setEnabled(lua_State *L) {
		if (!_lg_typecheck_setEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setEnabled(bool enabled) function, expected prototype:\nvoid btTypedConstraint::setEnabled(bool enabled)\nClass arguments details:\n");
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setEnabled(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setEnabled(enabled);

		return 0;
	}

	// void btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btTypedConstraint::solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btTypedConstraint::solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// const btRigidBody & btTypedConstraint::getRigidBodyA() const
	static int _bind_getRigidBodyA_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btTypedConstraint::getRigidBodyA() const function, expected prototype:\nconst btRigidBody & btTypedConstraint::getRigidBodyA() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btTypedConstraint::getRigidBodyA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// btRigidBody & btTypedConstraint::getRigidBodyA()
	static int _bind_getRigidBodyA_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody & btTypedConstraint::getRigidBodyA() function, expected prototype:\nbtRigidBody & btTypedConstraint::getRigidBodyA()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBody & btTypedConstraint::getRigidBodyA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTypedConstraint::getRigidBodyA
	static int _bind_getRigidBodyA(lua_State *L) {
		if (_lg_typecheck_getRigidBodyA_overload_1(L)) return _bind_getRigidBodyA_overload_1(L);
		if (_lg_typecheck_getRigidBodyA_overload_2(L)) return _bind_getRigidBodyA_overload_2(L);

		luaL_error(L, "error in function getRigidBodyA, cannot match any of the overloads for function getRigidBodyA:\n  getRigidBodyA()\n  getRigidBodyA()\n");
		return 0;
	}

	// const btRigidBody & btTypedConstraint::getRigidBodyB() const
	static int _bind_getRigidBodyB_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyB_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btTypedConstraint::getRigidBodyB() const function, expected prototype:\nconst btRigidBody & btTypedConstraint::getRigidBodyB() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btTypedConstraint::getRigidBodyB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// btRigidBody & btTypedConstraint::getRigidBodyB()
	static int _bind_getRigidBodyB_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyB_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody & btTypedConstraint::getRigidBodyB() function, expected prototype:\nbtRigidBody & btTypedConstraint::getRigidBodyB()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBody & btTypedConstraint::getRigidBodyB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTypedConstraint::getRigidBodyB
	static int _bind_getRigidBodyB(lua_State *L) {
		if (_lg_typecheck_getRigidBodyB_overload_1(L)) return _bind_getRigidBodyB_overload_1(L);
		if (_lg_typecheck_getRigidBodyB_overload_2(L)) return _bind_getRigidBodyB_overload_2(L);

		luaL_error(L, "error in function getRigidBodyB, cannot match any of the overloads for function getRigidBodyB:\n  getRigidBodyB()\n  getRigidBodyB()\n");
		return 0;
	}

	// int btTypedConstraint::getUserConstraintType() const
	static int _bind_getUserConstraintType(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::getUserConstraintType() const function, expected prototype:\nint btTypedConstraint::getUserConstraintType() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::getUserConstraintType() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getUserConstraintType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::setUserConstraintType(int userConstraintType)
	static int _bind_setUserConstraintType(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setUserConstraintType(int userConstraintType) function, expected prototype:\nvoid btTypedConstraint::setUserConstraintType(int userConstraintType)\nClass arguments details:\n");
		}

		int userConstraintType=(int)lua_tointeger(L,2);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setUserConstraintType(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUserConstraintType(userConstraintType);

		return 0;
	}

	// void btTypedConstraint::setUserConstraintId(int uid)
	static int _bind_setUserConstraintId(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setUserConstraintId(int uid) function, expected prototype:\nvoid btTypedConstraint::setUserConstraintId(int uid)\nClass arguments details:\n");
		}

		int uid=(int)lua_tointeger(L,2);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setUserConstraintId(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUserConstraintId(uid);

		return 0;
	}

	// int btTypedConstraint::getUserConstraintId() const
	static int _bind_getUserConstraintId(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::getUserConstraintId() const function, expected prototype:\nint btTypedConstraint::getUserConstraintId() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::getUserConstraintId() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getUserConstraintId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::setUserConstraintPtr(void * ptr)
	static int _bind_setUserConstraintPtr(lua_State *L) {
		if (!_lg_typecheck_setUserConstraintPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setUserConstraintPtr(void * ptr) function, expected prototype:\nvoid btTypedConstraint::setUserConstraintPtr(void * ptr)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setUserConstraintPtr(void *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUserConstraintPtr(ptr);

		return 0;
	}

	// void * btTypedConstraint::getUserConstraintPtr()
	static int _bind_getUserConstraintPtr(lua_State *L) {
		if (!_lg_typecheck_getUserConstraintPtr(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btTypedConstraint::getUserConstraintPtr() function, expected prototype:\nvoid * btTypedConstraint::getUserConstraintPtr()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btTypedConstraint::getUserConstraintPtr(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		void * lret = self->getUserConstraintPtr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btTypedConstraint::setJointFeedback(btJointFeedback * jointFeedback)
	static int _bind_setJointFeedback(lua_State *L) {
		if (!_lg_typecheck_setJointFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setJointFeedback(btJointFeedback * jointFeedback) function, expected prototype:\nvoid btTypedConstraint::setJointFeedback(btJointFeedback * jointFeedback)\nClass arguments details:\narg 1 ID = 18466422\n");
		}

		btJointFeedback* jointFeedback=(Luna< btJointFeedback >::check(L,2));

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setJointFeedback(btJointFeedback *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setJointFeedback(jointFeedback);

		return 0;
	}

	// const btJointFeedback * btTypedConstraint::getJointFeedback() const
	static int _bind_getJointFeedback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getJointFeedback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btJointFeedback * btTypedConstraint::getJointFeedback() const function, expected prototype:\nconst btJointFeedback * btTypedConstraint::getJointFeedback() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btJointFeedback * btTypedConstraint::getJointFeedback() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btJointFeedback * lret = self->getJointFeedback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btJointFeedback >::push(L,lret,false);

		return 1;
	}

	// btJointFeedback * btTypedConstraint::getJointFeedback()
	static int _bind_getJointFeedback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getJointFeedback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btJointFeedback * btTypedConstraint::getJointFeedback() function, expected prototype:\nbtJointFeedback * btTypedConstraint::getJointFeedback()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btJointFeedback * btTypedConstraint::getJointFeedback(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btJointFeedback * lret = self->getJointFeedback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btJointFeedback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTypedConstraint::getJointFeedback
	static int _bind_getJointFeedback(lua_State *L) {
		if (_lg_typecheck_getJointFeedback_overload_1(L)) return _bind_getJointFeedback_overload_1(L);
		if (_lg_typecheck_getJointFeedback_overload_2(L)) return _bind_getJointFeedback_overload_2(L);

		luaL_error(L, "error in function getJointFeedback, cannot match any of the overloads for function getJointFeedback:\n  getJointFeedback()\n  getJointFeedback()\n");
		return 0;
	}

	// int btTypedConstraint::getUid() const
	static int _bind_getUid(lua_State *L) {
		if (!_lg_typecheck_getUid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::getUid() const function, expected prototype:\nint btTypedConstraint::getUid() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::getUid() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getUid();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btTypedConstraint::needsFeedback() const
	static int _bind_needsFeedback(lua_State *L) {
		if (!_lg_typecheck_needsFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTypedConstraint::needsFeedback() const function, expected prototype:\nbool btTypedConstraint::needsFeedback() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTypedConstraint::needsFeedback() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->needsFeedback();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTypedConstraint::enableFeedback(bool needsFeedback)
	static int _bind_enableFeedback(lua_State *L) {
		if (!_lg_typecheck_enableFeedback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::enableFeedback(bool needsFeedback) function, expected prototype:\nvoid btTypedConstraint::enableFeedback(bool needsFeedback)\nClass arguments details:\n");
		}

		bool needsFeedback=(bool)(lua_toboolean(L,2)==1);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::enableFeedback(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->enableFeedback(needsFeedback);

		return 0;
	}

	// float btTypedConstraint::getAppliedImpulse() const
	static int _bind_getAppliedImpulse(lua_State *L) {
		if (!_lg_typecheck_getAppliedImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::getAppliedImpulse() const function, expected prototype:\nfloat btTypedConstraint::getAppliedImpulse() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::getAppliedImpulse() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAppliedImpulse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTypedConstraintType btTypedConstraint::getConstraintType() const
	static int _bind_getConstraintType(lua_State *L) {
		if (!_lg_typecheck_getConstraintType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraintType btTypedConstraint::getConstraintType() const function, expected prototype:\nbtTypedConstraintType btTypedConstraint::getConstraintType() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraintType btTypedConstraint::getConstraintType() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btTypedConstraintType lret = self->getConstraintType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::setDbgDrawSize(float dbgDrawSize)
	static int _bind_setDbgDrawSize(lua_State *L) {
		if (!_lg_typecheck_setDbgDrawSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setDbgDrawSize(float dbgDrawSize) function, expected prototype:\nvoid btTypedConstraint::setDbgDrawSize(float dbgDrawSize)\nClass arguments details:\n");
		}

		float dbgDrawSize=(float)lua_tonumber(L,2);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setDbgDrawSize(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDbgDrawSize(dbgDrawSize);

		return 0;
	}

	// float btTypedConstraint::getDbgDrawSize()
	static int _bind_getDbgDrawSize(lua_State *L) {
		if (!_lg_typecheck_getDbgDrawSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::getDbgDrawSize() function, expected prototype:\nfloat btTypedConstraint::getDbgDrawSize()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::getDbgDrawSize(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getDbgDrawSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTypedConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btTypedConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// float btTypedConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btTypedConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTypedConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btTypedConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static btRigidBody & btTypedConstraint::getFixedBody()
	static int _bind_getFixedBody(lua_State *L) {
		if (!_lg_typecheck_getFixedBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static btRigidBody & btTypedConstraint::getFixedBody() function, expected prototype:\nstatic btRigidBody & btTypedConstraint::getFixedBody()\nClass arguments details:\n");
		}


		const btRigidBody* lret = &btTypedConstraint::getFixedBody();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// void btTypedConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::base_buildJacobian() function, expected prototype:\nvoid btTypedConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btTypedConstraint::buildJacobian();

		return 0;
	}

	// void btTypedConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btTypedConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btTypedConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btTypedConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btTypedConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTypedConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btTypedConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btTypedConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btTypedConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTypedConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btTypedConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// int btTypedConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTypedConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTypedConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTypedConstraint* self=Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTypedConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btTypedConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btTypedConstraint* LunaTraits< btTypedConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTypedConstraint::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btTypedConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	// void btTypedConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	// void btTypedConstraint::setParam(int num, float value, int axis = -1)
	// float btTypedConstraint::getParam(int num, int axis = -1) const
}

void LunaTraits< btTypedConstraint >::_bind_dtor(btTypedConstraint* obj) {
	delete obj;
}

const char LunaTraits< btTypedConstraint >::className[] = "btTypedConstraint";
const char LunaTraits< btTypedConstraint >::fullName[] = "btTypedConstraint";
const char LunaTraits< btTypedConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btTypedConstraint >::parents[] = {"bullet.btTypedObject", 0};
const int LunaTraits< btTypedConstraint >::hash = 56367106;
const int LunaTraits< btTypedConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btTypedConstraint >::methods[] = {
	{"getOverrideNumSolverIterations", &luna_wrapper_btTypedConstraint::_bind_getOverrideNumSolverIterations},
	{"setOverrideNumSolverIterations", &luna_wrapper_btTypedConstraint::_bind_setOverrideNumSolverIterations},
	{"buildJacobian", &luna_wrapper_btTypedConstraint::_bind_buildJacobian},
	{"setupSolverConstraint", &luna_wrapper_btTypedConstraint::_bind_setupSolverConstraint},
	{"getInfo1", &luna_wrapper_btTypedConstraint::_bind_getInfo1},
	{"getInfo2", &luna_wrapper_btTypedConstraint::_bind_getInfo2},
	{"internalSetAppliedImpulse", &luna_wrapper_btTypedConstraint::_bind_internalSetAppliedImpulse},
	{"internalGetAppliedImpulse", &luna_wrapper_btTypedConstraint::_bind_internalGetAppliedImpulse},
	{"getBreakingImpulseThreshold", &luna_wrapper_btTypedConstraint::_bind_getBreakingImpulseThreshold},
	{"setBreakingImpulseThreshold", &luna_wrapper_btTypedConstraint::_bind_setBreakingImpulseThreshold},
	{"isEnabled", &luna_wrapper_btTypedConstraint::_bind_isEnabled},
	{"setEnabled", &luna_wrapper_btTypedConstraint::_bind_setEnabled},
	{"solveConstraintObsolete", &luna_wrapper_btTypedConstraint::_bind_solveConstraintObsolete},
	{"getRigidBodyA", &luna_wrapper_btTypedConstraint::_bind_getRigidBodyA},
	{"getRigidBodyB", &luna_wrapper_btTypedConstraint::_bind_getRigidBodyB},
	{"getUserConstraintType", &luna_wrapper_btTypedConstraint::_bind_getUserConstraintType},
	{"setUserConstraintType", &luna_wrapper_btTypedConstraint::_bind_setUserConstraintType},
	{"setUserConstraintId", &luna_wrapper_btTypedConstraint::_bind_setUserConstraintId},
	{"getUserConstraintId", &luna_wrapper_btTypedConstraint::_bind_getUserConstraintId},
	{"setUserConstraintPtr", &luna_wrapper_btTypedConstraint::_bind_setUserConstraintPtr},
	{"getUserConstraintPtr", &luna_wrapper_btTypedConstraint::_bind_getUserConstraintPtr},
	{"setJointFeedback", &luna_wrapper_btTypedConstraint::_bind_setJointFeedback},
	{"getJointFeedback", &luna_wrapper_btTypedConstraint::_bind_getJointFeedback},
	{"getUid", &luna_wrapper_btTypedConstraint::_bind_getUid},
	{"needsFeedback", &luna_wrapper_btTypedConstraint::_bind_needsFeedback},
	{"enableFeedback", &luna_wrapper_btTypedConstraint::_bind_enableFeedback},
	{"getAppliedImpulse", &luna_wrapper_btTypedConstraint::_bind_getAppliedImpulse},
	{"getConstraintType", &luna_wrapper_btTypedConstraint::_bind_getConstraintType},
	{"setDbgDrawSize", &luna_wrapper_btTypedConstraint::_bind_setDbgDrawSize},
	{"getDbgDrawSize", &luna_wrapper_btTypedConstraint::_bind_getDbgDrawSize},
	{"setParam", &luna_wrapper_btTypedConstraint::_bind_setParam},
	{"getParam", &luna_wrapper_btTypedConstraint::_bind_getParam},
	{"calculateSerializeBufferSize", &luna_wrapper_btTypedConstraint::_bind_calculateSerializeBufferSize},
	{"getFixedBody", &luna_wrapper_btTypedConstraint::_bind_getFixedBody},
	{"base_buildJacobian", &luna_wrapper_btTypedConstraint::_bind_base_buildJacobian},
	{"base_setupSolverConstraint", &luna_wrapper_btTypedConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btTypedConstraint::_bind_base_solveConstraintObsolete},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTypedConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btTypedConstraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btTypedConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTypedConstraint::_bind_asVoid},
	{"getTable", &luna_wrapper_btTypedConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTypedConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btTypedConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btTypedConstraint >::enumValues[] = {
	{0,0}
};


