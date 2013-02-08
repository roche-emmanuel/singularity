#ifndef _WRAPPERS_WRAPPER_BTOVERLAPPINGPAIRCACHE_H_
#define _WRAPPERS_WRAPPER_BTOVERLAPPINGPAIRCACHE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>

class wrapper_btOverlappingPairCache : public btOverlappingPairCache, public luna_wrapper_base {

public:
		

	~wrapper_btOverlappingPairCache() {
		logDEBUG3("Calling delete function for wrapper btOverlappingPairCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btOverlappingPairCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btOverlappingPairCache(lua_State* L, lua_Table* dum) 
		: btOverlappingPairCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btOverlappingPairCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btBroadphasePair * btOverlappingPairCallback::addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * addOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		THROW_IF(!_obj.pushFunction("addOverlappingPair"),"No implementation for abstract function btOverlappingPairCallback::addOverlappingPair");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(proxy1);
		return (_obj.callFunction<btBroadphasePair*>());
	};

	// void * btOverlappingPairCallback::removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher)
	void * removeOverlappingPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("removeOverlappingPair"),"No implementation for abstract function btOverlappingPairCallback::removeOverlappingPair");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(proxy1);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void*>());
	};

	// void btOverlappingPairCallback::removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher)
	void removeOverlappingPairsContainingProxy(btBroadphaseProxy * proxy0, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("removeOverlappingPairsContainingProxy"),"No implementation for abstract function btOverlappingPairCallback::removeOverlappingPairsContainingProxy");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr()
	btBroadphasePair * getOverlappingPairArrayPtr() {
		THROW_IF(!_obj.pushFunction("getOverlappingPairArrayPtr"),"No implementation for abstract function btOverlappingPairCache::getOverlappingPairArrayPtr");
		_obj.pushArg((btOverlappingPairCache*)this);
		return (_obj.callFunction<btBroadphasePair*>());
	};

	// const btBroadphasePair * btOverlappingPairCache::getOverlappingPairArrayPtr() const
	const btBroadphasePair * getOverlappingPairArrayPtr() const {
		THROW_IF(!_obj.pushFunction("getOverlappingPairArrayPtr"),"No implementation for abstract function btOverlappingPairCache::getOverlappingPairArrayPtr");
		_obj.pushArg((btOverlappingPairCache*)this);
		return (_obj.callFunction<btBroadphasePair*>());
	};

	// btBroadphasePairArray & btOverlappingPairCache::getOverlappingPairArray()
	btBroadphasePairArray & getOverlappingPairArray() {
		THROW_IF(!_obj.pushFunction("getOverlappingPairArray"),"No implementation for abstract function btOverlappingPairCache::getOverlappingPairArray");
		_obj.pushArg((btOverlappingPairCache*)this);
		return *(_obj.callFunction<btBroadphasePairArray*>());
	};

	// void btOverlappingPairCache::cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher)
	void cleanOverlappingPair(btBroadphasePair & pair, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("cleanOverlappingPair"),"No implementation for abstract function btOverlappingPairCache::cleanOverlappingPair");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(&pair);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// int btOverlappingPairCache::getNumOverlappingPairs() const
	int getNumOverlappingPairs() const {
		THROW_IF(!_obj.pushFunction("getNumOverlappingPairs"),"No implementation for abstract function btOverlappingPairCache::getNumOverlappingPairs");
		_obj.pushArg((btOverlappingPairCache*)this);
		return (_obj.callFunction<int>());
	};

	// void btOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher)
	void cleanProxyFromPairs(btBroadphaseProxy * proxy, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("cleanProxyFromPairs"),"No implementation for abstract function btOverlappingPairCache::cleanProxyFromPairs");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(proxy);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// void btOverlappingPairCache::setOverlapFilterCallback(btOverlapFilterCallback * callback)
	void setOverlapFilterCallback(btOverlapFilterCallback * callback) {
		THROW_IF(!_obj.pushFunction("setOverlapFilterCallback"),"No implementation for abstract function btOverlappingPairCache::setOverlapFilterCallback");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(callback);
		return (_obj.callFunction<void>());
	};

	// void btOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher)
	void processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("processAllOverlappingPairs"),"No implementation for abstract function btOverlappingPairCache::processAllOverlappingPairs");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// btBroadphasePair * btOverlappingPairCache::findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1)
	btBroadphasePair * findPair(btBroadphaseProxy * proxy0, btBroadphaseProxy * proxy1) {
		THROW_IF(!_obj.pushFunction("findPair"),"No implementation for abstract function btOverlappingPairCache::findPair");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(proxy0);
		_obj.pushArg(proxy1);
		return (_obj.callFunction<btBroadphasePair*>());
	};

	// bool btOverlappingPairCache::hasDeferredRemoval()
	bool hasDeferredRemoval() {
		THROW_IF(!_obj.pushFunction("hasDeferredRemoval"),"No implementation for abstract function btOverlappingPairCache::hasDeferredRemoval");
		_obj.pushArg((btOverlappingPairCache*)this);
		return (_obj.callFunction<bool>());
	};

	// void btOverlappingPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback)
	void setInternalGhostPairCallback(btOverlappingPairCallback * ghostPairCallback) {
		THROW_IF(!_obj.pushFunction("setInternalGhostPairCallback"),"No implementation for abstract function btOverlappingPairCache::setInternalGhostPairCallback");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(ghostPairCallback);
		return (_obj.callFunction<void>());
	};

	// void btOverlappingPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	void sortOverlappingPairs(btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("sortOverlappingPairs"),"No implementation for abstract function btOverlappingPairCache::sortOverlappingPairs");
		_obj.pushArg((btOverlappingPairCache*)this);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

