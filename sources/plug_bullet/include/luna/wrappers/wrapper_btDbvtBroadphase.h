#ifndef _WRAPPERS_WRAPPER_BTDBVTBROADPHASE_H_
#define _WRAPPERS_WRAPPER_BTDBVTBROADPHASE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btDbvtBroadphase.h>

class wrapper_btDbvtBroadphase : public btDbvtBroadphase, public luna_wrapper_base {

public:
		

	~wrapper_btDbvtBroadphase() {
		logDEBUG3("Calling delete function for wrapper btDbvtBroadphase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDbvtBroadphase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDbvtBroadphase(lua_State* L, lua_Table* dum, btOverlappingPairCache * paircache = 0) 
		: btDbvtBroadphase(paircache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btBroadphaseProxy * btDbvtBroadphase::createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy)
	btBroadphaseProxy * createProxy(const btVector3 & aabbMin, const btVector3 & aabbMax, int shapeType, void * userPtr, short int collisionFilterGroup, short int collisionFilterMask, btDispatcher * dispatcher, void * multiSapProxy) {
		if(_obj.pushFunction("createProxy")) {
			_obj.pushArg((btDbvtBroadphase*)this);
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

		return btDbvtBroadphase::createProxy(aabbMin, aabbMax, shapeType, userPtr, collisionFilterGroup, collisionFilterMask, dispatcher, multiSapProxy);
	};

	// void btDbvtBroadphase::destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void destroyProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("destroyProxy")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::destroyProxy(proxy, dispatcher);
	};

	// void btDbvtBroadphase::setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher)
	void setAabb(btBroadphaseProxy * proxy, const btVector3 & aabbMin, const btVector3 & aabbMax, btDispatcher * dispatcher) {
		if(_obj.pushFunction("setAabb")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::setAabb(proxy, aabbMin, aabbMax, dispatcher);
	};

	// void btDbvtBroadphase::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0))
	void rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btBroadphaseRayCallback & rayCallback, const btVector3 & aabbMin = btVector3 (0, 0, 0), const btVector3 & aabbMax = btVector3 (0, 0, 0)) {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(&rayFrom);
			_obj.pushArg(&rayTo);
			_obj.pushArg(&rayCallback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::rayTest(rayFrom, rayTo, rayCallback, aabbMin, aabbMax);
	};

	// void btDbvtBroadphase::aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback)
	void aabbTest(const btVector3 & aabbMin, const btVector3 & aabbMax, btBroadphaseAabbCallback & callback) {
		if(_obj.pushFunction("aabbTest")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			_obj.pushArg(&callback);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::aabbTest(aabbMin, aabbMax, callback);
	};

	// void btDbvtBroadphase::getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(btBroadphaseProxy * proxy, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::getAabb(proxy, aabbMin, aabbMax);
	};

	// void btDbvtBroadphase::calculateOverlappingPairs(btDispatcher * dispatcher)
	void calculateOverlappingPairs(btDispatcher * dispatcher) {
		if(_obj.pushFunction("calculateOverlappingPairs")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::calculateOverlappingPairs(dispatcher);
	};

	// btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache()
	btOverlappingPairCache * getOverlappingPairCache() {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btDbvtBroadphase::getOverlappingPairCache();
	};

	// const btOverlappingPairCache * btDbvtBroadphase::getOverlappingPairCache() const
	const btOverlappingPairCache * getOverlappingPairCache() const {
		if(_obj.pushFunction("getOverlappingPairCache")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			return (_obj.callFunction<btOverlappingPairCache*>());
		}

		return btDbvtBroadphase::getOverlappingPairCache();
	};

	// void btDbvtBroadphase::getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void getBroadphaseAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getBroadphaseAabb")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::getBroadphaseAabb(aabbMin, aabbMax);
	};

	// void btDbvtBroadphase::printStats()
	void printStats() {
		if(_obj.pushFunction("printStats")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::printStats();
	};

	// void btDbvtBroadphase::resetPool(btDispatcher * dispatcher)
	void resetPool(btDispatcher * dispatcher) {
		if(_obj.pushFunction("resetPool")) {
			_obj.pushArg((btDbvtBroadphase*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btDbvtBroadphase::resetPool(dispatcher);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

