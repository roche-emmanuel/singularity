#ifndef _WRAPPERS_WRAPPER_BTCONVEXSHAPE_H_
#define _WRAPPERS_WRAPPER_BTCONVEXSHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btConvexShape.h>

class wrapper_btConvexShape : public btConvexShape, public luna_wrapper_base {

public:
		

	~wrapper_btConvexShape() {
		logDEBUG3("Calling delete function for wrapper btConvexShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexShape(lua_State* L, lua_Table* dum) 
		: btConvexShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btConvexShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btConvexShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btConvexShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConvexShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btConvexShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btConvexShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		THROW_IF(!_obj.pushFunction("calculateLocalInertia"),"No implementation for abstract function btCollisionShape::calculateLocalInertia");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(mass);
		_obj.pushArg(&inertia);
		return (_obj.callFunction<void>());
	};

	// const char * btCollisionShape::getName() const
	const char * getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function btCollisionShape::getName");
		_obj.pushArg((btConvexShape*)this);
		return (_obj.callFunction<const char*>());
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btConvexShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexShape::getAnisotropicRollingFrictionDirection();
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btConvexShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConvexShape::calculateSerializeBufferSize();
	};

	// btVector3 btConvexShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		THROW_IF(!_obj.pushFunction("localGetSupportingVertex"),"No implementation for abstract function btConvexShape::localGetSupportingVertex");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(&vec);
		return *(_obj.callFunction<btVector3*>());
	};

	// btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		THROW_IF(!_obj.pushFunction("localGetSupportingVertexWithoutMargin"),"No implementation for abstract function btConvexShape::localGetSupportingVertexWithoutMargin");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(&vec);
		return *(_obj.callFunction<btVector3*>());
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btConvexShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btConvexShape::project(trans, dir, min, max);
	};

	// void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		THROW_IF(!_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin"),"No implementation for abstract function btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(vectors);
		_obj.pushArg(supportVerticesOut);
		_obj.pushArg(numVectors);
		return (_obj.callFunction<void>());
	};

	// void btConvexShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		THROW_IF(!_obj.pushFunction("getAabb"),"No implementation for abstract function btConvexShape::getAabb");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(&t);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		return (_obj.callFunction<void>());
	};

	// void btConvexShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		THROW_IF(!_obj.pushFunction("getAabbSlow"),"No implementation for abstract function btConvexShape::getAabbSlow");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(&t);
		_obj.pushArg(&aabbMin);
		_obj.pushArg(&aabbMax);
		return (_obj.callFunction<void>());
	};

	// void btConvexShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		THROW_IF(!_obj.pushFunction("setLocalScaling"),"No implementation for abstract function btConvexShape::setLocalScaling");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(&scaling);
		return (_obj.callFunction<void>());
	};

	// const btVector3 & btConvexShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		THROW_IF(!_obj.pushFunction("getLocalScaling"),"No implementation for abstract function btConvexShape::getLocalScaling");
		_obj.pushArg((btConvexShape*)this);
		return *(_obj.callFunction<btVector3*>());
	};

	// void btConvexShape::setMargin(float margin)
	void setMargin(float margin) {
		THROW_IF(!_obj.pushFunction("setMargin"),"No implementation for abstract function btConvexShape::setMargin");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(margin);
		return (_obj.callFunction<void>());
	};

	// float btConvexShape::getMargin() const
	float getMargin() const {
		THROW_IF(!_obj.pushFunction("getMargin"),"No implementation for abstract function btConvexShape::getMargin");
		_obj.pushArg((btConvexShape*)this);
		return (_obj.callFunction<float>());
	};

	// int btConvexShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		THROW_IF(!_obj.pushFunction("getNumPreferredPenetrationDirections"),"No implementation for abstract function btConvexShape::getNumPreferredPenetrationDirections");
		_obj.pushArg((btConvexShape*)this);
		return (_obj.callFunction<int>());
	};

	// void btConvexShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		THROW_IF(!_obj.pushFunction("getPreferredPenetrationDirection"),"No implementation for abstract function btConvexShape::getPreferredPenetrationDirection");
		_obj.pushArg((btConvexShape*)this);
		_obj.pushArg(index);
		_obj.pushArg(&penetrationVector);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

