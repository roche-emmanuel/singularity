#ifndef _WRAPPERS_WRAPPER_BTEMPTYSHAPE_H_
#define _WRAPPERS_WRAPPER_BTEMPTYSHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btEmptyShape.h>

class wrapper_btEmptyShape : public btEmptyShape, public luna_wrapper_base {

public:
		

	~wrapper_btEmptyShape() {
		logDEBUG3("Calling delete function for wrapper btEmptyShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btEmptyShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btEmptyShape(lua_State* L, lua_Table* dum) 
		: btEmptyShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btEmptyShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btEmptyShape*)this);
			return (_obj.callFunction<float>());
		}

		return btEmptyShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btEmptyShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btEmptyShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btEmptyShape::getAnisotropicRollingFrictionDirection();
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btEmptyShape*)this);
			return (_obj.callFunction<int>());
		}

		return btEmptyShape::calculateSerializeBufferSize();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btEmptyShape*)this);
			return (_obj.callFunction<float>());
		}

		return btEmptyShape::getMargin();
	};

	// void btConcaveShape::setMargin(float collisionMargin)
	void setMargin(float collisionMargin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(collisionMargin);
			return (_obj.callFunction<void>());
		}

		return btEmptyShape::setMargin(collisionMargin);
	};

	// void btEmptyShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btEmptyShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btEmptyShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btEmptyShape::setLocalScaling(scaling);
	};

	// const btVector3 & btEmptyShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btEmptyShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btEmptyShape::getLocalScaling();
	};

	// void btEmptyShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btEmptyShape::calculateLocalInertia(mass, inertia);
	};

	// const char * btEmptyShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btEmptyShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btEmptyShape::getName();
	};

	// void btEmptyShape::processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const
	void processAllTriangles(btTriangleCallback * arg1, const btVector3 & arg2, const btVector3 & arg3) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btEmptyShape*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(&arg2);
			_obj.pushArg(&arg3);
			return (_obj.callFunction<void>());
		}

		return btEmptyShape::processAllTriangles(arg1, arg2, arg3);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

