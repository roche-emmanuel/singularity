#ifndef _WRAPPERS_WRAPPER_BTSPHERESPHERECOLLISIONALGORITHM_CREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTSPHERESPHERECOLLISIONALGORITHM_CREATEFUNC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h>

class wrapper_btSphereSphereCollisionAlgorithm_CreateFunc : public btSphereSphereCollisionAlgorithm::CreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btSphereSphereCollisionAlgorithm_CreateFunc() {
		logDEBUG3("Calling delete function for wrapper btSphereSphereCollisionAlgorithm_CreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSphereSphereCollisionAlgorithm::CreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSphereSphereCollisionAlgorithm_CreateFunc(lua_State* L, lua_Table* dum) 
		: btSphereSphereCollisionAlgorithm::CreateFunc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSphereSphereCollisionAlgorithm::CreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btSphereSphereCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * col0Wrap, const btCollisionObjectWrapper * col1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btSphereSphereCollisionAlgorithm::CreateFunc*)this);
			_obj.pushArg(&ci);
			_obj.pushArg(col0Wrap);
			_obj.pushArg(col1Wrap);
			return (_obj.callFunction<btCollisionAlgorithm*>());
		}

		return CreateFunc::CreateCollisionAlgorithm(ci, col0Wrap, col1Wrap);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

