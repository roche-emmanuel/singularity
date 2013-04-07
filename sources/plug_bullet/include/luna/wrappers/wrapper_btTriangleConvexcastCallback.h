#ifndef _WRAPPERS_WRAPPER_BTTRIANGLECONVEXCASTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLECONVEXCASTCALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btRaycastCallback.h>

class wrapper_btTriangleConvexcastCallback : public btTriangleConvexcastCallback, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleConvexcastCallback() {
		logDEBUG3("Calling delete function for wrapper btTriangleConvexcastCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleConvexcastCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleConvexcastCallback(lua_State* L, lua_Table* dum, const btConvexShape * convexShape, const btTransform & convexShapeFrom, const btTransform & convexShapeTo, const btTransform & triangleToWorld, const float triangleCollisionMargin) 
		: btTriangleConvexcastCallback(convexShape, convexShapeFrom, convexShapeTo, triangleToWorld, triangleCollisionMargin), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleConvexcastCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTriangleConvexcastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	void processTriangle(btVector3 * triangle, int partId, int triangleIndex) {
		if(_obj.pushFunction("processTriangle")) {
			_obj.pushArg((btTriangleConvexcastCallback*)this);
			_obj.pushArg(triangle);
			_obj.pushArg(partId);
			_obj.pushArg(triangleIndex);
			return (_obj.callFunction<void>());
		}

		return btTriangleConvexcastCallback::processTriangle(triangle, partId, triangleIndex);
	};

	// float btTriangleConvexcastCallback::reportHit(const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction, int partId, int triangleIndex)
	float reportHit(const btVector3 & hitNormalLocal, const btVector3 & hitPointLocal, float hitFraction, int partId, int triangleIndex) {
		THROW_IF(!_obj.pushFunction("reportHit"),"No implementation for abstract function btTriangleConvexcastCallback::reportHit");
		_obj.pushArg((btTriangleConvexcastCallback*)this);
		_obj.pushArg(&hitNormalLocal);
		_obj.pushArg(&hitPointLocal);
		_obj.pushArg(hitFraction);
		_obj.pushArg(partId);
		_obj.pushArg(triangleIndex);
		return (_obj.callFunction<float>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

