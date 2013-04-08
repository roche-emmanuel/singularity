#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactMeshShapePart.h>

class luna_wrapper_btGImpactMeshShapePart {
public:
	typedef Luna< btGImpactMeshShapePart > luna_t;

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

		btGImpactMeshShapePart* self= (btGImpactMeshShapePart*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactMeshShapePart >::push(L,self,false);
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
		//btGImpactMeshShapePart* ptr= dynamic_cast< btGImpactMeshShapePart* >(Luna< btCollisionShape >::check(L,1));
		btGImpactMeshShapePart* ptr= luna_caster< btCollisionShape, btGImpactMeshShapePart >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactMeshShapePart >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56402633)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btStridingMeshInterface >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btStridingMeshInterface >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_childrenHasTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unlockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTrimeshPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGImpactShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needsRetrieveTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_needsRetrieveTetrahedrons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBulletTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBulletTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_getPart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_getChildAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_postUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_childrenHasTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_lockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_unlockChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChildTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getGImpactShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_needsRetrieveTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_needsRetrieveTetrahedrons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getBulletTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBulletTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
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

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactMeshShapePart::btGImpactMeshShapePart()
	static btGImpactMeshShapePart* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::btGImpactMeshShapePart() function, expected prototype:\nbtGImpactMeshShapePart::btGImpactMeshShapePart()\nClass arguments details:\n");
		}


		return new btGImpactMeshShapePart();
	}

	// btGImpactMeshShapePart::btGImpactMeshShapePart(btStridingMeshInterface * meshInterface, int part)
	static btGImpactMeshShapePart* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::btGImpactMeshShapePart(btStridingMeshInterface * meshInterface, int part) function, expected prototype:\nbtGImpactMeshShapePart::btGImpactMeshShapePart(btStridingMeshInterface * meshInterface, int part)\nClass arguments details:\narg 1 ID = 56402633\n");
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));
		int part=(int)lua_tointeger(L,2);

		return new btGImpactMeshShapePart(meshInterface, part);
	}

	// btGImpactMeshShapePart::btGImpactMeshShapePart(lua_Table * data)
	static btGImpactMeshShapePart* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::btGImpactMeshShapePart(lua_Table * data) function, expected prototype:\nbtGImpactMeshShapePart::btGImpactMeshShapePart(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btGImpactMeshShapePart(L,NULL);
	}

	// btGImpactMeshShapePart::btGImpactMeshShapePart(lua_Table * data, btStridingMeshInterface * meshInterface, int part)
	static btGImpactMeshShapePart* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::btGImpactMeshShapePart(lua_Table * data, btStridingMeshInterface * meshInterface, int part) function, expected prototype:\nbtGImpactMeshShapePart::btGImpactMeshShapePart(lua_Table * data, btStridingMeshInterface * meshInterface, int part)\nClass arguments details:\narg 2 ID = 56402633\n");
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));
		int part=(int)lua_tointeger(L,3);

		return new wrapper_btGImpactMeshShapePart(L,NULL, meshInterface, part);
	}

	// Overload binder for btGImpactMeshShapePart::btGImpactMeshShapePart
	static btGImpactMeshShapePart* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btGImpactMeshShapePart, cannot match any of the overloads for function btGImpactMeshShapePart:\n  btGImpactMeshShapePart()\n  btGImpactMeshShapePart(btStridingMeshInterface *, int)\n  btGImpactMeshShapePart(lua_Table *)\n  btGImpactMeshShapePart(lua_Table *, btStridingMeshInterface *, int)\n");
		return NULL;
	}


	// Function binds:
	// bool btGImpactMeshShapePart::childrenHasTransform() const
	static int _bind_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_childrenHasTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::childrenHasTransform() const function, expected prototype:\nbool btGImpactMeshShapePart::childrenHasTransform() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::childrenHasTransform() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactMeshShapePart::lockChildShapes() const
	static int _bind_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_lockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::lockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShapePart::lockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::lockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->lockChildShapes();

		return 0;
	}

	// void btGImpactMeshShapePart::unlockChildShapes() const
	static int _bind_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_unlockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::unlockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShapePart::unlockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::unlockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->unlockChildShapes();

		return 0;
	}

	// int btGImpactMeshShapePart::getNumChildShapes() const
	static int _bind_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_getNumChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::getNumChildShapes() const function, expected prototype:\nint btGImpactMeshShapePart::getNumChildShapes() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::getNumChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btCollisionShape * btGImpactMeshShapePart::getChildShape(int index)
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactMeshShapePart::getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactMeshShapePart::getChildShape(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactMeshShapePart::getChildShape(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactMeshShapePart::getChildShape(int index) const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactMeshShapePart::getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactMeshShapePart::getChildShape(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactMeshShapePart::getChildShape(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactMeshShapePart::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape(int)\n  getChildShape(int)\n");
		return 0;
	}

	// btTransform btGImpactMeshShapePart::getChildTransform(int index) const
	static int _bind_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_getChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btGImpactMeshShapePart::getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactMeshShapePart::getChildTransform(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btGImpactMeshShapePart::getChildTransform(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btTransform stack_lret = self->getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactMeshShapePart::setChildTransform(int index, const btTransform & transform)
	static int _bind_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_setChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactMeshShapePart::setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactMeshShapePart::setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::setChildTransform(int, const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setChildTransform(index, transform);

		return 0;
	}

	// const btPrimitiveManagerBase * btGImpactMeshShapePart::getPrimitiveManager() const
	static int _bind_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactMeshShapePart::getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactMeshShapePart::getPrimitiveManager() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactMeshShapePart::getPrimitiveManager() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btPrimitiveManagerBase * lret = self->getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// btGImpactMeshShapePart::TrimeshPrimitiveManager * btGImpactMeshShapePart::getTrimeshPrimitiveManager()
	static int _bind_getTrimeshPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getTrimeshPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart::TrimeshPrimitiveManager * btGImpactMeshShapePart::getTrimeshPrimitiveManager() function, expected prototype:\nbtGImpactMeshShapePart::TrimeshPrimitiveManager * btGImpactMeshShapePart::getTrimeshPrimitiveManager()\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGImpactMeshShapePart::TrimeshPrimitiveManager * btGImpactMeshShapePart::getTrimeshPrimitiveManager(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btGImpactMeshShapePart::TrimeshPrimitiveManager * lret = self->getTrimeshPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGImpactMeshShapePart::TrimeshPrimitiveManager >::push(L,lret,false);

		return 1;
	}

	// void btGImpactMeshShapePart::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btGImpactMeshShapePart::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btGImpactMeshShapePart::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btGImpactMeshShapePart::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btGImpactMeshShapePart::getName() const function, expected prototype:\nconst char * btGImpactMeshShapePart::getName() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btGImpactMeshShapePart::getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::getGImpactShapeType() const
	static int _bind_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_getGImpactShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::getGImpactShapeType() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::getGImpactShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		eGIMPACT_SHAPE_TYPE lret = self->getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactMeshShapePart::needsRetrieveTriangles() const
	static int _bind_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactMeshShapePart::needsRetrieveTriangles() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::needsRetrieveTriangles() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactMeshShapePart::needsRetrieveTetrahedrons() const
	static int _bind_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTetrahedrons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactMeshShapePart::needsRetrieveTetrahedrons() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::needsRetrieveTetrahedrons() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactMeshShapePart::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_getBulletTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactMeshShapePart::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShapePart::getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactMeshShapePart::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_getBulletTetrahedron(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactMeshShapePart::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactMeshShapePart::getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// int btGImpactMeshShapePart::getVertexCount() const
	static int _bind_getVertexCount(lua_State *L) {
		if (!_lg_typecheck_getVertexCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::getVertexCount() const function, expected prototype:\nint btGImpactMeshShapePart::getVertexCount() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::getVertexCount() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getVertexCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::getVertex(int vertex_index, btVector3 & vertex) const
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::getVertex(int vertex_index, btVector3 & vertex) const function, expected prototype:\nvoid btGImpactMeshShapePart::getVertex(int vertex_index, btVector3 & vertex) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		int vertex_index=(int)lua_tointeger(L,2);
		btVector3* vertex_ptr=(Luna< btVector3 >::check(L,3));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in btGImpactMeshShapePart::getVertex function");
		}
		btVector3 & vertex=*vertex_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::getVertex(int, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->getVertex(vertex_index, vertex);

		return 0;
	}

	// void btGImpactMeshShapePart::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::setMargin(float margin) function, expected prototype:\nvoid btGImpactMeshShapePart::setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setMargin(margin);

		return 0;
	}

	// float btGImpactMeshShapePart::getMargin() const
	static int _bind_getMargin(lua_State *L) {
		if (!_lg_typecheck_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapePart::getMargin() const function, expected prototype:\nfloat btGImpactMeshShapePart::getMargin() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapePart::getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactMeshShapePart::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactMeshShapePart::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btGImpactMeshShapePart::getLocalScaling() const
	static int _bind_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btGImpactMeshShapePart::getLocalScaling() const function, expected prototype:\nconst btVector3 & btGImpactMeshShapePart::getLocalScaling() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btGImpactMeshShapePart::getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// int btGImpactMeshShapePart::getPart() const
	static int _bind_getPart(lua_State *L) {
		if (!_lg_typecheck_getPart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::getPart() const function, expected prototype:\nint btGImpactMeshShapePart::getPart() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::getPart() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->getPart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShapePart::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShapePart::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShapePart::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactMeshShapePart::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btGImpactMeshShapePart::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::getBoundingSphere(center, radius);

		return 0;
	}

	// float btGImpactMeshShapePart::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapePart::base_getAngularMotionDisc() const function, expected prototype:\nfloat btGImpactMeshShapePart::base_getAngularMotionDisc() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapePart::base_getAngularMotionDisc() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactMeshShapePart::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGImpactMeshShapePart::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapePart::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btGImpactMeshShapePart::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n");
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapePart::base_getContactBreakingThreshold(float) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactMeshShapePart::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btGImpactMeshShapePart::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btGImpactMeshShapePart::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btGImpactMeshShapePart::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btGImpactMeshShapePart::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btGImpactMeshShapePart::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// int btGImpactMeshShapePart::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGImpactMeshShapePart::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactMeshShapePart::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_base_getChildAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactMeshShapePart::base_getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShapePart::base_getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShapePart::base_getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactMeshShapePart::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactMeshShapePart::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShapePart::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShapePart::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// void btGImpactMeshShapePart::base_postUpdate()
	static int _bind_base_postUpdate(lua_State *L) {
		if (!_lg_typecheck_base_postUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_postUpdate() function, expected prototype:\nvoid btGImpactMeshShapePart::base_postUpdate()\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_postUpdate(). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::postUpdate();

		return 0;
	}

	// int btGImpactMeshShapePart::base_getShapeType() const
	static int _bind_base_getShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::base_getShapeType() const function, expected prototype:\nint btGImpactMeshShapePart::base_getShapeType() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::base_getShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactMeshShapePart::getShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btGImpactMeshShapePart::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btGImpactMeshShapePart::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGImpactMeshShapePart::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::rayTest(rayFrom, rayTo, resultCallback);

		return 0;
	}

	// bool btGImpactMeshShapePart::base_childrenHasTransform() const
	static int _bind_base_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_base_childrenHasTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::base_childrenHasTransform() const function, expected prototype:\nbool btGImpactMeshShapePart::base_childrenHasTransform() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::base_childrenHasTransform() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btGImpactMeshShapePart::childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactMeshShapePart::base_lockChildShapes() const
	static int _bind_base_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_lockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_lockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShapePart::base_lockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_lockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::lockChildShapes();

		return 0;
	}

	// void btGImpactMeshShapePart::base_unlockChildShapes() const
	static int _bind_base_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_unlockChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_unlockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShapePart::base_unlockChildShapes() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_unlockChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::unlockChildShapes();

		return 0;
	}

	// int btGImpactMeshShapePart::base_getNumChildShapes() const
	static int _bind_base_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_getNumChildShapes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShapePart::base_getNumChildShapes() const function, expected prototype:\nint btGImpactMeshShapePart::base_getNumChildShapes() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactMeshShapePart::base_getNumChildShapes() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		int lret = self->btGImpactMeshShapePart::getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int index)
	static int _bind_base_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getChildShape_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactMeshShapePart::base_getChildShape(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btCollisionShape * lret = self->btGImpactMeshShapePart::getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int index) const
	static int _bind_base_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getChildShape_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactMeshShapePart::base_getChildShape(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btCollisionShape * lret = self->btGImpactMeshShapePart::getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactMeshShapePart::base_getChildShape
	static int _bind_base_getChildShape(lua_State *L) {
		if (_lg_typecheck_base_getChildShape_overload_1(L)) return _bind_base_getChildShape_overload_1(L);
		if (_lg_typecheck_base_getChildShape_overload_2(L)) return _bind_base_getChildShape_overload_2(L);

		luaL_error(L, "error in function base_getChildShape, cannot match any of the overloads for function base_getChildShape:\n  base_getChildShape(int)\n  base_getChildShape(int)\n");
		return 0;
	}

	// btTransform btGImpactMeshShapePart::base_getChildTransform(int index) const
	static int _bind_base_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_base_getChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTransform btGImpactMeshShapePart::base_getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactMeshShapePart::base_getChildTransform(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTransform btGImpactMeshShapePart::base_getChildTransform(int) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		btTransform stack_lret = self->btGImpactMeshShapePart::getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactMeshShapePart::base_setChildTransform(int index, const btTransform & transform)
	static int _bind_base_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_base_setChildTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactMeshShapePart::base_setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n");
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactMeshShapePart::base_setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_setChildTransform(int, const btTransform &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::setChildTransform(index, transform);

		return 0;
	}

	// const btPrimitiveManagerBase * btGImpactMeshShapePart::base_getPrimitiveManager() const
	static int _bind_base_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_base_getPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactMeshShapePart::base_getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactMeshShapePart::base_getPrimitiveManager() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactMeshShapePart::base_getPrimitiveManager() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btPrimitiveManagerBase * lret = self->btGImpactMeshShapePart::getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// void btGImpactMeshShapePart::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n");
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btGImpactMeshShapePart::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const char * btGImpactMeshShapePart::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btGImpactMeshShapePart::base_getName() const function, expected prototype:\nconst char * btGImpactMeshShapePart::base_getName() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btGImpactMeshShapePart::base_getName() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const char * lret = self->btGImpactMeshShapePart::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::base_getGImpactShapeType() const
	static int _bind_base_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getGImpactShapeType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::base_getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::base_getGImpactShapeType() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactMeshShapePart::base_getGImpactShapeType() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		eGIMPACT_SHAPE_TYPE lret = self->btGImpactMeshShapePart::getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactMeshShapePart::base_needsRetrieveTriangles() const
	static int _bind_base_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_base_needsRetrieveTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::base_needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactMeshShapePart::base_needsRetrieveTriangles() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::base_needsRetrieveTriangles() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btGImpactMeshShapePart::needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactMeshShapePart::base_needsRetrieveTetrahedrons() const
	static int _bind_base_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_base_needsRetrieveTetrahedrons(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShapePart::base_needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactMeshShapePart::base_needsRetrieveTetrahedrons() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShapePart::base_needsRetrieveTetrahedrons() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		bool lret = self->btGImpactMeshShapePart::needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactMeshShapePart::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_base_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_base_getBulletTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShapePart::base_getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactMeshShapePart::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_base_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_base_getBulletTetrahedron(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactMeshShapePart::base_getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// void btGImpactMeshShapePart::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_setMargin(float margin) function, expected prototype:\nvoid btGImpactMeshShapePart::base_setMargin(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_setMargin(float). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::setMargin(margin);

		return 0;
	}

	// float btGImpactMeshShapePart::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShapePart::base_getMargin() const function, expected prototype:\nfloat btGImpactMeshShapePart::base_getMargin() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btGImpactMeshShapePart::base_getMargin() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		float lret = self->btGImpactMeshShapePart::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShapePart::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactMeshShapePart::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactMeshShapePart::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_setLocalScaling(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::setLocalScaling(scaling);

		return 0;
	}

	// const btVector3 & btGImpactMeshShapePart::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btGImpactMeshShapePart::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btGImpactMeshShapePart::base_getLocalScaling() const\nClass arguments details:\n");
		}


		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btGImpactMeshShapePart::base_getLocalScaling() const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		const btVector3* lret = &self->btGImpactMeshShapePart::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btGImpactMeshShapePart::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShapePart::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShapePart::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShapePart::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShapePart::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShapePart* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShapePart >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactMeshShapePart::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btCollisionShape >::check(L,1)).name());
		}
		self->btGImpactMeshShapePart::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btGImpactMeshShapePart* LunaTraits< btGImpactMeshShapePart >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactMeshShapePart::_bind_ctor(L);
}

void LunaTraits< btGImpactMeshShapePart >::_bind_dtor(btGImpactMeshShapePart* obj) {
	delete obj;
}

const char LunaTraits< btGImpactMeshShapePart >::className[] = "btGImpactMeshShapePart";
const char LunaTraits< btGImpactMeshShapePart >::fullName[] = "btGImpactMeshShapePart";
const char LunaTraits< btGImpactMeshShapePart >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactMeshShapePart >::parents[] = {"bullet.btGImpactShapeInterface", 0};
const int LunaTraits< btGImpactMeshShapePart >::hash = 48386761;
const int LunaTraits< btGImpactMeshShapePart >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btGImpactMeshShapePart >::methods[] = {
	{"childrenHasTransform", &luna_wrapper_btGImpactMeshShapePart::_bind_childrenHasTransform},
	{"lockChildShapes", &luna_wrapper_btGImpactMeshShapePart::_bind_lockChildShapes},
	{"unlockChildShapes", &luna_wrapper_btGImpactMeshShapePart::_bind_unlockChildShapes},
	{"getNumChildShapes", &luna_wrapper_btGImpactMeshShapePart::_bind_getNumChildShapes},
	{"getChildShape", &luna_wrapper_btGImpactMeshShapePart::_bind_getChildShape},
	{"getChildTransform", &luna_wrapper_btGImpactMeshShapePart::_bind_getChildTransform},
	{"setChildTransform", &luna_wrapper_btGImpactMeshShapePart::_bind_setChildTransform},
	{"getPrimitiveManager", &luna_wrapper_btGImpactMeshShapePart::_bind_getPrimitiveManager},
	{"getTrimeshPrimitiveManager", &luna_wrapper_btGImpactMeshShapePart::_bind_getTrimeshPrimitiveManager},
	{"calculateLocalInertia", &luna_wrapper_btGImpactMeshShapePart::_bind_calculateLocalInertia},
	{"getName", &luna_wrapper_btGImpactMeshShapePart::_bind_getName},
	{"getGImpactShapeType", &luna_wrapper_btGImpactMeshShapePart::_bind_getGImpactShapeType},
	{"needsRetrieveTriangles", &luna_wrapper_btGImpactMeshShapePart::_bind_needsRetrieveTriangles},
	{"needsRetrieveTetrahedrons", &luna_wrapper_btGImpactMeshShapePart::_bind_needsRetrieveTetrahedrons},
	{"getBulletTriangle", &luna_wrapper_btGImpactMeshShapePart::_bind_getBulletTriangle},
	{"getBulletTetrahedron", &luna_wrapper_btGImpactMeshShapePart::_bind_getBulletTetrahedron},
	{"getVertexCount", &luna_wrapper_btGImpactMeshShapePart::_bind_getVertexCount},
	{"getVertex", &luna_wrapper_btGImpactMeshShapePart::_bind_getVertex},
	{"setMargin", &luna_wrapper_btGImpactMeshShapePart::_bind_setMargin},
	{"getMargin", &luna_wrapper_btGImpactMeshShapePart::_bind_getMargin},
	{"setLocalScaling", &luna_wrapper_btGImpactMeshShapePart::_bind_setLocalScaling},
	{"getLocalScaling", &luna_wrapper_btGImpactMeshShapePart::_bind_getLocalScaling},
	{"getPart", &luna_wrapper_btGImpactMeshShapePart::_bind_getPart},
	{"processAllTriangles", &luna_wrapper_btGImpactMeshShapePart::_bind_processAllTriangles},
	{"base_getBoundingSphere", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGImpactMeshShapePart::_bind_base_calculateSerializeBufferSize},
	{"base_getChildAabb", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getChildAabb},
	{"base_getAabb", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getAabb},
	{"base_postUpdate", &luna_wrapper_btGImpactMeshShapePart::_bind_base_postUpdate},
	{"base_getShapeType", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getShapeType},
	{"base_rayTest", &luna_wrapper_btGImpactMeshShapePart::_bind_base_rayTest},
	{"base_childrenHasTransform", &luna_wrapper_btGImpactMeshShapePart::_bind_base_childrenHasTransform},
	{"base_lockChildShapes", &luna_wrapper_btGImpactMeshShapePart::_bind_base_lockChildShapes},
	{"base_unlockChildShapes", &luna_wrapper_btGImpactMeshShapePart::_bind_base_unlockChildShapes},
	{"base_getNumChildShapes", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getNumChildShapes},
	{"base_getChildShape", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getChildShape},
	{"base_getChildTransform", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getChildTransform},
	{"base_setChildTransform", &luna_wrapper_btGImpactMeshShapePart::_bind_base_setChildTransform},
	{"base_getPrimitiveManager", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getPrimitiveManager},
	{"base_calculateLocalInertia", &luna_wrapper_btGImpactMeshShapePart::_bind_base_calculateLocalInertia},
	{"base_getName", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getName},
	{"base_getGImpactShapeType", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getGImpactShapeType},
	{"base_needsRetrieveTriangles", &luna_wrapper_btGImpactMeshShapePart::_bind_base_needsRetrieveTriangles},
	{"base_needsRetrieveTetrahedrons", &luna_wrapper_btGImpactMeshShapePart::_bind_base_needsRetrieveTetrahedrons},
	{"base_getBulletTriangle", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getBulletTriangle},
	{"base_getBulletTetrahedron", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getBulletTetrahedron},
	{"base_setMargin", &luna_wrapper_btGImpactMeshShapePart::_bind_base_setMargin},
	{"base_getMargin", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getMargin},
	{"base_setLocalScaling", &luna_wrapper_btGImpactMeshShapePart::_bind_base_setLocalScaling},
	{"base_getLocalScaling", &luna_wrapper_btGImpactMeshShapePart::_bind_base_getLocalScaling},
	{"base_processAllTriangles", &luna_wrapper_btGImpactMeshShapePart::_bind_base_processAllTriangles},
	{"__eq", &luna_wrapper_btGImpactMeshShapePart::_bind___eq},
	{"fromVoid", &luna_wrapper_btGImpactMeshShapePart::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactMeshShapePart::_bind_asVoid},
	{"getTable", &luna_wrapper_btGImpactMeshShapePart::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactMeshShapePart >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btGImpactMeshShapePart::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactMeshShapePart >::enumValues[] = {
	{0,0}
};


