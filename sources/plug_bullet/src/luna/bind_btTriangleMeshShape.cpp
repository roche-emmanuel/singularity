#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleMeshShape.h>

class luna_wrapper_btTriangleMeshShape {
public:
	typedef Luna< btTriangleMeshShape > luna_t;

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

		btTriangleMeshShape* self= (btTriangleMeshShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleMeshShape >::push(L,self,false);
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
		//btTriangleMeshShape* ptr= dynamic_cast< btTriangleMeshShape* >(Luna< btCollisionShape >::check(L,1));
		btTriangleMeshShape* ptr= luna_caster< btCollisionShape, btTriangleMeshShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleMeshShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
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

	inline static bool _lg_typecheck_recalcLocalAabb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_getMeshInterface_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshInterface_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalAabbMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalAabbMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
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

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
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

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
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

	// Function binds:
	// btVector3 btTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btTriangleMeshShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btTriangleMeshShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleMeshShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btTriangleMeshShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleMeshShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleMeshShape::recalcLocalAabb()
	static int _bind_recalcLocalAabb(lua_State *L) {
		if (!_lg_typecheck_recalcLocalAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::recalcLocalAabb() function, expected prototype:\nvoid btTriangleMeshShape::recalcLocalAabb()\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::recalcLocalAabb(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->recalcLocalAabb();

		return 0;
	}

	// void btTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleMeshShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleMeshShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleMeshShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleMeshShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btTriangleMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btTriangleMeshShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btTriangleMeshShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btTriangleMeshShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btTriangleMeshShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btTriangleMeshShape::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleMeshShape::getLocalScaling() const function, expected prototype:\nconst btVector3 & btTriangleMeshShape::getLocalScaling() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleMeshShape::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btStridingMeshInterface * btTriangleMeshShape::getMeshInterface()
	static int _bind_getMeshInterface_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStridingMeshInterface * btTriangleMeshShape::getMeshInterface() function, expected prototype:\nbtStridingMeshInterface * btTriangleMeshShape::getMeshInterface()\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btStridingMeshInterface * btTriangleMeshShape::getMeshInterface(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btStridingMeshInterface * lret = self->getMeshInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// const btStridingMeshInterface * btTriangleMeshShape::getMeshInterface() const
	static int _bind_getMeshInterface_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btStridingMeshInterface * btTriangleMeshShape::getMeshInterface() const function, expected prototype:\nconst btStridingMeshInterface * btTriangleMeshShape::getMeshInterface() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btStridingMeshInterface * btTriangleMeshShape::getMeshInterface() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btStridingMeshInterface * lret = self->getMeshInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTriangleMeshShape::getMeshInterface
	static int _bind_getMeshInterface(lua_State *L) {
		if (_lg_typecheck_getMeshInterface_overload_1(L)) return _bind_getMeshInterface_overload_1(L);
		if (_lg_typecheck_getMeshInterface_overload_2(L)) return _bind_getMeshInterface_overload_2(L);

		luaL_error(L, "error in function getMeshInterface, cannot match any of the overloads for function getMeshInterface:\n  getMeshInterface()\n  getMeshInterface()\n");
		return 0;
	}

	// const btVector3 & btTriangleMeshShape::getLocalAabbMin() const
	static int _bind_getLocalAabbMin(lua_State *L) {
		if (!_lg_typecheck_getLocalAabbMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleMeshShape::getLocalAabbMin() const function, expected prototype:\nconst btVector3 & btTriangleMeshShape::getLocalAabbMin() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleMeshShape::getLocalAabbMin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalAabbMin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btTriangleMeshShape::getLocalAabbMax() const
	static int _bind_getLocalAabbMax(lua_State *L) {
		if (!_lg_typecheck_getLocalAabbMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleMeshShape::getLocalAabbMax() const function, expected prototype:\nconst btVector3 & btTriangleMeshShape::getLocalAabbMax() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleMeshShape::getLocalAabbMax() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalAabbMax();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const char * btTriangleMeshShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btTriangleMeshShape::getName() const function, expected prototype:\nconst char * btTriangleMeshShape::getName() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btTriangleMeshShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btTriangleMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btTriangleMeshShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleMeshShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btTriangleMeshShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleMeshShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btTriangleMeshShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleMeshShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btTriangleMeshShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btTriangleMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleMeshShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btTriangleMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleMeshShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btTriangleMeshShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btTriangleMeshShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleMeshShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTriangleMeshShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleMeshShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btTriangleMeshShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleMeshShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleMeshShape::base_getMargin() const function, expected prototype:\nfloat btTriangleMeshShape::base_getMargin() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleMeshShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btTriangleMeshShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleMeshShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btTriangleMeshShape::base_setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleMeshShape::setMargin(collisionMargin);

		return 0;
	}

	// btVector3 btTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btTriangleMeshShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btTriangleMeshShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleMeshShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btTriangleMeshShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btTriangleMeshShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleMeshShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btTriangleMeshShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleMeshShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleMeshShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleMeshShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleMeshShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btTriangleMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btTriangleMeshShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleMeshShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btTriangleMeshShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btTriangleMeshShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMeshShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleMeshShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btTriangleMeshShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleMeshShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btTriangleMeshShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleMeshShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btTriangleMeshShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const char * btTriangleMeshShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btTriangleMeshShape::base_getName() const function, expected prototype:\nconst char * btTriangleMeshShape::base_getName() const\nClass arguments details:\n");
		}


		btTriangleMeshShape* self=Luna< btCollisionShape >::checkSubType< btTriangleMeshShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btTriangleMeshShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btTriangleMeshShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

btTriangleMeshShape* LunaTraits< btTriangleMeshShape >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btTriangleMeshShape >::_bind_dtor(btTriangleMeshShape* obj) {
	delete obj;
}

const char LunaTraits< btTriangleMeshShape >::className[] = "btTriangleMeshShape";
const char LunaTraits< btTriangleMeshShape >::fullName[] = "btTriangleMeshShape";
const char LunaTraits< btTriangleMeshShape >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleMeshShape >::parents[] = {"bullet.btConcaveShape", 0};
const int LunaTraits< btTriangleMeshShape >::hash = 94409785;
const int LunaTraits< btTriangleMeshShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btTriangleMeshShape >::methods[] = {
	{"localGetSupportingVertex", &luna_wrapper_btTriangleMeshShape::_bind_localGetSupportingVertex},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleMeshShape::_bind_localGetSupportingVertexWithoutMargin},
	{"recalcLocalAabb", &luna_wrapper_btTriangleMeshShape::_bind_recalcLocalAabb},
	{"getAabb", &luna_wrapper_btTriangleMeshShape::_bind_getAabb},
	{"processAllTriangles", &luna_wrapper_btTriangleMeshShape::_bind_processAllTriangles},
	{"calculateLocalInertia", &luna_wrapper_btTriangleMeshShape::_bind_calculateLocalInertia},
	{"setLocalScaling", &luna_wrapper_btTriangleMeshShape::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btTriangleMeshShape::_bind_getLocalScaling},
	{"getMeshInterface", &luna_wrapper_btTriangleMeshShape::_bind_getMeshInterface},
	{"getLocalAabbMin", &luna_wrapper_btTriangleMeshShape::_bind_getLocalAabbMin},
	{"getLocalAabbMax", &luna_wrapper_btTriangleMeshShape::_bind_getLocalAabbMax},
	{"getName", &luna_wrapper_btTriangleMeshShape::_bind_getName},
	{"base_getBoundingSphere", &luna_wrapper_btTriangleMeshShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btTriangleMeshShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btTriangleMeshShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btTriangleMeshShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTriangleMeshShape::_bind_base_calculateSerializeBufferSize},
	{"base_getMargin", &luna_wrapper_btTriangleMeshShape::_bind_base_getMargin},
	{"base_setMargin", &luna_wrapper_btTriangleMeshShape::_bind_base_setMargin},
	{"base_localGetSupportingVertex", &luna_wrapper_btTriangleMeshShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleMeshShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_getAabb", &luna_wrapper_btTriangleMeshShape::_bind_base_getAabb},
	{"base_processAllTriangles", &luna_wrapper_btTriangleMeshShape::_bind_base_processAllTriangles},
	{"base_calculateLocalInertia", &luna_wrapper_btTriangleMeshShape::_bind_base_calculateLocalInertia},
	{"base_setLocalScaling", &luna_wrapper_btTriangleMeshShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btTriangleMeshShape::_bind_base_getLocalScaling},
	{"base_getName", &luna_wrapper_btTriangleMeshShape::_bind_base_getName},
	{"__eq", &luna_wrapper_btTriangleMeshShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleMeshShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleMeshShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleMeshShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleMeshShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btTriangleMeshShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleMeshShape >::enumValues[] = {
	{0,0}
};


