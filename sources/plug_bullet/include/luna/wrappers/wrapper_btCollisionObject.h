#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONOBJECT_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONOBJECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionObject.h>

class wrapper_btCollisionObject : public btCollisionObject, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionObject() {
		logDEBUG3("Calling delete function for wrapper btCollisionObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionObject(lua_State* L, lua_Table* dum) 
		: btCollisionObject(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionObject*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool btCollisionObject::checkCollideWithOverride(const btCollisionObject * arg1) const
	bool checkCollideWithOverride(const btCollisionObject * arg1) const {
		if(_obj.pushFunction("checkCollideWithOverride")) {
			_obj.pushArg((btCollisionObject*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return btCollisionObject::checkCollideWithOverride(arg1);
	};

public:
	// Public virtual methods:
	// void btCollisionObject::setCollisionShape(btCollisionShape * collisionShape)
	void setCollisionShape(btCollisionShape * collisionShape) {
		if(_obj.pushFunction("setCollisionShape")) {
			_obj.pushArg((btCollisionObject*)this);
			_obj.pushArg(collisionShape);
			return (_obj.callFunction<void>());
		}

		return btCollisionObject::setCollisionShape(collisionShape);
	};

	// int btCollisionObject::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btCollisionObject*)this);
			return (_obj.callFunction<int>());
		}

		return btCollisionObject::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

