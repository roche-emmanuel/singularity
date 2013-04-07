#ifndef _WRAPPERS_WRAPPER_BTDISPATCHER_H_
#define _WRAPPERS_WRAPPER_BTDISPATCHER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/BroadphaseCollision/btDispatcher.h>

class wrapper_btDispatcher : public btDispatcher, public luna_wrapper_base {

public:
		

	~wrapper_btDispatcher() {
		logDEBUG3("Calling delete function for wrapper btDispatcher");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDispatcher*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDispatcher(lua_State* L, lua_Table* dum) 
		: btDispatcher(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDispatcher*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// btCollisionAlgorithm * btDispatcher::findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0)
	btCollisionAlgorithm * findAlgorithm(const btCollisionObjectWrapper * body0Wrap, const btCollisionObjectWrapper * body1Wrap, btPersistentManifold * sharedManifold = 0) {
		THROW_IF(!_obj.pushFunction("findAlgorithm"),"No implementation for abstract function btDispatcher::findAlgorithm");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(body0Wrap);
		_obj.pushArg(body1Wrap);
		_obj.pushArg(sharedManifold);
		return (_obj.callFunction<btCollisionAlgorithm*>());
	};

	// btPersistentManifold * btDispatcher::getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1)
	btPersistentManifold * getNewManifold(const btCollisionObject * b0, const btCollisionObject * b1) {
		THROW_IF(!_obj.pushFunction("getNewManifold"),"No implementation for abstract function btDispatcher::getNewManifold");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(b0);
		_obj.pushArg(b1);
		return (_obj.callFunction<btPersistentManifold*>());
	};

	// void btDispatcher::releaseManifold(btPersistentManifold * manifold)
	void releaseManifold(btPersistentManifold * manifold) {
		THROW_IF(!_obj.pushFunction("releaseManifold"),"No implementation for abstract function btDispatcher::releaseManifold");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(manifold);
		return (_obj.callFunction<void>());
	};

	// void btDispatcher::clearManifold(btPersistentManifold * manifold)
	void clearManifold(btPersistentManifold * manifold) {
		THROW_IF(!_obj.pushFunction("clearManifold"),"No implementation for abstract function btDispatcher::clearManifold");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(manifold);
		return (_obj.callFunction<void>());
	};

	// bool btDispatcher::needsCollision(const btCollisionObject * body0, const btCollisionObject * body1)
	bool needsCollision(const btCollisionObject * body0, const btCollisionObject * body1) {
		THROW_IF(!_obj.pushFunction("needsCollision"),"No implementation for abstract function btDispatcher::needsCollision");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(body0);
		_obj.pushArg(body1);
		return (_obj.callFunction<bool>());
	};

	// bool btDispatcher::needsResponse(const btCollisionObject * body0, const btCollisionObject * body1)
	bool needsResponse(const btCollisionObject * body0, const btCollisionObject * body1) {
		THROW_IF(!_obj.pushFunction("needsResponse"),"No implementation for abstract function btDispatcher::needsResponse");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(body0);
		_obj.pushArg(body1);
		return (_obj.callFunction<bool>());
	};

	// void btDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher)
	void dispatchAllCollisionPairs(btOverlappingPairCache * pairCache, const btDispatcherInfo & dispatchInfo, btDispatcher * dispatcher) {
		THROW_IF(!_obj.pushFunction("dispatchAllCollisionPairs"),"No implementation for abstract function btDispatcher::dispatchAllCollisionPairs");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(pairCache);
		_obj.pushArg(&dispatchInfo);
		_obj.pushArg(dispatcher);
		return (_obj.callFunction<void>());
	};

	// int btDispatcher::getNumManifolds() const
	int getNumManifolds() const {
		THROW_IF(!_obj.pushFunction("getNumManifolds"),"No implementation for abstract function btDispatcher::getNumManifolds");
		_obj.pushArg((btDispatcher*)this);
		return (_obj.callFunction<int>());
	};

	// btPersistentManifold * btDispatcher::getManifoldByIndexInternal(int index)
	btPersistentManifold * getManifoldByIndexInternal(int index) {
		THROW_IF(!_obj.pushFunction("getManifoldByIndexInternal"),"No implementation for abstract function btDispatcher::getManifoldByIndexInternal");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<btPersistentManifold*>());
	};

	// btPoolAllocator * btDispatcher::getInternalManifoldPool()
	btPoolAllocator * getInternalManifoldPool() {
		THROW_IF(!_obj.pushFunction("getInternalManifoldPool"),"No implementation for abstract function btDispatcher::getInternalManifoldPool");
		_obj.pushArg((btDispatcher*)this);
		return (_obj.callFunction<btPoolAllocator*>());
	};

	// const btPoolAllocator * btDispatcher::getInternalManifoldPool() const
	const btPoolAllocator * getInternalManifoldPool() const {
		THROW_IF(!_obj.pushFunction("getInternalManifoldPool"),"No implementation for abstract function btDispatcher::getInternalManifoldPool");
		_obj.pushArg((btDispatcher*)this);
		return (_obj.callFunction<btPoolAllocator*>());
	};

	// void * btDispatcher::allocateCollisionAlgorithm(int size)
	void * allocateCollisionAlgorithm(int size) {
		THROW_IF(!_obj.pushFunction("allocateCollisionAlgorithm"),"No implementation for abstract function btDispatcher::allocateCollisionAlgorithm");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(size);
		return (_obj.callFunction<void*>());
	};

	// void btDispatcher::freeCollisionAlgorithm(void * ptr)
	void freeCollisionAlgorithm(void * ptr) {
		THROW_IF(!_obj.pushFunction("freeCollisionAlgorithm"),"No implementation for abstract function btDispatcher::freeCollisionAlgorithm");
		_obj.pushArg((btDispatcher*)this);
		_obj.pushArg(ptr);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// btPersistentManifold ** btDispatcher::getInternalManifoldPointer()
btPersistentManifold ** getInternalManifoldPointer() {
	THROW_IF(true,"The function call btPersistentManifold ** btDispatcher::getInternalManifoldPointer() is not implemented in wrapper.");
	return NULL;
};

};




#endif

