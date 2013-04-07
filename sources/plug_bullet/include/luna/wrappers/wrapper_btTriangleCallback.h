#ifndef _WRAPPERS_WRAPPER_BTTRIANGLECALLBACK_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLECALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleCallback.h>

class wrapper_btTriangleCallback : public btTriangleCallback, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleCallback() {
		logDEBUG3("Calling delete function for wrapper btTriangleCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleCallback(lua_State* L, lua_Table* dum) 
		: btTriangleCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	void processTriangle(btVector3 * triangle, int partId, int triangleIndex) {
		THROW_IF(!_obj.pushFunction("processTriangle"),"No implementation for abstract function btTriangleCallback::processTriangle");
		_obj.pushArg((btTriangleCallback*)this);
		_obj.pushArg(triangle);
		_obj.pushArg(partId);
		_obj.pushArg(triangleIndex);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

