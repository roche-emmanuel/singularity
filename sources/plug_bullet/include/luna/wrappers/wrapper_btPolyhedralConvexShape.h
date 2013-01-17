#ifndef _WRAPPERS_WRAPPER_BTPOLYHEDRALCONVEXSHAPE_H_
#define _WRAPPERS_WRAPPER_BTPOLYHEDRALCONVEXSHAPE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btPolyhedralConvexShape.h>

class wrapper_btPolyhedralConvexShape : public btPolyhedralConvexShape, public luna_wrapper_base {

public:
		

	~wrapper_btPolyhedralConvexShape() {
		logDEBUG3("Calling delete function for wrapper btPolyhedralConvexShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btPolyhedralConvexShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btPolyhedralConvexShape(lua_State* L, lua_Table* dum) 
		: btPolyhedralConvexShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			return (_obj.callFunction<float>());
		}

		return btPolyhedralConvexShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btPolyhedralConvexShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// const char * btCollisionShape::getName() const
	const char * getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function btCollisionShape::getName");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		return (_obj.callFunction<const char*>());
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btPolyhedralConvexShape::getAnisotropicRollingFrictionDirection();
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::project(trans, dir, min, max);
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btPolyhedralConvexShape::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// void btConvexInternalShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::setLocalScaling(scaling);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btPolyhedralConvexShape::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			return (_obj.callFunction<float>());
		}

		return btPolyhedralConvexShape::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			return (_obj.callFunction<int>());
		}

		return btPolyhedralConvexShape::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			return (_obj.callFunction<int>());
		}

		return btPolyhedralConvexShape::calculateSerializeBufferSize();
	};

	// bool btPolyhedralConvexShape::initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	bool initializePolyhedralFeatures(int shiftVerticesByMargin = 0) {
		if(_obj.pushFunction("initializePolyhedralFeatures")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(shiftVerticesByMargin);
			return (_obj.callFunction<bool>());
		}

		return btPolyhedralConvexShape::initializePolyhedralFeatures(shiftVerticesByMargin);
	};

	// btVector3 btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// void btPolyhedralConvexShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btPolyhedralConvexShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btPolyhedralConvexShape::calculateLocalInertia(mass, inertia);
	};

	// int btPolyhedralConvexShape::getNumVertices() const
	int getNumVertices() const {
		THROW_IF(!_obj.pushFunction("getNumVertices"),"No implementation for abstract function btPolyhedralConvexShape::getNumVertices");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		return (_obj.callFunction<int>());
	};

	// int btPolyhedralConvexShape::getNumEdges() const
	int getNumEdges() const {
		THROW_IF(!_obj.pushFunction("getNumEdges"),"No implementation for abstract function btPolyhedralConvexShape::getNumEdges");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		return (_obj.callFunction<int>());
	};

	// void btPolyhedralConvexShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	void getEdge(int i, btVector3 & pa, btVector3 & pb) const {
		THROW_IF(!_obj.pushFunction("getEdge"),"No implementation for abstract function btPolyhedralConvexShape::getEdge");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		_obj.pushArg(i);
		_obj.pushArg(&pa);
		_obj.pushArg(&pb);
		return (_obj.callFunction<void>());
	};

	// void btPolyhedralConvexShape::getVertex(int i, btVector3 & vtx) const
	void getVertex(int i, btVector3 & vtx) const {
		THROW_IF(!_obj.pushFunction("getVertex"),"No implementation for abstract function btPolyhedralConvexShape::getVertex");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		_obj.pushArg(i);
		_obj.pushArg(&vtx);
		return (_obj.callFunction<void>());
	};

	// int btPolyhedralConvexShape::getNumPlanes() const
	int getNumPlanes() const {
		THROW_IF(!_obj.pushFunction("getNumPlanes"),"No implementation for abstract function btPolyhedralConvexShape::getNumPlanes");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		return (_obj.callFunction<int>());
	};

	// void btPolyhedralConvexShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	void getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const {
		THROW_IF(!_obj.pushFunction("getPlane"),"No implementation for abstract function btPolyhedralConvexShape::getPlane");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		_obj.pushArg(&planeNormal);
		_obj.pushArg(&planeSupport);
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// bool btPolyhedralConvexShape::isInside(const btVector3 & pt, float tolerance) const
	bool isInside(const btVector3 & pt, float tolerance) const {
		THROW_IF(!_obj.pushFunction("isInside"),"No implementation for abstract function btPolyhedralConvexShape::isInside");
		_obj.pushArg((btPolyhedralConvexShape*)this);
		_obj.pushArg(&pt);
		_obj.pushArg(tolerance);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif
