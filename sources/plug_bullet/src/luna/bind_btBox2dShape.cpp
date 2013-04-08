#include <plug_common.h>

#include <luna/wrappers/wrapper_btBox2dShape.h>

class luna_wrapper_btBox2dShape {
public:
	typedef Luna< btBox2dShape > luna_t;

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

		btBox2dShape* self= (btBox2dShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBox2dShape >::push(L,self,false);
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
		//btBox2dShape* ptr= dynamic_cast< btBox2dShape* >(Luna< btCollisionShape >::check(L,1));
		btBox2dShape* ptr= luna_caster< btCollisionShape, btBox2dShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBox2dShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHalfExtentsWithMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHalfExtentsWithoutMargin(lua_State *L) {
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

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
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

	inline static bool _lg_typecheck_getVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormals(lua_State *L) {
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

	inline static bool _lg_typecheck_getCentroid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlaneEquation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPreferredPenetrationDirections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreferredPenetrationDirection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_getNumVertices(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPlaneEquation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBox2dShape::btBox2dShape(const btVector3 & boxHalfExtents)
	static btBox2dShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBox2dShape::btBox2dShape(const btVector3 & boxHalfExtents) function, expected prototype:\nbtBox2dShape::btBox2dShape(const btVector3 & boxHalfExtents)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* boxHalfExtents_ptr=(Luna< btVector3 >::check(L,1));
		if( !boxHalfExtents_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxHalfExtents in btBox2dShape::btBox2dShape function");
		}
		const btVector3 & boxHalfExtents=*boxHalfExtents_ptr;

		return new btBox2dShape(boxHalfExtents);
	}

	// btBox2dShape::btBox2dShape(lua_Table * data, const btVector3 & boxHalfExtents)
	static btBox2dShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBox2dShape::btBox2dShape(lua_Table * data, const btVector3 & boxHalfExtents) function, expected prototype:\nbtBox2dShape::btBox2dShape(lua_Table * data, const btVector3 & boxHalfExtents)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		const btVector3* boxHalfExtents_ptr=(Luna< btVector3 >::check(L,2));
		if( !boxHalfExtents_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boxHalfExtents in btBox2dShape::btBox2dShape function");
		}
		const btVector3 & boxHalfExtents=*boxHalfExtents_ptr;

		return new wrapper_btBox2dShape(L,NULL, boxHalfExtents);
	}

	// Overload binder for btBox2dShape::btBox2dShape
	static btBox2dShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btBox2dShape, cannot match any of the overloads for function btBox2dShape:\n  btBox2dShape(const btVector3 &)\n  btBox2dShape(lua_Table *, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// btVector3 btBox2dShape::getHalfExtentsWithMargin() const
	static int _bind_getHalfExtentsWithMargin(lua_State *L) {
		if (!_lg_typecheck_getHalfExtentsWithMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBox2dShape::getHalfExtentsWithMargin() const function, expected prototype:\nbtVector3 btBox2dShape::getHalfExtentsWithMargin() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBox2dShape::getHalfExtentsWithMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getHalfExtentsWithMargin();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// const btVector3 & btBox2dShape::getHalfExtentsWithoutMargin() const
	static int _bind_getHalfExtentsWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_getHalfExtentsWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btBox2dShape::getHalfExtentsWithoutMargin() const function, expected prototype:\nconst btVector3 & btBox2dShape::getHalfExtentsWithoutMargin() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btBox2dShape::getHalfExtentsWithoutMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getHalfExtentsWithoutMargin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btBox2dShape::localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBox2dShape::localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBox2dShape::localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBox2dShape::localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBox2dShape::localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btBox2dShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBox2dShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBox2dShape::localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBox2dShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBox2dShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btBox2dShape::setMargin(float collisionMargin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::setMargin(float collisionMargin) function, expected prototype:\nvoid btBox2dShape::setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setMargin(collisionMargin);

		return 0;
	}

	// void btBox2dShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btBox2dShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btBox2dShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// void btBox2dShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBox2dShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBox2dShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBox2dShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBox2dShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btBox2dShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btBox2dShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btBox2dShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// int btBox2dShape::getVertexCount() const
	static int _bind_getVertexCount(lua_State *L) {
		if (!_lg_typecheck_getVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::getVertexCount() const function, expected prototype:\nint btBox2dShape::getVertexCount() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::getVertexCount() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getVertexCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBox2dShape::getNumVertices() const
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::getNumVertices() const function, expected prototype:\nint btBox2dShape::getNumVertices() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 * btBox2dShape::getVertices() const
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 * btBox2dShape::getVertices() const function, expected prototype:\nconst btVector3 * btBox2dShape::getVertices() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 * btBox2dShape::getVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3 * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 * btBox2dShape::getNormals() const
	static int _bind_getNormals(lua_State *L) {
		if (!_lg_typecheck_getNormals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 * btBox2dShape::getNormals() const function, expected prototype:\nconst btVector3 * btBox2dShape::getNormals() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 * btBox2dShape::getNormals() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3 * lret = self->getNormals();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btBox2dShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btBox2dShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btBox2dShape::getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btBox2dShape::getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// const btVector3 & btBox2dShape::getCentroid() const
	static int _bind_getCentroid(lua_State *L) {
		if (!_lg_typecheck_getCentroid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btBox2dShape::getCentroid() const function, expected prototype:\nconst btVector3 & btBox2dShape::getCentroid() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btBox2dShape::getCentroid() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getCentroid();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btBox2dShape::getNumPlanes() const
	static int _bind_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::getNumPlanes() const function, expected prototype:\nint btBox2dShape::getNumPlanes() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBox2dShape::getNumEdges() const
	static int _bind_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::getNumEdges() const function, expected prototype:\nint btBox2dShape::getNumEdges() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBox2dShape::getVertex(int i, btVector3 & vtx) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btBox2dShape::getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btBox2dShape::getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getVertex(i, vtx);

		return 0;
	}

	// void btBox2dShape::getPlaneEquation(btVector4 & plane, int i) const
	static int _bind_getPlaneEquation(lua_State *L) {
		if (!_lg_typecheck_getPlaneEquation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::getPlaneEquation(btVector4 & plane, int i) const function, expected prototype:\nvoid btBox2dShape::getPlaneEquation(btVector4 & plane, int i) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in btBox2dShape::getPlaneEquation function");
		}
		btVector4 & plane=*plane_ptr;
		int i=(int)lua_tointeger(L,3);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::getPlaneEquation(btVector4 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPlaneEquation(plane, i);

		return 0;
	}

	// void btBox2dShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_getEdge(lua_State *L) {
		if (!_lg_typecheck_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btBox2dShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btBox2dShape::getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btBox2dShape::getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getEdge(i, pa, pb);

		return 0;
	}

	// bool btBox2dShape::isInside(const btVector3 & pt, float tolerance) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBox2dShape::isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btBox2dShape::isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btBox2dShape::isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBox2dShape::isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btBox2dShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btBox2dShape::getName() const function, expected prototype:\nconst char * btBox2dShape::getName() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btBox2dShape::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btBox2dShape::getNumPreferredPenetrationDirections() const
	static int _bind_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::getNumPreferredPenetrationDirections() const function, expected prototype:\nint btBox2dShape::getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBox2dShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btBox2dShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btBox2dShape::getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btBox2dShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btBox2dShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btBox2dShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getBoundingSphere(center, radius);

		return 0;
	}

	// float btBox2dShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBox2dShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btBox2dShape::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBox2dShape::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBox2dShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btBox2dShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBox2dShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btBox2dShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBox2dShape::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBox2dShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btBox2dShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBox2dShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btBox2dShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBox2dShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBox2dShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBox2dShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btBox2dShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btBox2dShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btBox2dShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::project(trans, dir, min, max);

		return 0;
	}

	// void btBox2dShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBox2dShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBox2dShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBox2dShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBox2dShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btBox2dShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btBox2dShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btBox2dShape::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btBox2dShape::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btBox2dShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btBox2dShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBox2dShape::base_getMargin() const function, expected prototype:\nfloat btBox2dShape::base_getMargin() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBox2dShape::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBox2dShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBox2dShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btBox2dShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBox2dShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btBox2dShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBox2dShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btBox2dShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBox2dShape::base_initializePolyhedralFeatures(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btBox2dShape::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btVector3 btBox2dShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBox2dShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBox2dShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBox2dShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBox2dShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBox2dShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btBox2dShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBox2dShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBox2dShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBox2dShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBox2dShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBox2dShape::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBox2dShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btBox2dShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btBox2dShape::base_setMargin(float collisionMargin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_setMargin(float collisionMargin) function, expected prototype:\nvoid btBox2dShape::base_setMargin(float collisionMargin)\nClass arguments details:\n");
		}

		float collisionMargin=(float)lua_tonumber(L,2);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::setMargin(collisionMargin);

		return 0;
	}

	// void btBox2dShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btBox2dShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btBox2dShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::setLocalScaling(scaling);

		return 0;
	}

	// void btBox2dShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBox2dShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBox2dShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBox2dShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBox2dShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btBox2dShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btBox2dShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btBox2dShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// int btBox2dShape::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::base_getNumVertices() const function, expected prototype:\nint btBox2dShape::base_getNumVertices() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::base_getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBox2dShape::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBox2dShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btBox2dShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btBox2dShape::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btBox2dShape::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// int btBox2dShape::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::base_getNumPlanes() const function, expected prototype:\nint btBox2dShape::base_getNumPlanes() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::base_getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBox2dShape::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBox2dShape::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::base_getNumEdges() const function, expected prototype:\nint btBox2dShape::base_getNumEdges() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::base_getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBox2dShape::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBox2dShape::base_getVertex(int i, btVector3 & vtx) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btBox2dShape::base_getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btBox2dShape::base_getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getVertex(i, vtx);

		return 0;
	}

	// void btBox2dShape::base_getPlaneEquation(btVector4 & plane, int i) const
	static int _bind_base_getPlaneEquation(lua_State *L) {
		if (!_lg_typecheck_base_getPlaneEquation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getPlaneEquation(btVector4 & plane, int i) const function, expected prototype:\nvoid btBox2dShape::base_getPlaneEquation(btVector4 & plane, int i) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector4* plane_ptr=(Luna< btVector3 >::checkSubType< btVector4 >(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in btBox2dShape::base_getPlaneEquation function");
		}
		btVector4 & plane=*plane_ptr;
		int i=(int)lua_tointeger(L,3);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getPlaneEquation(btVector4 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getPlaneEquation(plane, i);

		return 0;
	}

	// void btBox2dShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btBox2dShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btBox2dShape::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btBox2dShape::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getEdge(i, pa, pb);

		return 0;
	}

	// bool btBox2dShape::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBox2dShape::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btBox2dShape::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btBox2dShape::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBox2dShape::base_isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btBox2dShape::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btBox2dShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btBox2dShape::base_getName() const function, expected prototype:\nconst char * btBox2dShape::base_getName() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btBox2dShape::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btBox2dShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btBox2dShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBox2dShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btBox2dShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBox2dShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBox2dShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBox2dShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBox2dShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btBox2dShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btBox2dShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btBox2dShape* self=Luna< btCollisionShape >::checkSubType< btBox2dShape >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBox2dShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBox2dShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}


	// Operator binds:

};

btBox2dShape* LunaTraits< btBox2dShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBox2dShape::_bind_ctor(L);
}

void LunaTraits< btBox2dShape >::_bind_dtor(btBox2dShape* obj) {
	delete obj;
}

const char LunaTraits< btBox2dShape >::className[] = "btBox2dShape";
const char LunaTraits< btBox2dShape >::fullName[] = "btBox2dShape";
const char LunaTraits< btBox2dShape >::moduleName[] = "bullet";
const char* LunaTraits< btBox2dShape >::parents[] = {"bullet.btPolyhedralConvexShape", 0};
const int LunaTraits< btBox2dShape >::hash = 69765037;
const int LunaTraits< btBox2dShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btBox2dShape >::methods[] = {
	{"getHalfExtentsWithMargin", &luna_wrapper_btBox2dShape::_bind_getHalfExtentsWithMargin},
	{"getHalfExtentsWithoutMargin", &luna_wrapper_btBox2dShape::_bind_getHalfExtentsWithoutMargin},
	{"localGetSupportingVertex", &luna_wrapper_btBox2dShape::_bind_localGetSupportingVertex},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btBox2dShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btBox2dShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"setMargin", &luna_wrapper_btBox2dShape::_bind_setMargin},
	{"setLocalScaling", &luna_wrapper_btBox2dShape::_bind_setLocalScaling},
	{"getAabb", &luna_wrapper_btBox2dShape::_bind_getAabb},
	{"calculateLocalInertia", &luna_wrapper_btBox2dShape::_bind_calculateLocalInertia},
	{"getVertexCount", &luna_wrapper_btBox2dShape::_bind_getVertexCount},
	{"getNumVertices", &luna_wrapper_btBox2dShape::_bind_getNumVertices},
	{"getVertices", &luna_wrapper_btBox2dShape::_bind_getVertices},
	{"getNormals", &luna_wrapper_btBox2dShape::_bind_getNormals},
	{"getPlane", &luna_wrapper_btBox2dShape::_bind_getPlane},
	{"getCentroid", &luna_wrapper_btBox2dShape::_bind_getCentroid},
	{"getNumPlanes", &luna_wrapper_btBox2dShape::_bind_getNumPlanes},
	{"getNumEdges", &luna_wrapper_btBox2dShape::_bind_getNumEdges},
	{"getVertex", &luna_wrapper_btBox2dShape::_bind_getVertex},
	{"getPlaneEquation", &luna_wrapper_btBox2dShape::_bind_getPlaneEquation},
	{"getEdge", &luna_wrapper_btBox2dShape::_bind_getEdge},
	{"isInside", &luna_wrapper_btBox2dShape::_bind_isInside},
	{"getName", &luna_wrapper_btBox2dShape::_bind_getName},
	{"getNumPreferredPenetrationDirections", &luna_wrapper_btBox2dShape::_bind_getNumPreferredPenetrationDirections},
	{"getPreferredPenetrationDirection", &luna_wrapper_btBox2dShape::_bind_getPreferredPenetrationDirection},
	{"base_getBoundingSphere", &luna_wrapper_btBox2dShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btBox2dShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btBox2dShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btBox2dShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btBox2dShape::_bind_base_project},
	{"base_getAabbSlow", &luna_wrapper_btBox2dShape::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btBox2dShape::_bind_base_getLocalScaling},
	{"base_getMargin", &luna_wrapper_btBox2dShape::_bind_base_getMargin},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btBox2dShape::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btBox2dShape::_bind_base_initializePolyhedralFeatures},
	{"base_localGetSupportingVertex", &luna_wrapper_btBox2dShape::_bind_base_localGetSupportingVertex},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btBox2dShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btBox2dShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_setMargin", &luna_wrapper_btBox2dShape::_bind_base_setMargin},
	{"base_setLocalScaling", &luna_wrapper_btBox2dShape::_bind_base_setLocalScaling},
	{"base_getAabb", &luna_wrapper_btBox2dShape::_bind_base_getAabb},
	{"base_calculateLocalInertia", &luna_wrapper_btBox2dShape::_bind_base_calculateLocalInertia},
	{"base_getNumVertices", &luna_wrapper_btBox2dShape::_bind_base_getNumVertices},
	{"base_getPlane", &luna_wrapper_btBox2dShape::_bind_base_getPlane},
	{"base_getNumPlanes", &luna_wrapper_btBox2dShape::_bind_base_getNumPlanes},
	{"base_getNumEdges", &luna_wrapper_btBox2dShape::_bind_base_getNumEdges},
	{"base_getVertex", &luna_wrapper_btBox2dShape::_bind_base_getVertex},
	{"base_getPlaneEquation", &luna_wrapper_btBox2dShape::_bind_base_getPlaneEquation},
	{"base_getEdge", &luna_wrapper_btBox2dShape::_bind_base_getEdge},
	{"base_isInside", &luna_wrapper_btBox2dShape::_bind_base_isInside},
	{"base_getName", &luna_wrapper_btBox2dShape::_bind_base_getName},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btBox2dShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btBox2dShape::_bind_base_getPreferredPenetrationDirection},
	{"__eq", &luna_wrapper_btBox2dShape::_bind___eq},
	{"fromVoid", &luna_wrapper_btBox2dShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBox2dShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btBox2dShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBox2dShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btBox2dShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btBox2dShape >::enumValues[] = {
	{0,0}
};


