#ifndef _WRAPPERS_WRAPPER_BTSTATICPLANESHAPE_H_
#define _WRAPPERS_WRAPPER_BTSTATICPLANESHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btStaticPlaneShape.h>

class wrapper_btStaticPlaneShape : public btStaticPlaneShape, public luna_wrapper_base {

public:
		

	~wrapper_btStaticPlaneShape() {
		logDEBUG3("Calling delete function for wrapper btStaticPlaneShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btStaticPlaneShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btStaticPlaneShape(lua_State* L, lua_Table* dum, const btVector3 & planeNormal, float planeConstant) 
		: btStaticPlaneShape(planeNormal, planeConstant), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btStaticPlaneShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			return (_obj.callFunction<float>());
		}

		return btStaticPlaneShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btStaticPlaneShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btStaticPlaneShape::getAnisotropicRollingFrictionDirection();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			return (_obj.callFunction<float>());
		}

		return btStaticPlaneShape::getMargin();
	};

	// void btConcaveShape::setMargin(float collisionMargin)
	void setMargin(float collisionMargin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(collisionMargin);
			return (_obj.callFunction<void>());
		}

		return btStaticPlaneShape::setMargin(collisionMargin);
	};

	// void btStaticPlaneShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btStaticPlaneShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btStaticPlaneShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btStaticPlaneShape::processAllTriangles(callback, aabbMin, aabbMax);
	};

	// void btStaticPlaneShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btStaticPlaneShape::calculateLocalInertia(mass, inertia);
	};

	// void btStaticPlaneShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btStaticPlaneShape::setLocalScaling(scaling);
	};

	// const btVector3 & btStaticPlaneShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btStaticPlaneShape::getLocalScaling();
	};

	// const char * btStaticPlaneShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btStaticPlaneShape::getName();
	};

	// int btStaticPlaneShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btStaticPlaneShape*)this);
			return (_obj.callFunction<int>());
		}

		return btStaticPlaneShape::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

