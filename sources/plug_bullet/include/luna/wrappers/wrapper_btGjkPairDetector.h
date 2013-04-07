#ifndef _WRAPPERS_WRAPPER_BTGJKPAIRDETECTOR_H_
#define _WRAPPERS_WRAPPER_BTGJKPAIRDETECTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btGjkPairDetector.h>

class wrapper_btGjkPairDetector : public btGjkPairDetector, public luna_wrapper_base {

public:
		

	~wrapper_btGjkPairDetector() {
		logDEBUG3("Calling delete function for wrapper btGjkPairDetector");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGjkPairDetector*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGjkPairDetector(lua_State* L, lua_Table* dum, const btConvexShape * objectA, const btConvexShape * objectB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) 
		: btGjkPairDetector(objectA, objectB, simplexSolver, penetrationDepthSolver), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGjkPairDetector*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btGjkPairDetector(lua_State* L, lua_Table* dum, const btConvexShape * objectA, const btConvexShape * objectB, int shapeTypeA, int shapeTypeB, float marginA, float marginB, btVoronoiSimplexSolver * simplexSolver, btConvexPenetrationDepthSolver * penetrationDepthSolver) 
		: btGjkPairDetector(objectA, objectB, shapeTypeA, shapeTypeB, marginA, marginB, simplexSolver, penetrationDepthSolver), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGjkPairDetector*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btGjkPairDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	void getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) {
		if(_obj.pushFunction("getClosestPoints")) {
			_obj.pushArg((btGjkPairDetector*)this);
			_obj.pushArg(&input);
			_obj.pushArg(&output);
			_obj.pushArg(debugDraw);
			_obj.pushArg(swapResults);
			return (_obj.callFunction<void>());
		}

		return btGjkPairDetector::getClosestPoints(input, output, debugDraw, swapResults);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

