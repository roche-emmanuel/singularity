#include <plug_common.h>

#include <luna/wrappers/wrapper_btConeTwistConstraint.h>

class luna_wrapper_btConeTwistConstraint {
public:
	typedef Luna< btConeTwistConstraint > luna_t;

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
		
		return self==rhs;
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

		btConeTwistConstraint* self= (btConeTwistConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConeTwistConstraint >::push(L,self,false);
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
		//btConeTwistConstraint* ptr= dynamic_cast< btConeTwistConstraint* >(Luna< btTypedObject >::check(L,1));
		btConeTwistConstraint* ptr= luna_caster< btTypedObject, btConeTwistConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConeTwistConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo1NonVirtual(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2NonVirtual(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_solveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateRHS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRigidBodyB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAngularOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLimit_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLimit_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveTwistLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveSwingLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTwistLimitSign(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calcAngleInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calcAngleInfo2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,30394543) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,30394543) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSwingSpan1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwingSpan2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTwistSpan(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTwistAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPastSwingLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDamping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorImpulse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxMotorImpulseNormalized(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFixThresh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFixThresh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorTargetInConstraintSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPointForAngle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_setFrames(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_setupSolverConstraint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36629303) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_buildJacobian(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getInfo1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243935)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getInfo2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_solveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65712094) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65712094) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setFrames(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConeTwistConstraint::btConeTwistConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame)
	static btConeTwistConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConeTwistConstraint::btConeTwistConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame) function, expected prototype:\nbtConeTwistConstraint::btConeTwistConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 13247377\narg 4 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btConeTwistConstraint::btConeTwistConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btConeTwistConstraint::btConeTwistConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,3));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btConeTwistConstraint::btConeTwistConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;
		const btTransform* rbBFrame_ptr=(Luna< btTransform >::check(L,4));
		if( !rbBFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbBFrame in btConeTwistConstraint::btConeTwistConstraint function");
		}
		const btTransform & rbBFrame=*rbBFrame_ptr;

		return new btConeTwistConstraint(rbA, rbB, rbAFrame, rbBFrame);
	}

	// btConeTwistConstraint::btConeTwistConstraint(btRigidBody & rbA, const btTransform & rbAFrame)
	static btConeTwistConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConeTwistConstraint::btConeTwistConstraint(btRigidBody & rbA, const btTransform & rbAFrame) function, expected prototype:\nbtConeTwistConstraint::btConeTwistConstraint(btRigidBody & rbA, const btTransform & rbAFrame)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btConeTwistConstraint::btConeTwistConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,2));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btConeTwistConstraint::btConeTwistConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;

		return new btConeTwistConstraint(rbA, rbAFrame);
	}

	// btConeTwistConstraint::btConeTwistConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame)
	static btConeTwistConstraint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConeTwistConstraint::btConeTwistConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame) function, expected prototype:\nbtConeTwistConstraint::btConeTwistConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 13247377\narg 5 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btConeTwistConstraint::btConeTwistConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btConeTwistConstraint::btConeTwistConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,4));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btConeTwistConstraint::btConeTwistConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;
		const btTransform* rbBFrame_ptr=(Luna< btTransform >::check(L,5));
		if( !rbBFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbBFrame in btConeTwistConstraint::btConeTwistConstraint function");
		}
		const btTransform & rbBFrame=*rbBFrame_ptr;

		return new wrapper_btConeTwistConstraint(L,NULL, rbA, rbB, rbAFrame, rbBFrame);
	}

	// btConeTwistConstraint::btConeTwistConstraint(lua_Table * data, btRigidBody & rbA, const btTransform & rbAFrame)
	static btConeTwistConstraint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConeTwistConstraint::btConeTwistConstraint(lua_Table * data, btRigidBody & rbA, const btTransform & rbAFrame) function, expected prototype:\nbtConeTwistConstraint::btConeTwistConstraint(lua_Table * data, btRigidBody & rbA, const btTransform & rbAFrame)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btConeTwistConstraint::btConeTwistConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,3));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btConeTwistConstraint::btConeTwistConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;

		return new wrapper_btConeTwistConstraint(L,NULL, rbA, rbAFrame);
	}

	// Overload binder for btConeTwistConstraint::btConeTwistConstraint
	static btConeTwistConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btConeTwistConstraint, cannot match any of the overloads for function btConeTwistConstraint:\n  btConeTwistConstraint(btRigidBody &, btRigidBody &, const btTransform &, const btTransform &)\n  btConeTwistConstraint(btRigidBody &, const btTransform &)\n  btConeTwistConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btTransform &, const btTransform &)\n  btConeTwistConstraint(lua_Table *, btRigidBody &, const btTransform &)\n");
		return NULL;
	}


	// Function binds:
	// void btConeTwistConstraint::buildJacobian()
	static int _bind_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::buildJacobian() function, expected prototype:\nvoid btConeTwistConstraint::buildJacobian()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->buildJacobian();

		return 0;
	}

	// void btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btConeTwistConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo1NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btConeTwistConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1NonVirtual(info);

		return 0;
	}

	// void btConeTwistConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btConeTwistConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btConeTwistConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btMatrix3x3 & invInertiaWorldA, const btMatrix3x3 & invInertiaWorldB)
	static int _bind_getInfo2NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo2NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btMatrix3x3 & invInertiaWorldA, const btMatrix3x3 & invInertiaWorldB) function, expected prototype:\nvoid btConeTwistConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btMatrix3x3 & invInertiaWorldA, const btMatrix3x3 & invInertiaWorldB)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 30394543\narg 5 ID = 30394543\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btConeTwistConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btConeTwistConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transB=*transB_ptr;
		const btMatrix3x3* invInertiaWorldA_ptr=(Luna< btMatrix3x3 >::check(L,5));
		if( !invInertiaWorldA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaWorldA in btConeTwistConstraint::getInfo2NonVirtual function");
		}
		const btMatrix3x3 & invInertiaWorldA=*invInertiaWorldA_ptr;
		const btMatrix3x3* invInertiaWorldB_ptr=(Luna< btMatrix3x3 >::check(L,6));
		if( !invInertiaWorldB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaWorldB in btConeTwistConstraint::getInfo2NonVirtual function");
		}
		const btMatrix3x3 & invInertiaWorldB=*invInertiaWorldB_ptr;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &, const btMatrix3x3 &, const btMatrix3x3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2NonVirtual(info, transA, transB, invInertiaWorldA, invInertiaWorldB);

		return 0;
	}

	// void btConeTwistConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btConeTwistConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btConeTwistConstraint::solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btConeTwistConstraint::solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btConeTwistConstraint::updateRHS(float timeStep)
	static int _bind_updateRHS(lua_State *L) {
		if (!_lg_typecheck_updateRHS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::updateRHS(float timeStep) function, expected prototype:\nvoid btConeTwistConstraint::updateRHS(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::updateRHS(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->updateRHS(timeStep);

		return 0;
	}

	// const btRigidBody & btConeTwistConstraint::getRigidBodyA() const
	static int _bind_getRigidBodyA(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btConeTwistConstraint::getRigidBodyA() const function, expected prototype:\nconst btRigidBody & btConeTwistConstraint::getRigidBodyA() const\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btConeTwistConstraint::getRigidBodyA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// const btRigidBody & btConeTwistConstraint::getRigidBodyB() const
	static int _bind_getRigidBodyB(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btConeTwistConstraint::getRigidBodyB() const function, expected prototype:\nconst btRigidBody & btConeTwistConstraint::getRigidBodyB() const\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btConeTwistConstraint::getRigidBodyB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// void btConeTwistConstraint::setAngularOnly(bool angularOnly)
	static int _bind_setAngularOnly(lua_State *L) {
		if (!_lg_typecheck_setAngularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setAngularOnly(bool angularOnly) function, expected prototype:\nvoid btConeTwistConstraint::setAngularOnly(bool angularOnly)\nClass arguments details:\n");
		}

		bool angularOnly=(bool)(lua_toboolean(L,2)==1);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setAngularOnly(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAngularOnly(angularOnly);

		return 0;
	}

	// void btConeTwistConstraint::setLimit(int limitIndex, float limitValue)
	static int _bind_setLimit_overload_1(lua_State *L) {
		if (!_lg_typecheck_setLimit_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setLimit(int limitIndex, float limitValue) function, expected prototype:\nvoid btConeTwistConstraint::setLimit(int limitIndex, float limitValue)\nClass arguments details:\n");
		}

		int limitIndex=(int)lua_tointeger(L,2);
		float limitValue=(float)lua_tonumber(L,3);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setLimit(int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLimit(limitIndex, limitValue);

		return 0;
	}

	// void btConeTwistConstraint::setLimit(float _swingSpan1, float _swingSpan2, float _twistSpan, float _softness = 1.f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)
	static int _bind_setLimit_overload_2(lua_State *L) {
		if (!_lg_typecheck_setLimit_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setLimit(float _swingSpan1, float _swingSpan2, float _twistSpan, float _softness = 1.f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f) function, expected prototype:\nvoid btConeTwistConstraint::setLimit(float _swingSpan1, float _swingSpan2, float _twistSpan, float _softness = 1.f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float _swingSpan1=(float)lua_tonumber(L,2);
		float _swingSpan2=(float)lua_tonumber(L,3);
		float _twistSpan=(float)lua_tonumber(L,4);
		float _softness=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.f;
		float _biasFactor=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.3f;
		float _relaxationFactor=luatop>6 ? (float)lua_tonumber(L,7) : (float)1.0f;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setLimit(float, float, float, float, float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLimit(_swingSpan1, _swingSpan2, _twistSpan, _softness, _biasFactor, _relaxationFactor);

		return 0;
	}

	// Overload binder for btConeTwistConstraint::setLimit
	static int _bind_setLimit(lua_State *L) {
		if (_lg_typecheck_setLimit_overload_1(L)) return _bind_setLimit_overload_1(L);
		if (_lg_typecheck_setLimit_overload_2(L)) return _bind_setLimit_overload_2(L);

		luaL_error(L, "error in function setLimit, cannot match any of the overloads for function setLimit:\n  setLimit(int, float)\n  setLimit(float, float, float, float, float, float)\n");
		return 0;
	}

	// const btTransform & btConeTwistConstraint::getAFrame()
	static int _bind_getAFrame(lua_State *L) {
		if (!_lg_typecheck_getAFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btConeTwistConstraint::getAFrame() function, expected prototype:\nconst btTransform & btConeTwistConstraint::getAFrame()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btConeTwistConstraint::getAFrame(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getAFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btConeTwistConstraint::getBFrame()
	static int _bind_getBFrame(lua_State *L) {
		if (!_lg_typecheck_getBFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btConeTwistConstraint::getBFrame() function, expected prototype:\nconst btTransform & btConeTwistConstraint::getBFrame()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btConeTwistConstraint::getBFrame(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getBFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// int btConeTwistConstraint::getSolveTwistLimit()
	static int _bind_getSolveTwistLimit(lua_State *L) {
		if (!_lg_typecheck_getSolveTwistLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConeTwistConstraint::getSolveTwistLimit() function, expected prototype:\nint btConeTwistConstraint::getSolveTwistLimit()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConeTwistConstraint::getSolveTwistLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getSolveTwistLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConeTwistConstraint::getSolveSwingLimit()
	static int _bind_getSolveSwingLimit(lua_State *L) {
		if (!_lg_typecheck_getSolveSwingLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConeTwistConstraint::getSolveSwingLimit() function, expected prototype:\nint btConeTwistConstraint::getSolveSwingLimit()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConeTwistConstraint::getSolveSwingLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getSolveSwingLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraint::getTwistLimitSign()
	static int _bind_getTwistLimitSign(lua_State *L) {
		if (!_lg_typecheck_getTwistLimitSign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getTwistLimitSign() function, expected prototype:\nfloat btConeTwistConstraint::getTwistLimitSign()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getTwistLimitSign(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getTwistLimitSign();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConeTwistConstraint::calcAngleInfo()
	static int _bind_calcAngleInfo(lua_State *L) {
		if (!_lg_typecheck_calcAngleInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::calcAngleInfo() function, expected prototype:\nvoid btConeTwistConstraint::calcAngleInfo()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::calcAngleInfo(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->calcAngleInfo();

		return 0;
	}

	// void btConeTwistConstraint::calcAngleInfo2(const btTransform & transA, const btTransform & transB, const btMatrix3x3 & invInertiaWorldA, const btMatrix3x3 & invInertiaWorldB)
	static int _bind_calcAngleInfo2(lua_State *L) {
		if (!_lg_typecheck_calcAngleInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::calcAngleInfo2(const btTransform & transA, const btTransform & transB, const btMatrix3x3 & invInertiaWorldA, const btMatrix3x3 & invInertiaWorldB) function, expected prototype:\nvoid btConeTwistConstraint::calcAngleInfo2(const btTransform & transA, const btTransform & transB, const btMatrix3x3 & invInertiaWorldA, const btMatrix3x3 & invInertiaWorldB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\narg 3 ID = 30394543\narg 4 ID = 30394543\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btConeTwistConstraint::calcAngleInfo2 function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,3));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btConeTwistConstraint::calcAngleInfo2 function");
		}
		const btTransform & transB=*transB_ptr;
		const btMatrix3x3* invInertiaWorldA_ptr=(Luna< btMatrix3x3 >::check(L,4));
		if( !invInertiaWorldA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaWorldA in btConeTwistConstraint::calcAngleInfo2 function");
		}
		const btMatrix3x3 & invInertiaWorldA=*invInertiaWorldA_ptr;
		const btMatrix3x3* invInertiaWorldB_ptr=(Luna< btMatrix3x3 >::check(L,5));
		if( !invInertiaWorldB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg invInertiaWorldB in btConeTwistConstraint::calcAngleInfo2 function");
		}
		const btMatrix3x3 & invInertiaWorldB=*invInertiaWorldB_ptr;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::calcAngleInfo2(const btTransform &, const btTransform &, const btMatrix3x3 &, const btMatrix3x3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->calcAngleInfo2(transA, transB, invInertiaWorldA, invInertiaWorldB);

		return 0;
	}

	// float btConeTwistConstraint::getSwingSpan1()
	static int _bind_getSwingSpan1(lua_State *L) {
		if (!_lg_typecheck_getSwingSpan1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getSwingSpan1() function, expected prototype:\nfloat btConeTwistConstraint::getSwingSpan1()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getSwingSpan1(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSwingSpan1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraint::getSwingSpan2()
	static int _bind_getSwingSpan2(lua_State *L) {
		if (!_lg_typecheck_getSwingSpan2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getSwingSpan2() function, expected prototype:\nfloat btConeTwistConstraint::getSwingSpan2()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getSwingSpan2(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getSwingSpan2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraint::getTwistSpan()
	static int _bind_getTwistSpan(lua_State *L) {
		if (!_lg_typecheck_getTwistSpan(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getTwistSpan() function, expected prototype:\nfloat btConeTwistConstraint::getTwistSpan()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getTwistSpan(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getTwistSpan();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConeTwistConstraint::getTwistAngle()
	static int _bind_getTwistAngle(lua_State *L) {
		if (!_lg_typecheck_getTwistAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getTwistAngle() function, expected prototype:\nfloat btConeTwistConstraint::getTwistAngle()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getTwistAngle(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getTwistAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btConeTwistConstraint::isPastSwingLimit()
	static int _bind_isPastSwingLimit(lua_State *L) {
		if (!_lg_typecheck_isPastSwingLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConeTwistConstraint::isPastSwingLimit() function, expected prototype:\nbool btConeTwistConstraint::isPastSwingLimit()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConeTwistConstraint::isPastSwingLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->isPastSwingLimit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConeTwistConstraint::setDamping(float damping)
	static int _bind_setDamping(lua_State *L) {
		if (!_lg_typecheck_setDamping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setDamping(float damping) function, expected prototype:\nvoid btConeTwistConstraint::setDamping(float damping)\nClass arguments details:\n");
		}

		float damping=(float)lua_tonumber(L,2);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setDamping(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setDamping(damping);

		return 0;
	}

	// void btConeTwistConstraint::enableMotor(bool b)
	static int _bind_enableMotor(lua_State *L) {
		if (!_lg_typecheck_enableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::enableMotor(bool b) function, expected prototype:\nvoid btConeTwistConstraint::enableMotor(bool b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::enableMotor(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->enableMotor(b);

		return 0;
	}

	// void btConeTwistConstraint::setMaxMotorImpulse(float maxMotorImpulse)
	static int _bind_setMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setMaxMotorImpulse(float maxMotorImpulse) function, expected prototype:\nvoid btConeTwistConstraint::setMaxMotorImpulse(float maxMotorImpulse)\nClass arguments details:\n");
		}

		float maxMotorImpulse=(float)lua_tonumber(L,2);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setMaxMotorImpulse(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMaxMotorImpulse(maxMotorImpulse);

		return 0;
	}

	// void btConeTwistConstraint::setMaxMotorImpulseNormalized(float maxMotorImpulse)
	static int _bind_setMaxMotorImpulseNormalized(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorImpulseNormalized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setMaxMotorImpulseNormalized(float maxMotorImpulse) function, expected prototype:\nvoid btConeTwistConstraint::setMaxMotorImpulseNormalized(float maxMotorImpulse)\nClass arguments details:\n");
		}

		float maxMotorImpulse=(float)lua_tonumber(L,2);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setMaxMotorImpulseNormalized(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMaxMotorImpulseNormalized(maxMotorImpulse);

		return 0;
	}

	// float btConeTwistConstraint::getFixThresh()
	static int _bind_getFixThresh(lua_State *L) {
		if (!_lg_typecheck_getFixThresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getFixThresh() function, expected prototype:\nfloat btConeTwistConstraint::getFixThresh()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getFixThresh(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getFixThresh();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConeTwistConstraint::setFixThresh(float fixThresh)
	static int _bind_setFixThresh(lua_State *L) {
		if (!_lg_typecheck_setFixThresh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setFixThresh(float fixThresh) function, expected prototype:\nvoid btConeTwistConstraint::setFixThresh(float fixThresh)\nClass arguments details:\n");
		}

		float fixThresh=(float)lua_tonumber(L,2);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setFixThresh(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setFixThresh(fixThresh);

		return 0;
	}

	// void btConeTwistConstraint::setMotorTarget(const btQuaternion & q)
	static int _bind_setMotorTarget(lua_State *L) {
		if (!_lg_typecheck_setMotorTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setMotorTarget(const btQuaternion & q) function, expected prototype:\nvoid btConeTwistConstraint::setMotorTarget(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btConeTwistConstraint::setMotorTarget function");
		}
		const btQuaternion & q=*q_ptr;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setMotorTarget(const btQuaternion &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMotorTarget(q);

		return 0;
	}

	// void btConeTwistConstraint::setMotorTargetInConstraintSpace(const btQuaternion & q)
	static int _bind_setMotorTargetInConstraintSpace(lua_State *L) {
		if (!_lg_typecheck_setMotorTargetInConstraintSpace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setMotorTargetInConstraintSpace(const btQuaternion & q) function, expected prototype:\nvoid btConeTwistConstraint::setMotorTargetInConstraintSpace(const btQuaternion & q)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* q_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in btConeTwistConstraint::setMotorTargetInConstraintSpace function");
		}
		const btQuaternion & q=*q_ptr;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setMotorTargetInConstraintSpace(const btQuaternion &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMotorTargetInConstraintSpace(q);

		return 0;
	}

	// btVector3 btConeTwistConstraint::GetPointForAngle(float fAngleInRadians, float fLength) const
	static int _bind_GetPointForAngle(lua_State *L) {
		if (!_lg_typecheck_GetPointForAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConeTwistConstraint::GetPointForAngle(float fAngleInRadians, float fLength) const function, expected prototype:\nbtVector3 btConeTwistConstraint::GetPointForAngle(float fAngleInRadians, float fLength) const\nClass arguments details:\n");
		}

		float fAngleInRadians=(float)lua_tonumber(L,2);
		float fLength=(float)lua_tonumber(L,3);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConeTwistConstraint::GetPointForAngle(float, float) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btVector3 stack_lret = self->GetPointForAngle(fAngleInRadians, fLength);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConeTwistConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btConeTwistConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// void btConeTwistConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)
	static int _bind_setFrames(lua_State *L) {
		if (!_lg_typecheck_setFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::setFrames(const btTransform & frameA, const btTransform & frameB) function, expected prototype:\nvoid btConeTwistConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* frameA_ptr=(Luna< btTransform >::check(L,2));
		if( !frameA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameA in btConeTwistConstraint::setFrames function");
		}
		const btTransform & frameA=*frameA_ptr;
		const btTransform* frameB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameB in btConeTwistConstraint::setFrames function");
		}
		const btTransform & frameB=*frameB_ptr;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::setFrames(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setFrames(frameA, frameB);

		return 0;
	}

	// const btTransform & btConeTwistConstraint::getFrameOffsetA() const
	static int _bind_getFrameOffsetA(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btConeTwistConstraint::getFrameOffsetA() const function, expected prototype:\nconst btTransform & btConeTwistConstraint::getFrameOffsetA() const\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btConeTwistConstraint::getFrameOffsetA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btConeTwistConstraint::getFrameOffsetB() const
	static int _bind_getFrameOffsetB(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btConeTwistConstraint::getFrameOffsetB() const function, expected prototype:\nconst btTransform & btConeTwistConstraint::getFrameOffsetB() const\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btConeTwistConstraint::getFrameOffsetB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// float btConeTwistConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btConeTwistConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConeTwistConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConeTwistConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btConeTwistConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConeTwistConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConeTwistConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btConeTwistConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btConeTwistConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btConeTwistConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_buildJacobian() function, expected prototype:\nvoid btConeTwistConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::buildJacobian();

		return 0;
	}

	// void btConeTwistConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btConeTwistConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::getInfo1(info);

		return 0;
	}

	// void btConeTwistConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btConeTwistConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::getInfo2(info);

		return 0;
	}

	// void btConeTwistConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btConeTwistConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btConeTwistConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btConeTwistConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btConeTwistConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btConeTwistConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::setParam(num, value, axis);

		return 0;
	}

	// void btConeTwistConstraint::base_setFrames(const btTransform & frameA, const btTransform & frameB)
	static int _bind_base_setFrames(lua_State *L) {
		if (!_lg_typecheck_base_setFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::base_setFrames(const btTransform & frameA, const btTransform & frameB) function, expected prototype:\nvoid btConeTwistConstraint::base_setFrames(const btTransform & frameA, const btTransform & frameB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* frameA_ptr=(Luna< btTransform >::check(L,2));
		if( !frameA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameA in btConeTwistConstraint::base_setFrames function");
		}
		const btTransform & frameA=*frameA_ptr;
		const btTransform* frameB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameB in btConeTwistConstraint::base_setFrames function");
		}
		const btTransform & frameB=*frameB_ptr;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::base_setFrames(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btConeTwistConstraint::setFrames(frameA, frameB);

		return 0;
	}

	// float btConeTwistConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConeTwistConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btConeTwistConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConeTwistConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btConeTwistConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConeTwistConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConeTwistConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConeTwistConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConeTwistConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btConeTwistConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btConeTwistConstraint* LunaTraits< btConeTwistConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConeTwistConstraint::_bind_ctor(L);
}

void LunaTraits< btConeTwistConstraint >::_bind_dtor(btConeTwistConstraint* obj) {
	delete obj;
}

const char LunaTraits< btConeTwistConstraint >::className[] = "btConeTwistConstraint";
const char LunaTraits< btConeTwistConstraint >::fullName[] = "btConeTwistConstraint";
const char LunaTraits< btConeTwistConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btConeTwistConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btConeTwistConstraint >::hash = 9624751;
const int LunaTraits< btConeTwistConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btConeTwistConstraint >::methods[] = {
	{"buildJacobian", &luna_wrapper_btConeTwistConstraint::_bind_buildJacobian},
	{"getInfo1", &luna_wrapper_btConeTwistConstraint::_bind_getInfo1},
	{"getInfo1NonVirtual", &luna_wrapper_btConeTwistConstraint::_bind_getInfo1NonVirtual},
	{"getInfo2", &luna_wrapper_btConeTwistConstraint::_bind_getInfo2},
	{"getInfo2NonVirtual", &luna_wrapper_btConeTwistConstraint::_bind_getInfo2NonVirtual},
	{"solveConstraintObsolete", &luna_wrapper_btConeTwistConstraint::_bind_solveConstraintObsolete},
	{"updateRHS", &luna_wrapper_btConeTwistConstraint::_bind_updateRHS},
	{"getRigidBodyA", &luna_wrapper_btConeTwistConstraint::_bind_getRigidBodyA},
	{"getRigidBodyB", &luna_wrapper_btConeTwistConstraint::_bind_getRigidBodyB},
	{"setAngularOnly", &luna_wrapper_btConeTwistConstraint::_bind_setAngularOnly},
	{"setLimit", &luna_wrapper_btConeTwistConstraint::_bind_setLimit},
	{"getAFrame", &luna_wrapper_btConeTwistConstraint::_bind_getAFrame},
	{"getBFrame", &luna_wrapper_btConeTwistConstraint::_bind_getBFrame},
	{"getSolveTwistLimit", &luna_wrapper_btConeTwistConstraint::_bind_getSolveTwistLimit},
	{"getSolveSwingLimit", &luna_wrapper_btConeTwistConstraint::_bind_getSolveSwingLimit},
	{"getTwistLimitSign", &luna_wrapper_btConeTwistConstraint::_bind_getTwistLimitSign},
	{"calcAngleInfo", &luna_wrapper_btConeTwistConstraint::_bind_calcAngleInfo},
	{"calcAngleInfo2", &luna_wrapper_btConeTwistConstraint::_bind_calcAngleInfo2},
	{"getSwingSpan1", &luna_wrapper_btConeTwistConstraint::_bind_getSwingSpan1},
	{"getSwingSpan2", &luna_wrapper_btConeTwistConstraint::_bind_getSwingSpan2},
	{"getTwistSpan", &luna_wrapper_btConeTwistConstraint::_bind_getTwistSpan},
	{"getTwistAngle", &luna_wrapper_btConeTwistConstraint::_bind_getTwistAngle},
	{"isPastSwingLimit", &luna_wrapper_btConeTwistConstraint::_bind_isPastSwingLimit},
	{"setDamping", &luna_wrapper_btConeTwistConstraint::_bind_setDamping},
	{"enableMotor", &luna_wrapper_btConeTwistConstraint::_bind_enableMotor},
	{"setMaxMotorImpulse", &luna_wrapper_btConeTwistConstraint::_bind_setMaxMotorImpulse},
	{"setMaxMotorImpulseNormalized", &luna_wrapper_btConeTwistConstraint::_bind_setMaxMotorImpulseNormalized},
	{"getFixThresh", &luna_wrapper_btConeTwistConstraint::_bind_getFixThresh},
	{"setFixThresh", &luna_wrapper_btConeTwistConstraint::_bind_setFixThresh},
	{"setMotorTarget", &luna_wrapper_btConeTwistConstraint::_bind_setMotorTarget},
	{"setMotorTargetInConstraintSpace", &luna_wrapper_btConeTwistConstraint::_bind_setMotorTargetInConstraintSpace},
	{"GetPointForAngle", &luna_wrapper_btConeTwistConstraint::_bind_GetPointForAngle},
	{"setParam", &luna_wrapper_btConeTwistConstraint::_bind_setParam},
	{"setFrames", &luna_wrapper_btConeTwistConstraint::_bind_setFrames},
	{"getFrameOffsetA", &luna_wrapper_btConeTwistConstraint::_bind_getFrameOffsetA},
	{"getFrameOffsetB", &luna_wrapper_btConeTwistConstraint::_bind_getFrameOffsetB},
	{"getParam", &luna_wrapper_btConeTwistConstraint::_bind_getParam},
	{"calculateSerializeBufferSize", &luna_wrapper_btConeTwistConstraint::_bind_calculateSerializeBufferSize},
	{"base_setupSolverConstraint", &luna_wrapper_btConeTwistConstraint::_bind_base_setupSolverConstraint},
	{"base_buildJacobian", &luna_wrapper_btConeTwistConstraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btConeTwistConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btConeTwistConstraint::_bind_base_getInfo2},
	{"base_solveConstraintObsolete", &luna_wrapper_btConeTwistConstraint::_bind_base_solveConstraintObsolete},
	{"base_setParam", &luna_wrapper_btConeTwistConstraint::_bind_base_setParam},
	{"base_setFrames", &luna_wrapper_btConeTwistConstraint::_bind_base_setFrames},
	{"base_getParam", &luna_wrapper_btConeTwistConstraint::_bind_base_getParam},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConeTwistConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btConeTwistConstraint::_bind___eq},
	{"fromVoid", &luna_wrapper_btConeTwistConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConeTwistConstraint::_bind_asVoid},
	{"getTable", &luna_wrapper_btConeTwistConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConeTwistConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btConeTwistConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btConeTwistConstraint >::enumValues[] = {
	{0,0}
};


