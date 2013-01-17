#include <plug_common.h>

#include <luna/wrappers/wrapper_btMultimaterialTriangleMeshShape.h>

class luna_wrapper_btMultimaterialTriangleMeshShape {
public:
	typedef Luna< btMultimaterialTriangleMeshShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionShape,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionShape*)");
		}

		btCollisionShape* rhs =(Luna< btCollisionShape >::check(L,2));
		btCollisionShape* self=(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btCollisionShape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btMultimaterialTriangleMeshShape* ptr= dynamic_cast< btMultimaterialTriangleMeshShape* >(Luna< btCollisionShape >::check(L,1));
		btMultimaterialTriangleMeshShape* ptr= luna_caster< btCollisionShape, btMultimaterialTriangleMeshShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btMultimaterialTriangleMeshShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56402633)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btStridingMeshInterface >::check(L,1)) ) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56402633)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btStridingMeshInterface >::check(L,1)) ) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btStridingMeshInterface >::check(L,2)) ) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btStridingMeshInterface >::check(L,2)) ) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaterialProperties(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)
	static btMultimaterialTriangleMeshShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true) function, expected prototype:\nbtMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)\nClass arguments details:\narg 1 ID = 56402633\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,2)==1);
		bool buildBvh=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		return new btMultimaterialTriangleMeshShape(meshInterface, useQuantizedAabbCompression, buildBvh);
	}

	// btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)
	static btMultimaterialTriangleMeshShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true) function, expected prototype:\nbtMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)\nClass arguments details:\narg 1 ID = 56402633\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,2)==1);
		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;
		bool buildBvh=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		return new btMultimaterialTriangleMeshShape(meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax, buildBvh);
	}

	// btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)
	static btMultimaterialTriangleMeshShape* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true) function, expected prototype:\nbtMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)\nClass arguments details:\narg 2 ID = 56402633\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,3)==1);
		bool buildBvh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : true;

		return new wrapper_btMultimaterialTriangleMeshShape(L,NULL, meshInterface, useQuantizedAabbCompression, buildBvh);
	}

	// btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)
	static btMultimaterialTriangleMeshShape* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true) function, expected prototype:\nbtMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)\nClass arguments details:\narg 2 ID = 56402633\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,3)==1);
		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;
		bool buildBvh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : true;

		return new wrapper_btMultimaterialTriangleMeshShape(L,NULL, meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax, buildBvh);
	}

	// Overload binder for btMultimaterialTriangleMeshShape::btMultimaterialTriangleMeshShape
	static btMultimaterialTriangleMeshShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btMultimaterialTriangleMeshShape, cannot match any of the overloads for function btMultimaterialTriangleMeshShape:\n  btMultimaterialTriangleMeshShape(btStridingMeshInterface *, bool, bool)\n  btMultimaterialTriangleMeshShape(btStridingMeshInterface *, bool, const btVector3 &, const btVector3 &, bool)\n  btMultimaterialTriangleMeshShape(lua_Table *, btStridingMeshInterface *, bool, bool)\n  btMultimaterialTriangleMeshShape(lua_Table *, btStridingMeshInterface *, bool, const btVector3 &, const btVector3 &, bool)\n");
		return NULL;
	}


	// Function binds:
	// const char * btMultimaterialTriangleMeshShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btMultimaterialTriangleMeshShape::getName() const function, expected prototype:\nconst char * btMultimaterialTriangleMeshShape::getName() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btMultimaterialTriangleMeshShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const btMaterial * btMultimaterialTriangleMeshShape::getMaterialProperties(int partID, int triIndex)
	static int _bind_getMaterialProperties(lua_State *L) {
		if (!_lg_typecheck_getMaterialProperties(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btMaterial * btMultimaterialTriangleMeshShape::getMaterialProperties(int partID, int triIndex) function, expected prototype:\nconst btMaterial * btMultimaterialTriangleMeshShape::getMaterialProperties(int partID, int triIndex)\nClass arguments details:\n");
		}

		int partID=(int)lua_tointeger(L,2);
		int triIndex=(int)lua_tointeger(L,3);

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btMaterial * btMultimaterialTriangleMeshShape::getMaterialProperties(int, int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btMaterial * lret = self->getMaterialProperties(partID, triIndex);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btMaterial >::push(L,lret,false);

		return 1;
	}

	// void btMultimaterialTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultimaterialTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btMultimaterialTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btMultimaterialTriangleMeshShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultimaterialTriangleMeshShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultimaterialTriangleMeshShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btMultimaterialTriangleMeshShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultimaterialTriangleMeshShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btMultimaterialTriangleMeshShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultimaterialTriangleMeshShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMultimaterialTriangleMeshShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btMultimaterialTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultimaterialTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btMultimaterialTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultimaterialTriangleMeshShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMultimaterialTriangleMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btMultimaterialTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultimaterialTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btMultimaterialTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultimaterialTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMultimaterialTriangleMeshShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btMultimaterialTriangleMeshShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultimaterialTriangleMeshShape::base_getMargin() const function, expected prototype:\nfloat btMultimaterialTriangleMeshShape::base_getMargin() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultimaterialTriangleMeshShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMultimaterialTriangleMeshShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMultimaterialTriangleMeshShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultimaterialTriangleMeshShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btMultimaterialTriangleMeshShape::base_setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultimaterialTriangleMeshShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultimaterialTriangleMeshShape::setMargin(collisionMargin);

		return 0;
	}

	// btVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMultimaterialTriangleMeshShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMultimaterialTriangleMeshShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMultimaterialTriangleMeshShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultimaterialTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMultimaterialTriangleMeshShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMultimaterialTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultimaterialTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultimaterialTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btMultimaterialTriangleMeshShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultimaterialTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultimaterialTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultimaterialTriangleMeshShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultimaterialTriangleMeshShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btMultimaterialTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultimaterialTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btMultimaterialTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btMultimaterialTriangleMeshShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultimaterialTriangleMeshShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultimaterialTriangleMeshShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const btVector3 & btMultimaterialTriangleMeshShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btMultimaterialTriangleMeshShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btMultimaterialTriangleMeshShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btMultimaterialTriangleMeshShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btMultimaterialTriangleMeshShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btMultimaterialTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultimaterialTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btMultimaterialTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultimaterialTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultimaterialTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultimaterialTriangleMeshShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultimaterialTriangleMeshShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btMultimaterialTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultimaterialTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btMultimaterialTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btMultimaterialTriangleMeshShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultimaterialTriangleMeshShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultimaterialTriangleMeshShape::setLocalScaling(scaling);

		return 0;
	}

	// int btMultimaterialTriangleMeshShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultimaterialTriangleMeshShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btMultimaterialTriangleMeshShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultimaterialTriangleMeshShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btMultimaterialTriangleMeshShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btMultimaterialTriangleMeshShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btMultimaterialTriangleMeshShape::base_getName() const function, expected prototype:\nconst char * btMultimaterialTriangleMeshShape::base_getName() const\nClass arguments details:\n");
		}


		btMultimaterialTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btMultimaterialTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btMultimaterialTriangleMeshShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btMultimaterialTriangleMeshShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

