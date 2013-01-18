#include <plug_common.h>

#include <luna/wrappers/wrapper_btMinkowskiSumShape.h>

class luna_wrapper_btMinkowskiSumShape {
public:
	typedef Luna< btMinkowskiSumShape > luna_t;

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

		btMinkowskiSumShape* self= (btMinkowskiSumShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMinkowskiSumShape >::push(L,self,false);
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
		//btMinkowskiSumShape* ptr= dynamic_cast< btMinkowskiSumShape* >(Luna< btCollisionShape >::check(L,1));
		btMinkowskiSumShape* ptr= luna_caster< btCollisionShape, btMinkowskiSumShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btMinkowskiSumShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTransformB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShapeA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShapeB(lua_State *L) {
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

	inline static bool _lg_typecheck_base_project(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localGetSupportingVertex(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getAabbSlow(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
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
	// btMinkowskiSumShape::btMinkowskiSumShape(const btConvexShape * shapeA, const btConvexShape * shapeB)
	static btMinkowskiSumShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMinkowskiSumShape::btMinkowskiSumShape(const btConvexShape * shapeA, const btConvexShape * shapeB) function, expected prototype:\nbtMinkowskiSumShape::btMinkowskiSumShape(const btConvexShape * shapeA, const btConvexShape * shapeB)\nClass arguments details:\narg 1 ID = 58243831\narg 2 ID = 58243831\n");
		}

		const btConvexShape* shapeA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,1));
		const btConvexShape* shapeB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));

