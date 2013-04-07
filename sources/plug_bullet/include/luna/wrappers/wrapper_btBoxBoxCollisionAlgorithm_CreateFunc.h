#ifndef _WRAPPERS_WRAPPER_BTBOXBOXCOLLISIONALGORITHM_CREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTBOXBOXCOLLISIONALGORITHM_CREATEFUNC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btBoxBoxCollisionAlgorithm.h>

class wrapper_btBoxBoxCollisionAlgorithm_CreateFunc : public btBoxBoxCollisionAlgorithm::CreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btBoxBoxCollisionAlgorithm_CreateFunc() {
		logDEBUG3("Calling delete function for wrapper btBoxBoxCollisionAlgorithm_CreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBoxBoxCollisionAlgorithm::CreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBoxBoxCollisionAlgorithm_CreateFunc(lua_State* L, lua_Table* dum) 
		: btBoxBoxCollisionAlgorithm::CreateFunc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBoxBoxCollisionAlgorithm::CreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btBoxBoxCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btBoxBoxCollisionAlgorithm::CreateFunc*)this);
			_obj.pushArg(&ci);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			return (_obj.callFunction<btCollisionAlgorithm*>());
		}

		return CreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

