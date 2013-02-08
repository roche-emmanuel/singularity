#ifndef _WRAPPERS_WRAPPER_BTTRIANGLESHAPEEX_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLESHAPEEX_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/Gimpact/btTriangleShapeEx.h>

class wrapper_btTriangleShapeEx : public btTriangleShapeEx, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleShapeEx() {
		logDEBUG3("Calling delete function for wrapper btTriangleShapeEx");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleShapeEx*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleShapeEx(lua_State* L, lua_Table* dum) 
		: btTriangleShapeEx(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btTriangleShapeEx(lua_State* L, lua_Table* dum, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2) 
		: btTriangleShapeEx(p0, p1, p2), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btTriangleShapeEx(lua_State* L, lua_Table* dum, const btTriangleShapeEx & other) 
		: btTriangleShapeEx(other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<float>());
		}

		return btTriangleShapeEx::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btTriangleShapeEx::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShapeEx::getAnisotropicRollingFrictionDirection();
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::project(trans, dir, min, max);
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShapeEx::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getAabbSlow(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::setLocalScaling(scaling);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShapeEx::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<float>());
		}

		return btTriangleShapeEx::getMargin();
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShapeEx::calculateSerializeBufferSize();
	};

	// bool btPolyhedralConvexShape::initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	bool initializePolyhedralFeatures(int shiftVerticesByMargin = 0) {
		if(_obj.pushFunction("initializePolyhedralFeatures")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(shiftVerticesByMargin);
			return (_obj.callFunction<bool>());
		}

		return btTriangleShapeEx::initializePolyhedralFeatures(shiftVerticesByMargin);
	};

	// int btTriangleShape::getNumVertices() const
	int getNumVertices() const {
		if(_obj.pushFunction("getNumVertices")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShapeEx::getNumVertices();
	};

	// void btTriangleShape::getVertex(int index, btVector3 & vert) const
	void getVertex(int index, btVector3 & vert) const {
		if(_obj.pushFunction("getVertex")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(index);
			_obj.pushArg(&vert);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getVertex(index, vert);
	};

	// int btTriangleShape::getNumEdges() const
	int getNumEdges() const {
		if(_obj.pushFunction("getNumEdges")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShapeEx::getNumEdges();
	};

	// void btTriangleShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	void getEdge(int i, btVector3 & pa, btVector3 & pb) const {
		if(_obj.pushFunction("getEdge")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(i);
			_obj.pushArg(&pa);
			_obj.pushArg(&pb);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getEdge(i, pa, pb);
	};

	// btVector3 btTriangleShape::localGetSupportingVertexWithoutMargin(const btVector3 & dir) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & dir) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&dir);
			return *(_obj.callFunction<btVector3*>());
		}

		return btTriangleShapeEx::localGetSupportingVertexWithoutMargin(dir);
	};

	// void btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// void btTriangleShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	void getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const {
		if(_obj.pushFunction("getPlane")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(&planeSupport);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getPlane(planeNormal, planeSupport, i);
	};

	// int btTriangleShape::getNumPlanes() const
	int getNumPlanes() const {
		if(_obj.pushFunction("getNumPlanes")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShapeEx::getNumPlanes();
	};

	// void btTriangleShape::getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const
	void getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const {
		if(_obj.pushFunction("getPlaneEquation")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(i);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(&planeSupport);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getPlaneEquation(i, planeNormal, planeSupport);
	};

	// void btTriangleShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::calculateLocalInertia(mass, inertia);
	};

	// bool btTriangleShape::isInside(const btVector3 & pt, float tolerance) const
	bool isInside(const btVector3 & pt, float tolerance) const {
		if(_obj.pushFunction("isInside")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&pt);
			_obj.pushArg(tolerance);
			return (_obj.callFunction<bool>());
		}

		return btTriangleShapeEx::isInside(pt, tolerance);
	};

	// const char * btTriangleShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<const char*>());
		}

		return btTriangleShapeEx::getName();
	};

	// int btTriangleShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleShapeEx::getNumPreferredPenetrationDirections();
	};

	// void btTriangleShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// void btTriangleShapeEx::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btTriangleShapeEx*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btTriangleShapeEx::getAabb(t, aabbMin, aabbMax);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