btMultimaterialTriangleMeshShape* LunaTraits< btMultimaterialTriangleMeshShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMultimaterialTriangleMeshShape::_bind_ctor(L);
}

void LunaTraits< btMultimaterialTriangleMeshShape >::_bind_dtor(btMultimaterialTriangleMeshShape* obj) {
	delete obj;
}

const char LunaTraits< btMultimaterialTriangleMeshShape >::className[] = "btMultimaterialTriangleMeshShape";
const char LunaTraits< btMultimaterialTriangleMeshShape >::fullName[] = "btMultimaterialTriangleMeshShape";
const char LunaTraits< btMultimaterialTriangleMeshShape >::moduleName[] = "bullet";
const char* LunaTraits< btMultimaterialTriangleMeshShape >::parents[] = {"bullet.btBvhTriangleMeshShape", 0};
const int LunaTraits< btMultimaterialTriangleMeshShape >::hash = 23832905;
const int LunaTraits< btMultimaterialTriangleMeshShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btMultimaterialTriangleMeshShape >::methods[] = {
	{"getName", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_getName},
	{"getMaterialProperties", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_getMaterialProperties},
	{"base_getBoundingSphere", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_getMargin", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_setMargin},
	{"base_localGetSupportingVertex", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_getAabb", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getAabb},
	{"base_calculateLocalInertia", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_calculateLocalInertia},
	{"base_getLocalScaling", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getLocalScaling},
	{"base_processAllTriangles", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_processAllTriangles},
	{"base_setLocalScaling", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_setLocalScaling},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_calculateSerializeBufferSize},
	{"base_getName", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_base_getName},
	{"__eq", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind___eq},
	{"getTable", &luna_wrapper_btMultimaterialTriangleMeshShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btMultimaterialTriangleMeshShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btMultimaterialTriangleMeshShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btMultimaterialTriangleMeshShape >::enumValues[] = {
	{0,0}
};


