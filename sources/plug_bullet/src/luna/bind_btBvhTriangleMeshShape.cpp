#include <plug_common.h>

#include <luna/wrappers/wrapper_btBvhTriangleMeshShape.h>

class luna_wrapper_btBvhTriangleMeshShape {
public:
	typedef Luna< btBvhTriangleMeshShape > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btBvhTriangleMeshShape* self= (btBvhTriangleMeshShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBvhTriangleMeshShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionShape >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionShape(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btBvhTriangleMeshShape* ptr= dynamic_cast< btBvhTriangleMeshShape* >(Luna< btCollisionShape >::check(L,1));
		btBvhTriangleMeshShape* ptr= luna_caster< btCollisionShape, btBvhTriangleMeshShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBvhTriangleMeshShape >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getOwnsBvh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_performRaycast(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_performConvexcast(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_refitTree(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_partialRefitTree(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOptimizedBvh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOptimizedBvh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63725098)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildOptimizedBvh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_usesQuantizedAabbCompression(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)
	static btBvhTriangleMeshShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true) function, expected prototype:\nbtBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)\nClass arguments details:\narg 1 ID = 56402633\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,2)==1);
		bool buildBvh=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new btBvhTriangleMeshShape(meshInterface, useQuantizedAabbCompression, buildBvh);
	}

	// btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)
	static btBvhTriangleMeshShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true) function, expected prototype:\nbtBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)\nClass arguments details:\narg 1 ID = 56402633\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,2)==1);
		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btBvhTriangleMeshShape::btBvhTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btBvhTriangleMeshShape::btBvhTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;
		bool buildBvh=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		return new btBvhTriangleMeshShape(meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax, buildBvh);
	}

	// btBvhTriangleMeshShape::btBvhTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)
	static btBvhTriangleMeshShape* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhTriangleMeshShape::btBvhTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true) function, expected prototype:\nbtBvhTriangleMeshShape::btBvhTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true)\nClass arguments details:\narg 2 ID = 56402633\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,3)==1);
		bool buildBvh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new wrapper_btBvhTriangleMeshShape(L,NULL, meshInterface, useQuantizedAabbCompression, buildBvh);
	}

	// btBvhTriangleMeshShape::btBvhTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)
	static btBvhTriangleMeshShape* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBvhTriangleMeshShape::btBvhTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true) function, expected prototype:\nbtBvhTriangleMeshShape::btBvhTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool useQuantizedAabbCompression, const btVector3 & bvhAabbMin, const btVector3 & bvhAabbMax, bool buildBvh = true)\nClass arguments details:\narg 2 ID = 56402633\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		bool useQuantizedAabbCompression=(bool)(lua_toboolean(L,3)==1);
		const btVector3* bvhAabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !bvhAabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMin in btBvhTriangleMeshShape::btBvhTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMin=*bvhAabbMin_ptr;
		const btVector3* bvhAabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !bvhAabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bvhAabbMax in btBvhTriangleMeshShape::btBvhTriangleMeshShape function");
		}
		const btVector3 & bvhAabbMax=*bvhAabbMax_ptr;
		bool buildBvh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		return new wrapper_btBvhTriangleMeshShape(L,NULL, meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax, buildBvh);
	}

	// Overload binder for btBvhTriangleMeshShape::btBvhTriangleMeshShape
	static btBvhTriangleMeshShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btBvhTriangleMeshShape, cannot match any of the overloads for function btBvhTriangleMeshShape:\n  btBvhTriangleMeshShape(btStridingMeshInterface *, bool, bool)\n  btBvhTriangleMeshShape(btStridingMeshInterface *, bool, const btVector3 &, const btVector3 &, bool)\n  btBvhTriangleMeshShape(lua_Table *, btStridingMeshInterface *, bool, bool)\n  btBvhTriangleMeshShape(lua_Table *, btStridingMeshInterface *, bool, const btVector3 &, const btVector3 &, bool)\n");
		return NULL;
	}


	// Function binds:
	// bool btBvhTriangleMeshShape::getOwnsBvh() const
	static int _bind_getOwnsBvh(lua_State *L) {
		if (!_lg_typecheck_getOwnsBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBvhTriangleMeshShape::getOwnsBvh() const function, expected prototype:\nbool btBvhTriangleMeshShape::getOwnsBvh() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBvhTriangleMeshShape::getOwnsBvh() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->getOwnsBvh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btBvhTriangleMeshShape::performRaycast(btTriangleCallback * callback, const btVector3 & raySource, const btVector3 & rayTarget)
	static int _bind_performRaycast(lua_State *L) {
		if (!_lg_typecheck_performRaycast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::performRaycast(btTriangleCallback * callback, const btVector3 & raySource, const btVector3 & rayTarget) function, expected prototype:\nvoid btBvhTriangleMeshShape::performRaycast(btTriangleCallback * callback, const btVector3 & raySource, const btVector3 & rayTarget)\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* raySource_ptr=(Luna< btVector3 >::check(L,3));
		if( !raySource_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg raySource in btBvhTriangleMeshShape::performRaycast function");
		}
		const btVector3 & raySource=*raySource_ptr;
		const btVector3* rayTarget_ptr=(Luna< btVector3 >::check(L,4));
		if( !rayTarget_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTarget in btBvhTriangleMeshShape::performRaycast function");
		}
		const btVector3 & rayTarget=*rayTarget_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::performRaycast(btTriangleCallback *, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->performRaycast(callback, raySource, rayTarget);

		return 0;
	}

	// void btBvhTriangleMeshShape::performConvexcast(btTriangleCallback * callback, const btVector3 & boxSource, const btVector3 & boxTarget, const btVector3 & boxMin, const btVector3 & boxMax)
	static int _bind_performConvexcast(lua_State *L) {
		if (!_lg_typecheck_performConvexcast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::performConvexcast(btTriangleCallback * callback, const btVector3 & boxSource, const btVector3 & boxTarget, const btVector3 & boxMin, const btVector3 & boxMax) function, expected prototype:\nvoid btBvhTriangleMeshShape::performConvexcast(btTriangleCallback * callback, const btVector3 & boxSource, const btVector3 & boxTarget, const btVector3 & boxMin, const btVector3 & boxMax)\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* boxSource_ptr=(Luna< btVector3 >::check(L,3));
		if( !boxSource_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxSource in btBvhTriangleMeshShape::performConvexcast function");
		}
		const btVector3 & boxSource=*boxSource_ptr;
		const btVector3* boxTarget_ptr=(Luna< btVector3 >::check(L,4));
		if( !boxTarget_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxTarget in btBvhTriangleMeshShape::performConvexcast function");
		}
		const btVector3 & boxTarget=*boxTarget_ptr;
		const btVector3* boxMin_ptr=(Luna< btVector3 >::check(L,5));
		if( !boxMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxMin in btBvhTriangleMeshShape::performConvexcast function");
		}
		const btVector3 & boxMin=*boxMin_ptr;
		const btVector3* boxMax_ptr=(Luna< btVector3 >::check(L,6));
		if( !boxMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxMax in btBvhTriangleMeshShape::performConvexcast function");
		}
		const btVector3 & boxMax=*boxMax_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::performConvexcast(btTriangleCallback *, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->performConvexcast(callback, boxSource, boxTarget, boxMin, boxMax);

		return 0;
	}

	// void btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBvhTriangleMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBvhTriangleMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btBvhTriangleMeshShape::refitTree(const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_refitTree(lua_State *L) {
		if (!_lg_typecheck_refitTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::refitTree(const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btBvhTriangleMeshShape::refitTree(const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBvhTriangleMeshShape::refitTree function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBvhTriangleMeshShape::refitTree function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::refitTree(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->refitTree(aabbMin, aabbMax);

		return 0;
	}

	// void btBvhTriangleMeshShape::partialRefitTree(const btVector3 & aabbMin, const btVector3 & aabbMax)
	static int _bind_partialRefitTree(lua_State *L) {
		if (!_lg_typecheck_partialRefitTree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::partialRefitTree(const btVector3 & aabbMin, const btVector3 & aabbMax) function, expected prototype:\nvoid btBvhTriangleMeshShape::partialRefitTree(const btVector3 & aabbMin, const btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBvhTriangleMeshShape::partialRefitTree function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBvhTriangleMeshShape::partialRefitTree function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::partialRefitTree(const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->partialRefitTree(aabbMin, aabbMax);

		return 0;
	}

	// const char * btBvhTriangleMeshShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btBvhTriangleMeshShape::getName() const function, expected prototype:\nconst char * btBvhTriangleMeshShape::getName() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btBvhTriangleMeshShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btBvhTriangleMeshShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btBvhTriangleMeshShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// btOptimizedBvh * btBvhTriangleMeshShape::getOptimizedBvh()
	static int _bind_getOptimizedBvh(lua_State *L) {
		if (!_lg_typecheck_getOptimizedBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btOptimizedBvh * btBvhTriangleMeshShape::getOptimizedBvh() function, expected prototype:\nbtOptimizedBvh * btBvhTriangleMeshShape::getOptimizedBvh()\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btOptimizedBvh * btBvhTriangleMeshShape::getOptimizedBvh(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btOptimizedBvh * lret = self->getOptimizedBvh();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btOptimizedBvh >::push(L,lret,false);

		return 1;
	}

	// void btBvhTriangleMeshShape::setOptimizedBvh(btOptimizedBvh * bvh, const btVector3 & localScaling = btVector3 (1, 1, 1))
	static int _bind_setOptimizedBvh(lua_State *L) {
		if (!_lg_typecheck_setOptimizedBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::setOptimizedBvh(btOptimizedBvh * bvh, const btVector3 & localScaling = btVector3 (1, 1, 1)) function, expected prototype:\nvoid btBvhTriangleMeshShape::setOptimizedBvh(btOptimizedBvh * bvh, const btVector3 & localScaling = btVector3 (1, 1, 1))\nClass arguments details:\narg 1 ID = 63725098\narg 2 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		btOptimizedBvh* bvh=(Luna< btQuantizedBvh >::checkSubType< btOptimizedBvh >(L,2));
		const btVector3* localScaling_ptr=luatop>2 ? (Luna< btVector3 >::check(L,3)) : NULL;
		if( luatop>2 && !localScaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localScaling in btBvhTriangleMeshShape::setOptimizedBvh function");
		}
		const btVector3 & localScaling=luatop>2 ? *localScaling_ptr : (const btVector3)btVector3 (1, 1, 1);

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::setOptimizedBvh(btOptimizedBvh *, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setOptimizedBvh(bvh, localScaling);

		return 0;
	}

	// void btBvhTriangleMeshShape::buildOptimizedBvh()
	static int _bind_buildOptimizedBvh(lua_State *L) {
		if (!_lg_typecheck_buildOptimizedBvh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::buildOptimizedBvh() function, expected prototype:\nvoid btBvhTriangleMeshShape::buildOptimizedBvh()\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::buildOptimizedBvh(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->buildOptimizedBvh();

		return 0;
	}

	// bool btBvhTriangleMeshShape::usesQuantizedAabbCompression() const
	static int _bind_usesQuantizedAabbCompression(lua_State *L) {
		if (!_lg_typecheck_usesQuantizedAabbCompression(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBvhTriangleMeshShape::usesQuantizedAabbCompression() const function, expected prototype:\nbool btBvhTriangleMeshShape::usesQuantizedAabbCompression() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBvhTriangleMeshShape::usesQuantizedAabbCompression() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->usesQuantizedAabbCompression();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btBvhTriangleMeshShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTriangleMeshShape::calculateSerializeBufferSize() const function, expected prototype:\nint btBvhTriangleMeshShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTriangleMeshShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBvhTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btBvhTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btBvhTriangleMeshShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBvhTriangleMeshShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btBvhTriangleMeshShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBvhTriangleMeshShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btBvhTriangleMeshShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBvhTriangleMeshShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBvhTriangleMeshShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btBvhTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBvhTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btBvhTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBvhTriangleMeshShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBvhTriangleMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBvhTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBvhTriangleMeshShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btBvhTriangleMeshShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBvhTriangleMeshShape::base_getMargin() const function, expected prototype:\nfloat btBvhTriangleMeshShape::base_getMargin() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBvhTriangleMeshShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBvhTriangleMeshShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBvhTriangleMeshShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btBvhTriangleMeshShape::base_setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBvhTriangleMeshShape::setMargin(collisionMargin);

		return 0;
	}

	// btVector3 btBvhTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBvhTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBvhTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBvhTriangleMeshShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBvhTriangleMeshShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBvhTriangleMeshShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btBvhTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBvhTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBvhTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBvhTriangleMeshShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBvhTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBvhTriangleMeshShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBvhTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBvhTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBvhTriangleMeshShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBvhTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBvhTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBvhTriangleMeshShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btBvhTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btBvhTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btBvhTriangleMeshShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBvhTriangleMeshShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const btVector3 & btBvhTriangleMeshShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btBvhTriangleMeshShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btBvhTriangleMeshShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btBvhTriangleMeshShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btBvhTriangleMeshShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBvhTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBvhTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBvhTriangleMeshShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// const char * btBvhTriangleMeshShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btBvhTriangleMeshShape::base_getName() const function, expected prototype:\nconst char * btBvhTriangleMeshShape::base_getName() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btBvhTriangleMeshShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btBvhTriangleMeshShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btBvhTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBvhTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btBvhTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btBvhTriangleMeshShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBvhTriangleMeshShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBvhTriangleMeshShape::setLocalScaling(scaling);

		return 0;
	}

	// int btBvhTriangleMeshShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBvhTriangleMeshShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btBvhTriangleMeshShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btBvhTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btBvhTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBvhTriangleMeshShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBvhTriangleMeshShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btBvhTriangleMeshShape* LunaTraits< btBvhTriangleMeshShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBvhTriangleMeshShape::_bind_ctor(L);
}

void LunaTraits< btBvhTriangleMeshShape >::_bind_dtor(btBvhTriangleMeshShape* obj) {
	delete obj;
}

const char LunaTraits< btBvhTriangleMeshShape >::className[] = "btBvhTriangleMeshShape";
const char LunaTraits< btBvhTriangleMeshShape >::fullName[] = "btBvhTriangleMeshShape";
const char LunaTraits< btBvhTriangleMeshShape >::moduleName[] = "bullet";
const char* LunaTraits< btBvhTriangleMeshShape >::parents[] = {"bullet.btTriangleMeshShape", 0};
const int LunaTraits< btBvhTriangleMeshShape >::hash = 95413713;
const int LunaTraits< btBvhTriangleMeshShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btBvhTriangleMeshShape >::methods[] = {
	{"getOwnsBvh", &luna_wrapper_btBvhTriangleMeshShape::_bind_getOwnsBvh},
	{"performRaycast", &luna_wrapper_btBvhTriangleMeshShape::_bind_performRaycast},
	{"performConvexcast", &luna_wrapper_btBvhTriangleMeshShape::_bind_performConvexcast},
	{"processAllTriangles", &luna_wrapper_btBvhTriangleMeshShape::_bind_processAllTriangles},
	{"refitTree", &luna_wrapper_btBvhTriangleMeshShape::_bind_refitTree},
	{"partialRefitTree", &luna_wrapper_btBvhTriangleMeshShape::_bind_partialRefitTree},
	{"getName", &luna_wrapper_btBvhTriangleMeshShape::_bind_getName},
	{"setLocalScaling", &luna_wrapper_btBvhTriangleMeshShape::_bind_setLocalScaling},
	{"getOptimizedBvh", &luna_wrapper_btBvhTriangleMeshShape::_bind_getOptimizedBvh},
	{"setOptimizedBvh", &luna_wrapper_btBvhTriangleMeshShape::_bind_setOptimizedBvh},
	{"buildOptimizedBvh", &luna_wrapper_btBvhTriangleMeshShape::_bind_buildOptimizedBvh},
	{"usesQuantizedAabbCompression", &luna_wrapper_btBvhTriangleMeshShape::_bind_usesQuantizedAabbCompression},
	{"calculateSerializeBufferSize", &luna_wrapper_btBvhTriangleMeshShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_getMargin", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_setMargin},
	{"base_localGetSupportingVertex", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_getAabb", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getAabb},
	{"base_calculateLocalInertia", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_calculateLocalInertia},
	{"base_getLocalScaling", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getLocalScaling},
	{"base_processAllTriangles", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_processAllTriangles},
	{"base_getName", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_getName},
	{"base_setLocalScaling", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_setLocalScaling},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btBvhTriangleMeshShape::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btBvhTriangleMeshShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btBvhTriangleMeshShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBvhTriangleMeshShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btBvhTriangleMeshShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBvhTriangleMeshShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btBvhTriangleMeshShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btBvhTriangleMeshShape >::enumValues[] = {
	{0,0}
};


