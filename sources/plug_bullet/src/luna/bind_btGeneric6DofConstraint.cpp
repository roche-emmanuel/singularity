#include <plug_common.h>

#include <luna/wrappers/wrapper_btGeneric6DofConstraint.h>

class luna_wrapper_btGeneric6DofConstraint {
public:
	typedef Luna< btGeneric6DofConstraint > luna_t;

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

	// Derived class converters:
	static int _cast_from_btTypedObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGeneric6DofConstraint* ptr= dynamic_cast< btGeneric6DofConstraint* >(Luna< btTypedObject >::check(L,1));
		btGeneric6DofConstraint* ptr= luna_caster< btTypedObject, btGeneric6DofConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGeneric6DofConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,5))) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calculateTransforms_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateTransforms_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCalculatedTransformA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCalculatedTransformB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetA_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetA_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetB_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetB_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateRHS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRelativePivotPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrames(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_testAngularLimitMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLinearLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLinearUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLinearUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngularLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAngularUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationalLimitMotor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTranslationalLimitMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLimit(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isLimited(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calcAnchorPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_limit_motor_info2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<12 || luatop>13 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86737843)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,17243936)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,91544891) ) return false;
		if( (lua_isnumber(L,12)==0 || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		if( luatop>12 && (lua_isnumber(L,13)==0 || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseFrameOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseFrameOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getM_useSolveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_useSolveConstraintObsolete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_calcAnchorPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// btGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btGeneric6DofConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 13247377\narg 4 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInA_ptr=(Luna< btTransform >::check(L,3));
		if( !frameInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInA in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		const btTransform & frameInA=*frameInA_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,4));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,5)==1);

		return new btGeneric6DofConstraint(rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA);
	}

	// btGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)
	static btGeneric6DofConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB) function, expected prototype:\nbtGeneric6DofConstraint::btGeneric6DofConstraint(btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 13247377\n");
		}

		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,2));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameB=(bool)(lua_toboolean(L,3)==1);

		return new btGeneric6DofConstraint(rbB, frameInB, useLinearReferenceFrameB);
	}

	// btGeneric6DofConstraint::btGeneric6DofConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)
	static btGeneric6DofConstraint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofConstraint::btGeneric6DofConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) function, expected prototype:\nbtGeneric6DofConstraint::btGeneric6DofConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 13247377\narg 5 ID = 13247377\n");
		}

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInA_ptr=(Luna< btTransform >::check(L,4));
		if( !frameInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInA in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		const btTransform & frameInA=*frameInA_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,5));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameA=(bool)(lua_toboolean(L,6)==1);

		return new wrapper_btGeneric6DofConstraint(L,NULL, rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA);
	}

	// btGeneric6DofConstraint::btGeneric6DofConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)
	static btGeneric6DofConstraint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGeneric6DofConstraint::btGeneric6DofConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB) function, expected prototype:\nbtGeneric6DofConstraint::btGeneric6DofConstraint(lua_Table * data, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameB)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 13247377\n");
		}

		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* frameInB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameInB in btGeneric6DofConstraint::btGeneric6DofConstraint function");
		}
		const btTransform & frameInB=*frameInB_ptr;
		bool useLinearReferenceFrameB=(bool)(lua_toboolean(L,4)==1);

		return new wrapper_btGeneric6DofConstraint(L,NULL, rbB, frameInB, useLinearReferenceFrameB);
	}

	// Overload binder for btGeneric6DofConstraint::btGeneric6DofConstraint
	static btGeneric6DofConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btGeneric6DofConstraint, cannot match any of the overloads for function btGeneric6DofConstraint:\n  btGeneric6DofConstraint(btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btGeneric6DofConstraint(btRigidBody &, const btTransform &, bool)\n  btGeneric6DofConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btGeneric6DofConstraint(lua_Table *, btRigidBody &, const btTransform &, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btGeneric6DofConstraint::calculateTransforms(const btTransform & transA, const btTransform & transB)
	static int _bind_calculateTransforms_overload_1(lua_State *L) {
		if (!_lg_typecheck_calculateTransforms_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::calculateTransforms(const btTransform & transA, const btTransform & transB) function, expected prototype:\nvoid btGeneric6DofConstraint::calculateTransforms(const btTransform & transA, const btTransform & transB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btGeneric6DofConstraint::calculateTransforms function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,3));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btGeneric6DofConstraint::calculateTransforms function");
		}
		const btTransform & transB=*transB_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::calculateTransforms(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->calculateTransforms(transA, transB);

		return 0;
	}

	// void btGeneric6DofConstraint::calculateTransforms()
	static int _bind_calculateTransforms_overload_2(lua_State *L) {
		if (!_lg_typecheck_calculateTransforms_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::calculateTransforms() function, expected prototype:\nvoid btGeneric6DofConstraint::calculateTransforms()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::calculateTransforms(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->calculateTransforms();

		return 0;
	}

	// Overload binder for btGeneric6DofConstraint::calculateTransforms
	static int _bind_calculateTransforms(lua_State *L) {
		if (_lg_typecheck_calculateTransforms_overload_1(L)) return _bind_calculateTransforms_overload_1(L);
		if (_lg_typecheck_calculateTransforms_overload_2(L)) return _bind_calculateTransforms_overload_2(L);

		luaL_error(L, "error in function calculateTransforms, cannot match any of the overloads for function calculateTransforms:\n  calculateTransforms(const btTransform &, const btTransform &)\n  calculateTransforms()\n");
		return 0;
	}

	// const btTransform & btGeneric6DofConstraint::getCalculatedTransformA() const
	static int _bind_getCalculatedTransformA(lua_State *L) {
		if (!_lg_typecheck_getCalculatedTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btGeneric6DofConstraint::getCalculatedTransformA() const function, expected prototype:\nconst btTransform & btGeneric6DofConstraint::getCalculatedTransformA() const\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btGeneric6DofConstraint::getCalculatedTransformA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getCalculatedTransformA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btGeneric6DofConstraint::getCalculatedTransformB() const
	static int _bind_getCalculatedTransformB(lua_State *L) {
		if (!_lg_typecheck_getCalculatedTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btGeneric6DofConstraint::getCalculatedTransformB() const function, expected prototype:\nconst btTransform & btGeneric6DofConstraint::getCalculatedTransformB() const\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btGeneric6DofConstraint::getCalculatedTransformB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getCalculatedTransformB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btGeneric6DofConstraint::getFrameOffsetA() const
	static int _bind_getFrameOffsetA_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btGeneric6DofConstraint::getFrameOffsetA() const function, expected prototype:\nconst btTransform & btGeneric6DofConstraint::getFrameOffsetA() const\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btGeneric6DofConstraint::getFrameOffsetA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btGeneric6DofConstraint::getFrameOffsetA()
	static int _bind_getFrameOffsetA_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btGeneric6DofConstraint::getFrameOffsetA() function, expected prototype:\nbtTransform & btGeneric6DofConstraint::getFrameOffsetA()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btGeneric6DofConstraint::getFrameOffsetA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGeneric6DofConstraint::getFrameOffsetA
	static int _bind_getFrameOffsetA(lua_State *L) {
		if (_lg_typecheck_getFrameOffsetA_overload_1(L)) return _bind_getFrameOffsetA_overload_1(L);
		if (_lg_typecheck_getFrameOffsetA_overload_2(L)) return _bind_getFrameOffsetA_overload_2(L);

		luaL_error(L, "error in function getFrameOffsetA, cannot match any of the overloads for function getFrameOffsetA:\n  getFrameOffsetA()\n  getFrameOffsetA()\n");
		return 0;
	}

	// const btTransform & btGeneric6DofConstraint::getFrameOffsetB() const
	static int _bind_getFrameOffsetB_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetB_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btGeneric6DofConstraint::getFrameOffsetB() const function, expected prototype:\nconst btTransform & btGeneric6DofConstraint::getFrameOffsetB() const\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btGeneric6DofConstraint::getFrameOffsetB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btGeneric6DofConstraint::getFrameOffsetB()
	static int _bind_getFrameOffsetB_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetB_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btGeneric6DofConstraint::getFrameOffsetB() function, expected prototype:\nbtTransform & btGeneric6DofConstraint::getFrameOffsetB()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btGeneric6DofConstraint::getFrameOffsetB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGeneric6DofConstraint::getFrameOffsetB
	static int _bind_getFrameOffsetB(lua_State *L) {
		if (_lg_typecheck_getFrameOffsetB_overload_1(L)) return _bind_getFrameOffsetB_overload_1(L);
		if (_lg_typecheck_getFrameOffsetB_overload_2(L)) return _bind_getFrameOffsetB_overload_2(L);

		luaL_error(L, "error in function getFrameOffsetB, cannot match any of the overloads for function getFrameOffsetB:\n  getFrameOffsetB()\n  getFrameOffsetB()\n");
		return 0;
	}

	// void btGeneric6DofConstraint::buildJacobian()
	static int _bind_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::buildJacobian() function, expected prototype:\nvoid btGeneric6DofConstraint::buildJacobian()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->buildJacobian();

		return 0;
	}

	// void btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btGeneric6DofConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo1NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btGeneric6DofConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1NonVirtual(info);

		return 0;
	}

	// void btGeneric6DofConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGeneric6DofConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btGeneric6DofConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)
	static int _bind_getInfo2NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo2NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB) function, expected prototype:\nvoid btGeneric6DofConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btGeneric6DofConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btGeneric6DofConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* linVelA_ptr=(Luna< btVector3 >::check(L,5));
		if( !linVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelA in btGeneric6DofConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & linVelA=*linVelA_ptr;
		const btVector3* linVelB_ptr=(Luna< btVector3 >::check(L,6));
		if( !linVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelB in btGeneric6DofConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & linVelB=*linVelB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,7));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btGeneric6DofConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,8));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btGeneric6DofConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & angVelB=*angVelB_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2NonVirtual(info, transA, transB, linVelA, linVelB, angVelA, angVelB);

		return 0;
	}

	// void btGeneric6DofConstraint::updateRHS(float timeStep)
	static int _bind_updateRHS(lua_State *L) {
		if (!_lg_typecheck_updateRHS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::updateRHS(float timeStep) function, expected prototype:\nvoid btGeneric6DofConstraint::updateRHS(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::updateRHS(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->updateRHS(timeStep);

		return 0;
	}

	// btVector3 btGeneric6DofConstraint::getAxis(int axis_index) const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btGeneric6DofConstraint::getAxis(int axis_index) const function, expected prototype:\nbtVector3 btGeneric6DofConstraint::getAxis(int axis_index) const\nClass arguments details:\n");
		}

		int axis_index=(int)lua_tointeger(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btGeneric6DofConstraint::getAxis(int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getAxis(axis_index);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btGeneric6DofConstraint::getAngle(int axis_index) const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGeneric6DofConstraint::getAngle(int axis_index) const function, expected prototype:\nfloat btGeneric6DofConstraint::getAngle(int axis_index) const\nClass arguments details:\n");
		}

		int axis_index=(int)lua_tointeger(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGeneric6DofConstraint::getAngle(int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getAngle(axis_index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGeneric6DofConstraint::getRelativePivotPosition(int axis_index) const
	static int _bind_getRelativePivotPosition(lua_State *L) {
		if (!_lg_typecheck_getRelativePivotPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGeneric6DofConstraint::getRelativePivotPosition(int axis_index) const function, expected prototype:\nfloat btGeneric6DofConstraint::getRelativePivotPosition(int axis_index) const\nClass arguments details:\n");
		}

		int axis_index=(int)lua_tointeger(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGeneric6DofConstraint::getRelativePivotPosition(int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getRelativePivotPosition(axis_index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGeneric6DofConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)
	static int _bind_setFrames(lua_State *L) {
		if (!_lg_typecheck_setFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setFrames(const btTransform & frameA, const btTransform & frameB) function, expected prototype:\nvoid btGeneric6DofConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* frameA_ptr=(Luna< btTransform >::check(L,2));
		if( !frameA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameA in btGeneric6DofConstraint::setFrames function");
		}
		const btTransform & frameA=*frameA_ptr;
		const btTransform* frameB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameB in btGeneric6DofConstraint::setFrames function");
		}
		const btTransform & frameB=*frameB_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setFrames(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setFrames(frameA, frameB);

		return 0;
	}

	// bool btGeneric6DofConstraint::testAngularLimitMotor(int axis_index)
	static int _bind_testAngularLimitMotor(lua_State *L) {
		if (!_lg_typecheck_testAngularLimitMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGeneric6DofConstraint::testAngularLimitMotor(int axis_index) function, expected prototype:\nbool btGeneric6DofConstraint::testAngularLimitMotor(int axis_index)\nClass arguments details:\n");
		}

		int axis_index=(int)lua_tointeger(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGeneric6DofConstraint::testAngularLimitMotor(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->testAngularLimitMotor(axis_index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGeneric6DofConstraint::setLinearLowerLimit(const btVector3 & linearLower)
	static int _bind_setLinearLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setLinearLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setLinearLowerLimit(const btVector3 & linearLower) function, expected prototype:\nvoid btGeneric6DofConstraint::setLinearLowerLimit(const btVector3 & linearLower)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* linearLower_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearLower_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearLower in btGeneric6DofConstraint::setLinearLowerLimit function");
		}
		const btVector3 & linearLower=*linearLower_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setLinearLowerLimit(const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLinearLowerLimit(linearLower);

		return 0;
	}

	// void btGeneric6DofConstraint::getLinearLowerLimit(btVector3 & linearLower)
	static int _bind_getLinearLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLinearLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getLinearLowerLimit(btVector3 & linearLower) function, expected prototype:\nvoid btGeneric6DofConstraint::getLinearLowerLimit(btVector3 & linearLower)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* linearLower_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearLower_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearLower in btGeneric6DofConstraint::getLinearLowerLimit function");
		}
		btVector3 & linearLower=*linearLower_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getLinearLowerLimit(btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getLinearLowerLimit(linearLower);

		return 0;
	}

	// void btGeneric6DofConstraint::setLinearUpperLimit(const btVector3 & linearUpper)
	static int _bind_setLinearUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setLinearUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setLinearUpperLimit(const btVector3 & linearUpper) function, expected prototype:\nvoid btGeneric6DofConstraint::setLinearUpperLimit(const btVector3 & linearUpper)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* linearUpper_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearUpper_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearUpper in btGeneric6DofConstraint::setLinearUpperLimit function");
		}
		const btVector3 & linearUpper=*linearUpper_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setLinearUpperLimit(const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLinearUpperLimit(linearUpper);

		return 0;
	}

	// void btGeneric6DofConstraint::getLinearUpperLimit(btVector3 & linearUpper)
	static int _bind_getLinearUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getLinearUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getLinearUpperLimit(btVector3 & linearUpper) function, expected prototype:\nvoid btGeneric6DofConstraint::getLinearUpperLimit(btVector3 & linearUpper)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* linearUpper_ptr=(Luna< btVector3 >::check(L,2));
		if( !linearUpper_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linearUpper in btGeneric6DofConstraint::getLinearUpperLimit function");
		}
		btVector3 & linearUpper=*linearUpper_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getLinearUpperLimit(btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getLinearUpperLimit(linearUpper);

		return 0;
	}

	// void btGeneric6DofConstraint::setAngularLowerLimit(const btVector3 & angularLower)
	static int _bind_setAngularLowerLimit(lua_State *L) {
		if (!_lg_typecheck_setAngularLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setAngularLowerLimit(const btVector3 & angularLower) function, expected prototype:\nvoid btGeneric6DofConstraint::setAngularLowerLimit(const btVector3 & angularLower)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* angularLower_ptr=(Luna< btVector3 >::check(L,2));
		if( !angularLower_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularLower in btGeneric6DofConstraint::setAngularLowerLimit function");
		}
		const btVector3 & angularLower=*angularLower_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setAngularLowerLimit(const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAngularLowerLimit(angularLower);

		return 0;
	}

	// void btGeneric6DofConstraint::getAngularLowerLimit(btVector3 & angularLower)
	static int _bind_getAngularLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getAngularLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getAngularLowerLimit(btVector3 & angularLower) function, expected prototype:\nvoid btGeneric6DofConstraint::getAngularLowerLimit(btVector3 & angularLower)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* angularLower_ptr=(Luna< btVector3 >::check(L,2));
		if( !angularLower_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularLower in btGeneric6DofConstraint::getAngularLowerLimit function");
		}
		btVector3 & angularLower=*angularLower_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getAngularLowerLimit(btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getAngularLowerLimit(angularLower);

		return 0;
	}

	// void btGeneric6DofConstraint::setAngularUpperLimit(const btVector3 & angularUpper)
	static int _bind_setAngularUpperLimit(lua_State *L) {
		if (!_lg_typecheck_setAngularUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setAngularUpperLimit(const btVector3 & angularUpper) function, expected prototype:\nvoid btGeneric6DofConstraint::setAngularUpperLimit(const btVector3 & angularUpper)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* angularUpper_ptr=(Luna< btVector3 >::check(L,2));
		if( !angularUpper_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularUpper in btGeneric6DofConstraint::setAngularUpperLimit function");
		}
		const btVector3 & angularUpper=*angularUpper_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setAngularUpperLimit(const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAngularUpperLimit(angularUpper);

		return 0;
	}

	// void btGeneric6DofConstraint::getAngularUpperLimit(btVector3 & angularUpper)
	static int _bind_getAngularUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getAngularUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::getAngularUpperLimit(btVector3 & angularUpper) function, expected prototype:\nvoid btGeneric6DofConstraint::getAngularUpperLimit(btVector3 & angularUpper)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* angularUpper_ptr=(Luna< btVector3 >::check(L,2));
		if( !angularUpper_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angularUpper in btGeneric6DofConstraint::getAngularUpperLimit function");
		}
		btVector3 & angularUpper=*angularUpper_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::getAngularUpperLimit(btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getAngularUpperLimit(angularUpper);

		return 0;
	}

	// btRotationalLimitMotor * btGeneric6DofConstraint::getRotationalLimitMotor(int index)
	static int _bind_getRotationalLimitMotor(lua_State *L) {
		if (!_lg_typecheck_getRotationalLimitMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRotationalLimitMotor * btGeneric6DofConstraint::getRotationalLimitMotor(int index) function, expected prototype:\nbtRotationalLimitMotor * btGeneric6DofConstraint::getRotationalLimitMotor(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRotationalLimitMotor * btGeneric6DofConstraint::getRotationalLimitMotor(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btRotationalLimitMotor * lret = self->getRotationalLimitMotor(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRotationalLimitMotor >::push(L,lret,false);

		return 1;
	}

	// btTranslationalLimitMotor * btGeneric6DofConstraint::getTranslationalLimitMotor()
	static int _bind_getTranslationalLimitMotor(lua_State *L) {
		if (!_lg_typecheck_getTranslationalLimitMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTranslationalLimitMotor * btGeneric6DofConstraint::getTranslationalLimitMotor() function, expected prototype:\nbtTranslationalLimitMotor * btGeneric6DofConstraint::getTranslationalLimitMotor()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTranslationalLimitMotor * btGeneric6DofConstraint::getTranslationalLimitMotor(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		btTranslationalLimitMotor * lret = self->getTranslationalLimitMotor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTranslationalLimitMotor >::push(L,lret,false);

		return 1;
	}

	// void btGeneric6DofConstraint::setLimit(int axis, float lo, float hi)
	static int _bind_setLimit(lua_State *L) {
		if (!_lg_typecheck_setLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setLimit(int axis, float lo, float hi) function, expected prototype:\nvoid btGeneric6DofConstraint::setLimit(int axis, float lo, float hi)\nClass arguments details:\n");
		}

		int axis=(int)lua_tointeger(L,2);
		float lo=(float)lua_tonumber(L,3);
		float hi=(float)lua_tonumber(L,4);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setLimit(int, float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLimit(axis, lo, hi);

		return 0;
	}

	// bool btGeneric6DofConstraint::isLimited(int limitIndex)
	static int _bind_isLimited(lua_State *L) {
		if (!_lg_typecheck_isLimited(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGeneric6DofConstraint::isLimited(int limitIndex) function, expected prototype:\nbool btGeneric6DofConstraint::isLimited(int limitIndex)\nClass arguments details:\n");
		}

		int limitIndex=(int)lua_tointeger(L,2);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGeneric6DofConstraint::isLimited(int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->isLimited(limitIndex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGeneric6DofConstraint::calcAnchorPos()
	static int _bind_calcAnchorPos(lua_State *L) {
		if (!_lg_typecheck_calcAnchorPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::calcAnchorPos() function, expected prototype:\nvoid btGeneric6DofConstraint::calcAnchorPos()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::calcAnchorPos(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->calcAnchorPos();

		return 0;
	}

	// int btGeneric6DofConstraint::get_limit_motor_info2(btRotationalLimitMotor * limot, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB, btTypedConstraint::btConstraintInfo2 * info, int row, btVector3 & ax1, int rotational, int rotAllowed = false)
	static int _bind_get_limit_motor_info2(lua_State *L) {
		if (!_lg_typecheck_get_limit_motor_info2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraint::get_limit_motor_info2(btRotationalLimitMotor * limot, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB, btTypedConstraint::btConstraintInfo2 * info, int row, btVector3 & ax1, int rotational, int rotAllowed = false) function, expected prototype:\nint btGeneric6DofConstraint::get_limit_motor_info2(btRotationalLimitMotor * limot, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB, btTypedConstraint::btConstraintInfo2 * info, int row, btVector3 & ax1, int rotational, int rotAllowed = false)\nClass arguments details:\narg 1 ID = 86737843\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 17243936\narg 10 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRotationalLimitMotor* limot=(Luna< btRotationalLimitMotor >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* linVelA_ptr=(Luna< btVector3 >::check(L,5));
		if( !linVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelA in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		const btVector3 & linVelA=*linVelA_ptr;
		const btVector3* linVelB_ptr=(Luna< btVector3 >::check(L,6));
		if( !linVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelB in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		const btVector3 & linVelB=*linVelB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,7));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,8));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		const btVector3 & angVelB=*angVelB_ptr;
		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,9));
		int row=(int)lua_tointeger(L,10);
		btVector3* ax1_ptr=(Luna< btVector3 >::check(L,11));
		if( !ax1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ax1 in btGeneric6DofConstraint::get_limit_motor_info2 function");
		}
		btVector3 & ax1=*ax1_ptr;
		int rotational=(int)lua_tointeger(L,12);
		int rotAllowed=luatop>12 ? (int)lua_tointeger(L,13) : false;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraint::get_limit_motor_info2(btRotationalLimitMotor *, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, btTypedConstraint::btConstraintInfo2 *, int, btVector3 &, int, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->get_limit_motor_info2(limot, transA, transB, linVelA, linVelB, angVelA, angVelB, info, row, ax1, rotational, rotAllowed);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGeneric6DofConstraint::getUseFrameOffset()
	static int _bind_getUseFrameOffset(lua_State *L) {
		if (!_lg_typecheck_getUseFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGeneric6DofConstraint::getUseFrameOffset() function, expected prototype:\nbool btGeneric6DofConstraint::getUseFrameOffset()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGeneric6DofConstraint::getUseFrameOffset(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getUseFrameOffset();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGeneric6DofConstraint::setUseFrameOffset(bool frameOffsetOnOff)
	static int _bind_setUseFrameOffset(lua_State *L) {
		if (!_lg_typecheck_setUseFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setUseFrameOffset(bool frameOffsetOnOff) function, expected prototype:\nvoid btGeneric6DofConstraint::setUseFrameOffset(bool frameOffsetOnOff)\nClass arguments details:\n");
		}

		bool frameOffsetOnOff=(bool)(lua_toboolean(L,2)==1);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setUseFrameOffset(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUseFrameOffset(frameOffsetOnOff);

		return 0;
	}

	// void btGeneric6DofConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btGeneric6DofConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// float btGeneric6DofConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGeneric6DofConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btGeneric6DofConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGeneric6DofConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGeneric6DofConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2) function, expected prototype:\nvoid btGeneric6DofConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* axis1_ptr=(Luna< btVector3 >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in btGeneric6DofConstraint::setAxis function");
		}
		const btVector3 & axis1=*axis1_ptr;
		const btVector3* axis2_ptr=(Luna< btVector3 >::check(L,3));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in btGeneric6DofConstraint::setAxis function");
		}
		const btVector3 & axis2=*axis2_ptr;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::setAxis(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAxis(axis1, axis2);

		return 0;
	}

	// int btGeneric6DofConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btGeneric6DofConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGeneric6DofConstraint::m_useSolveConstraintObsolete()
	static int _bind_getM_useSolveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_getM_useSolveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGeneric6DofConstraint::m_useSolveConstraintObsolete() function, expected prototype:\nbool btGeneric6DofConstraint::m_useSolveConstraintObsolete()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGeneric6DofConstraint::m_useSolveConstraintObsolete(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->m_useSolveConstraintObsolete;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGeneric6DofConstraint::m_useSolveConstraintObsolete(bool value)
	static int _bind_setM_useSolveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_setM_useSolveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::m_useSolveConstraintObsolete(bool value) function, expected prototype:\nvoid btGeneric6DofConstraint::m_useSolveConstraintObsolete(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::m_useSolveConstraintObsolete(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->m_useSolveConstraintObsolete = value;

		return 0;
	}

	// void btGeneric6DofConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btGeneric6DofConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btGeneric6DofConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btGeneric6DofConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btGeneric6DofConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btGeneric6DofConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btGeneric6DofConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btGeneric6DofConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_buildJacobian() function, expected prototype:\nvoid btGeneric6DofConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::buildJacobian();

		return 0;
	}

	// void btGeneric6DofConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btGeneric6DofConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::getInfo1(info);

		return 0;
	}

	// void btGeneric6DofConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGeneric6DofConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::getInfo2(info);

		return 0;
	}

	// void btGeneric6DofConstraint::base_calcAnchorPos()
	static int _bind_base_calcAnchorPos(lua_State *L) {
		if (!_lg_typecheck_base_calcAnchorPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_calcAnchorPos() function, expected prototype:\nvoid btGeneric6DofConstraint::base_calcAnchorPos()\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_calcAnchorPos(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::calcAnchorPos();

		return 0;
	}

	// void btGeneric6DofConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btGeneric6DofConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btGeneric6DofConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btGeneric6DofConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGeneric6DofConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btGeneric6DofConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGeneric6DofConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btGeneric6DofConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGeneric6DofConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGeneric6DofConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGeneric6DofConstraint* self=Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btGeneric6DofConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btGeneric6DofConstraint* LunaTraits< btGeneric6DofConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGeneric6DofConstraint::_bind_ctor(L);
}

void LunaTraits< btGeneric6DofConstraint >::_bind_dtor(btGeneric6DofConstraint* obj) {
	delete obj;
}

const char LunaTraits< btGeneric6DofConstraint >::className[] = "btGeneric6DofConstraint";
const char LunaTraits< btGeneric6DofConstraint >::fullName[] = "btGeneric6DofConstraint";
const char LunaTraits< btGeneric6DofConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btGeneric6DofConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btGeneric6DofConstraint >::hash = 36616560;
const int LunaTraits< btGeneric6DofConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btGeneric6DofConstraint >::methods[] = {
	{"calculateTransforms", &luna_wrapper_btGeneric6DofConstraint::_bind_calculateTransforms},
	{"getCalculatedTransformA", &luna_wrapper_btGeneric6DofConstraint::_bind_getCalculatedTransformA},
	{"getCalculatedTransformB", &luna_wrapper_btGeneric6DofConstraint::_bind_getCalculatedTransformB},
	{"getFrameOffsetA", &luna_wrapper_btGeneric6DofConstraint::_bind_getFrameOffsetA},
	{"getFrameOffsetB", &luna_wrapper_btGeneric6DofConstraint::_bind_getFrameOffsetB},
	{"buildJacobian", &luna_wrapper_btGeneric6DofConstraint::_bind_buildJacobian},
	{"getInfo1", &luna_wrapper_btGeneric6DofConstraint::_bind_getInfo1},
	{"getInfo1NonVirtual", &luna_wrapper_btGeneric6DofConstraint::_bind_getInfo1NonVirtual},
	{"getInfo2", &luna_wrapper_btGeneric6DofConstraint::_bind_getInfo2},
	{"getInfo2NonVirtual", &luna_wrapper_btGeneric6DofConstraint::_bind_getInfo2NonVirtual},
	{"updateRHS", &luna_wrapper_btGeneric6DofConstraint::_bind_updateRHS},
	{"getAxis", &luna_wrapper_btGeneric6DofConstraint::_bind_getAxis},
	{"getAngle", &luna_wrapper_btGeneric6DofConstraint::_bind_getAngle},
	{"getRelativePivotPosition", &luna_wrapper_btGeneric6DofConstraint::_bind_getRelativePivotPosition},
	{"setFrames", &luna_wrapper_btGeneric6DofConstraint::_bind_setFrames},
	{"testAngularLimitMotor", &luna_wrapper_btGeneric6DofConstraint::_bind_testAngularLimitMotor},
	{"setLinearLowerLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_setLinearLowerLimit},
	{"getLinearLowerLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_getLinearLowerLimit},
	{"setLinearUpperLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_setLinearUpperLimit},
	{"getLinearUpperLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_getLinearUpperLimit},
	{"setAngularLowerLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_setAngularLowerLimit},
	{"getAngularLowerLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_getAngularLowerLimit},
	{"setAngularUpperLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_setAngularUpperLimit},
	{"getAngularUpperLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_getAngularUpperLimit},
	{"getRotationalLimitMotor", &luna_wrapper_btGeneric6DofConstraint::_bind_getRotationalLimitMotor},
	{"getTranslationalLimitMotor", &luna_wrapper_btGeneric6DofConstraint::_bind_getTranslationalLimitMotor},
	{"setLimit", &luna_wrapper_btGeneric6DofConstraint::_bind_setLimit},
	{"isLimited", &luna_wrapper_btGeneric6DofConstraint::_bind_isLimited},
	{"calcAnchorPos", &luna_wrapper_btGeneric6DofConstraint::_bind_calcAnchorPos},
	{"get_limit_motor_info2", &luna_wrapper_btGeneric6DofConstraint::_bind_get_limit_motor_info2},
	{"getUseFrameOffset", &luna_wrapper_btGeneric6DofConstraint::_bind_getUseFrameOffset},
	{"setUseFrameOffset", &luna_wrapper_btGeneric6DofConstraint::_bind_setUseFrameOffset},
	{"setParam", &luna_wrapper_btGeneric6DofConstraint::_bind_setParam},
	{"getParam", &luna_wrapper_btGeneric6DofConstraint::_bind_getParam},
	{"setAxis", &luna_wrapper_btGeneric6DofConstraint::_bind_setAxis},
	{"calculateSerializeBufferSize", &luna_wrapper_btGeneric6DofConstraint::_bind_calculateSerializeBufferSize},
	{"getM_useSolveConstraintObsolete", &luna_wrapper_btGeneric6DofConstraint::_bind_getM_useSolveConstraintObsolete},
	{"setM_useSolveConstraintObsolete", &luna_wrapper_btGeneric6DofConstraint::_bind_setM_useSolveConstraintObsolete},
	{"base_setupSolverConstraint", &luna_wrapper_btGeneric6DofConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btGeneric6DofConstraint::_bind_base_solveConstraintObsolete},
	{"base_buildJacobian", &luna_wrapper_btGeneric6DofConstraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btGeneric6DofConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btGeneric6DofConstraint::_bind_base_getInfo2},
	{"base_calcAnchorPos", &luna_wrapper_btGeneric6DofConstraint::_bind_base_calcAnchorPos},
	{"base_setParam", &luna_wrapper_btGeneric6DofConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btGeneric6DofConstraint::_bind_base_getParam},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGeneric6DofConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btGeneric6DofConstraint::_bind___eq},
	{"getTable", &luna_wrapper_btGeneric6DofConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGeneric6DofConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btGeneric6DofConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btGeneric6DofConstraint >::enumValues[] = {
	{0,0}
};


