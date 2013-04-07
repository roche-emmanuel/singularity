#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONDISPATCHER_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONDISPATCHER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionDispatcher.h>

class wrapper_btCollisionDispatcher : public btCollisionDispatcher, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionDispatcher() {
		logDEBUG3("Calling delete function for wrapper btCollisionDispatcher");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionDispatcher*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionDispatcher(lua_State* L, lua_Table* dum, btCollisionConfiguration * collisionConfiguration) 
		: btCollisionDispatcher(collisionConfiguration), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int btCollisionDispatcher::getNumManifolds() const
	int getNumManifolds() const {
		if(_obj.pushFunction("getNumManifolds")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			return (_obj.callFunction<int>());
		}

		return btCollisionDispatcher::getNumManifolds();
	};

	// btPersistentManifold * btCollisionDispatcher::getManifoldByIndexInternal(int index)
	btPersistentManifold * getManifoldByIndexInternal(int index) {
		if(_obj.pushFunction("getManifoldByIndexInternal")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btPersistentManifold*>());
		}

		return btCollisionDispatcher::getManifoldByIndexInternal(index);
	};

	// btPersistentManifold * btCollisionDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)
	btPersistentManifold * getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1) {
		if(_obj.pushFunction("getNewManifold")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(b0);
			_obj.pushArg(b1);
			return (_obj.callFunction<btPersistentManifold*>());
		}

		return btCollisionDispatcher::getNewManifold(b0, b1);
	};

	// void btCollisionDispatcher::releaseManifold(btPersistentManifold * manifold)
	void releaseManifold(btPersistentManifold * manifold) {
		if(_obj.pushFunction("releaseManifold")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(manifold);
			return (_obj.callFunction<void>());
		}

		return btCollisionDispatcher::releaseManifold(manifold);
	};

	// void btCollisionDispatcher::clearManifold(btPersistentManifold * manifold)
	void clearManifold(btPersistentManifold * manifold) {
		if(_obj.pushFunction("clearManifold")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(manifold);
			return (_obj.callFunction<void>());
		}

		return btCollisionDispatcher::clearManifold(manifold);
	};

	// btCollisionAlgorithm * btCollisionDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)
	btCollisionAlgorithm * findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0) {
		if(_obj.pushFunction("findAlgorithm")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(body0Wrap);
			_obj.pushArg(body1Wrap);
			_obj.pushArg(sharedManifold);
			return (_obj.callFunction<btCollisionAlgorithm*>());
		}

		return btCollisionDispatcher::findAlgorithm(body0Wrap, body1Wrap, sharedManifold);
	};

	// bool btCollisionDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)
	bool needsCollision(const btCollisionObject * body0, const btCollisionObject * body1) {
		if(_obj.pushFunction("needsCollision")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(body0);
			_obj.pushArg(body1);
			return (_obj.callFunction<bool>());
		}

		return btCollisionDispatcher::needsCollision(body0, body1);
	};

	// bool btCollisionDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)
	bool needsResponse(const btCollisionObject * body0, const btCollisionObject * body1) {
		if(_obj.pushFunction("needsResponse")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(body0);
			_obj.pushArg(body1);
			return (_obj.callFunction<bool>());
		}

		return btCollisionDispatcher::needsResponse(body0, body1);
	};

	// void btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)
	void dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher) {
		if(_obj.pushFunction("dispatchAllCollisionPairs")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(pairCache);
			_obj.pushArg(&dispatchInfo);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btCollisionDispatcher::dispatchAllCollisionPairs(pairCache, dispatchInfo, dispatcher);
	};

	// void * btCollisionDispatcher::allocateCollisionAlgorithm(int size)
	void * allocateCollisionAlgorithm(int size) {
		if(_obj.pushFunction("allocateCollisionAlgorithm")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void*>());
		}

		return btCollisionDispatcher::allocateCollisionAlgorithm(size);
	};

	// void btCollisionDispatcher::freeCollisionAlgorithm(void * ptr)
	void freeCollisionAlgorithm(void * ptr) {
		if(_obj.pushFunction("freeCollisionAlgorithm")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			_obj.pushArg(ptr);
			return (_obj.callFunction<void>());
		}

		return btCollisionDispatcher::freeCollisionAlgorithm(ptr);
	};

	// btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool()
	btPoolAllocator * getInternalManifoldPool() {
		if(_obj.pushFunction("getInternalManifoldPool")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			return (_obj.callFunction<btPoolAllocator*>());
		}

		return btCollisionDispatcher::getInternalManifoldPool();
	};

	// const btPoolAllocator * btCollisionDispatcher::getInternalManifoldPool() const
	const btPoolAllocator * getInternalManifoldPool() const {
		if(_obj.pushFunction("getInternalManifoldPool")) {
			_obj.pushArg((btCollisionDispatcher*)this);
			return (_obj.callFunction<btPoolAllocator*>());
		}

		return btCollisionDispatcher::getInternalManifoldPool();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

