#ifndef _WRAPPERS_WRAPPER_BTBOXBOXDETECTOR_H_
#define _WRAPPERS_WRAPPER_BTBOXBOXDETECTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btBoxBoxDetector.h>

class wrapper_btBoxBoxDetector : public btBoxBoxDetector, public luna_wrapper_base {

public:
		

	~wrapper_btBoxBoxDetector() {
		logDEBUG3("Calling delete function for wrapper btBoxBoxDetector");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBoxBoxDetector*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBoxBoxDetector(lua_State* L, lua_Table* dum, const btBoxShape * box1, const btBoxShape * box2) 
		: btBoxBoxDetector(box1, box2), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBoxBoxDetector*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btBoxBoxDetector::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	void getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) {
		if(_obj.pushFunction("getClosestPoints")) {
			_obj.pushArg((btBoxBoxDetector*)this);
			_obj.pushArg(&input);
			_obj.pushArg(&output);
			_obj.pushArg(debugDraw);
			_obj.pushArg(swapResults);
			return (_obj.callFunction<void>());
		}

		return btBoxBoxDetector::getClosestPoints(input, output, debugDraw, swapResults);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

