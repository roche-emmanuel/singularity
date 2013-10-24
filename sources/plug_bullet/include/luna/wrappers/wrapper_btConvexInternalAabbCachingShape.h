#ifndef _WRAPPERS_WRAPPER_BTCONVEXINTERNALAABBCACHINGSHAPE_H_
#define _WRAPPERS_WRAPPER_BTCONVEXINTERNALAABBCACHINGSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btConvexInternalShape.h>

class wrapper_btConvexInternalAabbCachingShape : public btConvexInternalAabbCachingShape, public luna_wrapper_base {

public:
		

	~wrapper_btConvexInternalAabbCachingShape() {
		logDEBUG3("Calling delete function for wrapper btConvexInternalAabbCachingShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btConvexInternalAabbCachingShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btConvexInternalAabbCachingShape(lua_State* L, lua_Table* dum) 
		: btConvexInternalAabbCachingShape(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConvexInternalAabbCachingShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btConvexInternalAabbCachingShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// void btCollisionShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		THROW_IF(!_obj.pushFunction("calculateLocalInertia"),"No implementation for abstract function btCollisionShape::calculateLocalInertia");
		_obj.pushArg((btConvexInternalAabbCachingShape*)this);
		_obj.pushArg(mass);
		_obj.pushArg(&inertia);
		return (_obj.callFunction<void>());
	};

	// const char * btCollisionShape::getName() const
	const char * getName() const {
		THROW_IF(!_obj.pushFunction("getName"),"No implementation for abstract function btCollisionShape::getName");
		_obj.pushArg((btConvexInternalAabbCachingShape*)this);
		return (_obj.callFunction<const char*>());
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexInternalAabbCachingShape::getAnisotropicRollingFrictionDirection();
	};

	// btVector3 btConvexShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	btVector3 localGetSupportingVertexWithoutMargin(const btVector3 & vec) const {
		THROW_IF(!_obj.pushFunction("localGetSupportingVertexWithoutMargin"),"No implementation for abstract function btConvexShape::localGetSupportingVertexWithoutMargin");
		_obj.pushArg((btConvexInternalAabbCachingShape*)this);
		_obj.pushArg(&vec);
		return *(_obj.callFunction<btVector3*>());
	};

	// void btConvexShape::project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	void project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const {
		if(_obj.pushFunction("project")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(&trans);
			_obj.pushArg(&dir);
			_obj.pushArg(min);
			_obj.pushArg(max);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::project(trans, dir, min, max);
	};

	// void btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const {
		THROW_IF(!_obj.pushFunction("batchedUnitVectorGetSupportingVertexWithoutMargin"),"No implementation for abstract function btConvexShape::batchedUnitVectorGetSupportingVertexWithoutMargin");
		_obj.pushArg((btConvexInternalAabbCachingShape*)this);
		_obj.pushArg(vectors);
		_obj.pushArg(supportVerticesOut);
		_obj.pushArg(numVectors);
		return (_obj.callFunction<void>());
	};

	// btVector3 btConvexInternalShape::localGetSupportingVertex(const btVector3 & vec) const
	btVector3 localGetSupportingVertex(const btVector3 & vec) const {
		if(_obj.pushFunction("localGetSupportingVertex")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(&vec);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexInternalAabbCachingShape::localGetSupportingVertex(vec);
	};

	// void btConvexInternalShape::getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabbSlow")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::getAabbSlow(t, aabbMin, aabbMax);
	};

	// const btVector3 & btConvexInternalShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btConvexInternalAabbCachingShape::getLocalScaling();
	};

	// void btConvexInternalShape::setMargin(float margin)
	void setMargin(float margin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(margin);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::setMargin(margin);
	};

	// float btConvexInternalShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			return (_obj.callFunction<float>());
		}

		return btConvexInternalAabbCachingShape::getMargin();
	};

	// int btConvexInternalShape::getNumPreferredPenetrationDirections() const
	int getNumPreferredPenetrationDirections() const {
		if(_obj.pushFunction("getNumPreferredPenetrationDirections")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConvexInternalAabbCachingShape::getNumPreferredPenetrationDirections();
	};

	// void btConvexInternalShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	void getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const {
		if(_obj.pushFunction("getPreferredPenetrationDirection")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(index);
			_obj.pushArg(&penetrationVector);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::getPreferredPenetrationDirection(index, penetrationVector);
	};

	// int btConvexInternalShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			return (_obj.callFunction<int>());
		}

		return btConvexInternalAabbCachingShape::calculateSerializeBufferSize();
	};

	// void btConvexInternalAabbCachingShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::setLocalScaling(scaling);
	};

	// void btConvexInternalAabbCachingShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btConvexInternalAabbCachingShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btConvexInternalAabbCachingShape::getAabb(t, aabbMin, aabbMax);
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
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_public_setCachedLocalAabb(lua_State *L) {
		if (!_lg_typecheck_public_setCachedLocalAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
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

		wrapper_btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::public_setCachedLocalAabb(const btVector3 &, const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setCachedLocalAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_public_getCachedLocalAabb(lua_State *L) {
		if (!_lg_typecheck_public_getCachedLocalAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
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

		wrapper_btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::public_getCachedLocalAabb(btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_getCachedLocalAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const
	static int _bind_public_getNonvirtualAabb(lua_State *L) {
		if (!_lg_typecheck_public_getNonvirtualAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const function, expected prototype:\nvoid btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform & trans, btVector3 & aabbMin, btVector3 & aabbMax, float margin) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
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

		wrapper_btConvexInternalAabbCachingShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btConvexInternalAabbCachingShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btConvexInternalAabbCachingShape::public_getNonvirtualAabb(const btTransform &, btVector3 &, btVector3 &, float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
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

