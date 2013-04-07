#ifndef _WRAPPERS_WRAPPER_BTGHOSTOBJECT_H_
#define _WRAPPERS_WRAPPER_BTGHOSTOBJECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btGhostObject.h>

class wrapper_btGhostObject : public btGhostObject, public luna_wrapper_base {

public:
		

	~wrapper_btGhostObject() {
		logDEBUG3("Calling delete function for wrapper btGhostObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btGhostObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btGhostObject(lua_State* L, lua_Table* dum) 
		: btGhostObject(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btGhostObject*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool btCollisionObject::checkCollideWithOverride(const btCollisionObject * arg1) const
	bool checkCollideWithOverride(const btCollisionObject * arg1) const {
		if(_obj.pushFunction("checkCollideWithOverride")) {
			_obj.pushArg((btGhostObject*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return btGhostObject::checkCollideWithOverride(arg1);
	};

public:
	// Public virtual methods:
	// void btCollisionObject::setCollisionShape(btCollisionShape * collisionShape)
	void setCollisionShape(btCollisionShape * collisionShape) {
		if(_obj.pushFunction("setCollisionShape")) {
			_obj.pushArg((btGhostObject*)this);
			_obj.pushArg(collisionShape);
			return (_obj.callFunction<void>());
		}

		return btGhostObject::setCollisionShape(collisionShape);
	};

	// int btCollisionObject::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btGhostObject*)this);
			return (_obj.callFunction<int>());
		}

		return btGhostObject::calculateSerializeBufferSize();
	};

	// void btGhostObject::addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0)
	void addOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btBroadphaseProxy * thisProxy = 0) {
		if(_obj.pushFunction("addOverlappingObjectInternal")) {
			_obj.pushArg((btGhostObject*)this);
			_obj.pushArg(otherProxy);
			_obj.pushArg(thisProxy);
			return (_obj.callFunction<void>());
		}

		return btGhostObject::addOverlappingObjectInternal(otherProxy, thisProxy);
	};

	// void btGhostObject::removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0)
	void removeOverlappingObjectInternal(btBroadphaseProxy * otherProxy, btDispatcher * dispatcher, btBroadphaseProxy * thisProxy = 0) {
		if(_obj.pushFunction("removeOverlappingObjectInternal")) {
			_obj.pushArg((btGhostObject*)this);
			_obj.pushArg(otherProxy);
			_obj.pushArg(dispatcher);
			_obj.pushArg(thisProxy);
			return (_obj.callFunction<void>());
		}

		return btGhostObject::removeOverlappingObjectInternal(otherProxy, dispatcher, thisProxy);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

