#ifndef _WRAPPERS_WRAPPER_BTBOX_DBOX_DCOLLISIONALGORITHM_CREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTBOX_DBOX_DCOLLISIONALGORITHM_CREATEFUNC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btBox2dBox2dCollisionAlgorithm.h>

class wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc : public btBox2dBox2dCollisionAlgorithm::CreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc() {
		logDEBUG3("Calling delete function for wrapper btBox2dBox2dCollisionAlgorithm_CreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBox2dBox2dCollisionAlgorithm::CreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBox2dBox2dCollisionAlgorithm_CreateFunc(lua_State* L, lua_Table* dum) 
		: btBox2dBox2dCollisionAlgorithm::CreateFunc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm::CreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btBox2dBox2dCollisionAlgorithm::CreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btBox2dBox2dCollisionAlgorithm::CreateFunc*)this);
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

