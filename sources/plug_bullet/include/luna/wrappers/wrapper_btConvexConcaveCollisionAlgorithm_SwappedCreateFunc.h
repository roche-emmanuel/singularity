#ifndef _WRAPPERS_WRAPPER_BTCONVEXCONCAVECOLLISIONALGORITHM_SWAPPEDCREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTCONVEXCONCAVECOLLISIONALGORITHM_SWAPPEDCREATEFUNC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.h>

class wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc : public btConvexConcaveCollisionAlgorithm::SwappedCreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc() {
		logDEBUG3("Calling delete function for wrapper btConvexConcaveCollisionAlgorithm_SwappedCreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexConcaveCollisionAlgorithm::SwappedCreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexConcaveCollisionAlgorithm_SwappedCreateFunc(lua_State* L, lua_Table* dum) 
		: btConvexConcaveCollisionAlgorithm::SwappedCreateFunc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexConcaveCollisionAlgorithm::SwappedCreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btConvexConcaveCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btConvexConcaveCollisionAlgorithm::SwappedCreateFunc*)this);
			_obj.pushArg(&ci);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			return (_obj.callFunction<btCollisionAlgorithm*>());
		}

		return SwappedCreateFunc::CreateCollisionAlgorithm(ci, body0Wrap, body1Wrap);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

