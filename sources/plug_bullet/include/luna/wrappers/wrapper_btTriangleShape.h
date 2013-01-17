#ifndef _WRAPPERS_WRAPPER_BTTRIANGLESHAPE_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLESHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleShape.h>

class wrapper_btTriangleShape : public btTriangleShape, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleShape() {
		logDEBUG3("Calling delete function for wrapper btTriangleShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleShape(lua_State* L, lua_Table* dum) 
		: btTriangleShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btTriangleShape(lua_State* L, lua_Table* dum, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2) 
		: btTriangleShape(p0, p1, p2), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<float>());
		}

		return btTriangleShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btTriangleShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btTriangleShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShape::getAnisotropicRollingFrictionDirection();
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::project(trans, dir, min, max);
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShape::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::setLocalScaling(scaling);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btTriangleShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShape::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<float>());
		}

		return btTriangleShape::getMargin();
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShape::calculateSerializeBufferSize();
	};

	// bool btPolyhedralConvexShape::initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	bool initializePolyhedralFeatures(int shiftVerticesByMargin = 0) {
		if(_obj.pushFunction("initializePolyhedralFeatures")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(shiftVerticesByMargin);
			return (_obj.callFunction<bool>());
		}

		return btTriangleShape::initializePolyhedralFeatures(shiftVerticesByMargin);
	};

	// int btTriangleShape::getNumVertices() const
	int getNumVertices() const {
		if(_obj.pushFunction("getNumVertices")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShape::getNumVertices();
	};

	// void btTriangleShape::getVertex(int index, btVector3 & vert) const
	void getVertex(int index, btVector3 & vert) const {
		if(_obj.pushFunction("getVertex")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&vert);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getVertex(index, vert);
	};

	// int btTriangleShape::getNumEdges() const
	int getNumEdges() const {
		if(_obj.pushFunction("getNumEdges")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShape::getNumEdges();
	};

	// void btTriangleShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	void getEdge(int i, btVector3 & pa, btVector3 & pb) const {
		if(_obj.pushFunction("getEdge")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(i);
			_obj.pushArg(&pa);
			_obj.pushArg(&pb);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getEdge(i, pa, pb);
	};

	// void btTriangleShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getAabb(t, aabbMin, aabbMax);
	};

	// btVector3 btTriangleShape::localGetSupportingVertexWithoutMargin(const btVector3 & dir) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & dir) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&dir);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShape::localGetSupportingVertexWithoutMargin(dir);
	};

	// void btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// void btTriangleShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	void getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const {
		if(_obj.pushFunction("getPlane")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(&planeSupport);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getPlane(planeNormal, planeSupport, i);
	};

	// int btTriangleShape::getNumPlanes() const
	int getNumPlanes() const {
		if(_obj.pushFunction("getNumPlanes")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShape::getNumPlanes();
	};

	// void btTriangleShape::getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const
	void getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const {
		if(_obj.pushFunction("getPlaneEquation")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(i);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(&planeSupport);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getPlaneEquation(i, planeNormal, planeSupport);
	};

	// void btTriangleShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::calculateLocalInertia(mass, inertia);
	};

	// bool btTriangleShape::isInside(const btVector3 & pt, float tolerance) const
	bool isInside(const btVector3 & pt, float tolerance) const {
		if(_obj.pushFunction("isInside")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(&pt);
			_obj.pushArg(tolerance);
			return (_obj.callFunction<bool>());
		}

		return btTriangleShape::isInside(pt, tolerance);
	};

	// const char * btTriangleShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btTriangleShape::getName();
	};

	// int btTriangleShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btTriangleShape*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShape::getNumPreferredPenetrationDirections();
	};

	// void btTriangleShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btTriangleShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btTriangleShape::getPreferredPenetrationDirection(index, penetrationVector);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

