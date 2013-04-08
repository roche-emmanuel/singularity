#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleShapeEx.h>

class luna_wrapper_btTriangleShapeEx {
public:
	typedef Luna< btTriangleShapeEx > luna_t;

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

		btTriangleShapeEx* self= (btTriangleShapeEx*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleShapeEx >::push(L,self,false);
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
		//btTriangleShapeEx* ptr= dynamic_cast< btTriangleShapeEx* >(Luna< btCollisionShape >::check(L,1));
		btTriangleShapeEx* ptr= luna_caster< btCollisionShape, btTriangleShapeEx >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleShapeEx >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		if( (!(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58243831) ) return false;
		if( (!(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_applyTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_buildTriPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_overlap_test_conservative(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58243831) ) return false;
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

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPlaneEquation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleShapeEx::btTriangleShapeEx()
	static btTriangleShapeEx* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleShapeEx::btTriangleShapeEx() function, expected prototype:\nbtTriangleShapeEx::btTriangleShapeEx()\nClass arguments details:\n");
		}


		return new btTriangleShapeEx();
	}

	// btTriangleShapeEx::btTriangleShapeEx(const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)
	static btTriangleShapeEx* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleShapeEx::btTriangleShapeEx(const btVector3 & p0, const btVector3 & p1, const btVector3 & p2) function, expected prototype:\nbtTriangleShapeEx::btTriangleShapeEx(const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* p0_ptr=(Luna< btVector3 >::check(L,1));
		if( !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btVector3 & p0=*p0_ptr;
		const btVector3* p1_ptr=(Luna< btVector3 >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btVector3 & p1=*p1_ptr;
		const btVector3* p2_ptr=(Luna< btVector3 >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btVector3 & p2=*p2_ptr;

		return new btTriangleShapeEx(p0, p1, p2);
	}

	// btTriangleShapeEx::btTriangleShapeEx(const btTriangleShapeEx & other)
	static btTriangleShapeEx* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleShapeEx::btTriangleShapeEx(const btTriangleShapeEx & other) function, expected prototype:\nbtTriangleShapeEx::btTriangleShapeEx(const btTriangleShapeEx & other)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		const btTriangleShapeEx* other_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btTriangleShapeEx & other=*other_ptr;

		return new btTriangleShapeEx(other);
	}

	// btTriangleShapeEx::btTriangleShapeEx(lua_Table * data)
	static btTriangleShapeEx* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleShapeEx::btTriangleShapeEx(lua_Table * data) function, expected prototype:\nbtTriangleShapeEx::btTriangleShapeEx(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btTriangleShapeEx(L,NULL);
	}

	// btTriangleShapeEx::btTriangleShapeEx(lua_Table * data, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)
	static btTriangleShapeEx* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleShapeEx::btTriangleShapeEx(lua_Table * data, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2) function, expected prototype:\nbtTriangleShapeEx::btTriangleShapeEx(lua_Table * data, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* p0_ptr=(Luna< btVector3 >::check(L,2));
		if( !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btVector3 & p0=*p0_ptr;
		const btVector3* p1_ptr=(Luna< btVector3 >::check(L,3));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btVector3 & p1=*p1_ptr;
		const btVector3* p2_ptr=(Luna< btVector3 >::check(L,4));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btVector3 & p2=*p2_ptr;

		return new wrapper_btTriangleShapeEx(L,NULL, p0, p1, p2);
	}

	// btTriangleShapeEx::btTriangleShapeEx(lua_Table * data, const btTriangleShapeEx & other)
	static btTriangleShapeEx* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleShapeEx::btTriangleShapeEx(lua_Table * data, const btTriangleShapeEx & other) function, expected prototype:\nbtTriangleShapeEx::btTriangleShapeEx(lua_Table * data, const btTriangleShapeEx & other)\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		const btTriangleShapeEx* other_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btTriangleShapeEx::btTriangleShapeEx function");
		}
		const btTriangleShapeEx & other=*other_ptr;

		return new wrapper_btTriangleShapeEx(L,NULL, other);
	}

	// Overload binder for btTriangleShapeEx::btTriangleShapeEx
	static btTriangleShapeEx* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function btTriangleShapeEx, cannot match any of the overloads for function btTriangleShapeEx:\n  btTriangleShapeEx()\n  btTriangleShapeEx(const btVector3 &, const btVector3 &, const btVector3 &)\n  btTriangleShapeEx(const btTriangleShapeEx &)\n  btTriangleShapeEx(lua_Table *)\n  btTriangleShapeEx(lua_Table *, const btVector3 &, const btVector3 &, const btVector3 &)\n  btTriangleShapeEx(lua_Table *, const btTriangleShapeEx &)\n");
		return NULL;
	}


	// Function binds:
	// void btTriangleShapeEx::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleShapeEx::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShapeEx::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleShapeEx::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleShapeEx::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleShapeEx::applyTransform(const btTransform & t)
	static int _bind_applyTransform(lua_State *L) {
		if (!_lg_typecheck_applyTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::applyTransform(const btTransform & t) function, expected prototype:\nvoid btTriangleShapeEx::applyTransform(const btTransform & t)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShapeEx::applyTransform function");
		}
		const btTransform & t=*t_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::applyTransform(const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->applyTransform(t);

		return 0;
	}

	// void btTriangleShapeEx::buildTriPlane(btVector4 & plane) const
	static int _bind_buildTriPlane(lua_State *L) {
		if (!_lg_typecheck_buildTriPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::buildTriPlane(btVector4 & plane) const function, expected prototype:\nvoid btTriangleShapeEx::buildTriPlane(btVector4 & plane) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in btTriangleShapeEx::buildTriPlane function");
		}
		btVector4 & plane=*plane_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::buildTriPlane(btVector4 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->buildTriPlane(plane);

		return 0;
	}

	// bool btTriangleShapeEx::overlap_test_conservative(const btTriangleShapeEx & other)
	static int _bind_overlap_test_conservative(lua_State *L) {
		if (!_lg_typecheck_overlap_test_conservative(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleShapeEx::overlap_test_conservative(const btTriangleShapeEx & other) function, expected prototype:\nbool btTriangleShapeEx::overlap_test_conservative(const btTriangleShapeEx & other)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		const btTriangleShapeEx* other_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in btTriangleShapeEx::overlap_test_conservative function");
		}
		const btTriangleShapeEx & other=*other_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleShapeEx::overlap_test_conservative(const btTriangleShapeEx &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->overlap_test_conservative(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTriangleShapeEx::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btTriangleShapeEx::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btTriangleShapeEx::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getBoundingSphere(center, radius);

		return 0;
	}

	// float btTriangleShapeEx::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleShapeEx::base_getAngularMotionDisc() const function, expected prototype:\nfloat btTriangleShapeEx::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleShapeEx::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btTriangleShapeEx::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleShapeEx::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleShapeEx::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btTriangleShapeEx::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleShapeEx::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btTriangleShapeEx::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btTriangleShapeEx::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShapeEx::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btTriangleShapeEx::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShapeEx::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btTriangleShapeEx::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShapeEx::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btTriangleShapeEx::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btTriangleShapeEx::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btTriangleShapeEx::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btTriangleShapeEx::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShapeEx::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btTriangleShapeEx::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btTriangleShapeEx::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShapeEx::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btTriangleShapeEx::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShapeEx::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleShapeEx::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShapeEx::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleShapeEx::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleShapeEx::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleShapeEx::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btTriangleShapeEx::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btTriangleShapeEx::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btTriangleShapeEx::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleShapeEx::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btTriangleShapeEx::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleShapeEx::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btTriangleShapeEx::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btTriangleShapeEx::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_setMargin(float margin) function, expected prototype:\nvoid btTriangleShapeEx::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::setMargin(margin);

		return 0;
	}

	// float btTriangleShapeEx::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleShapeEx::base_getMargin() const function, expected prototype:\nfloat btTriangleShapeEx::base_getMargin() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleShapeEx::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btTriangleShapeEx::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangleShapeEx::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleShapeEx::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTriangleShapeEx::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleShapeEx::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btTriangleShapeEx::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btTriangleShapeEx::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleShapeEx::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btTriangleShapeEx::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleShapeEx::base_initializePolyhedralFeatures(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btTriangleShapeEx::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btTriangleShapeEx::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleShapeEx::base_getNumVertices() const function, expected prototype:\nint btTriangleShapeEx::base_getNumVertices() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleShapeEx::base_getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btTriangleShapeEx::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShapeEx::base_getVertex(int index, btVector3 & vert) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getVertex(int index, btVector3 & vert) const function, expected prototype:\nvoid btTriangleShapeEx::base_getVertex(int index, btVector3 & vert) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* vert_ptr=(Luna< btVector3 >::check(L,3));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in btTriangleShapeEx::base_getVertex function");
		}
		btVector3 & vert=*vert_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getVertex(index, vert);

		return 0;
	}

	// int btTriangleShapeEx::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleShapeEx::base_getNumEdges() const function, expected prototype:\nint btTriangleShapeEx::base_getNumEdges() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleShapeEx::base_getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btTriangleShapeEx::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShapeEx::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btTriangleShapeEx::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btTriangleShapeEx::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btTriangleShapeEx::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getEdge(i, pa, pb);

		return 0;
	}

	// btVector3 btTriangleShapeEx::base_localGetSupportingVertexWithoutMargin(const btVector3 & dir) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShapeEx::base_localGetSupportingVertexWithoutMargin(const btVector3 & dir) const function, expected prototype:\nbtVector3 btTriangleShapeEx::base_localGetSupportingVertexWithoutMargin(const btVector3 & dir) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,2));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btTriangleShapeEx::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & dir=*dir_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShapeEx::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btTriangleShapeEx::localGetSupportingVertexWithoutMargin(dir);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShapeEx::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btTriangleShapeEx::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btTriangleShapeEx::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btTriangleShapeEx::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btTriangleShapeEx::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btTriangleShapeEx::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// int btTriangleShapeEx::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleShapeEx::base_getNumPlanes() const function, expected prototype:\nint btTriangleShapeEx::base_getNumPlanes() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleShapeEx::base_getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btTriangleShapeEx::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShapeEx::base_getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const
	static int _bind_base_getPlaneEquation(lua_State *L) {
		if (!_lg_typecheck_base_getPlaneEquation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const function, expected prototype:\nvoid btTriangleShapeEx::base_getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btTriangleShapeEx::base_getPlaneEquation function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,4));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btTriangleShapeEx::base_getPlaneEquation function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getPlaneEquation(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getPlaneEquation(i, planeNormal, planeSupport);

		return 0;
	}

	// void btTriangleShapeEx::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btTriangleShapeEx::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btTriangleShapeEx::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// bool btTriangleShapeEx::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleShapeEx::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btTriangleShapeEx::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btTriangleShapeEx::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleShapeEx::base_isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btTriangleShapeEx::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btTriangleShapeEx::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btTriangleShapeEx::base_getName() const function, expected prototype:\nconst char * btTriangleShapeEx::base_getName() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btTriangleShapeEx::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btTriangleShapeEx::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btTriangleShapeEx::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleShapeEx::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btTriangleShapeEx::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleShapeEx::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btTriangleShapeEx::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShapeEx::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btTriangleShapeEx::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btTriangleShapeEx::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btTriangleShapeEx::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleShapeEx::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleShapeEx::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShapeEx::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleShapeEx::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleShapeEx::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleShapeEx* self=Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleShapeEx::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btTriangleShapeEx::getAabb(t, aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btTriangleShapeEx* LunaTraits< btTriangleShapeEx >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleShapeEx::_bind_ctor(L);
}

void LunaTraits< btTriangleShapeEx >::_bind_dtor(btTriangleShapeEx* obj) {
	delete obj;
}

const char LunaTraits< btTriangleShapeEx >::className[] = "btTriangleShapeEx";
const char LunaTraits< btTriangleShapeEx >::fullName[] = "btTriangleShapeEx";
const char LunaTraits< btTriangleShapeEx >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleShapeEx >::parents[] = {"bullet.btTriangleShape", 0};
const int LunaTraits< btTriangleShapeEx >::hash = 1609981;
const int LunaTraits< btTriangleShapeEx >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btTriangleShapeEx >::methods[] = {
	{"getAabb", &luna_wrapper_btTriangleShapeEx::_bind_getAabb},
	{"applyTransform", &luna_wrapper_btTriangleShapeEx::_bind_applyTransform},
	{"buildTriPlane", &luna_wrapper_btTriangleShapeEx::_bind_buildTriPlane},
	{"overlap_test_conservative", &luna_wrapper_btTriangleShapeEx::_bind_overlap_test_conservative},
	{"base_getBoundingSphere", &luna_wrapper_btTriangleShapeEx::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btTriangleShapeEx::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btTriangleShapeEx::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btTriangleShapeEx::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btTriangleShapeEx::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btTriangleShapeEx::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btTriangleShapeEx::_bind_base_getAabbSlow},
	{"base_setLocalScaling", &luna_wrapper_btTriangleShapeEx::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btTriangleShapeEx::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btTriangleShapeEx::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btTriangleShapeEx::_bind_base_getMargin},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTriangleShapeEx::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btTriangleShapeEx::_bind_base_initializePolyhedralFeatures},
	{"base_getNumVertices", &luna_wrapper_btTriangleShapeEx::_bind_base_getNumVertices},
	{"base_getVertex", &luna_wrapper_btTriangleShapeEx::_bind_base_getVertex},
	{"base_getNumEdges", &luna_wrapper_btTriangleShapeEx::_bind_base_getNumEdges},
	{"base_getEdge", &luna_wrapper_btTriangleShapeEx::_bind_base_getEdge},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleShapeEx::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleShapeEx::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_getPlane", &luna_wrapper_btTriangleShapeEx::_bind_base_getPlane},
	{"base_getNumPlanes", &luna_wrapper_btTriangleShapeEx::_bind_base_getNumPlanes},
	{"base_getPlaneEquation", &luna_wrapper_btTriangleShapeEx::_bind_base_getPlaneEquation},
	{"base_calculateLocalInertia", &luna_wrapper_btTriangleShapeEx::_bind_base_calculateLocalInertia},
	{"base_isInside", &luna_wrapper_btTriangleShapeEx::_bind_base_isInside},
	{"base_getName", &luna_wrapper_btTriangleShapeEx::_bind_base_getName},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btTriangleShapeEx::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btTriangleShapeEx::_bind_base_getPreferredPenetrationDirection},
	{"base_getAabb", &luna_wrapper_btTriangleShapeEx::_bind_base_getAabb},
	{"fromVoid", &luna_wrapper_btTriangleShapeEx::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleShapeEx::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleShapeEx::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleShapeEx >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btTriangleShapeEx::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleShapeEx >::enumValues[] = {
	{0,0}
};


