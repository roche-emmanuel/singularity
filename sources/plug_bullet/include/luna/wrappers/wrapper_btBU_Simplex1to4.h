#ifndef _WRAPPERS_WRAPPER_BTBU_SIMPLEX_TO__H_
#define _WRAPPERS_WRAPPER_BTBU_SIMPLEX_TO__H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTetrahedronShape.h>

class wrapper_btBU_Simplex1to4 : public btBU_Simplex1to4, public luna_wrapper_base {

public:
		

	~wrapper_btBU_Simplex1to4() {
		logDEBUG3("Calling delete function for wrapper btBU_Simplex1to4");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btBU_Simplex1to4*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btBU_Simplex1to4(lua_State* L, lua_Table* dum) 
		: btBU_Simplex1to4(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btBU_Simplex1to4(lua_State* L, lua_Table* dum, const btVector3 & pt0) 
		: btBU_Simplex1to4(pt0), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btBU_Simplex1to4(lua_State* L, lua_Table* dum, const btVector3 & pt0, const btVector3 & pt1) 
		: btBU_Simplex1to4(pt0, pt1), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btBU_Simplex1to4(lua_State* L, lua_Table* dum, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2) 
		: btBU_Simplex1to4(pt0, pt1, pt2), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btBU_Simplex1to4(lua_State* L, lua_Table* dum, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3) 
		: btBU_Simplex1to4(pt0, pt1, pt2, pt3), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<float>());
		}

		return btBU_Simplex1to4::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btBU_Simplex1to4::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBU_Simplex1to4::getAnisotropicRollingFrictionDirection();
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::project(trans, dir, min, max);
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBU_Simplex1to4::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getAabbSlow(t, aabbMin, aabbMax);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBU_Simplex1to4::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<float>());
		}

		return btBU_Simplex1to4::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<int>());
		}

		return btBU_Simplex1to4::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<int>());
		}

		return btBU_Simplex1to4::calculateSerializeBufferSize();
	};

	// bool btPolyhedralConvexShape::initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	bool initializePolyhedralFeatures(int shiftVerticesByMargin = 0) {
		if(_obj.pushFunction("initializePolyhedralFeatures")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(shiftVerticesByMargin);
			return (_obj.callFunction<bool>());
		}

		return btBU_Simplex1to4::initializePolyhedralFeatures(shiftVerticesByMargin);
	};

	// btVector3 btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btBU_Simplex1to4::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btPolyhedralConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// void btPolyhedralConvexShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::calculateLocalInertia(mass, inertia);
	};

	// void btPolyhedralConvexAabbCachingShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::setLocalScaling(scaling);
	};

	// void btBU_Simplex1to4::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getAabb(t, aabbMin, aabbMax);
	};

	// int btBU_Simplex1to4::getNumVertices() const
	int getNumVertices() const {
		if(_obj.pushFunction("getNumVertices")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<int>());
		}

		return btBU_Simplex1to4::getNumVertices();
	};

	// int btBU_Simplex1to4::getNumEdges() const
	int getNumEdges() const {
		if(_obj.pushFunction("getNumEdges")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<int>());
		}

		return btBU_Simplex1to4::getNumEdges();
	};

	// void btBU_Simplex1to4::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	void getEdge(int i, btVector3 & pa, btVector3 & pb) const {
		if(_obj.pushFunction("getEdge")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(i);
			_obj.pushArg(&pa);
			_obj.pushArg(&pb);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getEdge(i, pa, pb);
	};

	// void btBU_Simplex1to4::getVertex(int i, btVector3 & vtx) const
	void getVertex(int i, btVector3 & vtx) const {
		if(_obj.pushFunction("getVertex")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(i);
			_obj.pushArg(&vtx);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getVertex(i, vtx);
	};

	// int btBU_Simplex1to4::getNumPlanes() const
	int getNumPlanes() const {
		if(_obj.pushFunction("getNumPlanes")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<int>());
		}

		return btBU_Simplex1to4::getNumPlanes();
	};

	// void btBU_Simplex1to4::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	void getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const {
		if(_obj.pushFunction("getPlane")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&planeNormal);
			_obj.pushArg(&planeSupport);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return btBU_Simplex1to4::getPlane(planeNormal, planeSupport, i);
	};

	// int btBU_Simplex1to4::getIndex(int i) const
	int getIndex(int i) const {
		if(_obj.pushFunction("getIndex")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<int>());
		}

		return btBU_Simplex1to4::getIndex(i);
	};

	// bool btBU_Simplex1to4::isInside(const btVector3 & pt, float tolerance) const
	bool isInside(const btVector3 & pt, float tolerance) const {
		if(_obj.pushFunction("isInside")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			_obj.pushArg(&pt);
			_obj.pushArg(tolerance);
			return (_obj.callFunction<bool>());
		}

		return btBU_Simplex1to4::isInside(pt, tolerance);
	};

	// const char * btBU_Simplex1to4::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btBU_Simplex1to4*)this);
			return (_obj.callFunction<const char*>());
		}

		return btBU_Simplex1to4::getName();
	};


	// Protected non-virtual methods:
	// void btPolyhedralConvexAabbCachingShape::setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)
	void public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) {
		return btPolyhedralConvexAabbCachingShape::setCachedLocalAabb(aabbMin, aabbMax);
	};

	// void btPolyhedralConvexAabbCachingShape::getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		return btPolyhedralConvexAabbCachingShape::getCachedLocalAabb(aabbMin, aabbMax);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setCachedLocalAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getCachedLocalAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btPolyhedralConvexAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_public_setCachedLocalAabb(lua_State *L) {
		if (!_lg_typecheck_public_setCachedLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btPolyhedralConvexAabbCachingShape::public_setCachedLocalAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btPolyhedralConvexAabbCachingShape::public_setCachedLocalAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		wrapper_btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< wrapper_btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::public_setCachedLocalAabb(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_setCachedLocalAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btPolyhedralConvexAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_public_getCachedLocalAabb(lua_State *L) {
		if (!_lg_typecheck_public_getCachedLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPolyhedralConvexAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btPolyhedralConvexAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btPolyhedralConvexAabbCachingShape::public_getCachedLocalAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btPolyhedralConvexAabbCachingShape::public_getCachedLocalAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		wrapper_btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< wrapper_btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPolyhedralConvexAabbCachingShape::public_getCachedLocalAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_getCachedLocalAabb(aabbMin, aabbMax);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setCachedLocalAabb",_bind_public_setCachedLocalAabb},
		{"getCachedLocalAabb",_bind_public_getCachedLocalAabb},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif
