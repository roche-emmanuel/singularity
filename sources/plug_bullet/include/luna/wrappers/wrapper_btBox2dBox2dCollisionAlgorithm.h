#ifndef _WRAPPERS_WRAPPER_BTBOX_DBOX_DCOLLISIONALGORITHM_H_
#define _WRAPPERS_WRAPPER_BTBOX_DBOX_DCOLLISIONALGORITHM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.h>

class wrapper_btBox2dBox2dCollisionAlgorithm : public btBox2dBox2dCollisionAlgorithm, public luna_wrapper_base {

public:
		

	~wrapper_btBox2dBox2dCollisionAlgorithm() {
		logDEBUG3("Calling delete function for wrapper btBox2dBox2dCollisionAlgorithm");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBox2dBox2dCollisionAlgorithm*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBox2dBox2dCollisionAlgorithm(lua_State* L, lua_Table* dum, const btCollisionAlgorithmConstructionInfo & ci) 
		: btBox2dBox2dCollisionAlgorithm(ci), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btBox2dBox2dCollisionAlgorithm(lua_State* L, lua_Table* dum, btPersistentManifold * mf, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) 
		: btBox2dBox2dCollisionAlgorithm(mf, ci, body0Wrap, body1Wrap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btBox2dBox2dCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	void processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("processCollision")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm*)this);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<void>());
		}

		return btBox2dBox2dCollisionAlgorithm::processCollision(body0Wrap, body1Wrap, dispatchInfo, resultOut);
	};

	// float btBox2dBox2dCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	float calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		if(_obj.pushFunction("calculateTimeOfImpact")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm*)this);
			_obj.pushArg(body0);
			_obj.pushArg(body1);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(resultOut);
			return (_obj.callFunction<float>());
		}

		return btBox2dBox2dCollisionAlgorithm::calculateTimeOfImpact(body0, body1, dispatchInfo, resultOut);
	};

	// void btBox2dBox2dCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	void getAllContactManifolds(btManifoldArray & manifoldArray) {
		if(_obj.pushFunction("getAllContactManifolds")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm*)this);
			_obj.pushArg(&manifoldArray);
			return (_obj.callFunction<void>());
		}

		return btBox2dBox2dCollisionAlgorithm::getAllContactManifolds(manifoldArray);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

