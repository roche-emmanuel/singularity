#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONALGORITHMCREATEFUNC_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONALGORITHMCREATEFUNC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionCreateFunc.h>

class wrapper_btCollisionAlgorithmCreateFunc : public btCollisionAlgorithmCreateFunc, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionAlgorithmCreateFunc() {
		logDEBUG3("Calling delete function for wrapper btCollisionAlgorithmCreateFunc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionAlgorithmCreateFunc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionAlgorithmCreateFunc(lua_State* L, lua_Table* dum) 
		: btCollisionAlgorithmCreateFunc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionAlgorithmCreateFunc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap)
	btCollisionAlgorithm * CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo & arg1, const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap) {
		if(_obj.pushFunction("CreateCollisionAlgorithm")) {
			_obj.pushArg((btCollisionAlgorithmCreateFunc*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			return (_obj.callFunction<btCollisionAlgorithm*>());
		}

		return btCollisionAlgorithmCreateFunc::CreateCollisionAlgorithm(arg1, body0Wrap, body1Wrap);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

