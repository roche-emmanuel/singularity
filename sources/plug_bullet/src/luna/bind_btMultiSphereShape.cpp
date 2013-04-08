#include <plug_common.h>

#include <luna/wrappers/wrapper_btMultiSphereShape.h>

class luna_wrapper_btMultiSphereShape {
public:
	typedef Luna< btMultiSphereShape > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		btMultiSphereShape* self= (btMultiSphereShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btMultiSphereShape >::push(L,self,false);
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
		//btMultiSphereShape* ptr= dynamic_cast< btMultiSphereShape* >(Luna< btCollisionShape >::check(L,1));
		btMultiSphereShape* ptr= luna_caster< btCollisionShape, btMultiSphereShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btMultiSphereShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91544891)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btVector3 >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btVector3 >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_getSphereCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSpherePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSphereRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getAabbSlow(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btMultiSphereShape::btMultiSphereShape(const btVector3 * positions, const float * radi, int numSpheres)
	static btMultiSphereShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultiSphereShape::btMultiSphereShape(const btVector3 * positions, const float * radi, int numSpheres) function, expected prototype:\nbtMultiSphereShape::btMultiSphereShape(const btVector3 * positions, const float * radi, int numSpheres)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* positions=(Luna< btVector3 >::check(L,1));
		const float* radi=(const float*)Luna< void >::check(L,2);
		int numSpheres=(int)lua_tointeger(L,3);

		return new btMultiSphereShape(positions, radi, numSpheres);
	}

	// btMultiSphereShape::btMultiSphereShape(lua_Table * data, const btVector3 * positions, const float * radi, int numSpheres)
	static btMultiSphereShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btMultiSphereShape::btMultiSphereShape(lua_Table * data, const btVector3 * positions, const float * radi, int numSpheres) function, expected prototype:\nbtMultiSphereShape::btMultiSphereShape(lua_Table * data, const btVector3 * positions, const float * radi, int numSpheres)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		const btVector3* positions=(Luna< btVector3 >::check(L,2));
		const float* radi=(const float*)Luna< void >::check(L,3);
		int numSpheres=(int)lua_tointeger(L,4);

