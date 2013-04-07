#ifndef _WRAPPERS_WRAPPER_BTCONESHAPE_H_
#define _WRAPPERS_WRAPPER_BTCONESHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btConeShape.h>

class wrapper_btConeShape : public btConeShape, public luna_wrapper_base {

public:
		

	~wrapper_btConeShape() {
		logDEBUG3("Calling delete function for wrapper btConeShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConeShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConeShape(lua_State* L, lua_Table* dum, float radius, float height) 
		: btConeShape(radius, height), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConeShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btConeShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btConeShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConeShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btConeShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btConeShape::project(trans, dir, min, max);
	};

	// void btConvexInternalShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btConeShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btConeShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btConeShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConeShape::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btConeShape::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btConeShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConeShape::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btConeShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConeShape::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btConeShape::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btConeShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConeShape::calculateSerializeBufferSize();
	};

	// btVector3 btConeShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConeShape::localGetSupportingVertex(vec);
	};

	// btVector3 btConeShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConeShape::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btConeShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btConeShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// void btConeShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btConeShape::calculateLocalInertia(mass, inertia);
	};

	// const char * btConeShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btConeShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btConeShape::getName();
	};

	// btVector3 btConeShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btConeShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConeShape::getAnisotropicRollingFrictionDirection();
	};

	// void btConeShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btConeShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btConeShape::setLocalScaling(scaling);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

