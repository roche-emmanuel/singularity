#ifndef _WRAPPERS_WRAPPER_BTTYPEDCONSTRAINT_H_
#define _WRAPPERS_WRAPPER_BTTYPEDCONSTRAINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>

class wrapper_btTypedConstraint : public btTypedConstraint, public luna_wrapper_base {

public:
		

	~wrapper_btTypedConstraint() {
		logDEBUG3("Calling delete function for wrapper btTypedConstraint");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTypedConstraint*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTypedConstraint(lua_State* L, lua_Table* dum, btTypedConstraintType type, btRigidBody & rbA) 
		: btTypedConstraint(type, rbA), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTypedConstraint*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btTypedConstraint(lua_State* L, lua_Table* dum, btTypedConstraintType type, btRigidBody & rbA, btRigidBody & rbB) 
		: btTypedConstraint(type, rbA, rbB), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTypedConstraint*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTypedConstraint::buildJacobian()
	void buildJacobian() {
		if(_obj.pushFunction("buildJacobian")) {
			_obj.pushArg((btTypedConstraint*)this);
			return (_obj.callFunction<void>());
		}

		return btTypedConstraint::buildJacobian();
	};

	// void btTypedConstraint::setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep)
	void setupSolverConstraint(btConstraintArray & ca, int solverBodyA, int solverBodyB, float timeStep) {
		if(_obj.pushFunction("setupSolverConstraint")) {
			_obj.pushArg((btTypedConstraint*)this);
			_obj.pushArg(&ca);
			_obj.pushArg(solverBodyA);
			_obj.pushArg(solverBodyB);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btTypedConstraint::setupSolverConstraint(ca, solverBodyA, solverBodyB, timeStep);
	};

	// void btTypedConstraint::getInfo1(btTypedConstraint::btConstraintInfo1 * info)
	void getInfo1(btTypedConstraint::btConstraintInfo1 * info) {
		THROW_IF(!_obj.pushFunction("getInfo1"),"No implementation for abstract function btTypedConstraint::getInfo1");
		_obj.pushArg((btTypedConstraint*)this);
		_obj.pushArg(info);
		return (_obj.callFunction<void>());
	};

	// void btTypedConstraint::getInfo2(btTypedConstraint::btConstraintInfo2 * info)
	void getInfo2(btTypedConstraint::btConstraintInfo2 * info) {
		THROW_IF(!_obj.pushFunction("getInfo2"),"No implementation for abstract function btTypedConstraint::getInfo2");
		_obj.pushArg((btTypedConstraint*)this);
		_obj.pushArg(info);
		return (_obj.callFunction<void>());
	};

	// void btTypedConstraint::solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3)
	void solveConstraintObsolete(btSolverBody & arg1, btSolverBody & arg2, float arg3) {
		if(_obj.pushFunction("solveConstraintObsolete")) {
			_obj.pushArg((btTypedConstraint*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btTypedConstraint::solveConstraintObsolete(arg1, arg2, arg3);
	};

	// void btTypedConstraint::setParam(int num, float value, int axis = -1)
	void setParam(int num, float value, int axis = -1) {
		THROW_IF(!_obj.pushFunction("setParam"),"No implementation for abstract function btTypedConstraint::setParam");
		_obj.pushArg((btTypedConstraint*)this);
		_obj.pushArg(num);
		_obj.pushArg(value);
		_obj.pushArg(axis);
		return (_obj.callFunction<void>());
	};

	// float btTypedConstraint::getParam(int num, int axis = -1) const
	float getParam(int num, int axis = -1) const {
		THROW_IF(!_obj.pushFunction("getParam"),"No implementation for abstract function btTypedConstraint::getParam");
		_obj.pushArg((btTypedConstraint*)this);
		_obj.pushArg(num);
		_obj.pushArg(axis);
		return (_obj.callFunction<float>());
	};

	// int btTypedConstraint::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTypedConstraint*)this);
			return (_obj.callFunction<int>());
		}

		return btTypedConstraint::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// float btTypedConstraint::getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact)
	float public_getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact) {
		return btTypedConstraint::getMotorFactor(pos, lowLim, uppLim, vel, timeFact);
	};


	// Protected non-virtual checkers:
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

		wrapper_btTypedConstraint* self=Luna< btTypedObject >::checkSubType< wrapper_btTypedConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btTypedConstraint::public_getMotorFactor(float, float, float, float, float). Got : '%s'\n%s",typeid(Luna< btTypedObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

