#ifndef _WRAPPERS_WRAPPER_BTMULTIMATERIALTRIANGLEMESHSHAPE_H_
#define _WRAPPERS_WRAPPER_BTMULTIMATERIALTRIANGLEMESHSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btMultimaterialTriangleMeshShape.h>

class wrapper_btMultimaterialTriangleMeshShape : public btMultimaterialTriangleMeshShape, public luna_wrapper_base {

public:
		

	~wrapper_btMultimaterialTriangleMeshShape() {
		logDEBUG3("Calling delete function for wrapper btMultimaterialTriangleMeshShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btMultimaterialTriangleMeshShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btMultimaterialTriangleMeshShape(lua_State* L, lua_Table* dum, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true) 
		: btMultimaterialTriangleMeshShape(meshInterface, useQuantizedAabbCompression, buildBvh), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btMultimaterialTriangleMeshShape(lua_State* L, lua_Table* dum, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true) 
		: btMultimaterialTriangleMeshShape(meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax, buildBvh), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btMultimaterialTriangleMeshShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			return (_obj.callFunction<float>());
		}

		return btMultimaterialTriangleMeshShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btMultimaterialTriangleMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultimaterialTriangleMeshShape::getAnisotropicRollingFrictionDirection();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			return (_obj.callFunction<float>());
		}

		return btMultimaterialTriangleMeshShape::getMargin();
	};

	// void btConcaveShape::setMargin(float collisionMargin)
	void setMargin(float collisionMargin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(collisionMargin);
			return (_obj.callFunction<void>());
		}

		return btMultimaterialTriangleMeshShape::setMargin(collisionMargin);
	};

	// btVector3 btTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultimaterialTriangleMeshShape::localGetSupportingVertex(vec);
	};

	// btVector3 btTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultimaterialTriangleMeshShape::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultimaterialTriangleMeshShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btMultimaterialTriangleMeshShape::calculateLocalInertia(mass, inertia);
	};

	// const btVector3 & btTriangleMeshShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultimaterialTriangleMeshShape::getLocalScaling();
	};

	// void btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultimaterialTriangleMeshShape::processAllTriangles(callback, aabbMin, aabbMax);
	};

	// void btBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btMultimaterialTriangleMeshShape::setLocalScaling(scaling);
	};

	// int btBvhTriangleMeshShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			return (_obj.callFunction<int>());
		}

		return btMultimaterialTriangleMeshShape::calculateSerializeBufferSize();
	};

	// const char * btMultimaterialTriangleMeshShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btMultimaterialTriangleMeshShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btMultimaterialTriangleMeshShape::getName();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

