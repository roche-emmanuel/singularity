#include <plug_common.h>

#include <luna/wrappers/wrapper_btHingeConstraint.h>

class luna_wrapper_btHingeConstraint {
public:
	typedef Luna< btHingeConstraint > luna_t;

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
		//btHingeConstraint* ptr= dynamic_cast< btHingeConstraint* >(Luna< btTypedObject >::check(L,1));
		btHingeConstraint* ptr= luna_caster< btTypedObject, btHingeConstraint >::cast(Luna< btTypedObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btHingeConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,6))) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,7))) ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,5))) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85758361) ) return false;
		if( (!(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
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
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2Internal(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInfo2InternalUsingFrameOffset(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateRHS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_getFrameOffsetA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameOffsetB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrames(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularOnly(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_setMotorTarget_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( (!(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMotorTarget_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLimit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLowerLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpperLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHingeAngle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHingeAngle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_testLimit(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAFrame_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAFrame_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBFrame_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBFrame_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolveLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLimitSign(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableAngularMotor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMotorTargetVelosity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxMotorImpulse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// btHingeConstraint::btHingeConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB, const btVector3 & axisInA, const btVector3 & axisInB, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB, const btVector3 & axisInA, const btVector3 & axisInB, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB, const btVector3 & axisInA, const btVector3 & axisInB, bool useReferenceFrameA = false)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,3));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;
		const btVector3* pivotInB_ptr=(Luna< btVector3 >::check(L,4));
		if( !pivotInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInB in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & pivotInB=*pivotInB_ptr;
		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,5));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		const btVector3* axisInB_ptr=(Luna< btVector3 >::check(L,6));
		if( !axisInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInB in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & axisInB=*axisInB_ptr;
		bool useReferenceFrameA=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : false;

		return new btHingeConstraint(rbA, rbB, pivotInA, pivotInB, axisInA, axisInB, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(btRigidBody & rbA, const btVector3 & pivotInA, const btVector3 & axisInA, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(btRigidBody & rbA, const btVector3 & pivotInA, const btVector3 & axisInA, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(btRigidBody & rbA, const btVector3 & pivotInA, const btVector3 & axisInA, bool useReferenceFrameA = false)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,2));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;
		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,3));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		bool useReferenceFrameA=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		return new btHingeConstraint(rbA, pivotInA, axisInA, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame, bool useReferenceFrameA = false)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 85758361\narg 3 ID = 13247377\narg 4 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,3));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btHingeConstraint::btHingeConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;
		const btTransform* rbBFrame_ptr=(Luna< btTransform >::check(L,4));
		if( !rbBFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbBFrame in btHingeConstraint::btHingeConstraint function");
		}
		const btTransform & rbBFrame=*rbBFrame_ptr;
		bool useReferenceFrameA=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		return new btHingeConstraint(rbA, rbB, rbAFrame, rbBFrame, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(btRigidBody & rbA, const btTransform & rbAFrame, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(btRigidBody & rbA, const btTransform & rbAFrame, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(btRigidBody & rbA, const btTransform & rbAFrame, bool useReferenceFrameA = false)\nClass arguments details:\narg 1 ID = 85758361\narg 2 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,1));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,2));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btHingeConstraint::btHingeConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;
		bool useReferenceFrameA=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		return new btHingeConstraint(rbA, rbAFrame, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB, const btVector3 & axisInA, const btVector3 & axisInB, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB, const btVector3 & axisInA, const btVector3 & axisInB, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB, const btVector3 & axisInA, const btVector3 & axisInB, bool useReferenceFrameA = false)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,4));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;
		const btVector3* pivotInB_ptr=(Luna< btVector3 >::check(L,5));
		if( !pivotInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInB in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & pivotInB=*pivotInB_ptr;
		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,6));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		const btVector3* axisInB_ptr=(Luna< btVector3 >::check(L,7));
		if( !axisInB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInB in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & axisInB=*axisInB_ptr;
		bool useReferenceFrameA=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : false;

		return new wrapper_btHingeConstraint(L,NULL, rbA, rbB, pivotInA, pivotInB, axisInA, axisInB, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, const btVector3 & pivotInA, const btVector3 & axisInA, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, const btVector3 & pivotInA, const btVector3 & axisInA, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, const btVector3 & pivotInA, const btVector3 & axisInA, bool useReferenceFrameA = false)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btVector3* pivotInA_ptr=(Luna< btVector3 >::check(L,3));
		if( !pivotInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & pivotInA=*pivotInA_ptr;
		const btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,4));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btHingeConstraint::btHingeConstraint function");
		}
		const btVector3 & axisInA=*axisInA_ptr;
		bool useReferenceFrameA=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;

		return new wrapper_btHingeConstraint(L,NULL, rbA, pivotInA, axisInA, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame, bool useReferenceFrameA = false)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 85758361\narg 4 ID = 13247377\narg 5 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		btRigidBody* rbB_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,3));
		if( !rbB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbB in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbB=*rbB_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,4));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btHingeConstraint::btHingeConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;
		const btTransform* rbBFrame_ptr=(Luna< btTransform >::check(L,5));
		if( !rbBFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbBFrame in btHingeConstraint::btHingeConstraint function");
		}
		const btTransform & rbBFrame=*rbBFrame_ptr;
		bool useReferenceFrameA=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : false;

		return new wrapper_btHingeConstraint(L,NULL, rbA, rbB, rbAFrame, rbBFrame, useReferenceFrameA);
	}

	// btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, const btTransform & rbAFrame, bool useReferenceFrameA = false)
	static btHingeConstraint* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, const btTransform & rbAFrame, bool useReferenceFrameA = false) function, expected prototype:\nbtHingeConstraint::btHingeConstraint(lua_Table * data, btRigidBody & rbA, const btTransform & rbAFrame, bool useReferenceFrameA = false)\nClass arguments details:\narg 2 ID = 85758361\narg 3 ID = 13247377\n");
		}

		int luatop = lua_gettop(L);

		btRigidBody* rbA_ptr=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		if( !rbA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbA in btHingeConstraint::btHingeConstraint function");
		}
		btRigidBody & rbA=*rbA_ptr;
		const btTransform* rbAFrame_ptr=(Luna< btTransform >::check(L,3));
		if( !rbAFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rbAFrame in btHingeConstraint::btHingeConstraint function");
		}
		const btTransform & rbAFrame=*rbAFrame_ptr;
		bool useReferenceFrameA=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : false;

		return new wrapper_btHingeConstraint(L,NULL, rbA, rbAFrame, useReferenceFrameA);
	}

	// Overload binder for btHingeConstraint::btHingeConstraint
	static btHingeConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function btHingeConstraint, cannot match any of the overloads for function btHingeConstraint:\n  btHingeConstraint(btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, bool)\n  btHingeConstraint(btRigidBody &, const btVector3 &, const btVector3 &, bool)\n  btHingeConstraint(btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btHingeConstraint(btRigidBody &, const btTransform &, bool)\n  btHingeConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, bool)\n  btHingeConstraint(lua_Table *, btRigidBody &, const btVector3 &, const btVector3 &, bool)\n  btHingeConstraint(lua_Table *, btRigidBody &, btRigidBody &, const btTransform &, const btTransform &, bool)\n  btHingeConstraint(lua_Table *, btRigidBody &, const btTransform &, bool)\n");
		return NULL;
	}


	// Function binds:
	// void btHingeConstraint::buildJacobian()
	static int _bind_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::buildJacobian() function, expected prototype:\nvoid btHingeConstraint::buildJacobian()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->buildJacobian();

		return 0;
	}

	// void btHingeConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1(lua_State *L) {
		if (!_lg_typecheck_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btHingeConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1(info);

		return 0;
	}

	// void btHingeConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_getInfo1NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo1NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btHingeConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo1NonVirtual(info);

		return 0;
	}

	// void btHingeConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_getInfo2(lua_State *L) {
		if (!_lg_typecheck_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btHingeConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2(info);

		return 0;
	}

	// void btHingeConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB)
	static int _bind_getInfo2NonVirtual(lua_State *L) {
		if (!_lg_typecheck_getInfo2NonVirtual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB) function, expected prototype:\nvoid btHingeConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btHingeConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btHingeConstraint::getInfo2NonVirtual function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,5));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btHingeConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,6));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btHingeConstraint::getInfo2NonVirtual function");
		}
		const btVector3 & angVelB=*angVelB_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2NonVirtual(info, transA, transB, angVelA, angVelB);

		return 0;
	}

	// void btHingeConstraint::getInfo2Internal(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB)
	static int _bind_getInfo2Internal(lua_State *L) {
		if (!_lg_typecheck_getInfo2Internal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::getInfo2Internal(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB) function, expected prototype:\nvoid btHingeConstraint::getInfo2Internal(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btHingeConstraint::getInfo2Internal function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btHingeConstraint::getInfo2Internal function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,5));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btHingeConstraint::getInfo2Internal function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,6));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btHingeConstraint::getInfo2Internal function");
		}
		const btVector3 & angVelB=*angVelB_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::getInfo2Internal(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2Internal(info, transA, transB, angVelA, angVelB);

		return 0;
	}

	// void btHingeConstraint::getInfo2InternalUsingFrameOffset(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB)
	static int _bind_getInfo2InternalUsingFrameOffset(lua_State *L) {
		if (!_lg_typecheck_getInfo2InternalUsingFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::getInfo2InternalUsingFrameOffset(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB) function, expected prototype:\nvoid btHingeConstraint::getInfo2InternalUsingFrameOffset(btTypedConstraint::btConstraintInfo2 * info, const btTransform & transA, const btTransform & transB, const btVector3 & angVelA, const btVector3 & angVelB)\nClass arguments details:\narg 1 ID = 17243936\narg 2 ID = 13247377\narg 3 ID = 13247377\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btHingeConstraint::getInfo2InternalUsingFrameOffset function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btHingeConstraint::getInfo2InternalUsingFrameOffset function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,5));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btHingeConstraint::getInfo2InternalUsingFrameOffset function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,6));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btHingeConstraint::getInfo2InternalUsingFrameOffset function");
		}
		const btVector3 & angVelB=*angVelB_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::getInfo2InternalUsingFrameOffset(btTypedConstraint::btConstraintInfo2 *, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->getInfo2InternalUsingFrameOffset(info, transA, transB, angVelA, angVelB);

		return 0;
	}

	// void btHingeConstraint::updateRHS(float timeStep)
	static int _bind_updateRHS(lua_State *L) {
		if (!_lg_typecheck_updateRHS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::updateRHS(float timeStep) function, expected prototype:\nvoid btHingeConstraint::updateRHS(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::updateRHS(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->updateRHS(timeStep);

		return 0;
	}

	// const btRigidBody & btHingeConstraint::getRigidBodyA() const
	static int _bind_getRigidBodyA_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyA_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btHingeConstraint::getRigidBodyA() const function, expected prototype:\nconst btRigidBody & btHingeConstraint::getRigidBodyA() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btHingeConstraint::getRigidBodyA() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// btRigidBody & btHingeConstraint::getRigidBodyA()
	static int _bind_getRigidBodyA_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyA_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody & btHingeConstraint::getRigidBodyA() function, expected prototype:\nbtRigidBody & btHingeConstraint::getRigidBodyA()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBody & btHingeConstraint::getRigidBodyA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHingeConstraint::getRigidBodyA
	static int _bind_getRigidBodyA(lua_State *L) {
		if (_lg_typecheck_getRigidBodyA_overload_1(L)) return _bind_getRigidBodyA_overload_1(L);
		if (_lg_typecheck_getRigidBodyA_overload_2(L)) return _bind_getRigidBodyA_overload_2(L);

		luaL_error(L, "error in function getRigidBodyA, cannot match any of the overloads for function getRigidBodyA:\n  getRigidBodyA()\n  getRigidBodyA()\n");
		return 0;
	}

	// const btRigidBody & btHingeConstraint::getRigidBodyB() const
	static int _bind_getRigidBodyB_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyB_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btRigidBody & btHingeConstraint::getRigidBodyB() const function, expected prototype:\nconst btRigidBody & btHingeConstraint::getRigidBodyB() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btRigidBody & btHingeConstraint::getRigidBodyB() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// btRigidBody & btHingeConstraint::getRigidBodyB()
	static int _bind_getRigidBodyB_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRigidBodyB_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btRigidBody & btHingeConstraint::getRigidBodyB() function, expected prototype:\nbtRigidBody & btHingeConstraint::getRigidBodyB()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btRigidBody & btHingeConstraint::getRigidBodyB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btRigidBody* lret = &self->getRigidBodyB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btRigidBody >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHingeConstraint::getRigidBodyB
	static int _bind_getRigidBodyB(lua_State *L) {
		if (_lg_typecheck_getRigidBodyB_overload_1(L)) return _bind_getRigidBodyB_overload_1(L);
		if (_lg_typecheck_getRigidBodyB_overload_2(L)) return _bind_getRigidBodyB_overload_2(L);

		luaL_error(L, "error in function getRigidBodyB, cannot match any of the overloads for function getRigidBodyB:\n  getRigidBodyB()\n  getRigidBodyB()\n");
		return 0;
	}

	// btTransform & btHingeConstraint::getFrameOffsetA()
	static int _bind_getFrameOffsetA(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btHingeConstraint::getFrameOffsetA() function, expected prototype:\nbtTransform & btHingeConstraint::getFrameOffsetA()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btHingeConstraint::getFrameOffsetA(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btHingeConstraint::getFrameOffsetB()
	static int _bind_getFrameOffsetB(lua_State *L) {
		if (!_lg_typecheck_getFrameOffsetB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btHingeConstraint::getFrameOffsetB() function, expected prototype:\nbtTransform & btHingeConstraint::getFrameOffsetB()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btHingeConstraint::getFrameOffsetB(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getFrameOffsetB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// void btHingeConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)
	static int _bind_setFrames(lua_State *L) {
		if (!_lg_typecheck_setFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setFrames(const btTransform & frameA, const btTransform & frameB) function, expected prototype:\nvoid btHingeConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* frameA_ptr=(Luna< btTransform >::check(L,2));
		if( !frameA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameA in btHingeConstraint::setFrames function");
		}
		const btTransform & frameA=*frameA_ptr;
		const btTransform* frameB_ptr=(Luna< btTransform >::check(L,3));
		if( !frameB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameB in btHingeConstraint::setFrames function");
		}
		const btTransform & frameB=*frameB_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setFrames(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setFrames(frameA, frameB);

		return 0;
	}

	// void btHingeConstraint::setAngularOnly(bool angularOnly)
	static int _bind_setAngularOnly(lua_State *L) {
		if (!_lg_typecheck_setAngularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setAngularOnly(bool angularOnly) function, expected prototype:\nvoid btHingeConstraint::setAngularOnly(bool angularOnly)\nClass arguments details:\n");
		}

		bool angularOnly=(bool)(lua_toboolean(L,2)==1);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setAngularOnly(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAngularOnly(angularOnly);

		return 0;
	}

	// void btHingeConstraint::enableAngularMotor(bool enableMotor, float targetVelocity, float maxMotorImpulse)
	static int _bind_enableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_enableAngularMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::enableAngularMotor(bool enableMotor, float targetVelocity, float maxMotorImpulse) function, expected prototype:\nvoid btHingeConstraint::enableAngularMotor(bool enableMotor, float targetVelocity, float maxMotorImpulse)\nClass arguments details:\n");
		}

		bool enableMotor=(bool)(lua_toboolean(L,2)==1);
		float targetVelocity=(float)lua_tonumber(L,3);
		float maxMotorImpulse=(float)lua_tonumber(L,4);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::enableAngularMotor(bool, float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->enableAngularMotor(enableMotor, targetVelocity, maxMotorImpulse);

		return 0;
	}

	// void btHingeConstraint::enableMotor(bool enableMotor)
	static int _bind_enableMotor(lua_State *L) {
		if (!_lg_typecheck_enableMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::enableMotor(bool enableMotor) function, expected prototype:\nvoid btHingeConstraint::enableMotor(bool enableMotor)\nClass arguments details:\n");
		}

		bool enableMotor=(bool)(lua_toboolean(L,2)==1);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::enableMotor(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->enableMotor(enableMotor);

		return 0;
	}

	// void btHingeConstraint::setMaxMotorImpulse(float maxMotorImpulse)
	static int _bind_setMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_setMaxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setMaxMotorImpulse(float maxMotorImpulse) function, expected prototype:\nvoid btHingeConstraint::setMaxMotorImpulse(float maxMotorImpulse)\nClass arguments details:\n");
		}

		float maxMotorImpulse=(float)lua_tonumber(L,2);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setMaxMotorImpulse(float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMaxMotorImpulse(maxMotorImpulse);

		return 0;
	}

	// void btHingeConstraint::setMotorTarget(const btQuaternion & qAinB, float dt)
	static int _bind_setMotorTarget_overload_1(lua_State *L) {
		if (!_lg_typecheck_setMotorTarget_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setMotorTarget(const btQuaternion & qAinB, float dt) function, expected prototype:\nvoid btHingeConstraint::setMotorTarget(const btQuaternion & qAinB, float dt)\nClass arguments details:\narg 1 ID = 2139400\n");
		}

		const btQuaternion* qAinB_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !qAinB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg qAinB in btHingeConstraint::setMotorTarget function");
		}
		const btQuaternion & qAinB=*qAinB_ptr;
		float dt=(float)lua_tonumber(L,3);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setMotorTarget(const btQuaternion &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMotorTarget(qAinB, dt);

		return 0;
	}

	// void btHingeConstraint::setMotorTarget(float targetAngle, float dt)
	static int _bind_setMotorTarget_overload_2(lua_State *L) {
		if (!_lg_typecheck_setMotorTarget_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setMotorTarget(float targetAngle, float dt) function, expected prototype:\nvoid btHingeConstraint::setMotorTarget(float targetAngle, float dt)\nClass arguments details:\n");
		}

		float targetAngle=(float)lua_tonumber(L,2);
		float dt=(float)lua_tonumber(L,3);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setMotorTarget(float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setMotorTarget(targetAngle, dt);

		return 0;
	}

	// Overload binder for btHingeConstraint::setMotorTarget
	static int _bind_setMotorTarget(lua_State *L) {
		if (_lg_typecheck_setMotorTarget_overload_1(L)) return _bind_setMotorTarget_overload_1(L);
		if (_lg_typecheck_setMotorTarget_overload_2(L)) return _bind_setMotorTarget_overload_2(L);

		luaL_error(L, "error in function setMotorTarget, cannot match any of the overloads for function setMotorTarget:\n  setMotorTarget(const btQuaternion &, float)\n  setMotorTarget(float, float)\n");
		return 0;
	}

	// void btHingeConstraint::setLimit(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)
	static int _bind_setLimit(lua_State *L) {
		if (!_lg_typecheck_setLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setLimit(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f) function, expected prototype:\nvoid btHingeConstraint::setLimit(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float low=(float)lua_tonumber(L,2);
		float high=(float)lua_tonumber(L,3);
		float _softness=luatop>3 ? (float)lua_tonumber(L,4) : 0.9f;
		float _biasFactor=luatop>4 ? (float)lua_tonumber(L,5) : 0.3f;
		float _relaxationFactor=luatop>5 ? (float)lua_tonumber(L,6) : 1.0f;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setLimit(float, float, float, float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setLimit(low, high, _softness, _biasFactor, _relaxationFactor);

		return 0;
	}

	// void btHingeConstraint::setAxis(btVector3 & axisInA)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setAxis(btVector3 & axisInA) function, expected prototype:\nvoid btHingeConstraint::setAxis(btVector3 & axisInA)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* axisInA_ptr=(Luna< btVector3 >::check(L,2));
		if( !axisInA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axisInA in btHingeConstraint::setAxis function");
		}
		btVector3 & axisInA=*axisInA_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setAxis(btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setAxis(axisInA);

		return 0;
	}

	// float btHingeConstraint::getLowerLimit() const
	static int _bind_getLowerLimit(lua_State *L) {
		if (!_lg_typecheck_getLowerLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getLowerLimit() const function, expected prototype:\nfloat btHingeConstraint::getLowerLimit() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getLowerLimit() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getLowerLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraint::getUpperLimit() const
	static int _bind_getUpperLimit(lua_State *L) {
		if (!_lg_typecheck_getUpperLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getUpperLimit() const function, expected prototype:\nfloat btHingeConstraint::getUpperLimit() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getUpperLimit() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getUpperLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraint::getHingeAngle()
	static int _bind_getHingeAngle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getHingeAngle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getHingeAngle() function, expected prototype:\nfloat btHingeConstraint::getHingeAngle()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getHingeAngle(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getHingeAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraint::getHingeAngle(const btTransform & transA, const btTransform & transB)
	static int _bind_getHingeAngle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getHingeAngle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getHingeAngle(const btTransform & transA, const btTransform & transB) function, expected prototype:\nfloat btHingeConstraint::getHingeAngle(const btTransform & transA, const btTransform & transB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btHingeConstraint::getHingeAngle function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,3));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btHingeConstraint::getHingeAngle function");
		}
		const btTransform & transB=*transB_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getHingeAngle(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getHingeAngle(transA, transB);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for btHingeConstraint::getHingeAngle
	static int _bind_getHingeAngle(lua_State *L) {
		if (_lg_typecheck_getHingeAngle_overload_1(L)) return _bind_getHingeAngle_overload_1(L);
		if (_lg_typecheck_getHingeAngle_overload_2(L)) return _bind_getHingeAngle_overload_2(L);

		luaL_error(L, "error in function getHingeAngle, cannot match any of the overloads for function getHingeAngle:\n  getHingeAngle()\n  getHingeAngle(const btTransform &, const btTransform &)\n");
		return 0;
	}

	// void btHingeConstraint::testLimit(const btTransform & transA, const btTransform & transB)
	static int _bind_testLimit(lua_State *L) {
		if (!_lg_typecheck_testLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::testLimit(const btTransform & transA, const btTransform & transB) function, expected prototype:\nvoid btHingeConstraint::testLimit(const btTransform & transA, const btTransform & transB)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 13247377\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btHingeConstraint::testLimit function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,3));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btHingeConstraint::testLimit function");
		}
		const btTransform & transB=*transB_ptr;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::testLimit(const btTransform &, const btTransform &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->testLimit(transA, transB);

		return 0;
	}

	// const btTransform & btHingeConstraint::getAFrame() const
	static int _bind_getAFrame_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAFrame_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btHingeConstraint::getAFrame() const function, expected prototype:\nconst btTransform & btHingeConstraint::getAFrame() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btHingeConstraint::getAFrame() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getAFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btHingeConstraint::getAFrame()
	static int _bind_getAFrame_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAFrame_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btHingeConstraint::getAFrame() function, expected prototype:\nbtTransform & btHingeConstraint::getAFrame()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btHingeConstraint::getAFrame(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getAFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHingeConstraint::getAFrame
	static int _bind_getAFrame(lua_State *L) {
		if (_lg_typecheck_getAFrame_overload_1(L)) return _bind_getAFrame_overload_1(L);
		if (_lg_typecheck_getAFrame_overload_2(L)) return _bind_getAFrame_overload_2(L);

		luaL_error(L, "error in function getAFrame, cannot match any of the overloads for function getAFrame:\n  getAFrame()\n  getAFrame()\n");
		return 0;
	}

	// const btTransform & btHingeConstraint::getBFrame() const
	static int _bind_getBFrame_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBFrame_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btHingeConstraint::getBFrame() const function, expected prototype:\nconst btTransform & btHingeConstraint::getBFrame() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btHingeConstraint::getBFrame() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getBFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// btTransform & btHingeConstraint::getBFrame()
	static int _bind_getBFrame_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBFrame_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform & btHingeConstraint::getBFrame() function, expected prototype:\nbtTransform & btHingeConstraint::getBFrame()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform & btHingeConstraint::getBFrame(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		const btTransform* lret = &self->getBFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btHingeConstraint::getBFrame
	static int _bind_getBFrame(lua_State *L) {
		if (_lg_typecheck_getBFrame_overload_1(L)) return _bind_getBFrame_overload_1(L);
		if (_lg_typecheck_getBFrame_overload_2(L)) return _bind_getBFrame_overload_2(L);

		luaL_error(L, "error in function getBFrame, cannot match any of the overloads for function getBFrame:\n  getBFrame()\n  getBFrame()\n");
		return 0;
	}

	// int btHingeConstraint::getSolveLimit()
	static int _bind_getSolveLimit(lua_State *L) {
		if (!_lg_typecheck_getSolveLimit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraint::getSolveLimit() function, expected prototype:\nint btHingeConstraint::getSolveLimit()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraint::getSolveLimit(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->getSolveLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraint::getLimitSign()
	static int _bind_getLimitSign(lua_State *L) {
		if (!_lg_typecheck_getLimitSign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getLimitSign() function, expected prototype:\nfloat btHingeConstraint::getLimitSign()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getLimitSign(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getLimitSign();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btHingeConstraint::getAngularOnly()
	static int _bind_getAngularOnly(lua_State *L) {
		if (!_lg_typecheck_getAngularOnly(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btHingeConstraint::getAngularOnly() function, expected prototype:\nbool btHingeConstraint::getAngularOnly()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btHingeConstraint::getAngularOnly(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getAngularOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btHingeConstraint::getEnableAngularMotor()
	static int _bind_getEnableAngularMotor(lua_State *L) {
		if (!_lg_typecheck_getEnableAngularMotor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btHingeConstraint::getEnableAngularMotor() function, expected prototype:\nbool btHingeConstraint::getEnableAngularMotor()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btHingeConstraint::getEnableAngularMotor(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getEnableAngularMotor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float btHingeConstraint::getMotorTargetVelosity()
	static int _bind_getMotorTargetVelosity(lua_State *L) {
		if (!_lg_typecheck_getMotorTargetVelosity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getMotorTargetVelosity() function, expected prototype:\nfloat btHingeConstraint::getMotorTargetVelosity()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getMotorTargetVelosity(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getMotorTargetVelosity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btHingeConstraint::getMaxMotorImpulse()
	static int _bind_getMaxMotorImpulse(lua_State *L) {
		if (!_lg_typecheck_getMaxMotorImpulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getMaxMotorImpulse() function, expected prototype:\nfloat btHingeConstraint::getMaxMotorImpulse()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getMaxMotorImpulse(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getMaxMotorImpulse();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btHingeConstraint::getUseFrameOffset()
	static int _bind_getUseFrameOffset(lua_State *L) {
		if (!_lg_typecheck_getUseFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btHingeConstraint::getUseFrameOffset() function, expected prototype:\nbool btHingeConstraint::getUseFrameOffset()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btHingeConstraint::getUseFrameOffset(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		bool lret = self->getUseFrameOffset();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btHingeConstraint::setUseFrameOffset(bool frameOffsetOnOff)
	static int _bind_setUseFrameOffset(lua_State *L) {
		if (!_lg_typecheck_setUseFrameOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setUseFrameOffset(bool frameOffsetOnOff) function, expected prototype:\nvoid btHingeConstraint::setUseFrameOffset(bool frameOffsetOnOff)\nClass arguments details:\n");
		}

		bool frameOffsetOnOff=(bool)(lua_toboolean(L,2)==1);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setUseFrameOffset(bool). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setUseFrameOffset(frameOffsetOnOff);

		return 0;
	}

	// void btHingeConstraint::setParam(int num, float value, int axis = -1)
	static int _bind_setParam(lua_State *L) {
		if (!_lg_typecheck_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btHingeConstraint::setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->setParam(num, value, axis);

		return 0;
	}

	// float btHingeConstraint::getParam(int num, int axis = -1) const
	static int _bind_getParam(lua_State *L) {
		if (!_lg_typecheck_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::getParam(int num, int axis = -1) const function, expected prototype:\nfloat btHingeConstraint::getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraint::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraint::calculateSerializeBufferSize() const function, expected prototype:\nint btHingeConstraint::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraint::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btHingeConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	static int _bind_base_setupSolverConstraint(lua_State *L) {
		if (!_lg_typecheck_base_setupSolverConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) function, expected prototype:\nvoid btHingeConstraint::base_setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)\nClass arguments details:\narg 1 ID = 1318117\n");
		}

		btConstraintArray* ca_ptr=(Luna< btAlignedObjectArray< btSolverConstraint > >::checkSubType< btConstraintArray >(L,2));
		if( !ca_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ca in btHingeConstraint::base_setupSolverConstraint function");
		}
		btConstraintArray & ca=*ca_ptr;
		int solverBodyA=(int)lua_tointeger(L,3);
		int solverBodyB=(int)lua_tointeger(L,4);
		float timeStep=(float)lua_tonumber(L,5);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::base_setupSolverConstraint(btConstraintArray &, int, int, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHingeConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);

		return 0;
	}

	// void btHingeConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	static int _bind_base_solveConstraintObsolete(lua_State *L) {
		if (!_lg_typecheck_base_solveConstraintObsolete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) function, expected prototype:\nvoid btHingeConstraint::base_solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)\nClass arguments details:\narg 1 ID = 65712094\narg 2 ID = 65712094\n");
		}

		btSolverBody* _arg1_ptr=(Luna< btSolverBody >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in btHingeConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg1=*_arg1_ptr;
		btSolverBody* _arg2_ptr=(Luna< btSolverBody >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in btHingeConstraint::base_solveConstraintObsolete function");
		}
		btSolverBody & _arg2=*_arg2_ptr;
		float _arg3=(float)lua_tonumber(L,4);

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::base_solveConstraintObsolete(btSolverBody &, btSolverBody &, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHingeConstraint::solveConstraintObsolete(_arg1, _arg2, _arg3);

		return 0;
	}

	// void btHingeConstraint::base_buildJacobian()
	static int _bind_base_buildJacobian(lua_State *L) {
		if (!_lg_typecheck_base_buildJacobian(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::base_buildJacobian() function, expected prototype:\nvoid btHingeConstraint::base_buildJacobian()\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::base_buildJacobian(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHingeConstraint::buildJacobian();

		return 0;
	}

	// void btHingeConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	static int _bind_base_getInfo1(lua_State *L) {
		if (!_lg_typecheck_base_getInfo1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info) function, expected prototype:\nvoid btHingeConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 * info)\nClass arguments details:\narg 1 ID = 17243935\n");
		}

		btTypedConstraint::btConstraintInfo1* info=(Luna< btTypedConstraint::btConstraintInfo1 >::check(L,2));

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::base_getInfo1(btTypedConstraint::btConstraintInfo1 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHingeConstraint::getInfo1(info);

		return 0;
	}

	// void btHingeConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_base_getInfo2(lua_State *L) {
		if (!_lg_typecheck_base_getInfo2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btHingeConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n");
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::base_getInfo2(btTypedConstraint::btConstraintInfo2 *). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHingeConstraint::getInfo2(info);

		return 0;
	}

	// void btHingeConstraint::base_setParam(int num, float value, int axis = -1)
	static int _bind_base_setParam(lua_State *L) {
		if (!_lg_typecheck_base_setParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHingeConstraint::base_setParam(int num, float value, int axis = -1) function, expected prototype:\nvoid btHingeConstraint::base_setParam(int num, float value, int axis = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		float value=(float)lua_tonumber(L,3);
		int axis=luatop>3 ? (int)lua_tointeger(L,4) : -1;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHingeConstraint::base_setParam(int, float, int). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->btHingeConstraint::setParam(num, value, axis);

		return 0;
	}

	// float btHingeConstraint::base_getParam(int num, int axis = -1) const
	static int _bind_base_getParam(lua_State *L) {
		if (!_lg_typecheck_base_getParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btHingeConstraint::base_getParam(int num, int axis = -1) const function, expected prototype:\nfloat btHingeConstraint::base_getParam(int num, int axis = -1) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=(int)lua_tointeger(L,2);
		int axis=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btHingeConstraint::base_getParam(int, int) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->btHingeConstraint::getParam(num, axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btHingeConstraint::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btHingeConstraint::base_calculateSerializeBufferSize() const function, expected prototype:\nint btHingeConstraint::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btHingeConstraint* self=Luna< btTypedObject >::checkSubType< btHingeConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btHingeConstraint::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		int lret = self->btHingeConstraint::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btHingeConstraint* LunaTraits< btHingeConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btHingeConstraint::_bind_ctor(L);
}

void LunaTraits< btHingeConstraint >::_bind_dtor(btHingeConstraint* obj) {
	delete obj;
}

const char LunaTraits< btHingeConstraint >::className[] = "btHingeConstraint";
const char LunaTraits< btHingeConstraint >::fullName[] = "btHingeConstraint";
const char LunaTraits< btHingeConstraint >::moduleName[] = "bullet";
const char* LunaTraits< btHingeConstraint >::parents[] = {"bullet.btTypedConstraint", 0};
const int LunaTraits< btHingeConstraint >::hash = 50236515;
const int LunaTraits< btHingeConstraint >::uniqueIDs[] = {66271199,0};

luna_RegType LunaTraits< btHingeConstraint >::methods[] = {
	{"buildJacobian", &luna_wrapper_btHingeConstraint::_bind_buildJacobian},
	{"getInfo1", &luna_wrapper_btHingeConstraint::_bind_getInfo1},
	{"getInfo1NonVirtual", &luna_wrapper_btHingeConstraint::_bind_getInfo1NonVirtual},
	{"getInfo2", &luna_wrapper_btHingeConstraint::_bind_getInfo2},
	{"getInfo2NonVirtual", &luna_wrapper_btHingeConstraint::_bind_getInfo2NonVirtual},
	{"getInfo2Internal", &luna_wrapper_btHingeConstraint::_bind_getInfo2Internal},
	{"getInfo2InternalUsingFrameOffset", &luna_wrapper_btHingeConstraint::_bind_getInfo2InternalUsingFrameOffset},
	{"updateRHS", &luna_wrapper_btHingeConstraint::_bind_updateRHS},
	{"getRigidBodyA", &luna_wrapper_btHingeConstraint::_bind_getRigidBodyA},
	{"getRigidBodyB", &luna_wrapper_btHingeConstraint::_bind_getRigidBodyB},
	{"getFrameOffsetA", &luna_wrapper_btHingeConstraint::_bind_getFrameOffsetA},
	{"getFrameOffsetB", &luna_wrapper_btHingeConstraint::_bind_getFrameOffsetB},
	{"setFrames", &luna_wrapper_btHingeConstraint::_bind_setFrames},
	{"setAngularOnly", &luna_wrapper_btHingeConstraint::_bind_setAngularOnly},
	{"enableAngularMotor", &luna_wrapper_btHingeConstraint::_bind_enableAngularMotor},
	{"enableMotor", &luna_wrapper_btHingeConstraint::_bind_enableMotor},
	{"setMaxMotorImpulse", &luna_wrapper_btHingeConstraint::_bind_setMaxMotorImpulse},
	{"setMotorTarget", &luna_wrapper_btHingeConstraint::_bind_setMotorTarget},
	{"setLimit", &luna_wrapper_btHingeConstraint::_bind_setLimit},
	{"setAxis", &luna_wrapper_btHingeConstraint::_bind_setAxis},
	{"getLowerLimit", &luna_wrapper_btHingeConstraint::_bind_getLowerLimit},
	{"getUpperLimit", &luna_wrapper_btHingeConstraint::_bind_getUpperLimit},
	{"getHingeAngle", &luna_wrapper_btHingeConstraint::_bind_getHingeAngle},
	{"testLimit", &luna_wrapper_btHingeConstraint::_bind_testLimit},
	{"getAFrame", &luna_wrapper_btHingeConstraint::_bind_getAFrame},
	{"getBFrame", &luna_wrapper_btHingeConstraint::_bind_getBFrame},
	{"getSolveLimit", &luna_wrapper_btHingeConstraint::_bind_getSolveLimit},
	{"getLimitSign", &luna_wrapper_btHingeConstraint::_bind_getLimitSign},
	{"getAngularOnly", &luna_wrapper_btHingeConstraint::_bind_getAngularOnly},
	{"getEnableAngularMotor", &luna_wrapper_btHingeConstraint::_bind_getEnableAngularMotor},
	{"getMotorTargetVelosity", &luna_wrapper_btHingeConstraint::_bind_getMotorTargetVelosity},
	{"getMaxMotorImpulse", &luna_wrapper_btHingeConstraint::_bind_getMaxMotorImpulse},
	{"getUseFrameOffset", &luna_wrapper_btHingeConstraint::_bind_getUseFrameOffset},
	{"setUseFrameOffset", &luna_wrapper_btHingeConstraint::_bind_setUseFrameOffset},
	{"setParam", &luna_wrapper_btHingeConstraint::_bind_setParam},
	{"getParam", &luna_wrapper_btHingeConstraint::_bind_getParam},
	{"calculateSerializeBufferSize", &luna_wrapper_btHingeConstraint::_bind_calculateSerializeBufferSize},
	{"base_setupSolverConstraint", &luna_wrapper_btHingeConstraint::_bind_base_setupSolverConstraint},
	{"base_solveConstraintObsolete", &luna_wrapper_btHingeConstraint::_bind_base_solveConstraintObsolete},
	{"base_buildJacobian", &luna_wrapper_btHingeConstraint::_bind_base_buildJacobian},
	{"base_getInfo1", &luna_wrapper_btHingeConstraint::_bind_base_getInfo1},
	{"base_getInfo2", &luna_wrapper_btHingeConstraint::_bind_base_getInfo2},
	{"base_setParam", &luna_wrapper_btHingeConstraint::_bind_base_setParam},
	{"base_getParam", &luna_wrapper_btHingeConstraint::_bind_base_getParam},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btHingeConstraint::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btHingeConstraint::_bind___eq},
	{"getTable", &luna_wrapper_btHingeConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btHingeConstraint >::converters[] = {
	{"btTypedObject", &luna_wrapper_btHingeConstraint::_cast_from_btTypedObject},
	{0,0}
};

luna_RegEnumType LunaTraits< btHingeConstraint >::enumValues[] = {
	{0,0}
};


