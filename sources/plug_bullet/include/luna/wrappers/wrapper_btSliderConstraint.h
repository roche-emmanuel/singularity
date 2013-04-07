#ifndef _WRAPPERS_WRAPPER_BTSLIDERCONSTRAINT_H_
#define _WRAPPERS_WRAPPER_BTSLIDERCONSTRAINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btSliderConstraint.h>

class wrapper_btSliderConstraint : public btSliderConstraint, public luna_wrapper_base {

public:
		

	~wrapper_btSliderConstraint() {
		logDEBUG3("Calling delete function for wrapper btSliderConstraint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSliderConstraint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSliderConstraint(lua_State* L, lua_Table* dum, btRigidBody & rbA, btRigidBody & rbB, const btTransform & frameInA, const btTransform & frameInB, bool useLinearReferenceFrameA) 
		: btSliderConstraint(rbA, rbB, frameInA, frameInB, useLinearReferenceFrameA), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btSliderConstraint(lua_State* L, lua_Table* dum, btRigidBody & rbB, const btTransform & frameInB, bool useLinearReferenceFrameA) 
		: btSliderConstraint(rbB, frameInB, useLinearReferenceFrameA), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTypedConstraint::buildJacobian()
	void buildJacobian() {
		if(_obj.pushFunction("buildJacobian")) {
			_obj.pushArg((btSliderConstraint*)this);
			return (_obj.callFunction<void>());
		}

		return btSliderConstraint::buildJacobian();
	};

	// void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	void setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) {
		if(_obj.pushFunction("setupSolverConstraint")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.pushArg(&ca);
			_obj.pushArg(solverBodyA);
			_obj.pushArg(solverBodyB);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btSliderConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);
	};

	// void btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	void solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) {
		if(_obj.pushFunction("solveConstraintObsolete")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btSliderConstraint::solveConstraintObsolete(arg1, arg2, arg3);
	};

	// void btSliderConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	void getInfo1(btTypedConstraint::btConstraintInfo1 * info) {
		if(_obj.pushFunction("getInfo1")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btSliderConstraint::getInfo1(info);
	};

	// void btSliderConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	void getInfo2(btTypedConstraint::btConstraintInfo2 * info) {
		if(_obj.pushFunction("getInfo2")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btSliderConstraint::getInfo2(info);
	};

	// void btSliderConstraint::setParam(int num, float value, int axis = -1)
	void setParam(int num, float value, int axis = -1) {
		if(_obj.pushFunction("setParam")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(value);
			_obj.pushArg(axis);
			return (_obj.callFunction<void>());
		}

		return btSliderConstraint::setParam(num, value, axis);
	};

	// float btSliderConstraint::getParam(int num, int axis = -1) const
	float getParam(int num, int axis = -1) const {
		if(_obj.pushFunction("getParam")) {
			_obj.pushArg((btSliderConstraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(axis);
			return (_obj.callFunction<float>());
		}

		return btSliderConstraint::getParam(num, axis);
	};

	// int btSliderConstraint::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btSliderConstraint*)this);
			return (_obj.callFunction<int>());
		}

		return btSliderConstraint::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btSliderConstraint::initParams()
	void public_initParams() {
		return btSliderConstraint::initParams();
	};

	// float btTypedConstraint::getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)
	float public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact) {
		return btTypedConstraint::getMotorFactor(pos, lowLim, uppLim, vel, timeFact);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_initParams(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// void btSliderConstraint::public_initParams()
	static int _bind_public_initParams(lua_State *L) {
		if (!_lg_typecheck_public_initParams(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSliderConstraint::public_initParams() function, expected prototype:\nvoid btSliderConstraint::public_initParams()\nClass arguments details:\n");
		}


		wrapper_btSliderConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btSliderConstraint >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSliderConstraint::public_initParams(). Got : '%s'",typeid(Luna< btTypedObject >::check(L,1)).name());
		}
		self->public_initParams();

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

		wrapper_btSliderConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btSliderConstraint >(L,1);
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
		{"initParams",_bind_public_initParams},
		{"getMotorFactor",_bind_public_getMotorFactor},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

