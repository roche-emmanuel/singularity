#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleShape.h>

class luna_wrapper_btTriangleShape {
public:
	typedef Luna< btTriangleShape > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleShape* self= (btTriangleShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleShape >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58243831) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//btTriangleShape* ptr= dynamic_cast< btTriangleShape* >(Luna< btCollisionShape >::check(L,1));
		btTriangleShape* ptr= luna_caster< btCollisionShape, btTriangleShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleShape >::push(L,ptr,false);
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

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
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


	// Function checkers:
	inline static bool _lg_typecheck_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexPtr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexPtr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calcNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPlaneEquation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBoundingSphere(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAngularMotionDisc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getContactBreakingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
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
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPlane(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getPlaneEquation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isInside(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleShape::btTriangleShape()
	static btTriangleShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btTriangleShape::btTriangleShape() function, expected prototype:\nbtTriangleShape::btTriangleShape()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btTriangleShape();
	}

	// btTriangleShape::btTriangleShape(const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)
	static btTriangleShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btTriangleShape::btTriangleShape(const btVector3 & p0, const btVector3 & p1, const btVector3 & p2) function, expected prototype:\nbtTriangleShape::btTriangleShape(const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* p0_ptr=(Luna< btVector3 >::check(L,1));
		if( !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in btTriangleShape::btTriangleShape function");
		}
		const btVector3 & p0=*p0_ptr;
		const btVector3* p1_ptr=(Luna< btVector3 >::check(L,2));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in btTriangleShape::btTriangleShape function");
		}
		const btVector3 & p1=*p1_ptr;
		const btVector3* p2_ptr=(Luna< btVector3 >::check(L,3));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in btTriangleShape::btTriangleShape function");
		}
		const btVector3 & p2=*p2_ptr;

		return new btTriangleShape(p0, p1, p2);
	}

	// btTriangleShape::btTriangleShape(lua_Table * data)
	static btTriangleShape* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in btTriangleShape::btTriangleShape(lua_Table * data) function, expected prototype:\nbtTriangleShape::btTriangleShape(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btTriangleShape(L,NULL);
	}

	// btTriangleShape::btTriangleShape(lua_Table * data, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)
	static btTriangleShape* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in btTriangleShape::btTriangleShape(lua_Table * data, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2) function, expected prototype:\nbtTriangleShape::btTriangleShape(lua_Table * data, const btVector3 & p0, const btVector3 & p1, const btVector3 & p2)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* p0_ptr=(Luna< btVector3 >::check(L,2));
		if( !p0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p0 in btTriangleShape::btTriangleShape function");
		}
		const btVector3 & p0=*p0_ptr;
		const btVector3* p1_ptr=(Luna< btVector3 >::check(L,3));
		if( !p1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p1 in btTriangleShape::btTriangleShape function");
		}
		const btVector3 & p1=*p1_ptr;
		const btVector3* p2_ptr=(Luna< btVector3 >::check(L,4));
		if( !p2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p2 in btTriangleShape::btTriangleShape function");
		}
		const btVector3 & p2=*p2_ptr;

