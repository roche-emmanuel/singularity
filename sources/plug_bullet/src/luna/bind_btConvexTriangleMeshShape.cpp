#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexTriangleMeshShape.h>

class luna_wrapper_btConvexTriangleMeshShape {
public:
	typedef Luna< btConvexTriangleMeshShape > luna_t;

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

		btConvexTriangleMeshShape* self= (btConvexTriangleMeshShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexTriangleMeshShape >::push(L,self,false);
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
		//btConvexTriangleMeshShape* ptr= dynamic_cast< btConvexTriangleMeshShape* >(Luna< btCollisionShape >::check(L,1));
		btConvexTriangleMeshShape* ptr= luna_caster< btCollisionShape, btConvexTriangleMeshShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btConvexTriangleMeshShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56402633)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btStridingMeshInterface >::check(L,1)) ) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btStridingMeshInterface >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getMeshInterface_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshInterface_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_localGetSupportingVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculatePrincipalAxisTransform(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_base_project(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabbSlow(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPreferredPenetrationDirection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_initializePolyhedralFeatures(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexTriangleMeshShape::btConvexTriangleMeshShape(btStridingMeshInterface * meshInterface, bool calcAabb = true)
	static btConvexTriangleMeshShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexTriangleMeshShape::btConvexTriangleMeshShape(btStridingMeshInterface * meshInterface, bool calcAabb = true) function, expected prototype:\nbtConvexTriangleMeshShape::btConvexTriangleMeshShape(btStridingMeshInterface * meshInterface, bool calcAabb = true)\nClass arguments details:\narg 1 ID = 56402633\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		bool calcAabb=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new btConvexTriangleMeshShape(meshInterface, calcAabb);
	}

	// btConvexTriangleMeshShape::btConvexTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool calcAabb = true)
	static btConvexTriangleMeshShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexTriangleMeshShape::btConvexTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool calcAabb = true) function, expected prototype:\nbtConvexTriangleMeshShape::btConvexTriangleMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface, bool calcAabb = true)\nClass arguments details:\narg 2 ID = 56402633\n");
		}

		int luatop = lua_gettop(L);

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		bool calcAabb=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_btConvexTriangleMeshShape(L,NULL, meshInterface, calcAabb);
	}

	// Overload binder for btConvexTriangleMeshShape::btConvexTriangleMeshShape
	static btConvexTriangleMeshShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConvexTriangleMeshShape, cannot match any of the overloads for function btConvexTriangleMeshShape:\n  btConvexTriangleMeshShape(btStridingMeshInterface *, bool)\n  btConvexTriangleMeshShape(lua_Table *, btStridingMeshInterface *, bool)\n");
		return NULL;
	}


	// Function binds:
	// class btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface()
	static int _bind_getMeshInterface_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in class btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface() function, expected prototype:\nclass btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface()\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call class btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		class btStridingMeshInterface * lret = self->getMeshInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// class btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface() const
	static int _bind_getMeshInterface_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in class btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface() const function, expected prototype:\nclass btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call class btStridingMeshInterface * btConvexTriangleMeshShape::getMeshInterface() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		class btStridingMeshInterface * lret = self->getMeshInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btConvexTriangleMeshShape::getMeshInterface
	static int _bind_getMeshInterface(lua_State *L) {
		if (_lg_typecheck_getMeshInterface_overload_1(L)) return _bind_getMeshInterface_overload_1(L);
		if (_lg_typecheck_getMeshInterface_overload_2(L)) return _bind_getMeshInterface_overload_2(L);

		luaL_error(L, "error in function getMeshInterface, cannot match any of the overloads for function getMeshInterface:\n  getMeshInterface()\n  getMeshInterface()\n");
		return 0;
	}

	// btVector3 btConvexTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexTriangleMeshShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexTriangleMeshShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexTriangleMeshShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexTriangleMeshShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConvexTriangleMeshShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btConvexTriangleMeshShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btConvexTriangleMeshShape::getName() const function, expected prototype:\nconst char * btConvexTriangleMeshShape::getName() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btConvexTriangleMeshShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btConvexTriangleMeshShape::getNumVertices() const
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::getNumVertices() const function, expected prototype:\nint btConvexTriangleMeshShape::getNumVertices() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexTriangleMeshShape::getNumEdges() const
	static int _bind_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::getNumEdges() const function, expected prototype:\nint btConvexTriangleMeshShape::getNumEdges() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexTriangleMeshShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_getEdge(lua_State *L) {
		if (!_lg_typecheck_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btConvexTriangleMeshShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexTriangleMeshShape::getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexTriangleMeshShape::getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getEdge(i, pa, pb);

		return 0;
	}

	// void btConvexTriangleMeshShape::getVertex(int i, btVector3 & vtx) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btConvexTriangleMeshShape::getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btConvexTriangleMeshShape::getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getVertex(i, vtx);

		return 0;
	}

	// int btConvexTriangleMeshShape::getNumPlanes() const
	static int _bind_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::getNumPlanes() const function, expected prototype:\nint btConvexTriangleMeshShape::getNumPlanes() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexTriangleMeshShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btConvexTriangleMeshShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btConvexTriangleMeshShape::getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btConvexTriangleMeshShape::getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// bool btConvexTriangleMeshShape::isInside(const btVector3 & pt, float tolerance) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexTriangleMeshShape::isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btConvexTriangleMeshShape::isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btConvexTriangleMeshShape::isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexTriangleMeshShape::isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexTriangleMeshShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexTriangleMeshShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexTriangleMeshShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btConvexTriangleMeshShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexTriangleMeshShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexTriangleMeshShape::getLocalScaling() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexTriangleMeshShape::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexTriangleMeshShape::calculatePrincipalAxisTransform(btTransform & principal, btVector3 & inertia, float & volume) const
	static int _bind_calculatePrincipalAxisTransform(lua_State *L) {
		if (!_lg_typecheck_calculatePrincipalAxisTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::calculatePrincipalAxisTransform(btTransform & principal, btVector3 & inertia, float & volume) const function, expected prototype:\nvoid btConvexTriangleMeshShape::calculatePrincipalAxisTransform(btTransform & principal, btVector3 & inertia, float & volume) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		btTransform* principal_ptr=(Luna< btTransform >::check(L,2));
		if( !principal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg principal in btConvexTriangleMeshShape::calculatePrincipalAxisTransform function");
		}
		btTransform & principal=*principal_ptr;
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btConvexTriangleMeshShape::calculatePrincipalAxisTransform function");
		}
		btVector3 & inertia=*inertia_ptr;
		float volume=(float)lua_tonumber(L,4);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::calculatePrincipalAxisTransform(btTransform &, btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculatePrincipalAxisTransform(principal, inertia, volume);

		return 0;
	}

	// void btConvexTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btConvexTriangleMeshShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btConvexTriangleMeshShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexTriangleMeshShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btConvexTriangleMeshShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexTriangleMeshShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexTriangleMeshShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btConvexTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btConvexTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexTriangleMeshShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexTriangleMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btConvexTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexTriangleMeshShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexTriangleMeshShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexTriangleMeshShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::project(trans, dir, min, max);

		return 0;
	}

	// void btConvexTriangleMeshShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexTriangleMeshShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexTriangleMeshShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexTriangleMeshShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btConvexTriangleMeshShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_setMargin(float margin) function, expected prototype:\nvoid btConvexTriangleMeshShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::setMargin(margin);

		return 0;
	}

	// float btConvexTriangleMeshShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexTriangleMeshShape::base_getMargin() const function, expected prototype:\nfloat btConvexTriangleMeshShape::base_getMargin() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexTriangleMeshShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btConvexTriangleMeshShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexTriangleMeshShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btConvexTriangleMeshShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexTriangleMeshShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btConvexTriangleMeshShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btConvexTriangleMeshShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btConvexTriangleMeshShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexTriangleMeshShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btConvexTriangleMeshShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexTriangleMeshShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btConvexTriangleMeshShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexTriangleMeshShape::base_initializePolyhedralFeatures(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btConvexTriangleMeshShape::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btConvexTriangleMeshShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btConvexTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btConvexTriangleMeshShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btConvexTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btConvexTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// btVector3 btConvexTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexTriangleMeshShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexTriangleMeshShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexTriangleMeshShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btConvexTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btConvexTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btConvexTriangleMeshShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btConvexTriangleMeshShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btConvexTriangleMeshShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btConvexTriangleMeshShape::base_getName() const function, expected prototype:\nconst char * btConvexTriangleMeshShape::base_getName() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btConvexTriangleMeshShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btConvexTriangleMeshShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btConvexTriangleMeshShape::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::base_getNumVertices() const function, expected prototype:\nint btConvexTriangleMeshShape::base_getNumVertices() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::base_getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexTriangleMeshShape::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btConvexTriangleMeshShape::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::base_getNumEdges() const function, expected prototype:\nint btConvexTriangleMeshShape::base_getNumEdges() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::base_getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexTriangleMeshShape::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btConvexTriangleMeshShape::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btConvexTriangleMeshShape::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getEdge(i, pa, pb);

		return 0;
	}

	// void btConvexTriangleMeshShape::base_getVertex(int i, btVector3 & vtx) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btConvexTriangleMeshShape::base_getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getVertex(i, vtx);

		return 0;
	}

	// int btConvexTriangleMeshShape::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btConvexTriangleMeshShape::base_getNumPlanes() const function, expected prototype:\nint btConvexTriangleMeshShape::base_getNumPlanes() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btConvexTriangleMeshShape::base_getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btConvexTriangleMeshShape::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btConvexTriangleMeshShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btConvexTriangleMeshShape::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btConvexTriangleMeshShape::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// bool btConvexTriangleMeshShape::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexTriangleMeshShape::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btConvexTriangleMeshShape::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btConvexTriangleMeshShape::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexTriangleMeshShape::base_isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btConvexTriangleMeshShape::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btConvexTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btConvexTriangleMeshShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexTriangleMeshShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btConvexTriangleMeshShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btConvexTriangleMeshShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btConvexTriangleMeshShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btConvexTriangleMeshShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btConvexTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btConvexTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btConvexTriangleMeshShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btConvexTriangleMeshShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btConvexTriangleMeshShape* LunaTraits< btConvexTriangleMeshShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexTriangleMeshShape::_bind_ctor(L);
}

