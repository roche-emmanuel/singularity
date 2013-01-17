#ifndef _WRAPPERS_WRAPPER_BTGJKEPAPENETRATIONDEPTHSOLVER_H_
#define _WRAPPERS_WRAPPER_BTGJKEPAPENETRATIONDEPTHSOLVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.h>

class wrapper_btGjkEpaPenetrationDepthSolver : public btGjkEpaPenetrationDepthSolver, public luna_wrapper_base {

public:
		

	~wrapper_btGjkEpaPenetrationDepthSolver() {
		logDEBUG3("Calling delete function for wrapper btGjkEpaPenetrationDepthSolver");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGjkEpaPenetrationDepthSolver*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGjkEpaPenetrationDepthSolver(lua_State* L, lua_Table* dum) 
		: btGjkEpaPenetrationDepthSolver(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGjkEpaPenetrationDepthSolver*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	bool calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * pConvexA, const btConvexShape * pConvexB, const btTransform & transformA, const btTransform & transformB, btVector3 & v, btVector3 & wWitnessOnA, btVector3 & wWitnessOnB, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) {
		if(_obj.pushFunction("calcPenDepth")) {
			_obj.pushArg((btGjkEpaPenetrationDepthSolver*)this);
			_obj.pushArg(&simplexSolver);
			_obj.pushArg(pConvexA);
			_obj.pushArg(pConvexB);
			_obj.pushArg(&transformA);
			_obj.pushArg(&transformB);
			_obj.pushArg(&v);
			_obj.pushArg(&wWitnessOnA);
			_obj.pushArg(&wWitnessOnB);
			_obj.pushArg(debugDraw);
			_obj.pushArg(stackAlloc);
			return (_obj.callFunction<bool>());
		}

		return btGjkEpaPenetrationDepthSolver::calcPenDepth(simplexSolver, pConvexA, pConvexB, transformA, transformB, v, wWitnessOnA, wWitnessOnB, debugDraw, stackAlloc);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

