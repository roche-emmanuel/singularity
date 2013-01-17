#ifndef _WRAPPERS_WRAPPER_BTCOMPOUNDSHAPE_H_
#define _WRAPPERS_WRAPPER_BTCOMPOUNDSHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btCompoundShape.h>

class wrapper_btCompoundShape : public btCompoundShape, public luna_wrapper_base {

public:
		

	~wrapper_btCompoundShape() {
		logDEBUG3("Calling delete function for wrapper btCompoundShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCompoundShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCompoundShape(lua_State* L, lua_Table* dum, bool enableDynamicAabbTree = true) 
		: btCompoundShape(enableDynamicAabbTree), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btCompoundShape*)this);
			return (_obj.callFunction<float>());
		}

		return btCompoundShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btCompoundShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btCompoundShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCompoundShape::getAnisotropicRollingFrictionDirection();
	};

	// void btCompoundShape::removeChildShape(btCollisionShape * shape)
	void removeChildShape(btCollisionShape * shape) {
		if(_obj.pushFunction("removeChildShape")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(shape);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::removeChildShape(shape);
	};

	// void btCompoundShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btCompoundShape::recalculateLocalAabb()
	void recalculateLocalAabb() {
		if(_obj.pushFunction("recalculateLocalAabb")) {
			_obj.pushArg((btCompoundShape*)this);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::recalculateLocalAabb();
	};

	// void btCompoundShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::setLocalScaling(scaling);
	};

	// const btVector3 & btCompoundShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btCompoundShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCompoundShape::getLocalScaling();
	};

	// void btCompoundShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::calculateLocalInertia(mass, inertia);
	};

	// void btCompoundShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btCompoundShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btCompoundShape::setMargin(margin);
	};

	// float btCompoundShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btCompoundShape*)this);
			return (_obj.callFunction<float>());
		}

		return btCompoundShape::getMargin();
	};

	// const char * btCompoundShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btCompoundShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btCompoundShape::getName();
	};

	// int btCompoundShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btCompoundShape*)this);
			return (_obj.callFunction<int>());
		}

		return btCompoundShape::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

