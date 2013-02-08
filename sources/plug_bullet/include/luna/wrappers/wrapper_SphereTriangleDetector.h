#ifndef _WRAPPERS_WRAPPER_SPHERETRIANGLEDETECTOR_H_
#define _WRAPPERS_WRAPPER_SPHERETRIANGLEDETECTOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/SphereTriangleDetector.h>

class wrapper_SphereTriangleDetector : public SphereTriangleDetector, public luna_wrapper_base {

public:
		

	~wrapper_SphereTriangleDetector() {
		logDEBUG3("Calling delete function for wrapper SphereTriangleDetector");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SphereTriangleDetector*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SphereTriangleDetector(lua_State* L, lua_Table* dum, btSphereShape * sphere, btTriangleShape * triangle, float contactBreakingThreshold) 
		: SphereTriangleDetector(sphere, triangle, contactBreakingThreshold), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SphereTriangleDetector*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void SphereTriangleDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	void getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) {
		if(_obj.pushFunction("getClosestPoints")) {
			_obj.pushArg((SphereTriangleDetector*)this);
			_obj.pushArg(&input);
			_obj.pushArg(&output);
			_obj.pushArg(debugDraw);
			_obj.pushArg(swapResults);
			return (_obj.callFunction<void>());
		}

		return SphereTriangleDetector::getClosestPoints(input, output, debugDraw, swapResults);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

