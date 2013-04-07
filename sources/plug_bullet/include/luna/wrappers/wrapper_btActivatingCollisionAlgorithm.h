#ifndef _WRAPPERS_WRAPPER_BTACTIVATINGCOLLISIONALGORITHM_H_
#define _WRAPPERS_WRAPPER_BTACTIVATINGCOLLISIONALGORITHM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h>

class wrapper_btActivatingCollisionAlgorithm : public btActivatingCollisionAlgorithm, public luna_wrapper_base {

public:
		

	~wrapper_btActivatingCollisionAlgorithm() {
		logDEBUG3("Calling delete function for wrapper btActivatingCollisionAlgorithm");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btActivatingCollisionAlgorithm*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btActivatingCollisionAlgorithm(lua_State* L, lua_Table* dum, const btCollisionAlgorithmConstructionInfo & ci) 
		: btActivatingCollisionAlgorithm(ci), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btActivatingCollisionAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btActivatingCollisionAlgorithm(lua_State* L, lua_Table* dum, const btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) 
		: btActivatingCollisionAlgorithm(ci, body0Wrap, body1Wrap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btActivatingCollisionAlgorithm*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionAlgorithm::processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	void processCollision(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		THROW_IF(!_obj.pushFunction("processCollision"),"No implementation for abstract function btCollisionAlgorithm::processCollision");
		_obj.pushArg((btActivatingCollisionAlgorithm*)this);
		_obj.pushArg(body0Wrap);
		_obj.pushArg(body1Wrap);
		_obj.pushArg(&dispatchInfo);
		_obj.pushArg(resultOut);
		return (_obj.callFunction<void>());
	};

	// float btCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut)
	float calculateTimeOfImpact(btCollisionObject * body0, btCollisionObject * body1, const btDispatcherInfo & dispatchInfo, btManifoldResult * resultOut) {
		THROW_IF(!_obj.pushFunction("calculateTimeOfImpact"),"No implementation for abstract function btCollisionAlgorithm::calculateTimeOfImpact");
		_obj.pushArg((btActivatingCollisionAlgorithm*)this);
		_obj.pushArg(body0);
		_obj.pushArg(body1);
		_obj.pushArg(&dispatchInfo);
		_obj.pushArg(resultOut);
		return (_obj.callFunction<float>());
	};

	// void btCollisionAlgorithm::getAllContactManifolds(btManifoldArray & manifoldArray)
	void getAllContactManifolds(btManifoldArray & manifoldArray) {
		THROW_IF(!_obj.pushFunction("getAllContactManifolds"),"No implementation for abstract function btCollisionAlgorithm::getAllContactManifolds");
		_obj.pushArg((btActivatingCollisionAlgorithm*)this);
		_obj.pushArg(&manifoldArray);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

