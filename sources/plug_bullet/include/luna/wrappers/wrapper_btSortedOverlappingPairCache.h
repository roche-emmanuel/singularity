#ifndef _WRAPPERS_WRAPPER_BTSORTEDOVERLAPPINGPAIRCACHE_H_
#define _WRAPPERS_WRAPPER_BTSORTEDOVERLAPPINGPAIRCACHE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>

class wrapper_btSortedOverlappingPairCache : public btSortedOverlappingPairCache, public luna_wrapper_base {

public:
		

	~wrapper_btSortedOverlappingPairCache() {
		logDEBUG3("Calling delete function for wrapper btSortedOverlappingPairCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSortedOverlappingPairCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSortedOverlappingPairCache(lua_State* L, lua_Table* dum) 
		: btSortedOverlappingPairCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btSortedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	void processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) {
		if(_obj.pushFunction("processAllOverlappingPairs")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::processAllOverlappingPairs(arg1, dispatcher);
	};

	// void * btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	void * removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) {
		if(_obj.pushFunction("removeOverlappingPair")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void*>());
		}

		return btSortedOverlappingPairCache::removeOverlappingPair(proxy0, proxy1, dispatcher);
	};

	// void btSortedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	void cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) {
		if(_obj.pushFunction("cleanOverlappingPair")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(&pair);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::cleanOverlappingPair(pair, dispatcher);
	};

	// btBroadphasePair * btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		if(_obj.pushFunction("addOverlappingPair")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btSortedOverlappingPairCache::addOverlappingPair(proxy0, proxy1);
	};

	// btBroadphasePair * btSortedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		if(_obj.pushFunction("findPair")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btSortedOverlappingPairCache::findPair(proxy0, proxy1);
	};

	// void btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("cleanProxyFromPairs")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::cleanProxyFromPairs(proxy, dispatcher);
	};

	// void btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("removeOverlappingPairsContainingProxy")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(proxy, dispatcher);
	};

	// btBroadphasePairArray & btSortedOverlappingPairCache::getOverlappingPairArray()
	btBroadphasePairArray & getOverlappingPairArray() {
		if(_obj.pushFunction("getOverlappingPairArray")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			return *(_obj.callFunction<btBroadphasePairArray*>());
		}

		return btSortedOverlappingPairCache::getOverlappingPairArray();
	};

	// btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr()
	btBroadphasePair * getOverlappingPairArrayPtr() {
		if(_obj.pushFunction("getOverlappingPairArrayPtr")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btSortedOverlappingPairCache::getOverlappingPairArrayPtr();
	};

	// const btBroadphasePair * btSortedOverlappingPairCache::getOverlappingPairArrayPtr() const
	const btBroadphasePair * getOverlappingPairArrayPtr() const {
		if(_obj.pushFunction("getOverlappingPairArrayPtr")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btSortedOverlappingPairCache::getOverlappingPairArrayPtr();
	};

	// int btSortedOverlappingPairCache::getNumOverlappingPairs() const
	int getNumOverlappingPairs() const {
		if(_obj.pushFunction("getNumOverlappingPairs")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			return (_obj.callFunction<int>());
		}

		return btSortedOverlappingPairCache::getNumOverlappingPairs();
	};

	// void btSortedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	void setOverlapFilterCallback(btOverlapFilterCallback * callback) {
		if(_obj.pushFunction("setOverlapFilterCallback")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(callback);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::setOverlapFilterCallback(callback);
	};

	// bool btSortedOverlappingPairCache::hasDeferredRemoval()
	bool hasDeferredRemoval() {
		if(_obj.pushFunction("hasDeferredRemoval")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			return (_obj.callFunction<bool>());
		}

		return btSortedOverlappingPairCache::hasDeferredRemoval();
	};

	// void btSortedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	void setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback) {
		if(_obj.pushFunction("setInternalGhostPairCallback")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(ghostPairCallback);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::setInternalGhostPairCallback(ghostPairCallback);
	};

	// void btSortedOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	void sortOverlappingPairs(btDispatcher * dispatcher) {
		if(_obj.pushFunction("sortOverlappingPairs")) {
			_obj.pushArg((btSortedOverlappingPairCache*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSortedOverlappingPairCache::sortOverlappingPairs(dispatcher);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

