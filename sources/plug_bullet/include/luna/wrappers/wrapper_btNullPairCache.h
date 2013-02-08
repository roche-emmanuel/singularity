#ifndef _WRAPPERS_WRAPPER_BTNULLPAIRCACHE_H_
#define _WRAPPERS_WRAPPER_BTNULLPAIRCACHE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btOverlappingPairCache.h>

class wrapper_btNullPairCache : public btNullPairCache, public luna_wrapper_base {

public:
		

	~wrapper_btNullPairCache() {
		logDEBUG3("Calling delete function for wrapper btNullPairCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btNullPairCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btNullPairCache(lua_State* L, lua_Table* dum) 
		: btNullPairCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr()
	btBroadphasePair * getOverlappingPairArrayPtr() {
		if(_obj.pushFunction("getOverlappingPairArrayPtr")) {
			_obj.pushArg((btNullPairCache*)this);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btNullPairCache::getOverlappingPairArrayPtr();
	};

	// const btBroadphasePair * btNullPairCache::getOverlappingPairArrayPtr() const
	const btBroadphasePair * getOverlappingPairArrayPtr() const {
		if(_obj.pushFunction("getOverlappingPairArrayPtr")) {
			_obj.pushArg((btNullPairCache*)this);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btNullPairCache::getOverlappingPairArrayPtr();
	};

	// btBroadphasePairArray & btNullPairCache::getOverlappingPairArray()
	btBroadphasePairArray & getOverlappingPairArray() {
		if(_obj.pushFunction("getOverlappingPairArray")) {
			_obj.pushArg((btNullPairCache*)this);
			return *(_obj.callFunction<btBroadphasePairArray*>());
		}

		return btNullPairCache::getOverlappingPairArray();
	};

	// void btNullPairCache::cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2)
	void cleanOverlappingPair(btBroadphasePair & arg1, btDispatcher * arg2) {
		if(_obj.pushFunction("cleanOverlappingPair")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::cleanOverlappingPair(arg1, arg2);
	};

	// int btNullPairCache::getNumOverlappingPairs() const
	int getNumOverlappingPairs() const {
		if(_obj.pushFunction("getNumOverlappingPairs")) {
			_obj.pushArg((btNullPairCache*)this);
			return (_obj.callFunction<int>());
		}

		return btNullPairCache::getNumOverlappingPairs();
	};

	// void btNullPairCache::cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2)
	void cleanProxyFromPairs(btBroadphaseProxy * arg1, btDispatcher * arg2) {
		if(_obj.pushFunction("cleanProxyFromPairs")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::cleanProxyFromPairs(arg1, arg2);
	};

	// void btNullPairCache::setOverlapFilterCallback(btOverlapFilterCallback * arg1)
	void setOverlapFilterCallback(btOverlapFilterCallback * arg1) {
		if(_obj.pushFunction("setOverlapFilterCallback")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::setOverlapFilterCallback(arg1);
	};

	// void btNullPairCache::processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2)
	void processAllOverlappingPairs(btOverlapCallback * arg1, btDispatcher * arg2) {
		if(_obj.pushFunction("processAllOverlappingPairs")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::processAllOverlappingPairs(arg1, arg2);
	};

	// btBroadphasePair * btNullPairCache::findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)
	btBroadphasePair * findPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2) {
		if(_obj.pushFunction("findPair")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btNullPairCache::findPair(arg1, arg2);
	};

	// bool btNullPairCache::hasDeferredRemoval()
	bool hasDeferredRemoval() {
		if(_obj.pushFunction("hasDeferredRemoval")) {
			_obj.pushArg((btNullPairCache*)this);
			return (_obj.callFunction<bool>());
		}

		return btNullPairCache::hasDeferredRemoval();
	};

	// void btNullPairCache::setInternalGhostPairCallback(btOverlappingPairCallback * arg1)
	void setInternalGhostPairCallback(btOverlappingPairCallback * arg1) {
		if(_obj.pushFunction("setInternalGhostPairCallback")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::setInternalGhostPairCallback(arg1);
	};

	// btBroadphasePair * btNullPairCache::addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2)
	btBroadphasePair * addOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2) {
		if(_obj.pushFunction("addOverlappingPair")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<btBroadphasePair*>());
		}

		return btNullPairCache::addOverlappingPair(arg1, arg2);
	};

	// void * btNullPairCache::removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3)
	void * removeOverlappingPair(btBroadphaseProxy * arg1, btBroadphaseProxy * arg2, btDispatcher * arg3) {
		if(_obj.pushFunction("removeOverlappingPair")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			return (_obj.callFunction<void*>());
		}

		return btNullPairCache::removeOverlappingPair(arg1, arg2, arg3);
	};

	// void btNullPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2)
	void removeOverlappingPairsContainingProxy(btBroadphaseProxy * arg1, btDispatcher * arg2) {
		if(_obj.pushFunction("removeOverlappingPairsContainingProxy")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::removeOverlappingPairsContainingProxy(arg1, arg2);
	};

	// void btNullPairCache::sortOverlappingPairs(btDispatcher * dispatcher)
	void sortOverlappingPairs(btDispatcher * dispatcher) {
		if(_obj.pushFunction("sortOverlappingPairs")) {
			_obj.pushArg((btNullPairCache*)this);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btNullPairCache::sortOverlappingPairs(dispatcher);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

