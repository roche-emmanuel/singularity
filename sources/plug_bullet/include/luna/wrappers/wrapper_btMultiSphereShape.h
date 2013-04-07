#ifndef _WRAPPERS_WRAPPER_BTMULTISPHERESHAPE_H_
#define _WRAPPERS_WRAPPER_BTMULTISPHERESHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btMultiSphereShape.h>

class wrapper_btMultiSphereShape : public btMultiSphereShape, public luna_wrapper_base {

public:
		

	~wrapper_btMultiSphereShape() {
		logDEBUG3("Calling delete function for wrapper btMultiSphereShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btMultiSphereShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btMultiSphereShape(lua_State* L, lua_Table* dum, const btVector3 * positions, const float * radi, int numSpheres) 
		: btMultiSphereShape(positions, radi, numSpheres), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return (_obj.callFunction<float>());
		}

		return btMultiSphereShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btMultiSphereShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultiSphereShape::getAnisotropicRollingFrictionDirection();
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::project(trans, dir, min, max);
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultiSphereShape::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultiSphereShape::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return (_obj.callFunction<float>());
		}

		return btMultiSphereShape::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return (_obj.callFunction<int>());
		}

		return btMultiSphereShape::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// void btConvexInternalAabbCachingShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::setLocalScaling(scaling);
	};

	// void btConvexInternalAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btMultiSphereShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::calculateLocalInertia(mass, inertia);
	};

	// btVector3 btMultiSphereShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btMultiSphereShape::localGetSupportingVertexWithoutMargin(vec);
	};

	// void btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		if(_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin")) {
			_obj.pushArg((btMultiSphereShape*)this);
			_obj.pushArg(vectors);
			_obj.pushArg(supportVerticesOut);
			_obj.pushArg(numVectors);
			return (_obj.callFunction<void>());
		}

		return btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);
	};

	// const char * btMultiSphereShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btMultiSphereShape::getName();
	};

	// int btMultiSphereShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btMultiSphereShape*)this);
			return (_obj.callFunction<int>());
		}

		return btMultiSphereShape::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btConvexInternalAabbCachingShape::setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)
	void public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) {
		return btConvexInternalAabbCachingShape::setCachedLocalAabb(aabbMin, aabbMax);
	};

	// void btConvexInternalAabbCachingShape::getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	void public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const {
		return btConvexInternalAabbCachingShape::getCachedLocalAabb(aabbMin, aabbMax);
	};

	// void btConvexInternalAabbCachingShape::getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const
	void public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const {
		return btConvexInternalAabbCachingShape::getNonvirtualAabb(trans, aabbMin, aabbMax, margin);
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

	inline static bool _lg_typecheck_public_getNonvirtualAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_public_setCachedLocalAabb(lua_State *L) {
		if (!_lg_typecheck_public_setCachedLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalAabbCachingShape::public_setCachedLocalAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalAabbCachingShape::public_setCachedLocalAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		wrapper_btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_setCachedLocalAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_public_getCachedLocalAabb(lua_State *L) {
		if (!_lg_typecheck_public_getCachedLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalAabbCachingShape::public_getCachedLocalAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalAabbCachingShape::public_getCachedLocalAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		wrapper_btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_getCachedLocalAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const
	static int _bind_public_getNonvirtualAabb(lua_State *L) {
		if (!_lg_typecheck_public_getNonvirtualAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexInternalAabbCachingShape::public_getNonvirtualAabb function");
		}
		const btTransform & trans=*trans_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexInternalAabbCachingShape::public_getNonvirtualAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexInternalAabbCachingShape::public_getNonvirtualAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;
		float margin=(float)lua_tonumber(L,5);

		wrapper_btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform &, btVector3 &, btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_getNonvirtualAabb(trans, aabbMin, aabbMax, margin);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setCachedLocalAabb",_bind_public_setCachedLocalAabb},
		{"getCachedLocalAabb",_bind_public_getCachedLocalAabb},
		{"getNonvirtualAabb",_bind_public_getNonvirtualAabb},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

