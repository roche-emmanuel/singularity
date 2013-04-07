#ifndef _WRAPPERS_WRAPPER_BTHEIGHTFIELDTERRAINSHAPE_H_
#define _WRAPPERS_WRAPPER_BTHEIGHTFIELDTERRAINSHAPE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h>

class wrapper_btHeightfieldTerrainShape : public btHeightfieldTerrainShape, public luna_wrapper_base {

public:
		

	~wrapper_btHeightfieldTerrainShape() {
		logDEBUG3("Calling delete function for wrapper btHeightfieldTerrainShape");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btHeightfieldTerrainShape*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btHeightfieldTerrainShape(lua_State* L, lua_Table* dum, int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges) 
		: btHeightfieldTerrainShape(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, heightDataType, flipQuadEdges), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_btHeightfieldTerrainShape(lua_State* L, lua_Table* dum, int heightStickWidth, int heightStickLength, const void * heightfieldData, float maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges) 
		: btHeightfieldTerrainShape(heightStickWidth, heightStickLength, heightfieldData, maxHeight, upAxis, useFloatData, flipQuadEdges), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// float btHeightfieldTerrainShape::getRawHeightFieldValue(int x, int y) const
	float getRawHeightFieldValue(int x, int y) const {
		if(_obj.pushFunction("getRawHeightFieldValue")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<float>());
		}

		return btHeightfieldTerrainShape::getRawHeightFieldValue(x, y);
	};

public:
	// Public virtual methods:
	// void btCollisionShape::getBoundingSphere(btVector3 & center, float & radius) const
	void getBoundingSphere(btVector3 & center, float & radius) const {
		if(_obj.pushFunction("getBoundingSphere")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(&center);
			_obj.pushArg(radius);
			return (_obj.callFunction<void>());
		}

		return btHeightfieldTerrainShape::getBoundingSphere(center, radius);
	};

	// float btCollisionShape::getAngularMotionDisc() const
	float getAngularMotionDisc() const {
		if(_obj.pushFunction("getAngularMotionDisc")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			return (_obj.callFunction<float>());
		}

		return btHeightfieldTerrainShape::getAngularMotionDisc();
	};

	// float btCollisionShape::getContactBreakingThreshold(float defaultContactThresholdFactor) const
	float getContactBreakingThreshold(float defaultContactThresholdFactor) const {
		if(_obj.pushFunction("getContactBreakingThreshold")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(defaultContactThresholdFactor);
			return (_obj.callFunction<float>());
		}

		return btHeightfieldTerrainShape::getContactBreakingThreshold(defaultContactThresholdFactor);
	};

	// btVector3 btCollisionShape::getAnisotropicRollingFrictionDirection() const
	btVector3 getAnisotropicRollingFrictionDirection() const {
		if(_obj.pushFunction("getAnisotropicRollingFrictionDirection")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btHeightfieldTerrainShape::getAnisotropicRollingFrictionDirection();
	};

	// int btCollisionShape::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			return (_obj.callFunction<int>());
		}

