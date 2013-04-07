#ifndef _WRAPPERS_WRAPPER_BTHASHEDOVERLAPPINGPAIRCACHE_H_
#define _WRAPPERS_WRAPPER_BTHASHEDOVERLAPPINGPAIRCACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>

class wrapper_btHashedOverlappingPairCache : public btHashedOverlappingPairCache, public luna_wrapper_base {

public:
		

	~wrapper_btHashedOverlappingPairCache() {
		logDEBUG3("Calling delete function for wrapper btHashedOverlappingPairCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btHashedOverlappingPairCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btHashedOverlappingPairCache(lua_State* L, lua_Table* dum) 
		: btHashedOverlappingPairCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// bool btHashedOverlappingPairCache::hasDeferredRemoval()
	bool hasDeferredRemoval() {
		THROW_IF(!_obj.pushFunction("hasDeferredRemoval"),"No implementation for abstract function btHashedOverlappingPairCache::hasDeferredRemoval");
		_obj.pushArg((btHashedOverlappingPairCache*)this);
		return (_obj.callFunction<bool>());
	};

	// void btHashedOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	void setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback) {
		THROW_IF(!_obj.pushFunction("setInternalGhostPairCallback"),"No implementation for abstract function btHashedOverlappingPairCache::setInternalGhostPairCallback");
		_obj.pushArg((btHashedOverlappingPairCache*)this);
		_obj.pushArg(ghostPairCallback);
		return (_obj.callFunction<void>());
	};

	// void btHashedOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	void sortOverlappingPairs(btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("sortOverlappingPairs"),"No implementation for abstract function btHashedOverlappingPairCache::sortOverlappingPairs");
		_obj.pushArg((btHashedOverlappingPairCache*)this);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};


	// Protected virtual methods:
public:
	// Public virtual methods:
	// void btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("removeOverlappingPairsContainingProxy")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btHashedOverlappingPairCache::removeOverlappingPairsContainingProxy(proxy, dispatcher);
	};

	// void * btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	void * removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) {
		if(_obj.pushFunction("removeOverlappingPair")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void*>());
		}

		return btHashedOverlappingPairCache::removeOverlappingPair(proxy0, proxy1, dispatcher);
	};

	// btBroadphasePair * btHashedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		if(_obj.pushFunction("addOverlappingPair")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btHashedOverlappingPairCache::addOverlappingPair(proxy0, proxy1);
	};

	// void btHashedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		if(_obj.pushFunction("cleanProxyFromPairs")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(proxy);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btHashedOverlappingPairCache::cleanProxyFromPairs(proxy, dispatcher);
	};

	// void btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	void processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) {
		if(_obj.pushFunction("processAllOverlappingPairs")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btHashedOverlappingPairCache::processAllOverlappingPairs(arg1, dispatcher);
	};

	// btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr()
	btBroadphasePair * getOverlappingPairArrayPtr() {
		if(_obj.pushFunction("getOverlappingPairArrayPtr")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btHashedOverlappingPairCache::getOverlappingPairArrayPtr();
	};

	// const btBroadphasePair * btHashedOverlappingPairCache::getOverlappingPairArrayPtr() const
	const btBroadphasePair * getOverlappingPairArrayPtr() const {
		if(_obj.pushFunction("getOverlappingPairArrayPtr")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btHashedOverlappingPairCache::getOverlappingPairArrayPtr();
	};

	// btBroadphasePairArray & btHashedOverlappingPairCache::getOverlappingPairArray()
	btBroadphasePairArray & getOverlappingPairArray() {
		if(_obj.pushFunction("getOverlappingPairArray")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			return *(_obj.callFunction<btBroadphasePairArray*>());
		}

		return btHashedOverlappingPairCache::getOverlappingPairArray();
	};

	// void btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	void cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) {
		if(_obj.pushFunction("cleanOverlappingPair")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(&pair);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btHashedOverlappingPairCache::cleanOverlappingPair(pair, dispatcher);
	};

	// btBroadphasePair * btHashedOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		if(_obj.pushFunction("findPair")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(proxy0);
			_obj.pushArg(proxy1);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btHashedOverlappingPairCache::findPair(proxy0, proxy1);
	};

	// void btHashedOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	void setOverlapFilterCallback(btOverlapFilterCallback * callback) {
		if(_obj.pushFunction("setOverlapFilterCallback")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			_obj.pushArg(callback);
			return (_obj.callFunction<void>());
		}

		return btHashedOverlappingPairCache::setOverlapFilterCallback(callback);
	};

	// int btHashedOverlappingPairCache::getNumOverlappingPairs() const
	int getNumOverlappingPairs() const {
		if(_obj.pushFunction("getNumOverlappingPairs")) {
			_obj.pushArg((btHashedOverlappingPairCache*)this);
			return (_obj.callFunction<int>());
		}

		return btHashedOverlappingPairCache::getNumOverlappingPairs();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

