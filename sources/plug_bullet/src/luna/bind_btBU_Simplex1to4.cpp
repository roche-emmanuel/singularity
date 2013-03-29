#include <plug_common.h>

#include <luna/wrappers/wrapper_btBU_Simplex1to4.h>

class luna_wrapper_btBU_Simplex1to4 {
public:
	typedef Luna< btBU_Simplex1to4 > luna_t;

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

		btBU_Simplex1to4* self= (btBU_Simplex1to4*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btBU_Simplex1to4 >::push(L,self,false);
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
		//btBU_Simplex1to4* ptr= dynamic_cast< btBU_Simplex1to4* >(Luna< btCollisionShape >::check(L,1));
		btBU_Simplex1to4* ptr= luna_caster< btCollisionShape, btBU_Simplex1to4 >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btBU_Simplex1to4 >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
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

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
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

	inline static bool _lg_typecheck_addVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
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

	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_getIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btBU_Simplex1to4::btBU_Simplex1to4()
	static btBU_Simplex1to4* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4() function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4()\nClass arguments details:\n");
		}


		return new btBU_Simplex1to4();
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0)
	static btBU_Simplex1to4* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,1));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;

		return new btBU_Simplex1to4(pt0);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1)
	static btBU_Simplex1to4* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,1));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;
		const btVector3* pt1_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt1=*pt1_ptr;

		return new btBU_Simplex1to4(pt0, pt1);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2)
	static btBU_Simplex1to4* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,1));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;
		const btVector3* pt1_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt1=*pt1_ptr;
		const btVector3* pt2_ptr=(Luna< btVector3 >::check(L,3));
		if( !pt2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt2 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt2=*pt2_ptr;

		return new btBU_Simplex1to4(pt0, pt1, pt2);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3)
	static btBU_Simplex1to4* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,1));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;
		const btVector3* pt1_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt1=*pt1_ptr;
		const btVector3* pt2_ptr=(Luna< btVector3 >::check(L,3));
		if( !pt2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt2 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt2=*pt2_ptr;
		const btVector3* pt3_ptr=(Luna< btVector3 >::check(L,4));
		if( !pt3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt3 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt3=*pt3_ptr;

		return new btBU_Simplex1to4(pt0, pt1, pt2, pt3);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data)
	static btBU_Simplex1to4* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btBU_Simplex1to4(L,NULL);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0)
	static btBU_Simplex1to4* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0)\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;

		return new wrapper_btBU_Simplex1to4(L,NULL, pt0);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1)
	static btBU_Simplex1to4* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;
		const btVector3* pt1_ptr=(Luna< btVector3 >::check(L,3));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt1=*pt1_ptr;

		return new wrapper_btBU_Simplex1to4(L,NULL, pt0, pt1);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2)
	static btBU_Simplex1to4* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;
		const btVector3* pt1_ptr=(Luna< btVector3 >::check(L,3));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt1=*pt1_ptr;
		const btVector3* pt2_ptr=(Luna< btVector3 >::check(L,4));
		if( !pt2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt2 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt2=*pt2_ptr;

		return new wrapper_btBU_Simplex1to4(L,NULL, pt0, pt1, pt2);
	}

	// btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3)
	static btBU_Simplex1to4* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3) function, expected prototype:\nbtBU_Simplex1to4::btBU_Simplex1to4(lua_Table * data, const btVector3 & pt0, const btVector3 & pt1, const btVector3 & pt2, const btVector3 & pt3)\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\n");
		}

		const btVector3* pt0_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt0 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt0=*pt0_ptr;
		const btVector3* pt1_ptr=(Luna< btVector3 >::check(L,3));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt1=*pt1_ptr;
		const btVector3* pt2_ptr=(Luna< btVector3 >::check(L,4));
		if( !pt2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt2 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt2=*pt2_ptr;
		const btVector3* pt3_ptr=(Luna< btVector3 >::check(L,5));
		if( !pt3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt3 in btBU_Simplex1to4::btBU_Simplex1to4 function");
		}
		const btVector3 & pt3=*pt3_ptr;

		return new wrapper_btBU_Simplex1to4(L,NULL, pt0, pt1, pt2, pt3);
	}

	// Overload binder for btBU_Simplex1to4::btBU_Simplex1to4
	static btBU_Simplex1to4* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);

		luaL_error(L, "error in function btBU_Simplex1to4, cannot match any of the overloads for function btBU_Simplex1to4:\n  btBU_Simplex1to4()\n  btBU_Simplex1to4(const btVector3 &)\n  btBU_Simplex1to4(const btVector3 &, const btVector3 &)\n  btBU_Simplex1to4(const btVector3 &, const btVector3 &, const btVector3 &)\n  btBU_Simplex1to4(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &)\n  btBU_Simplex1to4(lua_Table *)\n  btBU_Simplex1to4(lua_Table *, const btVector3 &)\n  btBU_Simplex1to4(lua_Table *, const btVector3 &, const btVector3 &)\n  btBU_Simplex1to4(lua_Table *, const btVector3 &, const btVector3 &, const btVector3 &)\n  btBU_Simplex1to4(lua_Table *, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &)\n");
		return NULL;
	}


	// Function binds:
	// void btBU_Simplex1to4::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::reset() function, expected prototype:\nvoid btBU_Simplex1to4::reset()\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::reset(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void btBU_Simplex1to4::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBU_Simplex1to4::getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBU_Simplex1to4::getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBU_Simplex1to4::getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBU_Simplex1to4::getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btBU_Simplex1to4::addVertex(const btVector3 & pt)
	static int _bind_addVertex(lua_State *L) {
		if (!_lg_typecheck_addVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::addVertex(const btVector3 & pt) function, expected prototype:\nvoid btBU_Simplex1to4::addVertex(const btVector3 & pt)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btBU_Simplex1to4::addVertex function");
		}
		const btVector3 & pt=*pt_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::addVertex(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->addVertex(pt);

		return 0;
	}

	// int btBU_Simplex1to4::getNumVertices() const
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::getNumVertices() const function, expected prototype:\nint btBU_Simplex1to4::getNumVertices() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBU_Simplex1to4::getNumEdges() const
	static int _bind_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::getNumEdges() const function, expected prototype:\nint btBU_Simplex1to4::getNumEdges() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBU_Simplex1to4::getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_getEdge(lua_State *L) {
		if (!_lg_typecheck_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btBU_Simplex1to4::getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btBU_Simplex1to4::getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btBU_Simplex1to4::getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getEdge(i, pa, pb);

		return 0;
	}

	// void btBU_Simplex1to4::getVertex(int i, btVector3 & vtx) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btBU_Simplex1to4::getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btBU_Simplex1to4::getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getVertex(i, vtx);

		return 0;
	}

	// int btBU_Simplex1to4::getNumPlanes() const
	static int _bind_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::getNumPlanes() const function, expected prototype:\nint btBU_Simplex1to4::getNumPlanes() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBU_Simplex1to4::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btBU_Simplex1to4::getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btBU_Simplex1to4::getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btBU_Simplex1to4::getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// int btBU_Simplex1to4::getIndex(int i) const
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::getIndex(int i) const function, expected prototype:\nint btBU_Simplex1to4::getIndex(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::getIndex(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getIndex(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btBU_Simplex1to4::isInside(const btVector3 & pt, float tolerance) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBU_Simplex1to4::isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btBU_Simplex1to4::isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btBU_Simplex1to4::isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBU_Simplex1to4::isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btBU_Simplex1to4::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btBU_Simplex1to4::getName() const function, expected prototype:\nconst char * btBU_Simplex1to4::getName() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btBU_Simplex1to4::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btBU_Simplex1to4::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btBU_Simplex1to4::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getBoundingSphere(center, radius);

		return 0;
	}

	// float btBU_Simplex1to4::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBU_Simplex1to4::base_getAngularMotionDisc() const function, expected prototype:\nfloat btBU_Simplex1to4::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBU_Simplex1to4::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBU_Simplex1to4::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btBU_Simplex1to4::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBU_Simplex1to4::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btBU_Simplex1to4::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBU_Simplex1to4::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBU_Simplex1to4::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btBU_Simplex1to4::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBU_Simplex1to4::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btBU_Simplex1to4::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBU_Simplex1to4::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBU_Simplex1to4::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBU_Simplex1to4::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const
	static int _bind_base_project(lua_State *L) {
		if (!_lg_typecheck_base_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const function, expected prototype:\nvoid btBU_Simplex1to4::base_project(const btTransform & trans, const btVector3 & dir, float & min, float & max) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btBU_Simplex1to4::base_project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btBU_Simplex1to4::base_project function");
		}
		const btVector3 & dir=*dir_ptr;
		float min=(float)lua_tonumber(L,4);
		float max=(float)lua_tonumber(L,5);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_project(const btTransform &, const btVector3 &, float &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::project(trans, dir, min, max);

		return 0;
	}

	// btVector3 btBU_Simplex1to4::base_localGetSupportingVertex(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertex(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBU_Simplex1to4::base_localGetSupportingVertex(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBU_Simplex1to4::base_localGetSupportingVertex(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBU_Simplex1to4::base_localGetSupportingVertex function");
		}
		const btVector3 & vec=*vec_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBU_Simplex1to4::base_localGetSupportingVertex(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBU_Simplex1to4::localGetSupportingVertex(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBU_Simplex1to4::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabbSlow(lua_State *L) {
		if (!_lg_typecheck_base_getAabbSlow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getAabbSlow(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBU_Simplex1to4::base_getAabbSlow function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBU_Simplex1to4::base_getAabbSlow function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBU_Simplex1to4::base_getAabbSlow function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getAabbSlow(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getAabbSlow(t, aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btBU_Simplex1to4::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btBU_Simplex1to4::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btBU_Simplex1to4::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btBU_Simplex1to4::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btBU_Simplex1to4::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btBU_Simplex1to4::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_setMargin(float margin) function, expected prototype:\nvoid btBU_Simplex1to4::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::setMargin(margin);

		return 0;
	}

	// float btBU_Simplex1to4::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btBU_Simplex1to4::base_getMargin() const function, expected prototype:\nfloat btBU_Simplex1to4::base_getMargin() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btBU_Simplex1to4::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btBU_Simplex1to4::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBU_Simplex1to4::base_getNumPreferredPenetrationDirections() const
	static int _bind_base_getNumPreferredPenetrationDirections(lua_State *L) {
		if (!_lg_typecheck_base_getNumPreferredPenetrationDirections(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::base_getNumPreferredPenetrationDirections() const function, expected prototype:\nint btBU_Simplex1to4::base_getNumPreferredPenetrationDirections() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::base_getNumPreferredPenetrationDirections() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBU_Simplex1to4::getNumPreferredPenetrationDirections();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBU_Simplex1to4::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const
	static int _bind_base_getPreferredPenetrationDirection(lua_State *L) {
		if (!_lg_typecheck_base_getPreferredPenetrationDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getPreferredPenetrationDirection(int index, btVector3 & penetrationVector) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int index=(int)lua_tointeger(L,2);
		btVector3* penetrationVector_ptr=(Luna< btVector3 >::check(L,3));
		if( !penetrationVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg penetrationVector in btBU_Simplex1to4::base_getPreferredPenetrationDirection function");
		}
		btVector3 & penetrationVector=*penetrationVector_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getPreferredPenetrationDirection(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getPreferredPenetrationDirection(index, penetrationVector);

		return 0;
	}

	// int btBU_Simplex1to4::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::base_calculateSerializeBufferSize() const function, expected prototype:\nint btBU_Simplex1to4::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBU_Simplex1to4::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btBU_Simplex1to4::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)
	static int _bind_base_initializePolyhedralFeatures(lua_State *L) {
		if (!_lg_typecheck_base_initializePolyhedralFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBU_Simplex1to4::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0) function, expected prototype:\nbool btBU_Simplex1to4::base_initializePolyhedralFeatures(int shiftVerticesByMargin = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int shiftVerticesByMargin=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBU_Simplex1to4::base_initializePolyhedralFeatures(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btBU_Simplex1to4::initializePolyhedralFeatures(shiftVerticesByMargin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// btVector3 btBU_Simplex1to4::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const
	static int _bind_base_localGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_localGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btBU_Simplex1to4::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const function, expected prototype:\nbtVector3 btBU_Simplex1to4::base_localGetSupportingVertexWithoutMargin(const btVector3 & vec) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vec_ptr=(Luna< btVector3 >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in btBU_Simplex1to4::base_localGetSupportingVertexWithoutMargin function");
		}
		const btVector3 & vec=*vec_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btBU_Simplex1to4::base_localGetSupportingVertexWithoutMargin(const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btBU_Simplex1to4::localGetSupportingVertexWithoutMargin(vec);
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btBU_Simplex1to4::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const
	static int _bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin(lua_State *L) {
		if (!_lg_typecheck_base_batchedUnitVectorGetSupportingVertexWithoutMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const function, expected prototype:\nvoid btBU_Simplex1to4::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 * vectors, btVector3 * supportVerticesOut, int numVectors) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* vectors=(Luna< btVector3 >::check(L,2));
		btVector3* supportVerticesOut=(Luna< btVector3 >::check(L,3));
		int numVectors=(int)lua_tointeger(L,4);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3 *, btVector3 *, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut, numVectors);

		return 0;
	}

	// void btBU_Simplex1to4::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btBU_Simplex1to4::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btBU_Simplex1to4::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// void btBU_Simplex1to4::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btBU_Simplex1to4::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btBU_Simplex1to4::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::setLocalScaling(scaling);

		return 0;
	}

	// void btBU_Simplex1to4::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btBU_Simplex1to4::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btBU_Simplex1to4::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btBU_Simplex1to4::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// int btBU_Simplex1to4::base_getNumVertices() const
	static int _bind_base_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_base_getNumVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::base_getNumVertices() const function, expected prototype:\nint btBU_Simplex1to4::base_getNumVertices() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::base_getNumVertices() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBU_Simplex1to4::getNumVertices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btBU_Simplex1to4::base_getNumEdges() const
	static int _bind_base_getNumEdges(lua_State *L) {
		if (!_lg_typecheck_base_getNumEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::base_getNumEdges() const function, expected prototype:\nint btBU_Simplex1to4::base_getNumEdges() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::base_getNumEdges() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBU_Simplex1to4::getNumEdges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBU_Simplex1to4::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const
	static int _bind_base_getEdge(lua_State *L) {
		if (!_lg_typecheck_base_getEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getEdge(int i, btVector3 & pa, btVector3 & pb) const\nClass arguments details:\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* pa_ptr=(Luna< btVector3 >::check(L,3));
		if( !pa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pa in btBU_Simplex1to4::base_getEdge function");
		}
		btVector3 & pa=*pa_ptr;
		btVector3* pb_ptr=(Luna< btVector3 >::check(L,4));
		if( !pb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pb in btBU_Simplex1to4::base_getEdge function");
		}
		btVector3 & pb=*pb_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getEdge(int, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getEdge(i, pa, pb);

		return 0;
	}

	// void btBU_Simplex1to4::base_getVertex(int i, btVector3 & vtx) const
	static int _bind_base_getVertex(lua_State *L) {
		if (!_lg_typecheck_base_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getVertex(int i, btVector3 & vtx) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getVertex(int i, btVector3 & vtx) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int i=(int)lua_tointeger(L,2);
		btVector3* vtx_ptr=(Luna< btVector3 >::check(L,3));
		if( !vtx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vtx in btBU_Simplex1to4::base_getVertex function");
		}
		btVector3 & vtx=*vtx_ptr;

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getVertex(i, vtx);

		return 0;
	}

	// int btBU_Simplex1to4::base_getNumPlanes() const
	static int _bind_base_getNumPlanes(lua_State *L) {
		if (!_lg_typecheck_base_getNumPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::base_getNumPlanes() const function, expected prototype:\nint btBU_Simplex1to4::base_getNumPlanes() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::base_getNumPlanes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBU_Simplex1to4::getNumPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btBU_Simplex1to4::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const
	static int _bind_base_getPlane(lua_State *L) {
		if (!_lg_typecheck_base_getPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btBU_Simplex1to4::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const function, expected prototype:\nvoid btBU_Simplex1to4::base_getPlane(btVector3 & planeNormal, btVector3 & planeSupport, int i) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btBU_Simplex1to4::base_getPlane function");
		}
		btVector3 & planeNormal=*planeNormal_ptr;
		btVector3* planeSupport_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeSupport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeSupport in btBU_Simplex1to4::base_getPlane function");
		}
		btVector3 & planeSupport=*planeSupport_ptr;
		int i=(int)lua_tointeger(L,4);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btBU_Simplex1to4::base_getPlane(btVector3 &, btVector3 &, int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btBU_Simplex1to4::getPlane(planeNormal, planeSupport, i);

		return 0;
	}

	// int btBU_Simplex1to4::base_getIndex(int i) const
	static int _bind_base_getIndex(lua_State *L) {
		if (!_lg_typecheck_base_getIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btBU_Simplex1to4::base_getIndex(int i) const function, expected prototype:\nint btBU_Simplex1to4::base_getIndex(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btBU_Simplex1to4::base_getIndex(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btBU_Simplex1to4::getIndex(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btBU_Simplex1to4::base_isInside(const btVector3 & pt, float tolerance) const
	static int _bind_base_isInside(lua_State *L) {
		if (!_lg_typecheck_base_isInside(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btBU_Simplex1to4::base_isInside(const btVector3 & pt, float tolerance) const function, expected prototype:\nbool btBU_Simplex1to4::base_isInside(const btVector3 & pt, float tolerance) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* pt_ptr=(Luna< btVector3 >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in btBU_Simplex1to4::base_isInside function");
		}
		const btVector3 & pt=*pt_ptr;
		float tolerance=(float)lua_tonumber(L,3);

		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btBU_Simplex1to4::base_isInside(const btVector3 &, float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btBU_Simplex1to4::isInside(pt, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * btBU_Simplex1to4::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btBU_Simplex1to4::base_getName() const function, expected prototype:\nconst char * btBU_Simplex1to4::base_getName() const\nClass arguments details:\n");
		}


		btBU_Simplex1to4* self=Luna< btCollisionShape >::checkSubType< btBU_Simplex1to4 >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btBU_Simplex1to4::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btBU_Simplex1to4::getName();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

btBU_Simplex1to4* LunaTraits< btBU_Simplex1to4 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btBU_Simplex1to4::_bind_ctor(L);
}

void LunaTraits< btBU_Simplex1to4 >::_bind_dtor(btBU_Simplex1to4* obj) {
	delete obj;
}

const char LunaTraits< btBU_Simplex1to4 >::className[] = "btBU_Simplex1to4";
const char LunaTraits< btBU_Simplex1to4 >::fullName[] = "btBU_Simplex1to4";
const char LunaTraits< btBU_Simplex1to4 >::moduleName[] = "bullet";
const char* LunaTraits< btBU_Simplex1to4 >::parents[] = {"bullet.btPolyhedralConvexAabbCachingShape", 0};
const int LunaTraits< btBU_Simplex1to4 >::hash = 31645137;
const int LunaTraits< btBU_Simplex1to4 >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btBU_Simplex1to4 >::methods[] = {
	{"reset", &luna_wrapper_btBU_Simplex1to4::_bind_reset},
	{"getAabb", &luna_wrapper_btBU_Simplex1to4::_bind_getAabb},
	{"addVertex", &luna_wrapper_btBU_Simplex1to4::_bind_addVertex},
	{"getNumVertices", &luna_wrapper_btBU_Simplex1to4::_bind_getNumVertices},
	{"getNumEdges", &luna_wrapper_btBU_Simplex1to4::_bind_getNumEdges},
	{"getEdge", &luna_wrapper_btBU_Simplex1to4::_bind_getEdge},
	{"getVertex", &luna_wrapper_btBU_Simplex1to4::_bind_getVertex},
	{"getNumPlanes", &luna_wrapper_btBU_Simplex1to4::_bind_getNumPlanes},
	{"getPlane", &luna_wrapper_btBU_Simplex1to4::_bind_getPlane},
	{"getIndex", &luna_wrapper_btBU_Simplex1to4::_bind_getIndex},
	{"isInside", &luna_wrapper_btBU_Simplex1to4::_bind_isInside},
	{"getName", &luna_wrapper_btBU_Simplex1to4::_bind_getName},
	{"base_getBoundingSphere", &luna_wrapper_btBU_Simplex1to4::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btBU_Simplex1to4::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btBU_Simplex1to4::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btBU_Simplex1to4::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_project", &luna_wrapper_btBU_Simplex1to4::_bind_base_project},
	{"base_localGetSupportingVertex", &luna_wrapper_btBU_Simplex1to4::_bind_base_localGetSupportingVertex},
	{"base_getAabbSlow", &luna_wrapper_btBU_Simplex1to4::_bind_base_getAabbSlow},
	{"base_getLocalScaling", &luna_wrapper_btBU_Simplex1to4::_bind_base_getLocalScaling},
	{"base_setMargin", &luna_wrapper_btBU_Simplex1to4::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btBU_Simplex1to4::_bind_base_getMargin},
	{"base_getNumPreferredPenetrationDirections", &luna_wrapper_btBU_Simplex1to4::_bind_base_getNumPreferredPenetrationDirections},
	{"base_getPreferredPenetrationDirection", &luna_wrapper_btBU_Simplex1to4::_bind_base_getPreferredPenetrationDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btBU_Simplex1to4::_bind_base_calculateSerializeBufferSize},
	{"base_initializePolyhedralFeatures", &luna_wrapper_btBU_Simplex1to4::_bind_base_initializePolyhedralFeatures},
	{"base_localGetSupportingVertexWithoutMargin", &luna_wrapper_btBU_Simplex1to4::_bind_base_localGetSupportingVertexWithoutMargin},
	{"base_batchedUnitVectorGetSupportingVertexWithoutMargin", &luna_wrapper_btBU_Simplex1to4::_bind_base_batchedUnitVectorGetSupportingVertexWithoutMargin},
	{"base_calculateLocalInertia", &luna_wrapper_btBU_Simplex1to4::_bind_base_calculateLocalInertia},
	{"base_setLocalScaling", &luna_wrapper_btBU_Simplex1to4::_bind_base_setLocalScaling},
	{"base_getAabb", &luna_wrapper_btBU_Simplex1to4::_bind_base_getAabb},
	{"base_getNumVertices", &luna_wrapper_btBU_Simplex1to4::_bind_base_getNumVertices},
	{"base_getNumEdges", &luna_wrapper_btBU_Simplex1to4::_bind_base_getNumEdges},
	{"base_getEdge", &luna_wrapper_btBU_Simplex1to4::_bind_base_getEdge},
	{"base_getVertex", &luna_wrapper_btBU_Simplex1to4::_bind_base_getVertex},
	{"base_getNumPlanes", &luna_wrapper_btBU_Simplex1to4::_bind_base_getNumPlanes},
	{"base_getPlane", &luna_wrapper_btBU_Simplex1to4::_bind_base_getPlane},
	{"base_getIndex", &luna_wrapper_btBU_Simplex1to4::_bind_base_getIndex},
	{"base_isInside", &luna_wrapper_btBU_Simplex1to4::_bind_base_isInside},
	{"base_getName", &luna_wrapper_btBU_Simplex1to4::_bind_base_getName},
	{"__eq", &luna_wrapper_btBU_Simplex1to4::_bind___eq},
	{"fromVoid", &luna_wrapper_btBU_Simplex1to4::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btBU_Simplex1to4::_bind_asVoid},
	{"getTable", &luna_wrapper_btBU_Simplex1to4::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btBU_Simplex1to4 >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btBU_Simplex1to4::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btBU_Simplex1to4 >::enumValues[] = {
	{0,0}
};


