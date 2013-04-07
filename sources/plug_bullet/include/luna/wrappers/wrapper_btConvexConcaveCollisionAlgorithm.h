#ifndef _WRAPPERS_WRAPPER_BTCONVEXCONCAVECOLLISIONALGORITHM_H_
#define _WRAPPERS_WRAPPER_BTCONVEXCONCAVECOLLISIONALGORITHM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.h>

class wrapper_btConvexConcaveCollisionAlgorithm : public btConvexConcaveCollisionAlgorithm, public luna_wrapper_base {

public:
		

	~wrapper_btConvexConcaveCollisionAlgorithm() {
		logDEBUG3("Calling delete function for wrapper btConvexConcaveCollisionAlgorithm");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexConcaveCollisionAlgorithm*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexConcaveCollisionAlgorithm(lua_State* L, lua_Table* dum, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, bool isSwapped) 
		: btConvexConcaveCollisionAlgorithm(ci, body0Wrap, body1Wrap, isSwapped), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexConcaveCollisionAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btConvexConcaveCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	void processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("processCollision")) {
			_obj.pushArg((btConvexConcaveCollisionAlgorithm*)this);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<void>());
		}

		return btConvexConcaveCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);
	};

	// float btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	float calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("calculateTimeOfImpact")) {
			_obj.pushArg((btConvexConcaveCollisionAlgorithm*)this);
			_obj.pushArg(body0);
			_obj.pushArg(body1);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<float>());
		}

		return btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
	};

	// void btConvexConcaveCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	void getAllContactManifolds(btManifoldArray & manifoldArray) {
		if(_obj.pushFunction("getAllContactManifolds")) {
			_obj.pushArg((btConvexConcaveCollisionAlgorithm*)this);
			_obj.pushArg(&manifoldArray);
			return (_obj.callFunction<void>());
		}

		return btConvexConcaveCollisionAlgorithm::getAllContactManifolds(manifoldArray);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

