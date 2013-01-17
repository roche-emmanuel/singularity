#ifndef _WRAPPERS_WRAPPER_BTTRIANGLERAYCASTCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLERAYCASTCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/NarrowPhaseCollision/btRaycastCallback.h>

class wrapper_btTriangleRaycastCallback : public btTriangleRaycastCallback, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleRaycastCallback() {
		logDEBUG3("Calling delete function for wrapper btTriangleRaycastCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleRaycastCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleRaycastCallback(lua_State* L, lua_Table* dum, const btVector3 & from, const btVector3 & to, unsigned int flags = 0) 
		: btTriangleRaycastCallback(from, to, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleRaycastCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btTriangleRaycastCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	void processTriangle(btVector3 * triangle, int partId, int triangleIndex) {
		if(_obj.pushFunction("processTriangle")) {
			_obj.pushArg((btTriangleRaycastCallback*)this);
			_obj.pushArg(triangle);
			_obj.pushArg(partId);
			_obj.pushArg(triangleIndex);
			return (_obj.callFunction<void>());
		}

		return btTriangleRaycastCallback::processTriangle(triangle, partId, triangleIndex);
	};

	// float btTriangleRaycastCallback::reportHit(const btVector3 & hitNormalLocal, float hitFraction, int partId, int triangleIndex)
	float reportHit(const btVector3 & hitNormalLocal, float hitFraction, int partId, int triangleIndex) {
		THROW_IF(!_obj.pushFunction("reportHit"),"No implementation for abstract function btTriangleRaycastCallback::reportHit");
		_obj.pushArg((btTriangleRaycastCallback*)this);
		_obj.pushArg(&hitNormalLocal);
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

