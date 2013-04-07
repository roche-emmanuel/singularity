#ifndef _WRAPPERS_WRAPPER_BTCONETWISTCONSTRAINT_H_
#define _WRAPPERS_WRAPPER_BTCONETWISTCONSTRAINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btConeTwistConstraint.h>

class wrapper_btConeTwistConstraint : public btConeTwistConstraint, public luna_wrapper_base {

public:
		

	~wrapper_btConeTwistConstraint() {
		logDEBUG3("Calling delete function for wrapper btConeTwistConstraint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConeTwistConstraint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConeTwistConstraint(lua_State* L, lua_Table* dum, btRigidBody & rbA, btRigidBody & rbB, const btTransform & rbAFrame, const btTransform & rbBFrame) 
		: btConeTwistConstraint(rbA, rbB, rbAFrame, rbBFrame), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btConeTwistConstraint(lua_State* L, lua_Table* dum, btRigidBody & rbA, const btTransform & rbAFrame) 
		: btConeTwistConstraint(rbA, rbAFrame), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	void setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) {
		if(_obj.pushFunction("setupSolverConstraint")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(&ca);
			_obj.pushArg(solverBodyA);
			_obj.pushArg(solverBodyB);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);
	};

	// void btConeTwistConstraint::buildJacobian()
	void buildJacobian() {
		if(_obj.pushFunction("buildJacobian")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::buildJacobian();
	};

	// void btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	void getInfo1(btTypedConstraint::btConstraintInfo1 * info) {
		if(_obj.pushFunction("getInfo1")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::getInfo1(info);
	};

	// void btConeTwistConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	void getInfo2(btTypedConstraint::btConstraintInfo2 * info) {
		if(_obj.pushFunction("getInfo2")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::getInfo2(info);
	};

	// void btConeTwistConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	void solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) {
		if(_obj.pushFunction("solveConstraintObsolete")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::solveConstraintObsolete(arg1, arg2, arg3);
	};

	// void btConeTwistConstraint::setParam(int num, float value, int axis = -1)
	void setParam(int num, float value, int axis = -1) {
		if(_obj.pushFunction("setParam")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(value);
			_obj.pushArg(axis);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::setParam(num, value, axis);
	};

	// void btConeTwistConstraint::setFrames(const btTransform & frameA, const btTransform & frameB)
	void setFrames(const btTransform & frameA, const btTransform & frameB) {
		if(_obj.pushFunction("setFrames")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(&frameA);
			_obj.pushArg(&frameB);
			return (_obj.callFunction<void>());
		}

		return btConeTwistConstraint::setFrames(frameA, frameB);
	};

	// float btConeTwistConstraint::getParam(int num, int axis = -1) const
	float getParam(int num, int axis = -1) const {
		if(_obj.pushFunction("getParam")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(axis);
			return (_obj.callFunction<float>());
		}

		return btConeTwistConstraint::getParam(num, axis);
	};

	// int btConeTwistConstraint::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btConeTwistConstraint*)this);
			return (_obj.callFunction<int>());
		}

		return btConeTwistConstraint::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btConeTwistConstraint::init()
	void public_init() {
		return btConeTwistConstraint::init();
	};

	// void btConeTwistConstraint::computeConeLimitInfo(const btQuaternion & qCone, float & swingAngle, btVector3 & vSwingAxis, float & swingLimit)
	void public_computeConeLimitInfo(const btQuaternion & qCone, float & swingAngle, btVector3 & vSwingAxis, float & swingLimit) {
		return btConeTwistConstraint::computeConeLimitInfo(qCone, swingAngle, vSwingAxis, swingLimit);
	};

	// void btConeTwistConstraint::computeTwistLimitInfo(const btQuaternion & qTwist, float & twistAngle, btVector3 & vTwistAxis)
	void public_computeTwistLimitInfo(const btQuaternion & qTwist, float & twistAngle, btVector3 & vTwistAxis) {
		return btConeTwistConstraint::computeTwistLimitInfo(qTwist, twistAngle, vTwistAxis);
	};

	// void btConeTwistConstraint::adjustSwingAxisToUseEllipseNormal(btVector3 & vSwingAxis) const
	void public_adjustSwingAxisToUseEllipseNormal(btVector3 & vSwingAxis) const {
		return btConeTwistConstraint::adjustSwingAxisToUseEllipseNormal(vSwingAxis);
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

	inline static bool _lg_typecheck_public_computeConeLimitInfo(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeTwistLimitInfo(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2139400) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_adjustSwingAxisToUseEllipseNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getMotorFactor(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btConeTwistConstraint::public_init()
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::public_init() function, expected prototype:\nvoid btConeTwistConstraint::public_init()\nClass arguments details:\n");
		}


		wrapper_btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::public_init(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->public_init();

		return 0;
	}

	// void btConeTwistConstraint::public_computeConeLimitInfo(const btQuaternion & qCone, float & swingAngle, btVector3 & vSwingAxis, float & swingLimit)
	static int _bind_public_computeConeLimitInfo(lua_State *L) {
		if (!_lg_typecheck_public_computeConeLimitInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::public_computeConeLimitInfo(const btQuaternion & qCone, float & swingAngle, btVector3 & vSwingAxis, float & swingLimit) function, expected prototype:\nvoid btConeTwistConstraint::public_computeConeLimitInfo(const btQuaternion & qCone, float & swingAngle, btVector3 & vSwingAxis, float & swingLimit)\nClass arguments details:\narg 1 ID = 2139400\narg 3 ID = 91544891\n");
		}

		const btQuaternion* qCone_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !qCone_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg qCone in btConeTwistConstraint::public_computeConeLimitInfo function");
		}
		const btQuaternion & qCone=*qCone_ptr;
		float swingAngle=(float)lua_tonumber(L,3);
		btVector3* vSwingAxis_ptr=(Luna< btVector3 >::check(L,4));
		if( !vSwingAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vSwingAxis in btConeTwistConstraint::public_computeConeLimitInfo function");
		}
		btVector3 & vSwingAxis=*vSwingAxis_ptr;
		float swingLimit=(float)lua_tonumber(L,5);

		wrapper_btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::public_computeConeLimitInfo(const btQuaternion &, float &, btVector3 &, float &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->public_computeConeLimitInfo(qCone, swingAngle, vSwingAxis, swingLimit);

		return 0;
	}

	// void btConeTwistConstraint::public_computeTwistLimitInfo(const btQuaternion & qTwist, float & twistAngle, btVector3 & vTwistAxis)
	static int _bind_public_computeTwistLimitInfo(lua_State *L) {
		if (!_lg_typecheck_public_computeTwistLimitInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::public_computeTwistLimitInfo(const btQuaternion & qTwist, float & twistAngle, btVector3 & vTwistAxis) function, expected prototype:\nvoid btConeTwistConstraint::public_computeTwistLimitInfo(const btQuaternion & qTwist, float & twistAngle, btVector3 & vTwistAxis)\nClass arguments details:\narg 1 ID = 2139400\narg 3 ID = 91544891\n");
		}

		const btQuaternion* qTwist_ptr=(Luna< btQuadWord >::checkSubType< btQuaternion >(L,2));
		if( !qTwist_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg qTwist in btConeTwistConstraint::public_computeTwistLimitInfo function");
		}
		const btQuaternion & qTwist=*qTwist_ptr;
		float twistAngle=(float)lua_tonumber(L,3);
		btVector3* vTwistAxis_ptr=(Luna< btVector3 >::check(L,4));
		if( !vTwistAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vTwistAxis in btConeTwistConstraint::public_computeTwistLimitInfo function");
		}
		btVector3 & vTwistAxis=*vTwistAxis_ptr;

		wrapper_btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::public_computeTwistLimitInfo(const btQuaternion &, float &, btVector3 &). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->public_computeTwistLimitInfo(qTwist, twistAngle, vTwistAxis);

		return 0;
	}

	// void btConeTwistConstraint::public_adjustSwingAxisToUseEllipseNormal(btVector3 & vSwingAxis) const
	static int _bind_public_adjustSwingAxisToUseEllipseNormal(lua_State *L) {
		if (!_lg_typecheck_public_adjustSwingAxisToUseEllipseNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConeTwistConstraint::public_adjustSwingAxisToUseEllipseNormal(btVector3 & vSwingAxis) const function, expected prototype:\nvoid btConeTwistConstraint::public_adjustSwingAxisToUseEllipseNormal(btVector3 & vSwingAxis) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* vSwingAxis_ptr=(Luna< btVector3 >::check(L,2));
		if( !vSwingAxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vSwingAxis in btConeTwistConstraint::public_adjustSwingAxisToUseEllipseNormal function");
		}
		btVector3 & vSwingAxis=*vSwingAxis_ptr;

		wrapper_btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConeTwistConstraint::public_adjustSwingAxisToUseEllipseNormal(btVector3 &) const. Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->public_adjustSwingAxisToUseEllipseNormal(vSwingAxis);

		return 0;
	}

	// float btTypedConstraint::public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)
	static int _bind_public_getMotorFactor(lua_State *L) {
		if (!_lg_typecheck_public_getMotorFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTypedConstraint::public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact) function, expected prototype:\nfloat btTypedConstraint::public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)\nClass arguments details:\n");
		}

		float pos=(float)lua_tonumber(L,2);
		float lowLim=(float)lua_tonumber(L,3);
		float uppLim=(float)lua_tonumber(L,4);
		float vel=(float)lua_tonumber(L,5);
		float timeFact=(float)lua_tonumber(L,6);

		wrapper_btConeTwistConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btConeTwistConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTypedConstraint::public_getMotorFactor(float, float, float, float, float). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		float lret = self->public_getMotorFactor(pos, lowLim, uppLim, vel, timeFact);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"computeConeLimitInfo",_bind_public_computeConeLimitInfo},
		{"computeTwistLimitInfo",_bind_public_computeTwistLimitInfo},
		{"adjustSwingAxisToUseEllipseNormal",_bind_public_adjustSwingAxisToUseEllipseNormal},
		{"getMotorFactor",_bind_public_getMotorFactor},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

