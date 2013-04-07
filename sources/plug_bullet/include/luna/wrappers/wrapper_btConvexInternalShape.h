#ifndef _WRAPPERS_WRAPPER_BTCONVEXINTERNALSHAPE_H_
#define _WRAPPERS_WRAPPER_BTCONVEXINTERNALSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btConvexInternalShape.h>

class wrapper_btConvexInternalShape : public btConvexInternalShape, public luna_wrapper_base {

public:
		

	~wrapper_btConvexInternalShape() {
		logDEBUG3("Calling delete function for wrapper btConvexInternalShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexInternalShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexInternalShape(lua_State* L, lua_Table* dum) 
		: btConvexInternalShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btConvexInternalShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConvexInternalShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btConvexInternalShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		THROW_IF(!_obj.pushFunction("calculateLocalInertia"),"No implementation for abstract function btCollisionShape::calculateLocalInertia");
		_obj.pushArg((btConvexInternalShape*)this);
		_obj.pushArg(mass);
		_obj.pushArg(&inertia);
		return (_obj.callFunction<void>());
	};

	// const char * btCollisionShape::getName() const
	const char * getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function btCollisionShape::getName");
		_obj.pushArg((btConvexInternalShape*)this);
		return (_obj.callFunction<const char*>());
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btConvexInternalShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexInternalShape::getAnisotropicRollingFrictionDirection();
	};

	// btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		THROW_IF(!_obj.pushFunction("localGetSupportingVertexWithoutMargin"),"No implementation for abstract function btConvexShape::localGetSupportingVertexWithoutMargin");
		_obj.pushArg((btConvexInternalShape*)this);
		_obj.pushArg(&vec);
		return *(_obj.callFunction<btVector3*>());
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::project(trans, dir, min, max);
	};

	// void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		THROW_IF(!_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin"),"No implementation for abstract function btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin");
		_obj.pushArg((btConvexInternalShape*)this);
		_obj.pushArg(vectors);
		_obj.pushArg(supportVerticesOut);
		_obj.pushArg(numVectors);
		return (_obj.callFunction<void>());
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexInternalShape::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::setLocalScaling(scaling);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btConvexInternalShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexInternalShape::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btConvexInternalShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConvexInternalShape::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btConvexInternalShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConvexInternalShape::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btConvexInternalShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalShape::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btConvexInternalShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConvexInternalShape::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

