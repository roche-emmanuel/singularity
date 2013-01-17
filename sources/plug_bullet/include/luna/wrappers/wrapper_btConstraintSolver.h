#ifndef _WRAPPERS_WRAPPER_BTCONSTRAINTSOLVER_H_
#define _WRAPPERS_WRAPPER_BTCONSTRAINTSOLVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/ConstraintSolver/btConstraintSolver.h>

class wrapper_btConstraintSolver : public btConstraintSolver, public luna_wrapper_base {

public:
		

	~wrapper_btConstraintSolver() {
		logDEBUG3("Calling delete function for wrapper btConstraintSolver");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConstraintSolver*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConstraintSolver(lua_State* L, lua_Table* dum) 
		: btConstraintSolver(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConstraintSolver*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btConstraintSolver::prepareSolve(int arg1, int arg2)
	void prepareSolve(int arg1, int arg2) {
		if(_obj.pushFunction("prepareSolve")) {
			_obj.pushArg((btConstraintSolver*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btConstraintSolver::prepareSolve(arg1, arg2);
	};

	// void btConstraintSolver::allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3)
	void allSolved(const btContactSolverInfo & arg1, class btIDebugDraw * arg2, btStackAlloc * arg3) {
		if(_obj.pushFunction("allSolved")) {
			_obj.pushArg((btConstraintSolver*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void>());
		}

		return btConstraintSolver::allSolved(arg1, arg2, arg3);
	};

	// void btConstraintSolver::reset()
	void reset() {
		THROW_IF(!_obj.pushFunction("reset"),"No implementation for abstract function btConstraintSolver::reset");
		_obj.pushArg((btConstraintSolver*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// float btConstraintSolver::solveGroup(btCollisionObject ** bodies, int numBodies, btPersistentManifold ** manifold, int numManifolds, btTypedConstraint ** constraints, int numConstraints, const btContactSolverInfo & info, class btIDebugDraw * debugDrawer, btStackAlloc * stackAlloc, btDispatcher * dispatcher)
float solveGroup(btCollisionObject **, int, btPersistentManifold **, int, btTypedConstraint **, int, const btContactSolverInfo &, class btIDebugDraw *, btStackAlloc *, btDispatcher *) {
	THROW_IF(true,"The function call float btConstraintSolver::solveGroup(btCollisionObject **, int, btPersistentManifold **, int, btTypedConstraint **, int, const btContactSolverInfo &, class btIDebugDraw *, btStackAlloc *, btDispatcher *) is not implemented in wrapper.");
	return float();
};

};




#endif

