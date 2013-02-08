#ifndef _WRAPPERS_WRAPPER_BTMULTISAPBROADPHASE_H_
#define _WRAPPERS_WRAPPER_BTMULTISAPBROADPHASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btMultiSapBroadphase.h>

class wrapper_btMultiSapBroadphase : public btMultiSapBroadphase, public luna_wrapper_base {

public:
		

	~wrapper_btMultiSapBroadphase() {
		logDEBUG3("Calling delete function for wrapper btMultiSapBroadphase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btMultiSapBroadphase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btMultiSapBroadphase(lua_State* L, lua_Table* dum, int maxProxies = 16384, btOverlappingPairCache * pairCache = 0) 
		: btMultiSapBroadphase(maxProxies, pairCache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btBroadphaseInterface::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	void aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) {
		THROW_IF(!_obj.pushFunction("aabbTest"),"No implementation for abstract function btBroadphaseInterface::aabbTest");
		_obj.pushArg((btMultiSapBroadphase*)this);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		_obj.pushArg(&callback);
		return (_obj.callFunction<void>());
	};

	// btBroadphaseProxy * btMultiSapBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	btBroadphaseProxy * createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) {
		if(_obj.pushFunction("createProxy")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(shapeType);
			_obj.pushArg(userPtr);
			_obj.pushArg(collisionFilterGroup);
			_obj.pushArg(collisionFilterMask);
			_obj.pushArg(dispatcher);
			_obj.pushArg(multiSapProxy);
			return (_obj.callFunction<btBroadphaseProxy*>());
		}

		return btMultiSapBroadphase::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
	};

	// void btMultiSapBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("destroyProxy")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::destroyProxy(proxy, dispatcher);
	};

	// void btMultiSapBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	void setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) {
		if(_obj.pushFunction("setAabb")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::setAabb(proxy, aabbMin, aabbMax, dispatcher);
	};

	// void btMultiSapBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::getAabb(proxy, aabbMin, aabbMax);
	};

	// void btMultiSapBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&rayCallback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);
	};

	// void btMultiSapBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)
	void calculateOverlappingPairs(btDispatcher * dispatcher) {
		if(_obj.pushFunction("calculateOverlappingPairs")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::calculateOverlappingPairs(dispatcher);
	};

	// btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache()
	btOverlappingPairCache * getOverlappingPairCache() {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btMultiSapBroadphase::getOverlappingPairCache();
	};

	// const btOverlappingPairCache * btMultiSapBroadphase::getOverlappingPairCache() const
	const btOverlappingPairCache * getOverlappingPairCache() const {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btMultiSapBroadphase::getOverlappingPairCache();
	};

	// void btMultiSapBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getBroadphaseAabb")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::getBroadphaseAabb(aabbMin, aabbMax);
	};

	// void btMultiSapBroadphase::printStats()
	void printStats() {
		if(_obj.pushFunction("printStats")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::printStats();
	};

	// void btMultiSapBroadphase::resetPool(btDispatcher * dispatcher)
	void resetPool(btDispatcher * dispatcher) {
		if(_obj.pushFunction("resetPool")) {
			_obj.pushArg((btMultiSapBroadphase*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btMultiSapBroadphase::resetPool(dispatcher);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

