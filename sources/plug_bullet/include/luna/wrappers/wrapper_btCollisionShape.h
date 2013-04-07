#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONSHAPE_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btCollisionShape.h>

class wrapper_btCollisionShape : public btCollisionShape, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionShape() {
		logDEBUG3("Calling delete function for wrapper btCollisionShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionShape(lua_State* L, lua_Table* dum) 
		: btCollisionShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		THROW_IF(!_obj.pushFunction("getAabb"),"No implementation for abstract function btCollisionShape::getAabb");
		_obj.pushArg((btCollisionShape*)this);
		_obj.pushArg(&t);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		return (_obj.callFunction<void>());
	};

	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btCollisionShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btCollisionShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btCollisionShape*)this);
			return (_obj.callFunction<float>());
		}

		return btCollisionShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btCollisionShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btCollisionShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btCollisionShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		THROW_IF(!_obj.pushFunction("setLocalScaling"),"No implementation for abstract function btCollisionShape::setLocalScaling");
		_obj.pushArg((btCollisionShape*)this);
		_obj.pushArg(&scaling);
		return (_obj.callFunction<void>());
	};

	// const btVector3 & btCollisionShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		THROW_IF(!_obj.pushFunction("getLocalScaling"),"No implementation for abstract function btCollisionShape::getLocalScaling");
		_obj.pushArg((btCollisionShape*)this);
		return *(_obj.callFunction<btVector3*>());
	};

	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		THROW_IF(!_obj.pushFunction("calculateLocalInertia"),"No implementation for abstract function btCollisionShape::calculateLocalInertia");
		_obj.pushArg((btCollisionShape*)this);
		_obj.pushArg(mass);
		_obj.pushArg(&inertia);
		return (_obj.callFunction<void>());
	};

	// const char * btCollisionShape::getName() const
	const char * getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function btCollisionShape::getName");
		_obj.pushArg((btCollisionShape*)this);
		return (_obj.callFunction<const char*>());
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btCollisionShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCollisionShape::getAnisotropicRollingFrictionDirection();
	};

	// void btCollisionShape::setMargin(float margin)
	void setMargin(float margin) {
		THROW_IF(!_obj.pushFunction("setMargin"),"No implementation for abstract function btCollisionShape::setMargin");
		_obj.pushArg((btCollisionShape*)this);
		_obj.pushArg(margin);
		return (_obj.callFunction<void>());
	};

	// float btCollisionShape::getMargin() const
	float getMargin() const {
		THROW_IF(!_obj.pushFunction("getMargin"),"No implementation for abstract function btCollisionShape::getMargin");
		_obj.pushArg((btCollisionShape*)this);
		return (_obj.callFunction<float>());
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btCollisionShape*)this);
			return (_obj.callFunction<int>());
		}

		return btCollisionShape::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

