#ifndef _WRAPPERS_WRAPPER_BTDISCRETECOLLISIONDETECTORINTERFACE_H_
#define _WRAPPERS_WRAPPER_BTDISCRETECOLLISIONDETECTORINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btDiscreteCollisionDetectorInterface.h>

class wrapper_btDiscreteCollisionDetectorInterface : public btDiscreteCollisionDetectorInterface, public luna_wrapper_base {

public:
		

	~wrapper_btDiscreteCollisionDetectorInterface() {
		logDEBUG3("Calling delete function for wrapper btDiscreteCollisionDetectorInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDiscreteCollisionDetectorInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDiscreteCollisionDetectorInterface(lua_State* L, lua_Table* dum) 
		: btDiscreteCollisionDetectorInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDiscreteCollisionDetectorInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btDiscreteCollisionDetectorInterface::getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false)
	void getClosestPoints(const btDiscreteCollisionDetectorInterface::ClosestPointInput & input, btDiscreteCollisionDetectorInterface::Result & output, class btIDebugDraw * debugDraw, bool swapResults = false) {
		THROW_IF(!_obj.pushFunction("getClosestPoints"),"No implementation for abstract function btDiscreteCollisionDetectorInterface::getClosestPoints");
		_obj.pushArg((btDiscreteCollisionDetectorInterface*)this);
		_obj.pushArg(&input);
		_obj.pushArg(&output);
		_obj.pushArg(debugDraw);
		_obj.pushArg(swapResults);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