		return btHeightfieldTerrainShape::calculateSerializeBufferSize();
	};

	// float btConcaveShape::getMargin() const
	float getMargin() const {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			return (_obj.callFunction<float>());
		}

		return btHeightfieldTerrainShape::getMargin();
	};

	// void btConcaveShape::setMargin(float collisionMargin)
	void setMargin(float collisionMargin) {
		if(_obj.pushFunction("setMargin")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(collisionMargin);
			return (_obj.callFunction<void>());
		}

		return btHeightfieldTerrainShape::setMargin(collisionMargin);
	};

	// void btHeightfieldTerrainShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	void getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const {
		if(_obj.pushFunction("getAabb")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(&t);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btHeightfieldTerrainShape::getAabb(t, aabbMin, aabbMax);
	};

	// void btHeightfieldTerrainShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	void processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const {
		if(_obj.pushFunction("processAllTriangles")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(callback);
			_obj.pushArg(&aabbMin);
			_obj.pushArg(&aabbMax);
			return (_obj.callFunction<void>());
		}

		return btHeightfieldTerrainShape::processAllTriangles(callback, aabbMin, aabbMax);
	};

	// void btHeightfieldTerrainShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	void calculateLocalInertia(float mass, btVector3 & inertia) const {
		if(_obj.pushFunction("calculateLocalInertia")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(mass);
			_obj.pushArg(&inertia);
			return (_obj.callFunction<void>());
		}

		return btHeightfieldTerrainShape::calculateLocalInertia(mass, inertia);
	};

	// void btHeightfieldTerrainShape::setLocalScaling(const btVector3 & scaling)
	void setLocalScaling(const btVector3 & scaling) {
		if(_obj.pushFunction("setLocalScaling")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			_obj.pushArg(&scaling);
			return (_obj.callFunction<void>());
		}

		return btHeightfieldTerrainShape::setLocalScaling(scaling);
	};

	// const btVector3 & btHeightfieldTerrainShape::getLocalScaling() const
	const btVector3 & getLocalScaling() const {
		if(_obj.pushFunction("getLocalScaling")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btHeightfieldTerrainShape::getLocalScaling();
	};

	// const char * btHeightfieldTerrainShape::getName() const
	const char * getName() const {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((btHeightfieldTerrainShape*)this);
			return (_obj.callFunction<const char*>());
		}

		return btHeightfieldTerrainShape::getName();
	};


	// Protected non-virtual methods:
	// void btHeightfieldTerrainShape::quantizeWithClamp(int * out, const btVector3 & point, int isMax) const
	void public_quantizeWithClamp(int * out, const btVector3 & point, int isMax) const {
		return btHeightfieldTerrainShape::quantizeWithClamp(out, point, isMax);
	};

	// void btHeightfieldTerrainShape::getVertex(int x, int y, btVector3 & vertex) const
	void public_getVertex(int x, int y, btVector3 & vertex) const {
		return btHeightfieldTerrainShape::getVertex(x, y, vertex);
	};

	// void btHeightfieldTerrainShape::initialize(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)
	void public_initialize(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges) {
		return btHeightfieldTerrainShape::initialize(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, heightDataType, flipQuadEdges);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_quantizeWithClamp(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getVertex(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_initialize(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btHeightfieldTerrainShape::public_quantizeWithClamp(int * out, const btVector3 & point, int isMax) const
	static int _bind_public_quantizeWithClamp(lua_State *L) {
		if (!_lg_typecheck_public_quantizeWithClamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::public_quantizeWithClamp(int * out, const btVector3 & point, int isMax) const function, expected prototype:\nvoid btHeightfieldTerrainShape::public_quantizeWithClamp(int * out, const btVector3 & point, int isMax) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int* out=(int*)Luna< void >::check(L,2);
		const btVector3* point_ptr=(Luna< btVector3 >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in btHeightfieldTerrainShape::public_quantizeWithClamp function");
		}
		const btVector3 & point=*point_ptr;
		int isMax=(int)lua_tointeger(L,4);

		wrapper_btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::public_quantizeWithClamp(int *, const btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_quantizeWithClamp(out, point, isMax);

		return 0;
	}

	// void btHeightfieldTerrainShape::public_getVertex(int x, int y, btVector3 & vertex) const
	static int _bind_public_getVertex(lua_State *L) {
		if (!_lg_typecheck_public_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::public_getVertex(int x, int y, btVector3 & vertex) const function, expected prototype:\nvoid btHeightfieldTerrainShape::public_getVertex(int x, int y, btVector3 & vertex) const\nClass arguments details:\narg 3 ID = 91544891\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		btVector3* vertex_ptr=(Luna< btVector3 >::check(L,4));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in btHeightfieldTerrainShape::public_getVertex function");
		}
		btVector3 & vertex=*vertex_ptr;

		wrapper_btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::public_getVertex(int, int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_getVertex(x, y, vertex);

		return 0;
	}

	// void btHeightfieldTerrainShape::public_initialize(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)
	static int _bind_public_initialize(lua_State *L) {
		if (!_lg_typecheck_public_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHeightfieldTerrainShape::public_initialize(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges) function, expected prototype:\nvoid btHeightfieldTerrainShape::public_initialize(int heightStickWidth, int heightStickLength, const void * heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges)\nClass arguments details:\n");
		}

		int heightStickWidth=(int)lua_tointeger(L,2);
		int heightStickLength=(int)lua_tointeger(L,3);
		void* heightfieldData=(Luna< void >::check(L,4));
		float heightScale=(float)lua_tonumber(L,5);
		float minHeight=(float)lua_tonumber(L,6);
		float maxHeight=(float)lua_tonumber(L,7);
		int upAxis=(int)lua_tointeger(L,8);
		PHY_ScalarType heightDataType=(PHY_ScalarType)lua_tointeger(L,9);
		bool flipQuadEdges=(bool)(lua_toboolean(L,10)==1);

		wrapper_btHeightfieldTerrainShape* self=Luna< btCollisionShape >::checkSubType< wrapper_btHeightfieldTerrainShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHeightfieldTerrainShape::public_initialize(int, int, const void *, float, float, float, int, PHY_ScalarType, bool). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->public_initialize(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, heightDataType, flipQuadEdges);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"quantizeWithClamp",_bind_public_quantizeWithClamp},
		{"getVertex",_bind_public_getVertex},
		{"initialize",_bind_public_initialize},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

