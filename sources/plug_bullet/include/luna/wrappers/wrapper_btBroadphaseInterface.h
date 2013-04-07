#ifndef _WRAPPERS_WRAPPER_BTBROADPHASEINTERFACE_H_
#define _WRAPPERS_WRAPPER_BTBROADPHASEINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btBroadphaseInterface.h>

class wrapper_btBroadphaseInterface : public btBroadphaseInterface, public luna_wrapper_base {

public:
		

	~wrapper_btBroadphaseInterface() {
		logDEBUG3("Calling delete function for wrapper btBroadphaseInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBroadphaseInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBroadphaseInterface(lua_State* L, lua_Table* dum) 
		: btBroadphaseInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBroadphaseInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btBroadphaseProxy * btBroadphaseInterface::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	btBroadphaseProxy * createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) {
		THROW_IF(!_obj.pushFunction("createProxy"),"No implementation for abstract function btBroadphaseInterface::createProxy");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		_obj.pushArg(shapeType);
		_obj.pushArg(userPtr);
		_obj.pushArg(collisionFilterGroup);
		_obj.pushArg(collisionFilterMask);
		_obj.pushArg(dispatcher);
		_obj.pushArg(multiSapProxy);
		return (_obj.callFunction<btBroadphaseProxy*>());
	};

	// void btBroadphaseInterface::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("destroyProxy"),"No implementation for abstract function btBroadphaseInterface::destroyProxy");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(proxy);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// void btBroadphaseInterface::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	void setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("setAabb"),"No implementation for abstract function btBroadphaseInterface::setAabb");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(proxy);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// void btBroadphaseInterface::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const {
		THROW_IF(!_obj.pushFunction("getAabb"),"No implementation for abstract function btBroadphaseInterface::getAabb");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(proxy);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		return (_obj.callFunction<void>());
	};

	// void btBroadphaseInterface::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) {
		THROW_IF(!_obj.pushFunction("rayTest"),"No implementation for abstract function btBroadphaseInterface::rayTest");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(&rayFrom);
		_obj.pushArg(&rayTo);
		_obj.pushArg(&rayCallback);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		return (_obj.callFunction<void>());
	};

	// void btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	void aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) {
		THROW_IF(!_obj.pushFunction("aabbTest"),"No implementation for abstract function btBroadphaseInterface::aabbTest");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		_obj.pushArg(&callback);
		return (_obj.callFunction<void>());
	};

	// void btBroadphaseInterface::calculateOverlappingPairs(btDispatcher * dispatcher)
	void calculateOverlappingPairs(btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("calculateOverlappingPairs"),"No implementation for abstract function btBroadphaseInterface::calculateOverlappingPairs");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache()
	btOverlappingPairCache * getOverlappingPairCache() {
		THROW_IF(!_obj.pushFunction("getOverlappingPairCache"),"No implementation for abstract function btBroadphaseInterface::getOverlappingPairCache");
		_obj.pushArg((btBroadphaseInterface*)this);
		return (_obj.callFunction<btOverlappingPairCache*>());
	};

	// const btOverlappingPairCache * btBroadphaseInterface::getOverlappingPairCache() const
	const btOverlappingPairCache * getOverlappingPairCache() const {
		THROW_IF(!_obj.pushFunction("getOverlappingPairCache"),"No implementation for abstract function btBroadphaseInterface::getOverlappingPairCache");
		_obj.pushArg((btBroadphaseInterface*)this);
		return (_obj.callFunction<btOverlappingPairCache*>());
	};

	// void btBroadphaseInterface::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		THROW_IF(!_obj.pushFunction("getBroadphaseAabb"),"No implementation for abstract function btBroadphaseInterface::getBroadphaseAabb");
		_obj.pushArg((btBroadphaseInterface*)this);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		return (_obj.callFunction<void>());
	};

	// void btBroadphaseInterface::resetPool(btDispatcher * dispatcher)
	void resetPool(btDispatcher * dispatcher) {
		if(_obj.pushFunction("resetPool")) {
			_obj.pushArg((btBroadphaseInterface*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btBroadphaseInterface::resetPool(dispatcher);
	};

	// void btBroadphaseInterface::printStats()
	void printStats() {
		THROW_IF(!_obj.pushFunction("printStats"),"No implementation for abstract function btBroadphaseInterface::printStats");
		_obj.pushArg((btBroadphaseInterface*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

