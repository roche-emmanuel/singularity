#ifndef _WRAPPERS_WRAPPER_BTBOX_DSHAPE_H_
#define _WRAPPERS_WRAPPER_BTBOX_DSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btBox2dShape.h>

class wrapper_btBox2dShape : public btBox2dShape, public luna_wrapper_base {

public:
		

	~wrapper_btBox2dShape() {
		logDEBUG3("Calling delete function for wrapper btBox2dShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBox2dShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBox2dShape(lua_State* L, lua_Table* dum, const btVector3 & boxHalfExtents) 
		: btBox2dShape(boxHalfExtents), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<float>());
		}

		return btBox2dShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btBox2dShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btBox2dShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBox2dShape::getAnisotropicRollingFrictionDirection();
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::project(trans, dir, min, max);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btBox2dShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBox2dShape::getLocalScaling();
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<float>());
		}

		return btBox2dShape::getMargin();
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<int>());
		}

		return btBox2dShape::calculateSerializeBufferSize();
	};

	// bool btPolyhedralConvexShape::initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	bool initializePolyhedralFeatures(int shiftVerticesByMargin = 0) {
		if(_obj.pushFunction("initializePolyhedralFeatures")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(shiftVerticesByMargin);
			return (_obj.callFunction<bool>());
		}

		return btBox2dShape::initializePolyhedralFeatures(shiftVerticesByMargin);
	};

	// btVector3 btBox2dShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBox2dShape::localGetSupportingVertex(vec);
	};

	// btVector3 btBox2dShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBox2dShape::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// void btBox2dShape::setMargin(float collisionMargin)
	void setMargin(float collisionMargin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(collisionMargin);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::setMargin(collisionMargin);
	};

	// void btBox2dShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::setLocalScaling(scaling);
	};

	// void btBox2dShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btBox2dShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::calculateLocalInertia(mass, inertia);
	};

	// int btBox2dShape::getNumVertices() const
	int getNumVertices() const {
		if(_obj.pushFunction("getNumVertices")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<int>());
		}

		return btBox2dShape::getNumVertices();
	};

	// void btBox2dShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	void getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const {
		if(_obj.pushFunction("getPlane")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(&planeSupport);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getPlane(planeNormal, planeSupport, i);
	};

	// int btBox2dShape::getNumPlanes() const
	int getNumPlanes() const {
		if(_obj.pushFunction("getNumPlanes")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<int>());
		}

		return btBox2dShape::getNumPlanes();
	};

	// int btBox2dShape::getNumEdges() const
	int getNumEdges() const {
		if(_obj.pushFunction("getNumEdges")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<int>());
		}

		return btBox2dShape::getNumEdges();
	};

	// void btBox2dShape::getVertex(int i, btVector3 & vtx) const
	void getVertex(int i, btVector3 & vtx) const {
		if(_obj.pushFunction("getVertex")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(i);
			_obj.pushArg(&vtx);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getVertex(i, vtx);
	};

	// void btBox2dShape::getPlaneEquation(btVector4 & plane, int i) const
	void getPlaneEquation(btVector4 & plane, int i) const {
		if(_obj.pushFunction("getPlaneEquation")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&plane);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getPlaneEquation(plane, i);
	};

	// void btBox2dShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	void getEdge(int i, btVector3 & pa, btVector3 & pb) const {
		if(_obj.pushFunction("getEdge")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(i);
			_obj.pushArg(&pa);
			_obj.pushArg(&pb);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getEdge(i, pa, pb);
	};

	// bool btBox2dShape::isInside(const btVector3 & pt, float tolerance) const
	bool isInside(const btVector3 & pt, float tolerance) const {
		if(_obj.pushFunction("isInside")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(&pt);
			_obj.pushArg(tolerance);
			return (_obj.callFunction<bool>());
		}

		return btBox2dShape::isInside(pt, tolerance);
	};

	// const char * btBox2dShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btBox2dShape::getName();
	};

	// int btBox2dShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btBox2dShape*)this);
			return (_obj.callFunction<int>());
		}

		return btBox2dShape::getNumPreferredPenetrationDirections();
	};

	// void btBox2dShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btBox2dShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btBox2dShape::getPreferredPenetrationDirection(index, penetrationVector);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

