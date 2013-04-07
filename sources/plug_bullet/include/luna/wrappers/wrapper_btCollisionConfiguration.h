#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONCONFIGURATION_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONCONFIGURATION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>

class wrapper_btCollisionConfiguration : public btCollisionConfiguration, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionConfiguration() {
		logDEBUG3("Calling delete function for wrapper btCollisionConfiguration");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionConfiguration*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionConfiguration(lua_State* L, lua_Table* dum) 
		: btCollisionConfiguration(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionConfiguration*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btPoolAllocator * btCollisionConfiguration::getPersistentManifoldPool()
	btPoolAllocator * getPersistentManifoldPool() {
		THROW_IF(!_obj.pushFunction("getPersistentManifoldPool"),"No implementation for abstract function btCollisionConfiguration::getPersistentManifoldPool");
		_obj.pushArg((btCollisionConfiguration*)this);
		return (_obj.callFunction<btPoolAllocator*>());
	};

	// btPoolAllocator * btCollisionConfiguration::getCollisionAlgorithmPool()
	btPoolAllocator * getCollisionAlgorithmPool() {
		THROW_IF(!_obj.pushFunction("getCollisionAlgorithmPool"),"No implementation for abstract function btCollisionConfiguration::getCollisionAlgorithmPool");
		_obj.pushArg((btCollisionConfiguration*)this);
		return (_obj.callFunction<btPoolAllocator*>());
	};

	// btStackAlloc * btCollisionConfiguration::getStackAllocator()
	btStackAlloc * getStackAllocator() {
		THROW_IF(!_obj.pushFunction("getStackAllocator"),"No implementation for abstract function btCollisionConfiguration::getStackAllocator");
		_obj.pushArg((btCollisionConfiguration*)this);
		return (_obj.callFunction<btStackAlloc*>());
	};

	// btCollisionAlgorithmCreateFunc * btCollisionConfiguration::getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1)
	btCollisionAlgorithmCreateFunc * getCollisionAlgorithmCreateFunc(int proxyType0, int proxyType1) {
		THROW_IF(!_obj.pushFunction("getCollisionAlgorithmCreateFunc"),"No implementation for abstract function btCollisionConfiguration::getCollisionAlgorithmCreateFunc");
		_obj.pushArg((btCollisionConfiguration*)this);
		_obj.pushArg(proxyType0);
		_obj.pushArg(proxyType1);
		return (_obj.callFunction<btCollisionAlgorithmCreateFunc*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

