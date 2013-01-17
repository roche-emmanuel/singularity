#ifndef _WRAPPERS_WRAPPER_BTPOINT_POINTCONSTRAINT_H_
#define _WRAPPERS_WRAPPER_BTPOINT_POINTCONSTRAINT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h>

class wrapper_btPoint2PointConstraint : public btPoint2PointConstraint, public luna_wrapper_base {

public:
		

	~wrapper_btPoint2PointConstraint() {
		logDEBUG3("Calling delete function for wrapper btPoint2PointConstraint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btPoint2PointConstraint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btPoint2PointConstraint(lua_State* L, lua_Table* dum, btRigidBody & rbA, btRigidBody & rbB, const btVector3 & pivotInA, const btVector3 & pivotInB) 
		: btPoint2PointConstraint(rbA, rbB, pivotInA, pivotInB), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btPoint2PointConstraint(lua_State* L, lua_Table* dum, btRigidBody & rbA, const btVector3 & pivotInA) 
		: btPoint2PointConstraint(rbA, pivotInA), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	void setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) {
		if(_obj.pushFunction("setupSolverConstraint")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.pushArg(&ca);
			_obj.pushArg(solverBodyA);
			_obj.pushArg(solverBodyB);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btPoint2PointConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);
	};

	// void btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	void solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) {
		if(_obj.pushFunction("solveConstraintObsolete")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btPoint2PointConstraint::solveConstraintObsolete(arg1, arg2, arg3);
	};

	// void btPoint2PointConstraint::buildJacobian()
	void buildJacobian() {
		if(_obj.pushFunction("buildJacobian")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			return (_obj.callFunction<void>());
		}

		return btPoint2PointConstraint::buildJacobian();
	};

	// void btPoint2PointConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	void getInfo1(btTypedConstraint::btConstraintInfo1 * info) {
		if(_obj.pushFunction("getInfo1")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btPoint2PointConstraint::getInfo1(info);
	};

	// void btPoint2PointConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	void getInfo2(btTypedConstraint::btConstraintInfo2 * info) {
		if(_obj.pushFunction("getInfo2")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.pushArg(info);
			return (_obj.callFunction<void>());
		}

		return btPoint2PointConstraint::getInfo2(info);
	};

	// void btPoint2PointConstraint::setParam(int num, float value, int axis = -1)
	void setParam(int num, float value, int axis = -1) {
		if(_obj.pushFunction("setParam")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(value);
			_obj.pushArg(axis);
			return (_obj.callFunction<void>());
		}

		return btPoint2PointConstraint::setParam(num, value, axis);
	};

	// float btPoint2PointConstraint::getParam(int num, int axis = -1) const
	float getParam(int num, int axis = -1) const {
		if(_obj.pushFunction("getParam")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			_obj.pushArg(num);
			_obj.pushArg(axis);
			return (_obj.callFunction<float>());
		}

		return btPoint2PointConstraint::getParam(num, axis);
	};

	// int btPoint2PointConstraint::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btPoint2PointConstraint*)this);
			return (_obj.callFunction<int>());
		}

		return btPoint2PointConstraint::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// float btTypedConstraint::getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)
	float public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact) {
		return btTypedConstraint::getMotorFactor(pos, lowLim, uppLim, vel, timeFact);
	};


	// Protected non-virtual checkers:
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

		wrapper_btPoint2PointConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btPoint2PointConstraint >(L,1);
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
		{"getMotorFactor",_bind_public_getMotorFactor},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