		return new wrapper_btTriangleShape(L,NULL, p0, p1, p2);
	}

	// Overload binder for btTriangleShape::btTriangleShape
	static btTriangleShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btTriangleShape, cannot match any of the overloads for function btTriangleShape:\n  btTriangleShape()\n  btTriangleShape(const btVector3 &, const btVector3 &, const btVector3 &)\n  btTriangleShape(lua_Table *)\n  btTriangleShape(lua_Table *, const btVector3 &, const btVector3 &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// int btTriangleShape::getNumVertices() const
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::getNumVertices() const function, expected prototype:\nint btTriangleShape::getNumVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::getNumVertices() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 & btTriangleShape::getVertexPtr(int index)
	static int _bind_getVertexPtr_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexPtr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 & btTriangleShape::getVertexPtr(int index) function, expected prototype:\nbtVector3 & btTriangleShape::getVertexPtr(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 & btTriangleShape::getVertexPtr(int). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getVertexPtr(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btTriangleShape::getVertexPtr(int index) const
	static int _bind_getVertexPtr_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexPtr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleShape::getVertexPtr(int index) const function, expected prototype:\nconst btVector3 & btTriangleShape::getVertexPtr(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleShape::getVertexPtr(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->getVertexPtr(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTriangleShape::getVertexPtr
	static int _bind_getVertexPtr(lua_State *L) {
		if (_lg_typecheck_getVertexPtr_overload_1(L)) return _bind_getVertexPtr_overload_1(L);
		if (_lg_typecheck_getVertexPtr_overload_2(L)) return _bind_getVertexPtr_overload_2(L);

		luaL_error(L, "error in function getVertexPtr, cannot match any of the overloads for function getVertexPtr:\n  getVertexPtr(int)\n  getVertexPtr(int)\n");
		return 0;
	}

	// void btTriangleShape::getVertex(int index, btVector3 & vert) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::getVertex(int index, btVector3 & vert) const function, expected prototype:\nvoid btTriangleShape::getVertex(int index, btVector3 & vert) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* vert_ptr=(Luna< btVector3 >::check(L,3));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in btTriangleShape::getVertex function");
		}
		btVector3 & vert=*vert_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::getVertex(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getVertex(index, vert);

		return 0;
	}

	// int btTriangleShape::getNumEdges() const
	static int _bind_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_getNumEdges(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::getNumEdges() const function, expected prototype:\nint btTriangleShape::getNumEdges() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::getNumEdges() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_getEdge(lua_State *L) {
		if (!_lg_typecheck_getEdge(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btTriangleShape::getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btTriangleShape::getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btTriangleShape::getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getEdge(i, pa, pb);

		return 0;
	}

	// void btTriangleShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleShape::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShape::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleShape::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleShape::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// btVector3 btTriangleShape::localGetSupportingVertexWithoutMargin(const btVector3 & dir) const
	static int _bind_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShape::localGetSupportingVertexWithoutMargin(const btVector3 & dir) const function, expected prototype:\nbtVector3 btTriangleShape::localGetSupportingVertexWithoutMargin(const btVector3 & dir) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,2));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btTriangleShape::localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & dir=*dir_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShape::localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->localGetSupportingVertexWithoutMargin(dir);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btTriangleShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btTriangleShape::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btTriangleShape::getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btTriangleShape::getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// int btTriangleShape::getNumPlanes() const
	static int _bind_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::getNumPlanes() const function, expected prototype:\nint btTriangleShape::getNumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::getNumPlanes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::calcNormal(btVector3 & normal) const
	static int _bind_calcNormal(lua_State *L) {
		if (!_lg_typecheck_calcNormal(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::calcNormal(btVector3 & normal) const function, expected prototype:\nvoid btTriangleShape::calcNormal(btVector3 & normal) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* normal_ptr=(Luna< btVector3 >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btTriangleShape::calcNormal function");
		}
		btVector3 & normal=*normal_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::calcNormal(btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calcNormal(normal);

		return 0;
	}

	// void btTriangleShape::getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const
	static int _bind_getPlaneEquation(lua_State *L) {
		if (!_lg_typecheck_getPlaneEquation(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const function, expected prototype:\nvoid btTriangleShape::getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btTriangleShape::getPlaneEquation function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,4));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btTriangleShape::getPlaneEquation function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::getPlaneEquation(int, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPlaneEquation(i, planeNormal, planeSupport);

		return 0;
	}

	// void btTriangleShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btTriangleShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btTriangleShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// bool btTriangleShape::isInside(const btVector3 & pt, float tolerance) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luaL_error(L, "luna typecheck failed in bool btTriangleShape::isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btTriangleShape::isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btTriangleShape::isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btTriangleShape::isInside(const btVector3 &, float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btTriangleShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btTriangleShape::getName() const function, expected prototype:\nconst char * btTriangleShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btTriangleShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btTriangleShape::getNumPreferredPenetrationDirections() const
	static int _bind_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_getNumPreferredPenetrationDirections(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::getNumPreferredPenetrationDirections() const function, expected prototype:\nint btTriangleShape::getNumPreferredPenetrationDirections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::getNumPreferredPenetrationDirections() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_getPreferredPenetrationDirection(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btTriangleShape::getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btTriangleShape::getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// void btTriangleShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btTriangleShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btTriangleShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btTriangleShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btTriangleShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btTriangleShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btTriangleShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btTriangleShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btTriangleShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btTriangleShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btTriangleShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btTriangleShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btTriangleShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btTriangleShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btTriangleShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btTriangleShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btTriangleShape::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btTriangleShape::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btTriangleShape::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::project(trans, dir, min, max);

		lua_pushnumber(L,min);
		lua_pushnumber(L,max);
		return 2;
	}

	// btVector3 btTriangleShape::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShape::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btTriangleShape::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btTriangleShape::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShape::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btTriangleShape::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleShape::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShape::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleShape::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleShape::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btTriangleShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btTriangleShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btTriangleShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btTriangleShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btTriangleShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btTriangleShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btTriangleShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btTriangleShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_setMargin(float margin) function, expected prototype:\nvoid btTriangleShape::base_setMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::setMargin(margin);

		return 0;
	}

	// float btTriangleShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btTriangleShape::base_getMargin() const function, expected prototype:\nfloat btTriangleShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btTriangleShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btTriangleShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btTriangleShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTriangleShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btTriangleShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btTriangleShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luaL_error(L, "luna typecheck failed in bool btTriangleShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btTriangleShape::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btTriangleShape::base_initializePolyhedralFeatures(int). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btTriangleShape::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btTriangleShape::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::base_getNumVertices() const function, expected prototype:\nint btTriangleShape::base_getNumVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::base_getNumVertices() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btTriangleShape::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::base_getVertex(int index, btVector3 & vert) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getVertex(int index, btVector3 & vert) const function, expected prototype:\nvoid btTriangleShape::base_getVertex(int index, btVector3 & vert) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* vert_ptr=(Luna< btVector3 >::check(L,3));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in btTriangleShape::base_getVertex function");
		}
		btVector3 & vert=*vert_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getVertex(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getVertex(index, vert);

		return 0;
	}

	// int btTriangleShape::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::base_getNumEdges() const function, expected prototype:\nint btTriangleShape::base_getNumEdges() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::base_getNumEdges() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btTriangleShape::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btTriangleShape::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btTriangleShape::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btTriangleShape::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getEdge(i, pa, pb);

		return 0;
	}

	// void btTriangleShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btTriangleShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// btVector3 btTriangleShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & dir) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btTriangleShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & dir) const function, expected prototype:\nbtVector3 btTriangleShape::base_localGetSupportingVertexWithoutMargin(const btVector3 & dir) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,2));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btTriangleShape::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & dir=*dir_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btTriangleShape::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btTriangleShape::localGetSupportingVertexWithoutMargin(dir);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btTriangleShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btTriangleShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btTriangleShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btTriangleShape::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btTriangleShape::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btTriangleShape::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// int btTriangleShape::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::base_getNumPlanes() const function, expected prototype:\nint btTriangleShape::base_getNumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::base_getNumPlanes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btTriangleShape::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::base_getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const
	static int _bind_base_getPlaneEquation(lua_State *L) {
		if (!_lg_typecheck_base_getPlaneEquation(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const function, expected prototype:\nvoid btTriangleShape::base_getPlaneEquation(int i, btVector3 & planeNormal, btVector3 & planeSupport) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btTriangleShape::base_getPlaneEquation function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,4));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btTriangleShape::base_getPlaneEquation function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getPlaneEquation(int, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getPlaneEquation(i, planeNormal, planeSupport);

		return 0;
	}

	// void btTriangleShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btTriangleShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btTriangleShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// bool btTriangleShape::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luaL_error(L, "luna typecheck failed in bool btTriangleShape::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btTriangleShape::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btTriangleShape::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btTriangleShape::base_isInside(const btVector3 &, float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btTriangleShape::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btTriangleShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btTriangleShape::base_getName() const function, expected prototype:\nconst char * btTriangleShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btTriangleShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btTriangleShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// int btTriangleShape::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luaL_error(L, "luna typecheck failed in int btTriangleShape::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btTriangleShape::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btTriangleShape::base_getNumPreferredPenetrationDirections() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btTriangleShape::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luaL_error(L, "luna typecheck failed in void btTriangleShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btTriangleShape::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btTriangleShape::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btTriangleShape* self=Luna< btCollisionShape >::checkSubType< btTriangleShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btTriangleShape::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btTriangleShape::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}


	// Operator binds:

};

btTriangleShape* LunaTraits< btTriangleShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleShape::_bind_ctor(L);
}

void LunaTraits< btTriangleShape >::_bind_dtor(btTriangleShape* obj) {
	delete obj;
}

const char LunaTraits< btTriangleShape >::className[] = "btTriangleShape";
const char LunaTraits< btTriangleShape >::fullName[] = "btTriangleShape";
const char LunaTraits< btTriangleShape >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleShape >::parents[] = {"bullet.btPolyhedralConvexShape", 0};
const int LunaTraits< btTriangleShape >::hash = 41729047;
const int LunaTraits< btTriangleShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btTriangleShape >::methods[] = {
	{"getNumVertices", &luna_wrapper_btTriangleShape::_bind_getNumVertices},
	{"getVertexPtr", &luna_wrapper_btTriangleShape::_bind_getVertexPtr},
	{"getVertex", &luna_wrapper_btTriangleShape::_bind_getVertex},
	{"getNumEdges", &luna_wrapper_btTriangleShape::_bind_getNumEdges},
	{"getEdge", &luna_wrapper_btTriangleShape::_bind_getEdge},
	{"getAabb", &luna_wrapper_btTriangleShape::_bind_getAabb},
	{"localGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleShape::_bind_localGetSupportingVertexWithoutMargin},
	{"batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleShape::_bind_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"getPlane", &luna_wrapper_btTriangleShape::_bind_getPlane},
	{"getNumPlanes", &luna_wrapper_btTriangleShape::_bind_getNumPlanes},
	{"calcNormal", &luna_wrapper_btTriangleShape::_bind_calcNormal},
	{"getPlaneEquation", &luna_wrapper_btTriangleShape::_bind_getPlaneEquation},
	{"calculateLocalInertia", &luna_wrapper_btTriangleShape::_bind_calculateLocalInertia},
	{"isInside", &luna_wrapper_btTriangleShape::_bind_isInside},
	{"getName", &luna_wrapper_btTriangleShape::_bind_getName},
	{"getNumPreferredPenetrationDirections", &luna_wrapper_btTriangleShape::_bind_getNumPreferredPenetrationDirections},
	{"getPreferredPenetrationDirection", &luna_wrapper_btTriangleShape::_bind_getPreferredPenetrationDirection},
	{"base_getBoundingSphere", &luna_wrapper_btTriangleShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btTriangleShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btTriangleShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btTriangleShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btTriangleShape::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btTriangleShape::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btTriangleShape::_bind_base_getAabbSlow},
	{"base_setLocalScaling", &luna_wrapper_btTriangleShape::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btTriangleShape::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btTriangleShape::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btTriangleShape::_bind_base_getMargin},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTriangleShape::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btTriangleShape::_bind_base_initializePolyhedralFeatures},
	{"base_getNumVertices", &luna_wrapper_btTriangleShape::_bind_base_getNumVertices},
	{"base_getVertex", &luna_wrapper_btTriangleShape::_bind_base_getVertex},
	{"base_getNumEdges", &luna_wrapper_btTriangleShape::_bind_base_getNumEdges},
	{"base_getEdge", &luna_wrapper_btTriangleShape::_bind_base_getEdge},
	{"base_getAabb", &luna_wrapper_btTriangleShape::_bind_base_getAabb},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleShape::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btTriangleShape::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_getPlane", &luna_wrapper_btTriangleShape::_bind_base_getPlane},
	{"base_getNumPlanes", &luna_wrapper_btTriangleShape::_bind_base_getNumPlanes},
	{"base_getPlaneEquation", &luna_wrapper_btTriangleShape::_bind_base_getPlaneEquation},
	{"base_calculateLocalInertia", &luna_wrapper_btTriangleShape::_bind_base_calculateLocalInertia},
	{"base_isInside", &luna_wrapper_btTriangleShape::_bind_base_isInside},
	{"base_getName", &luna_wrapper_btTriangleShape::_bind_base_getName},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btTriangleShape::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btTriangleShape::_bind_base_getPreferredPenetrationDirection},
	{"fromVoid", &luna_wrapper_btTriangleShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btTriangleShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleShape >::enumValues[] = {
	{0,0}
};


