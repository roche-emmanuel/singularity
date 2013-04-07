#ifndef _WRAPPERS_WRAPPER_BTCONVEXTRIANGLECALLBACK_H_
#define _WRAPPERS_WRAPPER_BTCONVEXTRIANGLECALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.h>

class wrapper_btConvexTriangleCallback : public btConvexTriangleCallback, public luna_wrapper_base {

public:
		

	~wrapper_btConvexTriangleCallback() {
		logDEBUG3("Calling delete function for wrapper btConvexTriangleCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexTriangleCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexTriangleCallback(lua_State* L, lua_Table* dum, btDispatcher * dispatcher, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) 
		: btConvexTriangleCallback(dispatcher, body0Wrap, body1Wrap, isSwapped), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexTriangleCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btConvexTriangleCallback::processTriangle(btVector3 * triangle, int partId, int triangleIndex)
	void processTriangle(btVector3 * triangle, int partId, int triangleIndex) {
		if(_obj.pushFunction("processTriangle")) {
			_obj.pushArg((btConvexTriangleCallback*)this);
			_obj.pushArg(triangle);
			_obj.pushArg(partId);
			_obj.pushArg(triangleIndex);
			return (_obj.callFunction<void>());
		}

		return btConvexTriangleCallback::processTriangle(triangle, partId, triangleIndex);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

