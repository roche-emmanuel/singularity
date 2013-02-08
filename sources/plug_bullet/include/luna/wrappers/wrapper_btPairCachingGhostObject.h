#ifndef _WRAPPERS_WRAPPER_BTPAIRCACHINGGHOSTOBJECT_H_
#define _WRAPPERS_WRAPPER_BTPAIRCACHINGGHOSTOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btGhostObject.h>

class wrapper_btPairCachingGhostObject : public btPairCachingGhostObject, public luna_wrapper_base {

public:
		

	~wrapper_btPairCachingGhostObject() {
		logDEBUG3("Calling delete function for wrapper btPairCachingGhostObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btPairCachingGhostObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btPairCachingGhostObject(lua_State* L, lua_Table* dum) 
		: btPairCachingGhostObject(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btPairCachingGhostObject*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool btCollisionObject::checkCollideWithOverride(const btCollisionObject * arg1) const
	bool checkCollideWithOverride(const btCollisionObject * arg1) const {
		if(_obj.pushFunction("checkCollideWithOverride")) {
			_obj.pushArg((btPairCachingGhostObject*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return btPairCachingGhostObject::checkCollideWithOverride(arg1);
	};

public:
	// Public virtual methods:
	// void btCollisionObject::setCollisionShape(btCollisionShape * collisionShape)
	void setCollisionShape(btCollisionShape * collisionShape) {
		if(_obj.pushFunction("setCollisionShape")) {
			_obj.pushArg((btPairCachingGhostObject*)this);
			_obj.pushArg(collisionShape);
			return (_obj.callFunction<void>());
		}

		return btPairCachingGhostObject::setCollisionShape(collisionShape);
	};

	// int btCollisionObject::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btPairCachingGhostObject*)this);
			return (_obj.callFunction<int>());
		}

		return btPairCachingGhostObject::calculateSerializeBufferSize();
	};

	// void btPairCachingGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)
	void addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0) {
		if(_obj.pushFunction("addOverlappingObjectInternal")) {
			_obj.pushArg((btPairCachingGhostObject*)this);
			_obj.pushArg(otherProxy);
			_obj.pushArg(thisProxy);
			return (_obj.callFunction<void>());
		}

		return btPairCachingGhostObject::addOverlappingObjectInternal(otherProxy, thisProxy);
	};

	// void btPairCachingGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)
	void removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0) {
		if(_obj.pushFunction("removeOverlappingObjectInternal")) {
			_obj.pushArg((btPairCachingGhostObject*)this);
			_obj.pushArg(otherProxy);
			_obj.pushArg(dispatcher);
			_obj.pushArg(thisProxy);
			return (_obj.callFunction<void>());
		}

		return btPairCachingGhostObject::removeOverlappingObjectInternal(otherProxy, dispatcher, thisProxy);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