		return new btMinkowskiSumShape(shapeA, shapeB);
	}

	// btMinkowskiSumShape::btMinkowskiSumShape(lua_Table * data, const btConvexShape * shapeA, const btConvexShape * shapeB)
	static btMinkowskiSumShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMinkowskiSumShape::btMinkowskiSumShape(lua_Table * data, const btConvexShape * shapeA, const btConvexShape * shapeB) function, expected prototype:\nbtMinkowskiSumShape::btMinkowskiSumShape(lua_Table * data, const btConvexShape * shapeA, const btConvexShape * shapeB)\nClass arguments details:\narg 2 ID = 58243831\narg 3 ID = 58243831\n");
		}

		const btConvexShape* shapeA=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,2));
		const btConvexShape* shapeB=(Luna< btCollisionShape >::checkSubType< btConvexShape >(L,3));

		return new wrapper_btMinkowskiSumShape(L,NULL, shapeA, shapeB);
	}

	// Overload binder for btMinkowskiSumShape::btMinkowskiSumShape
	static btMinkowskiSumShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btMinkowskiSumShape, cannot match any of the overloads for function btMinkowskiSumShape:\n  btMinkowskiSumShape(const btConvexShape *, const btConvexShape *)\n  btMinkowskiSumShape(lua_Table *, const btConvexShape *, const btConvexShape *)\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btMinkowskiSumShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMinkowskiSumShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMinkowskiSumShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMinkowskiSumShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMinkowskiSumShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMinkowskiSumShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btMinkowskiSumShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btMinkowskiSumShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btMinkowskiSumShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btMinkowskiSumShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btMinkowskiSumShape::setTransformA(const btTransform & transA)
	static int _bind_setTransformA(lua_State *L) {
		if (!_lg_typecheck_setTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::setTransformA(const btTransform & transA) function, expected prototype:\nvoid btMinkowskiSumShape::setTransformA(const btTransform & transA)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* transA_ptr=(Luna< btTransform >::check(L,2));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btMinkowskiSumShape::setTransformA function");
		}
		const btTransform & transA=*transA_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::setTransformA(const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setTransformA(transA);

		return 0;
	}

	// void btMinkowskiSumShape::setTransformB(const btTransform & transB)
	static int _bind_setTransformB(lua_State *L) {
		if (!_lg_typecheck_setTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::setTransformB(const btTransform & transB) function, expected prototype:\nvoid btMinkowskiSumShape::setTransformB(const btTransform & transB)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* transB_ptr=(Luna< btTransform >::check(L,2));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btMinkowskiSumShape::setTransformB function");
		}
		const btTransform & transB=*transB_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::setTransformB(const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setTransformB(transB);

		return 0;
	}

	// const btTransform & btMinkowskiSumShape::getTransformA() const
	static int _bind_getTransformA(lua_State *L) {
		if (!_lg_typecheck_getTransformA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btMinkowskiSumShape::getTransformA() const function, expected prototype:\nconst btTransform & btMinkowskiSumShape::getTransformA() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btMinkowskiSumShape::getTransformA() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btTransform* lret = &self->getTransformA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// const btTransform & btMinkowskiSumShape::GetTransformB() const
	static int _bind_GetTransformB(lua_State *L) {
		if (!_lg_typecheck_GetTransformB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTransform & btMinkowskiSumShape::GetTransformB() const function, expected prototype:\nconst btTransform & btMinkowskiSumShape::GetTransformB() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTransform & btMinkowskiSumShape::GetTransformB() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btTransform* lret = &self->GetTransformB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,false);

		return 1;
	}

	// float btMinkowskiSumShape::getMargin() const
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMinkowskiSumShape::getMargin() const function, expected prototype:\nfloat btMinkowskiSumShape::getMargin() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMinkowskiSumShape::getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btConvexShape * btMinkowskiSumShape::getShapeA() const
	static int _bind_getShapeA(lua_State *L) {
		if (!_lg_typecheck_getShapeA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btConvexShape * btMinkowskiSumShape::getShapeA() const function, expected prototype:\nconst btConvexShape * btMinkowskiSumShape::getShapeA() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btConvexShape * btMinkowskiSumShape::getShapeA() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btConvexShape * lret = self->getShapeA();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexShape >::push(L,lret,false);

		return 1;
	}

	// const btConvexShape * btMinkowskiSumShape::getShapeB() const
	static int _bind_getShapeB(lua_State *L) {
		if (!_lg_typecheck_getShapeB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btConvexShape * btMinkowskiSumShape::getShapeB() const function, expected prototype:\nconst btConvexShape * btMinkowskiSumShape::getShapeB() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btConvexShape * btMinkowskiSumShape::getShapeB() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btConvexShape * lret = self->getShapeB();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConvexShape >::push(L,lret,false);

		return 1;
	}

	// const char * btMinkowskiSumShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btMinkowskiSumShape::getName() const function, expected prototype:\nconst char * btMinkowskiSumShape::getName() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btMinkowskiSumShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btMinkowskiSumShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btMinkowskiSumShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btMinkowskiSumShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btMinkowskiSumShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMinkowskiSumShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btMinkowskiSumShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMinkowskiSumShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMinkowskiSumShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btMinkowskiSumShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMinkowskiSumShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btMinkowskiSumShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMinkowskiSumShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMinkowskiSumShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btMinkowskiSumShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMinkowskiSumShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btMinkowskiSumShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMinkowskiSumShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMinkowskiSumShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMinkowskiSumShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btMinkowskiSumShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btMinkowskiSumShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btMinkowskiSumShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btMinkowskiSumShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMinkowskiSumShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMinkowskiSumShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMinkowskiSumShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMinkowskiSumShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMinkowskiSumShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMinkowskiSumShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMinkowskiSumShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btMinkowskiSumShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMinkowskiSumShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMinkowskiSumShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btMinkowskiSumShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMinkowskiSumShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btMinkowskiSumShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMinkowskiSumShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMinkowskiSumShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btMinkowskiSumShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btMinkowskiSumShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btMinkowskiSumShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btMinkowskiSumShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btMinkowskiSumShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btMinkowskiSumShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btMinkowskiSumShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btMinkowskiSumShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btMinkowskiSumShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_setMargin(float margin) function, expected prototype:\nvoid btMinkowskiSumShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::setMargin(margin);

		return 0;
	}

	// int btMinkowskiSumShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMinkowskiSumShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btMinkowskiSumShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMinkowskiSumShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btMinkowskiSumShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMinkowskiSumShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btMinkowskiSumShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btMinkowskiSumShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btMinkowskiSumShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMinkowskiSumShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btMinkowskiSumShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMinkowskiSumShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btMinkowskiSumShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btMinkowskiSumShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMinkowskiSumShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMinkowskiSumShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMinkowskiSumShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMinkowskiSumShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMinkowskiSumShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMinkowskiSumShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btMinkowskiSumShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btMinkowskiSumShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMinkowskiSumShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btMinkowskiSumShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btMinkowskiSumShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMinkowskiSumShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMinkowskiSumShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// float btMinkowskiSumShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMinkowskiSumShape::base_getMargin() const function, expected prototype:\nfloat btMinkowskiSumShape::base_getMargin() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMinkowskiSumShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMinkowskiSumShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btMinkowskiSumShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btMinkowskiSumShape::base_getName() const function, expected prototype:\nconst char * btMinkowskiSumShape::base_getName() const\nClass arguments details:\n");
		}


		btMinkowskiSumShape* self=Luna< btCollisionShape >::checkSubType< btMinkowskiSumShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btMinkowskiSumShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btMinkowskiSumShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

btMinkowskiSumShape* LunaTraits< btMinkowskiSumShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMinkowskiSumShape::_bind_ctor(L);
}

void LunaTraits< btMinkowskiSumShape >::_bind_dtor(btMinkowskiSumShape* obj) {
	delete obj;
}

const char LunaTraits< btMinkowskiSumShape >::className[] = "btMinkowskiSumShape";
const char LunaTraits< btMinkowskiSumShape >::fullName[] = "btMinkowskiSumShape";
const char LunaTraits< btMinkowskiSumShape >::moduleName[] = "bullet";
const char* LunaTraits< btMinkowskiSumShape >::parents[] = {"bullet.btConvexInternalShape", 0};
const int LunaTraits< btMinkowskiSumShape >::hash = 60147951;
const int LunaTraits< btMinkowskiSumShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btMinkowskiSumShape >::methods[] = {
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btMinkowskiSumShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btMinkowskiSumShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"calculateLocalInertia", &luna_wrapper_btMinkowskiSumShape::_bind_calculateLocalInertia},
	{"setTransformA", &luna_wrapper_btMinkowskiSumShape::_bind_setTransformA},
	{"setTransformB", &luna_wrapper_btMinkowskiSumShape::_bind_setTransformB},
	{"getTransformA", &luna_wrapper_btMinkowskiSumShape::_bind_getTransformA},
	{"GetTransformB", &luna_wrapper_btMinkowskiSumShape::_bind_GetTransformB},
	{"getMargin", &luna_wrapper_btMinkowskiSumShape::_bind_getMargin},
	{"getShapeA", &luna_wrapper_btMinkowskiSumShape::_bind_getShapeA},
	{"getShapeB", &luna_wrapper_btMinkowskiSumShape::_bind_getShapeB},
	{"getName", &luna_wrapper_btMinkowskiSumShape::_bind_getName},
	{"base_getBoundingSphere", &luna_wrapper_btMinkowskiSumShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btMinkowskiSumShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btMinkowskiSumShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btMinkowskiSumShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btMinkowskiSumShape::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btMinkowskiSumShape::_bind_base_localGetSupportingVertex},
	{"base_getAabb", &luna_wrapper_btMinkowskiSumShape::_bind_base_getAabb},
	{"base_getAabbSlow", &luna_wrapper_btMinkowskiSumShape::_bind_base_getAabbSlow},
	{"base_setLocalScaling", &luna_wrapper_btMinkowskiSumShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btMinkowskiSumShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btMinkowskiSumShape::_bind_base_setMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btMinkowskiSumShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btMinkowskiSumShape::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btMinkowskiSumShape::_bind_base_calculateSerializeBufferSize},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btMinkowskiSumShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btMinkowskiSumShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_calculateLocalInertia", &luna_wrapper_btMinkowskiSumShape::_bind_base_calculateLocalInertia},
	{"base_getMargin", &luna_wrapper_btMinkowskiSumShape::_bind_base_getMargin},
	{"base_getName", &luna_wrapper_btMinkowskiSumShape::_bind_base_getName},
	{"__eq", &luna_wrapper_btMinkowskiSumShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btMinkowskiSumShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMinkowskiSumShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btMinkowskiSumShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btMinkowskiSumShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btMinkowskiSumShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btMinkowskiSumShape >::enumValues[] = {
	{0,0}
};


