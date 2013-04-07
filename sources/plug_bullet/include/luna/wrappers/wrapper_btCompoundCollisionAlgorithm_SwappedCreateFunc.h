#ifndef _WRAPPERS_WRAPPER_BTCOMPOUNDCOLLISIONALGORITHM_SWAPPEDCREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTCOMPOUNDCOLLISIONALGORITHM_SWAPPEDCREATEFUNC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.h>

class wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc : public btCompoundCollisionAlgorithm::SwappedCreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc() {
		logDEBUG3("Calling delete function for wrapper btCompoundCollisionAlgorithm_SwappedCreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCompoundCollisionAlgorithm::SwappedCreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCompoundCollisionAlgorithm_SwappedCreateFunc(lua_State* L, lua_Table* dum) 
		: btCompoundCollisionAlgorithm::SwappedCreateFunc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCompoundCollisionAlgorithm::SwappedCreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btCompoundCollisionAlgorithm::SwappedCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & ci, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btCompoundCollisionAlgorithm::SwappedCreateFunc*)this);
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

