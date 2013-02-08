#ifndef _WRAPPERS_WRAPPER_BTCONVEXPENETRATIONDEPTHSOLVER_H_
#define _WRAPPERS_WRAPPER_BTCONVEXPENETRATIONDEPTHSOLVER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btConvexPenetrationDepthSolver.h>

class wrapper_btConvexPenetrationDepthSolver : public btConvexPenetrationDepthSolver, public luna_wrapper_base {

public:
		

	~wrapper_btConvexPenetrationDepthSolver() {
		logDEBUG3("Calling delete function for wrapper btConvexPenetrationDepthSolver");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexPenetrationDepthSolver*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexPenetrationDepthSolver(lua_State* L, lua_Table* dum) 
		: btConvexPenetrationDepthSolver(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexPenetrationDepthSolver*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool btConvexPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc)
	bool calcPenDepth(btVoronoiSimplexSolver & simplexSolver, const btConvexShape * convexA, const btConvexShape * convexB, const btTransform & transA, const btTransform & transB, btVector3 & v, btVector3 & pa, btVector3 & pb, class btIDebugDraw * debugDraw, btStackAlloc * stackAlloc) {
		THROW_IF(!_obj.pushFunction("calcPenDepth"),"No implementation for abstract function btConvexPenetrationDepthSolver::calcPenDepth");
		_obj.pushArg((btConvexPenetrationDepthSolver*)this);
		_obj.pushArg(&simplexSolver);
		_obj.pushArg(convexA);
		_obj.pushArg(convexB);
		_obj.pushArg(&transA);
		_obj.pushArg(&transB);
		_obj.pushArg(&v);
		_obj.pushArg(&pa);
		_obj.pushArg(&pb);
		_obj.pushArg(debugDraw);
		_obj.pushArg(stackAlloc);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