void LunaTraits< btConvexTriangleMeshShape >::_bind_dtor(btConvexTriangleMeshShape* obj) {
	delete obj;
}

const char LunaTraits< btConvexTriangleMeshShape >::className[] = "btConvexTriangleMeshShape";
const char LunaTraits< btConvexTriangleMeshShape >::fullName[] = "btConvexTriangleMeshShape";
const char LunaTraits< btConvexTriangleMeshShape >::moduleName[] = "bullet";
const char* LunaTraits< btConvexTriangleMeshShape >::parents[] = {"bullet.btPolyhedralConvexAabbCachingShape", 0};
const int LunaTraits< btConvexTriangleMeshShape >::hash = 76778321;
const int LunaTraits< btConvexTriangleMeshShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btConvexTriangleMeshShape >::methods[] = {
	{"getMeshInterface", &luna_wrapper_btConvexTriangleMeshShape::_bind_getMeshInterface},
	{"localGetSupportingVertex", &luna_wrapper_btConvexTriangleMeshShape::_bind_localGetSupportingVertex},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexTriangleMeshShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexTriangleMeshShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"getName", &luna_wrapper_btConvexTriangleMeshShape::_bind_getName},
	{"getNumVertices", &luna_wrapper_btConvexTriangleMeshShape::_bind_getNumVertices},
	{"getNumEdges", &luna_wrapper_btConvexTriangleMeshShape::_bind_getNumEdges},
	{"getEdge", &luna_wrapper_btConvexTriangleMeshShape::_bind_getEdge},
	{"getVertex", &luna_wrapper_btConvexTriangleMeshShape::_bind_getVertex},
	{"getNumPlanes", &luna_wrapper_btConvexTriangleMeshShape::_bind_getNumPlanes},
	{"getPlane", &luna_wrapper_btConvexTriangleMeshShape::_bind_getPlane},
	{"isInside", &luna_wrapper_btConvexTriangleMeshShape::_bind_isInside},
	{"setLocalScaling", &luna_wrapper_btConvexTriangleMeshShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btConvexTriangleMeshShape::_bind_getLocalScaling},
	{"calculatePrincipalAxisTransform", &luna_wrapper_btConvexTriangleMeshShape::_bind_calculatePrincipalAxisTransform},
	{"base_getBoundingSphere", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_project},
	{"base_getAabbSlow", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getAabbSlow},
	{"base_setMargin", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_initializePolyhedralFeatures},
	{"base_calculateLocalInertia", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_calculateLocalInertia},
	{"base_getAabb", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getAabb},
	{"base_localGetSupportingVertex", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_getName", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getName},
	{"base_getNumVertices", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getNumVertices},
	{"base_getNumEdges", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getNumEdges},
	{"base_getEdge", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getEdge},
	{"base_getVertex", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getVertex},
	{"base_getNumPlanes", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getNumPlanes},
	{"base_getPlane", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getPlane},
	{"base_isInside", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_isInside},
	{"base_setLocalScaling", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btConvexTriangleMeshShape::_bind_base_getLocalScaling},
	{"__eq", &luna_wrapper_btConvexTriangleMeshShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexTriangleMeshShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexTriangleMeshShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexTriangleMeshShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexTriangleMeshShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btConvexTriangleMeshShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexTriangleMeshShape >::enumValues[] = {
	{0,0}
};