		return new wrapper_btMultiSphereShape(L,NULL, positions, radi, numSpheres);
	}

	// Overload binder for btMultiSphereShape::btMultiSphereShape
	static btMultiSphereShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btMultiSphereShape, cannot match any of the overloads for function btMultiSphereShape:\n  btMultiSphereShape(const btVector3 *, const float *, int)\n  btMultiSphereShape(lua_Table *, const btVector3 *, const float *, int)\n");
		return NULL;
	}


	// Function binds:
	// void btMultiSphereShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btMultiSphereShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btMultiSphereShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// btVector3 btMultiSphereShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultiSphereShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMultiSphereShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMultiSphereShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultiSphereShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// int btMultiSphereShape::getSphereCount() const
	static int _bind_getSphereCount(lua_State *L) {
		if (!_lg_typecheck_getSphereCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultiSphereShape::getSphereCount() const function, expected prototype:\nint btMultiSphereShape::getSphereCount() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultiSphereShape::getSphereCount() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getSphereCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 & btMultiSphereShape::getSpherePosition(int index) const
	static int _bind_getSpherePosition(lua_State *L) {
		if (!_lg_typecheck_getSpherePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btMultiSphereShape::getSpherePosition(int index) const function, expected prototype:\nconst btVector3 & btMultiSphereShape::getSpherePosition(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btMultiSphereShape::getSpherePosition(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getSpherePosition(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btMultiSphereShape::getSphereRadius(int index) const
	static int _bind_getSphereRadius(lua_State *L) {
		if (!_lg_typecheck_getSphereRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultiSphereShape::getSphereRadius(int index) const function, expected prototype:\nfloat btMultiSphereShape::getSphereRadius(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultiSphereShape::getSphereRadius(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getSphereRadius(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btMultiSphereShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btMultiSphereShape::getName() const function, expected prototype:\nconst char * btMultiSphereShape::getName() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btMultiSphereShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btMultiSphereShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultiSphereShape::calculateSerializeBufferSize() const function, expected prototype:\nint btMultiSphereShape::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultiSphereShape::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMultiSphereShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btMultiSphereShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btMultiSphereShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btMultiSphereShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultiSphereShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btMultiSphereShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultiSphereShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMultiSphereShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btMultiSphereShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultiSphereShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btMultiSphereShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultiSphereShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMultiSphereShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btMultiSphereShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultiSphereShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btMultiSphereShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultiSphereShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMultiSphereShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMultiSphereShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btMultiSphereShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btMultiSphereShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btMultiSphereShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btMultiSphereShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultiSphereShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMultiSphereShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMultiSphereShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultiSphereShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMultiSphereShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMultiSphereShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultiSphereShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btMultiSphereShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSphereShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSphereShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btMultiSphereShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btMultiSphereShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btMultiSphereShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btMultiSphereShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btMultiSphereShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btMultiSphereShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_setMargin(float margin) function, expected prototype:\nvoid btMultiSphereShape::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::setMargin(margin);

		return 0;
	}

	// float btMultiSphereShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btMultiSphereShape::base_getMargin() const function, expected prototype:\nfloat btMultiSphereShape::base_getMargin() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btMultiSphereShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btMultiSphereShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btMultiSphereShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultiSphereShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btMultiSphereShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultiSphereShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btMultiSphereShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btMultiSphereShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btMultiSphereShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btMultiSphereShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btMultiSphereShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btMultiSphereShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btMultiSphereShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::setLocalScaling(scaling);

		return 0;
	}

	// void btMultiSphereShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btMultiSphereShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btMultiSphereShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btMultiSphereShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btMultiSphereShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btMultiSphereShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btMultiSphereShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btMultiSphereShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// btVector3 btMultiSphereShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btMultiSphereShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btMultiSphereShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btMultiSphereShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btMultiSphereShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btMultiSphereShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btMultiSphereShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btMultiSphereShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btMultiSphereShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btMultiSphereShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btMultiSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// const char * btMultiSphereShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btMultiSphereShape::base_getName() const function, expected prototype:\nconst char * btMultiSphereShape::base_getName() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btMultiSphereShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btMultiSphereShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btMultiSphereShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btMultiSphereShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btMultiSphereShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btMultiSphereShape* self=Luna< btCollisionShape >::checkSubType< btMultiSphereShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btMultiSphereShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btMultiSphereShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btMultiSphereShape* LunaTraits< btMultiSphereShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btMultiSphereShape::_bind_ctor(L);
}

void LunaTraits< btMultiSphereShape >::_bind_dtor(btMultiSphereShape* obj) {
	delete obj;
}

const char LunaTraits< btMultiSphereShape >::className[] = "btMultiSphereShape";
const char LunaTraits< btMultiSphereShape >::fullName[] = "btMultiSphereShape";
const char LunaTraits< btMultiSphereShape >::moduleName[] = "bullet";
const char* LunaTraits< btMultiSphereShape >::parents[] = {"bullet.btConvexInternalAabbCachingShape", 0};
const int LunaTraits< btMultiSphereShape >::hash = 66651412;
const int LunaTraits< btMultiSphereShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btMultiSphereShape >::methods[] = {
	{"calculateLocalInertia", &luna_wrapper_btMultiSphereShape::_bind_calculateLocalInertia},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btMultiSphereShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btMultiSphereShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"getSphereCount", &luna_wrapper_btMultiSphereShape::_bind_getSphereCount},
	{"getSpherePosition", &luna_wrapper_btMultiSphereShape::_bind_getSpherePosition},
	{"getSphereRadius", &luna_wrapper_btMultiSphereShape::_bind_getSphereRadius},
	{"getName", &luna_wrapper_btMultiSphereShape::_bind_getName},
	{"calculateSerializeBufferSize", &luna_wrapper_btMultiSphereShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btMultiSphereShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btMultiSphereShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btMultiSphereShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btMultiSphereShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btMultiSphereShape::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btMultiSphereShape::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btMultiSphereShape::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btMultiSphereShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btMultiSphereShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btMultiSphereShape::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btMultiSphereShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btMultiSphereShape::_bind_base_getPreferredPenetrationDirection},
	{"base_setLocalScaling", &luna_wrapper_btMultiSphereShape::_bind_base_setLocalScaling},
	{"base_getAabb", &luna_wrapper_btMultiSphereShape::_bind_base_getAabb},
	{"base_calculateLocalInertia", &luna_wrapper_btMultiSphereShape::_bind_base_calculateLocalInertia},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btMultiSphereShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btMultiSphereShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_getName", &luna_wrapper_btMultiSphereShape::_bind_base_getName},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btMultiSphereShape::_bind_base_calculateSerializeBufferSize},
	{"__eq", &luna_wrapper_btMultiSphereShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btMultiSphereShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btMultiSphereShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btMultiSphereShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btMultiSphereShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btMultiSphereShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btMultiSphereShape >::enumValues[] = {
	{0,0}
};


