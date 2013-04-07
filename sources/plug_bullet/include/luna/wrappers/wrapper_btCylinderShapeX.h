#ifndef _WRAPPERS_WRAPPER_BTCYLINDERSHAPEX_H_
#define _WRAPPERS_WRAPPER_BTCYLINDERSHAPEX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btCylinderShape.h>

class wrapper_btCylinderShapeX : public btCylinderShapeX, public luna_wrapper_base {

public:
		

	~wrapper_btCylinderShapeX() {
		logDEBUG3("Calling delete function for wrapper btCylinderShapeX");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCylinderShapeX*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCylinderShapeX(lua_State* L, lua_Table* dum, const btVector3 & halfExtents) 
		: btCylinderShapeX(halfExtents), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return (_obj.callFunction<float>());
		}

		return btCylinderShapeX::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btCylinderShapeX::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::project(trans, dir, min, max);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::getAabbSlow(t, aabbMin, aabbMax);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCylinderShapeX::getLocalScaling();
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return (_obj.callFunction<float>());
		}

		return btCylinderShapeX::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return (_obj.callFunction<int>());
		}

		return btCylinderShapeX::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// void btCylinderShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::getAabb(t, aabbMin, aabbMax);
	};

	// void btCylinderShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::calculateLocalInertia(mass, inertia);
	};

	// void btCylinderShape::setMargin(float collisionMargin)
	void setMargin(float collisionMargin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(collisionMargin);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::setMargin(collisionMargin);
	};

	// btVector3 btCylinderShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCylinderShapeX::localGetSupportingVertex(vec);
	};

	// btVector3 btCylinderShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCylinderShapeX::getAnisotropicRollingFrictionDirection();
	};

	// void btCylinderShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::setLocalScaling(scaling);
	};

	// int btCylinderShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return (_obj.callFunction<int>());
		}

		return btCylinderShapeX::calculateSerializeBufferSize();
	};

	// btVector3 btCylinderShapeX::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btCylinderShapeX::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btCylinderShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btCylinderShapeX*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btCylinderShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// const char * btCylinderShapeX::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return (_obj.callFunction<const char*>());
		}

		return btCylinderShapeX::getName();
	};

	// float btCylinderShapeX::getRadius() const
	float getRadius() const {
		if(_obj.pushFunction("getRadius")) {
			_obj.pushArg((btCylinderShapeX*)this);
			return (_obj.callFunction<float>());
		}

		return btCylinderShapeX::getRadius();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

