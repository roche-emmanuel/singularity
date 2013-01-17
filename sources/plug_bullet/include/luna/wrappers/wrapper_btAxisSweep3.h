#ifndef _WRAPPERS_WRAPPER_BTAXISSWEEP__H_
#define _WRAPPERS_WRAPPER_BTAXISSWEEP__H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btAxisSweep3.h>

class wrapper_btAxisSweep3 : public btAxisSweep3, public luna_wrapper_base {

public:
		

	~wrapper_btAxisSweep3() {
		logDEBUG3("Calling delete function for wrapper btAxisSweep3");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btAxisSweep3*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btAxisSweep3(lua_State* L, lua_Table* dum, const btVector3 & worldAabbMin, const btVector3 & worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache * pairCache = 0, bool disableRaycastAccelerator = false) 
		: btAxisSweep3(worldAabbMin, worldAabbMax, maxHandles, pairCache, disableRaycastAccelerator), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btAxisSweep3Internal::calculateOverlappingPairs(btDispatcher * dispatcher)
	void calculateOverlappingPairs(btDispatcher * dispatcher) {
		if(_obj.pushFunction("calculateOverlappingPairs")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::calculateOverlappingPairs(dispatcher);
	};

	// void btAxisSweep3Internal::resetPool(btDispatcher * dispatcher)
	void resetPool(btDispatcher * dispatcher) {
		if(_obj.pushFunction("resetPool")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::resetPool(dispatcher);
	};

	// btBroadphaseProxy * btAxisSweep3Internal::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	btBroadphaseProxy * createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) {
		if(_obj.pushFunction("createProxy")) {
			_obj.pushArg((btAxisSweep3*)this);
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

		return btAxisSweep3::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
	};

	// void btAxisSweep3Internal::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("destroyProxy")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::destroyProxy(proxy, dispatcher);
	};

	// void btAxisSweep3Internal::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	void setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) {
		if(_obj.pushFunction("setAabb")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::setAabb(proxy, aabbMin, aabbMax, dispatcher);
	};

	// void btAxisSweep3Internal::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::getAabb(proxy, aabbMin, aabbMax);
	};

	// void btAxisSweep3Internal::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&rayCallback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);
	};

	// void btAxisSweep3Internal::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	void aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) {
		if(_obj.pushFunction("aabbTest")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(&callback);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::aabbTest(aabbMin, aabbMax, callback);
	};

	// btOverlappingPairCache * btAxisSweep3Internal::getOverlappingPairCache()
	btOverlappingPairCache * getOverlappingPairCache() {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btAxisSweep3*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btAxisSweep3::getOverlappingPairCache();
	};

	// const btOverlappingPairCache * btAxisSweep3Internal::getOverlappingPairCache() const
	const btOverlappingPairCache * getOverlappingPairCache() const {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btAxisSweep3*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btAxisSweep3::getOverlappingPairCache();
	};

	// void btAxisSweep3Internal::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getBroadphaseAabb")) {
			_obj.pushArg((btAxisSweep3*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::getBroadphaseAabb(aabbMin, aabbMax);
	};

	// void btAxisSweep3Internal::printStats()
	void printStats() {
		if(_obj.pushFunction("printStats")) {
			_obj.pushArg((btAxisSweep3*)this);
			return (_obj.callFunction<void>());
		}

		return btAxisSweep3::printStats();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

