#ifndef _WRAPPERS_WRAPPER_BTHINGE_CONSTRAINT_H_
#define _WRAPPERS_WRAPPER_BTHINGE_CONSTRAINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btHinge2Constraint.h>

class wrapper_btHinge2Constraint : public btHinge2Constraint, public luna_wrapper_base {

public:
		

	~wrapper_btHinge2Constraint() {
		logDEBUG3("Calling delete function for wrapper btHinge2Constraint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btHinge2Constraint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btHinge2Constraint(lua_State* L, lua_Table* dum, btRigidBody & rbA, btRigidBody & rbB, btVector3 & anchor, btVector3 & axis1, btVector3 & axis2) 
		: btHinge2Constraint(rbA, rbB, anchor, axis1, axis2), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	void setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) {
		if(_obj.pushFunction("setupSolverConstraint")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(&ca);
			_obj.pushArg(solverBodyA);
			_obj.pushArg(solverBodyB);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);
	};

	// void btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	void solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) {
		if(_obj.pushFunction("solveConstraintObsolete")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::solveConstraintObsolete(arg1, arg2, arg3);
	};

	// void btGeneric6DofConstraint::buildJacobian()
	void buildJacobian() {
		if(_obj.pushFunction("buildJacobian")) {
			_obj.pushArg((btHinge2Constraint*)this);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::buildJacobian();
	};

	// void btGeneric6DofConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	void getInfo1(btTypedConstraint::btConstraintInfo1 * info) {
		if(_obj.pushFunction("getInfo1")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::getInfo1(info);
	};

	// void btGeneric6DofConstraint::calcAnchorPos()
	void calcAnchorPos() {
		if(_obj.pushFunction("calcAnchorPos")) {
			_obj.pushArg((btHinge2Constraint*)this);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::calcAnchorPos();
	};

	// void btGeneric6DofConstraint::setParam(int num, float value, int axis = -1)
	void setParam(int num, float value, int axis = -1) {
		if(_obj.pushFunction("setParam")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(value);
			_obj.pushArg(axis);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::setParam(num, value, axis);
	};

	// float btGeneric6DofConstraint::getParam(int num, int axis = -1) const
	float getParam(int num, int axis = -1) const {
		if(_obj.pushFunction("getParam")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(axis);
			return (_obj.callFunction<float>());
		}

		return btHinge2Constraint::getParam(num, axis);
	};

	// void btGeneric6DofSpringConstraint::setAxis(const btVector3 & axis1, const btVector3 & axis2)
	void setAxis(const btVector3 & axis1, const btVector3 & axis2) {
		if(_obj.pushFunction("setAxis")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(&axis1);
			_obj.pushArg(&axis2);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::setAxis(axis1, axis2);
	};

	// void btGeneric6DofSpringConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	void getInfo2(btTypedConstraint::btConstraintInfo2 * info) {
		if(_obj.pushFunction("getInfo2")) {
			_obj.pushArg((btHinge2Constraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btHinge2Constraint::getInfo2(info);
	};

	// int btGeneric6DofSpringConstraint::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btHinge2Constraint*)this);
			return (_obj.callFunction<int>());
		}

		return btHinge2Constraint::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btGeneric6DofSpringConstraint::init()
	void public_init() {
		return btGeneric6DofSpringConstraint::init();
	};

	// void btGeneric6DofSpringConstraint::internalUpdateSprings(btTypedConstraint::btConstraintInfo2 * info)
	void public_internalUpdateSprings(btTypedConstraint::btConstraintInfo2 * info) {
		return btGeneric6DofSpringConstraint::internalUpdateSprings(info);
	};

	// int btGeneric6DofConstraint::setAngularLimits(btTypedConstraint::btConstraintInfo2 * info, int row_offset, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)
	int public_setAngularLimits(btTypedConstraint::btConstraintInfo2 * info, int row_offset, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB) {
		return btGeneric6DofConstraint::setAngularLimits(info, row_offset, transA, transB, linVelA, linVelB, angVelA, angVelB);
	};

	// int btGeneric6DofConstraint::setLinearLimits(btTypedConstraint::btConstraintInfo2 * info, int row, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)
	int public_setLinearLimits(btTypedConstraint::btConstraintInfo2 * info, int row, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB) {
		return btGeneric6DofConstraint::setLinearLimits(info, row, transA, transB, linVelA, linVelB, angVelA, angVelB);
	};

	// void btGeneric6DofConstraint::buildLinearJacobian(btJacobianEntry & jacLinear, const btVector3 & normalWorld, const btVector3 & pivotAInW, const btVector3 & pivotBInW)
	void public_buildLinearJacobian(btJacobianEntry & jacLinear, const btVector3 & normalWorld, const btVector3 & pivotAInW, const btVector3 & pivotBInW) {
		return btGeneric6DofConstraint::buildLinearJacobian(jacLinear, normalWorld, pivotAInW, pivotBInW);
	};

	// void btGeneric6DofConstraint::buildAngularJacobian(btJacobianEntry & jacAngular, const btVector3 & jointAxisW)
	void public_buildAngularJacobian(btJacobianEntry & jacAngular, const btVector3 & jointAxisW) {
		return btGeneric6DofConstraint::buildAngularJacobian(jacAngular, jointAxisW);
	};

	// void btGeneric6DofConstraint::calculateLinearInfo()
	void public_calculateLinearInfo() {
		return btGeneric6DofConstraint::calculateLinearInfo();
	};

	// void btGeneric6DofConstraint::calculateAngleInfo()
	void public_calculateAngleInfo() {
		return btGeneric6DofConstraint::calculateAngleInfo();
	};

	// btGeneric6DofConstraint & btGeneric6DofConstraint::operator=(btGeneric6DofConstraint & other)
	btGeneric6DofConstraint & public_op_assign(btGeneric6DofConstraint & other) {
		return btGeneric6DofConstraint::operator=(other);
	};

	// float btTypedConstraint::getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)
	float public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact) {
		return btTypedConstraint::getMotorFactor(pos, lowLim, uppLim, vel, timeFact);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_internalUpdateSprings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setAngularLimits(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setLinearLimits(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,17243936)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_buildLinearJacobian(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49949186) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_buildAngularJacobian(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49949186) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_calculateLinearInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_calculateAngleInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66271199) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getMotorFactor(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btGeneric6DofSpringConstraint::public_init()
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::public_init() function, expected prototype:\nvoid btGeneric6DofSpringConstraint::public_init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::public_init(). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init();

		return 0;
	}

	// void btGeneric6DofSpringConstraint::public_internalUpdateSprings(btTypedConstraint::btConstraintInfo2 * info)
	static int _bind_public_internalUpdateSprings(lua_State *L) {
		if (!_lg_typecheck_public_internalUpdateSprings(L)) {
			luaL_error(L, "luna typecheck failed in void btGeneric6DofSpringConstraint::public_internalUpdateSprings(btTypedConstraint::btConstraintInfo2 * info) function, expected prototype:\nvoid btGeneric6DofSpringConstraint::public_internalUpdateSprings(btTypedConstraint::btConstraintInfo2 * info)\nClass arguments details:\narg 1 ID = 17243936\n\n%s",luna_dumpStack(L).c_str());
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGeneric6DofSpringConstraint::public_internalUpdateSprings(btTypedConstraint::btConstraintInfo2 *). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_internalUpdateSprings(info);

		return 0;
	}

	// int btGeneric6DofConstraint::public_setAngularLimits(btTypedConstraint::btConstraintInfo2 * info, int row_offset, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)
	static int _bind_public_setAngularLimits(lua_State *L) {
		if (!_lg_typecheck_public_setAngularLimits(L)) {
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraint::public_setAngularLimits(btTypedConstraint::btConstraintInfo2 * info, int row_offset, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB) function, expected prototype:\nint btGeneric6DofConstraint::public_setAngularLimits(btTypedConstraint::btConstraintInfo2 * info, int row_offset, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)\nClass arguments details:\narg 1 ID = 17243936\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		int row_offset=(int)lua_tointeger(L,3);
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,4));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btGeneric6DofConstraint::public_setAngularLimits function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,5));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btGeneric6DofConstraint::public_setAngularLimits function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* linVelA_ptr=(Luna< btVector3 >::check(L,6));
		if( !linVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelA in btGeneric6DofConstraint::public_setAngularLimits function");
		}
		const btVector3 & linVelA=*linVelA_ptr;
		const btVector3* linVelB_ptr=(Luna< btVector3 >::check(L,7));
		if( !linVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelB in btGeneric6DofConstraint::public_setAngularLimits function");
		}
		const btVector3 & linVelB=*linVelB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,8));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btGeneric6DofConstraint::public_setAngularLimits function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,9));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btGeneric6DofConstraint::public_setAngularLimits function");
		}
		const btVector3 & angVelB=*angVelB_ptr;

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraint::public_setAngularLimits(btTypedConstraint::btConstraintInfo2 *, int, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_setAngularLimits(info, row_offset, transA, transB, linVelA, linVelB, angVelA, angVelB);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGeneric6DofConstraint::public_setLinearLimits(btTypedConstraint::btConstraintInfo2 * info, int row, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)
	static int _bind_public_setLinearLimits(lua_State *L) {
		if (!_lg_typecheck_public_setLinearLimits(L)) {
			luaL_error(L, "luna typecheck failed in int btGeneric6DofConstraint::public_setLinearLimits(btTypedConstraint::btConstraintInfo2 * info, int row, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB) function, expected prototype:\nint btGeneric6DofConstraint::public_setLinearLimits(btTypedConstraint::btConstraintInfo2 * info, int row, const btTransform & transA, const btTransform & transB, const btVector3 & linVelA, const btVector3 & linVelB, const btVector3 & angVelA, const btVector3 & angVelB)\nClass arguments details:\narg 1 ID = 17243936\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\narg 8 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTypedConstraint::btConstraintInfo2* info=(Luna< btTypedConstraint::btConstraintInfo2 >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,4));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btGeneric6DofConstraint::public_setLinearLimits function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,5));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btGeneric6DofConstraint::public_setLinearLimits function");
		}
		const btTransform & transB=*transB_ptr;
		const btVector3* linVelA_ptr=(Luna< btVector3 >::check(L,6));
		if( !linVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelA in btGeneric6DofConstraint::public_setLinearLimits function");
		}
		const btVector3 & linVelA=*linVelA_ptr;
		const btVector3* linVelB_ptr=(Luna< btVector3 >::check(L,7));
		if( !linVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linVelB in btGeneric6DofConstraint::public_setLinearLimits function");
		}
		const btVector3 & linVelB=*linVelB_ptr;
		const btVector3* angVelA_ptr=(Luna< btVector3 >::check(L,8));
		if( !angVelA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelA in btGeneric6DofConstraint::public_setLinearLimits function");
		}
		const btVector3 & angVelA=*angVelA_ptr;
		const btVector3* angVelB_ptr=(Luna< btVector3 >::check(L,9));
		if( !angVelB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg angVelB in btGeneric6DofConstraint::public_setLinearLimits function");
		}
		const btVector3 & angVelB=*angVelB_ptr;

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGeneric6DofConstraint::public_setLinearLimits(btTypedConstraint::btConstraintInfo2 *, int, const btTransform &, const btTransform &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_setLinearLimits(info, row, transA, transB, linVelA, linVelB, angVelA, angVelB);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGeneric6DofConstraint::public_buildLinearJacobian(btJacobianEntry & jacLinear, const btVector3 & normalWorld, const btVector3 & pivotAInW, const btVector3 & pivotBInW)
	static int _bind_public_buildLinearJacobian(lua_State *L) {
		if (!_lg_typecheck_public_buildLinearJacobian(L)) {
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::public_buildLinearJacobian(btJacobianEntry & jacLinear, const btVector3 & normalWorld, const btVector3 & pivotAInW, const btVector3 & pivotBInW) function, expected prototype:\nvoid btGeneric6DofConstraint::public_buildLinearJacobian(btJacobianEntry & jacLinear, const btVector3 & normalWorld, const btVector3 & pivotAInW, const btVector3 & pivotBInW)\nClass arguments details:\narg 1 ID = 49949186\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btJacobianEntry* jacLinear_ptr=(Luna< btJacobianEntry >::check(L,2));
		if( !jacLinear_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jacLinear in btGeneric6DofConstraint::public_buildLinearJacobian function");
		}
		btJacobianEntry & jacLinear=*jacLinear_ptr;
		const btVector3* normalWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !normalWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalWorld in btGeneric6DofConstraint::public_buildLinearJacobian function");
		}
		const btVector3 & normalWorld=*normalWorld_ptr;
		const btVector3* pivotAInW_ptr=(Luna< btVector3 >::check(L,4));
		if( !pivotAInW_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotAInW in btGeneric6DofConstraint::public_buildLinearJacobian function");
		}
		const btVector3 & pivotAInW=*pivotAInW_ptr;
		const btVector3* pivotBInW_ptr=(Luna< btVector3 >::check(L,5));
		if( !pivotBInW_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivotBInW in btGeneric6DofConstraint::public_buildLinearJacobian function");
		}
		const btVector3 & pivotBInW=*pivotBInW_ptr;

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::public_buildLinearJacobian(btJacobianEntry &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_buildLinearJacobian(jacLinear, normalWorld, pivotAInW, pivotBInW);

		return 0;
	}

	// void btGeneric6DofConstraint::public_buildAngularJacobian(btJacobianEntry & jacAngular, const btVector3 & jointAxisW)
	static int _bind_public_buildAngularJacobian(lua_State *L) {
		if (!_lg_typecheck_public_buildAngularJacobian(L)) {
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::public_buildAngularJacobian(btJacobianEntry & jacAngular, const btVector3 & jointAxisW) function, expected prototype:\nvoid btGeneric6DofConstraint::public_buildAngularJacobian(btJacobianEntry & jacAngular, const btVector3 & jointAxisW)\nClass arguments details:\narg 1 ID = 49949186\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btJacobianEntry* jacAngular_ptr=(Luna< btJacobianEntry >::check(L,2));
		if( !jacAngular_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jacAngular in btGeneric6DofConstraint::public_buildAngularJacobian function");
		}
		btJacobianEntry & jacAngular=*jacAngular_ptr;
		const btVector3* jointAxisW_ptr=(Luna< btVector3 >::check(L,3));
		if( !jointAxisW_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg jointAxisW in btGeneric6DofConstraint::public_buildAngularJacobian function");
		}
		const btVector3 & jointAxisW=*jointAxisW_ptr;

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::public_buildAngularJacobian(btJacobianEntry &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_buildAngularJacobian(jacAngular, jointAxisW);

		return 0;
	}

	// void btGeneric6DofConstraint::public_calculateLinearInfo()
	static int _bind_public_calculateLinearInfo(lua_State *L) {
		if (!_lg_typecheck_public_calculateLinearInfo(L)) {
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::public_calculateLinearInfo() function, expected prototype:\nvoid btGeneric6DofConstraint::public_calculateLinearInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::public_calculateLinearInfo(). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_calculateLinearInfo();

		return 0;
	}

	// void btGeneric6DofConstraint::public_calculateAngleInfo()
	static int _bind_public_calculateAngleInfo(lua_State *L) {
		if (!_lg_typecheck_public_calculateAngleInfo(L)) {
			luaL_error(L, "luna typecheck failed in void btGeneric6DofConstraint::public_calculateAngleInfo() function, expected prototype:\nvoid btGeneric6DofConstraint::public_calculateAngleInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGeneric6DofConstraint::public_calculateAngleInfo(). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_calculateAngleInfo();

		return 0;
	}

	// btGeneric6DofConstraint & btGeneric6DofConstraint::public_op_assign(btGeneric6DofConstraint & other)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in btGeneric6DofConstraint & btGeneric6DofConstraint::public_op_assign(btGeneric6DofConstraint & other) function, expected prototype:\nbtGeneric6DofConstraint & btGeneric6DofConstraint::public_op_assign(btGeneric6DofConstraint & other)\nClass arguments details:\narg 1 ID = 66271199\n\n%s",luna_dumpStack(L).c_str());
		}

		btGeneric6DofConstraint* other_ptr=(Luna< btTypedObject >::checkSubType< btGeneric6DofConstraint >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btGeneric6DofConstraint::public_op_assign function");
		}
		btGeneric6DofConstraint & other=*other_ptr;

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btGeneric6DofConstraint & btGeneric6DofConstraint::public_op_assign(btGeneric6DofConstraint &). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btGeneric6DofConstraint* lret = &self->public_op_assign(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGeneric6DofConstraint >::push(L,lret,false);

		return 1;
	}

	// float btTypedConstraint::public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)
	static int _bind_public_getMotorFactor(lua_State *L) {
		if (!_lg_typecheck_public_getMotorFactor(L)) {
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact) function, expected prototype:\nfloat btTypedConstraint::public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float pos=(float)lua_tonumber(L,2);
		float lowLim=(float)lua_tonumber(L,3);
		float uppLim=(float)lua_tonumber(L,4);
		float vel=(float)lua_tonumber(L,5);
		float timeFact=(float)lua_tonumber(L,6);

		wrapper_btHinge2Constraint* self=Luna< btTypedObject >::checkSubType< wrapper_btHinge2Constraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btTypedConstraint::public_getMotorFactor(float, float, float, float, float). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_getMotorFactor(pos, lowLim, uppLim, vel, timeFact);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"internalUpdateSprings",_bind_public_internalUpdateSprings},
		{"setAngularLimits",_bind_public_setAngularLimits},
		{"setLinearLimits",_bind_public_setLinearLimits},
		{"buildLinearJacobian",_bind_public_buildLinearJacobian},
		{"buildAngularJacobian",_bind_public_buildAngularJacobian},
		{"calculateLinearInfo",_bind_public_calculateLinearInfo},
		{"calculateAngleInfo",_bind_public_calculateAngleInfo},
		{"op_assign",_bind_public_op_assign},
		{"getMotorFactor",_bind_public_getMotorFactor},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

