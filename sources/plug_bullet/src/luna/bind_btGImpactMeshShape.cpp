#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactMeshShape.h>

class luna_wrapper_btGImpactMeshShape {
public:
	typedef Luna< btGImpactMeshShape > luna_t;

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

		btGImpactMeshShape* self= (btGImpactMeshShape*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactMeshShape >::push(L,self,false);
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
		//btGImpactMeshShape* ptr= dynamic_cast< btGImpactMeshShape* >(Luna< btCollisionShape >::check(L,1));
		btGImpactMeshShape* ptr= luna_caster< btCollisionShape, btGImpactMeshShape >::cast(Luna< btCollisionShape >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactMeshShape >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56402633)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btStridingMeshInterface >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56402633)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btStridingMeshInterface >::check(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_getMeshPartCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMeshPart_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMeshPart_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_childrenHasTransform(lua_State *L) {
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBulletTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
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

	inline static bool _lg_typecheck_getChildAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGImpactShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setLocalScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_postUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_calculateLocalInertia(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumChildShapes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_childrenHasTransform(lua_State *L) {
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBulletTetrahedron(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58243831) ) return false;
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

	inline static bool _lg_typecheck_base_getChildAabb(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildShape_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildShape_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getChildTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChildTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getGImpactShapeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
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

	inline static bool _lg_typecheck_base_processAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46793426)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactMeshShape::btGImpactMeshShape(btStridingMeshInterface * meshInterface)
	static btGImpactMeshShape* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShape::btGImpactMeshShape(btStridingMeshInterface * meshInterface) function, expected prototype:\nbtGImpactMeshShape::btGImpactMeshShape(btStridingMeshInterface * meshInterface)\nClass arguments details:\narg 1 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,1));

		return new btGImpactMeshShape(meshInterface);
	}

	// btGImpactMeshShape::btGImpactMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface)
	static btGImpactMeshShape* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShape::btGImpactMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface) function, expected prototype:\nbtGImpactMeshShape::btGImpactMeshShape(lua_Table * data, btStridingMeshInterface * meshInterface)\nClass arguments details:\narg 2 ID = 56402633\n\n%s",luna_dumpStack(L).c_str());
		}

		btStridingMeshInterface* meshInterface=(Luna< btStridingMeshInterface >::check(L,2));

		return new wrapper_btGImpactMeshShape(L,NULL, meshInterface);
	}

	// Overload binder for btGImpactMeshShape::btGImpactMeshShape
	static btGImpactMeshShape* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGImpactMeshShape, cannot match any of the overloads for function btGImpactMeshShape:\n  btGImpactMeshShape(btStridingMeshInterface *)\n  btGImpactMeshShape(lua_Table *, btStridingMeshInterface *)\n");
		return NULL;
	}


	// Function binds:
	// btStridingMeshInterface * btGImpactMeshShape::getMeshInterface()
	static int _bind_getMeshInterface_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btStridingMeshInterface * btGImpactMeshShape::getMeshInterface() function, expected prototype:\nbtStridingMeshInterface * btGImpactMeshShape::getMeshInterface()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btStridingMeshInterface * btGImpactMeshShape::getMeshInterface(). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btStridingMeshInterface * lret = self->getMeshInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// const btStridingMeshInterface * btGImpactMeshShape::getMeshInterface() const
	static int _bind_getMeshInterface_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMeshInterface_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btStridingMeshInterface * btGImpactMeshShape::getMeshInterface() const function, expected prototype:\nconst btStridingMeshInterface * btGImpactMeshShape::getMeshInterface() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btStridingMeshInterface * btGImpactMeshShape::getMeshInterface() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btStridingMeshInterface * lret = self->getMeshInterface();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btStridingMeshInterface >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactMeshShape::getMeshInterface
	static int _bind_getMeshInterface(lua_State *L) {
		if (_lg_typecheck_getMeshInterface_overload_1(L)) return _bind_getMeshInterface_overload_1(L);
		if (_lg_typecheck_getMeshInterface_overload_2(L)) return _bind_getMeshInterface_overload_2(L);

		luaL_error(L, "error in function getMeshInterface, cannot match any of the overloads for function getMeshInterface:\n  getMeshInterface()\n  getMeshInterface()\n");
		return 0;
	}

	// int btGImpactMeshShape::getMeshPartCount() const
	static int _bind_getMeshPartCount(lua_State *L) {
		if (!_lg_typecheck_getMeshPartCount(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShape::getMeshPartCount() const function, expected prototype:\nint btGImpactMeshShape::getMeshPartCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShape::getMeshPartCount() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMeshPartCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int index)
	static int _bind_getMeshPart_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMeshPart_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int index) function, expected prototype:\nbtGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btGImpactMeshShapePart * lret = self->getMeshPart(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGImpactMeshShapePart >::push(L,lret,false);

		return 1;
	}

	// const btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int index) const
	static int _bind_getMeshPart_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMeshPart_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int index) const function, expected prototype:\nconst btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btGImpactMeshShapePart * btGImpactMeshShape::getMeshPart(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btGImpactMeshShapePart * lret = self->getMeshPart(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGImpactMeshShapePart >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactMeshShape::getMeshPart
	static int _bind_getMeshPart(lua_State *L) {
		if (_lg_typecheck_getMeshPart_overload_1(L)) return _bind_getMeshPart_overload_1(L);
		if (_lg_typecheck_getMeshPart_overload_2(L)) return _bind_getMeshPart_overload_2(L);

		luaL_error(L, "error in function getMeshPart, cannot match any of the overloads for function getMeshPart:\n  getMeshPart(int)\n  getMeshPart(int)\n");
		return 0;
	}

	// void btGImpactMeshShape::setLocalScaling(const btVector3 & scaling)
	static int _bind_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactMeshShape::setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactMeshShape::setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalScaling(scaling);

		return 0;
	}

	// void btGImpactMeshShape::setMargin(float margin)
	static int _bind_setMargin(lua_State *L) {
		if (!_lg_typecheck_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::setMargin(float margin) function, expected prototype:\nvoid btGImpactMeshShape::setMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMargin(margin);

		return 0;
	}

	// void btGImpactMeshShape::postUpdate()
	static int _bind_postUpdate(lua_State *L) {
		if (!_lg_typecheck_postUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::postUpdate() function, expected prototype:\nvoid btGImpactMeshShape::postUpdate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::postUpdate(). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postUpdate();

		return 0;
	}

	// void btGImpactMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btGImpactMeshShape::calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btGImpactMeshShape::calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const btPrimitiveManagerBase * btGImpactMeshShape::getPrimitiveManager() const
	static int _bind_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveManager(L)) {
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactMeshShape::getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactMeshShape::getPrimitiveManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactMeshShape::getPrimitiveManager() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btPrimitiveManagerBase * lret = self->getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// int btGImpactMeshShape::getNumChildShapes() const
	static int _bind_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_getNumChildShapes(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShape::getNumChildShapes() const function, expected prototype:\nint btGImpactMeshShape::getNumChildShapes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShape::getNumChildShapes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactMeshShape::childrenHasTransform() const
	static int _bind_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_childrenHasTransform(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShape::childrenHasTransform() const function, expected prototype:\nbool btGImpactMeshShape::childrenHasTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShape::childrenHasTransform() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactMeshShape::needsRetrieveTriangles() const
	static int _bind_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTriangles(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShape::needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactMeshShape::needsRetrieveTriangles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShape::needsRetrieveTriangles() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactMeshShape::needsRetrieveTetrahedrons() const
	static int _bind_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_needsRetrieveTetrahedrons(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShape::needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactMeshShape::needsRetrieveTetrahedrons() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShape::needsRetrieveTetrahedrons() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactMeshShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_getBulletTriangle(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactMeshShape::getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShape::getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactMeshShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_getBulletTetrahedron(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactMeshShape::getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactMeshShape::getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// void btGImpactMeshShape::lockChildShapes() const
	static int _bind_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_lockChildShapes(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::lockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShape::lockChildShapes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::lockChildShapes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lockChildShapes();

		return 0;
	}

	// void btGImpactMeshShape::unlockChildShapes() const
	static int _bind_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_unlockChildShapes(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::unlockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShape::unlockChildShapes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::unlockChildShapes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unlockChildShapes();

		return 0;
	}

	// void btGImpactMeshShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_getChildAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShape::getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactMeshShape::getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShape::getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShape::getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// btCollisionShape * btGImpactMeshShape::getChildShape(int index)
	static int _bind_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactMeshShape::getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactMeshShape::getChildShape(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactMeshShape::getChildShape(int). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactMeshShape::getChildShape(int index) const
	static int _bind_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChildShape_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactMeshShape::getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactMeshShape::getChildShape(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactMeshShape::getChildShape(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btCollisionShape * lret = self->getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactMeshShape::getChildShape
	static int _bind_getChildShape(lua_State *L) {
		if (_lg_typecheck_getChildShape_overload_1(L)) return _bind_getChildShape_overload_1(L);
		if (_lg_typecheck_getChildShape_overload_2(L)) return _bind_getChildShape_overload_2(L);

		luaL_error(L, "error in function getChildShape, cannot match any of the overloads for function getChildShape:\n  getChildShape(int)\n  getChildShape(int)\n");
		return 0;
	}

	// btTransform btGImpactMeshShape::getChildTransform(int index) const
	static int _bind_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_getChildTransform(L)) {
			luaL_error(L, "luna typecheck failed in btTransform btGImpactMeshShape::getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactMeshShape::getChildTransform(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btTransform btGImpactMeshShape::getChildTransform(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btTransform stack_lret = self->getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactMeshShape::setChildTransform(int index, const btTransform & transform)
	static int _bind_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_setChildTransform(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactMeshShape::setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactMeshShape::setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::setChildTransform(int, const btTransform &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setChildTransform(index, transform);

		return 0;
	}

	// eGIMPACT_SHAPE_TYPE btGImpactMeshShape::getGImpactShapeType() const
	static int _bind_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_getGImpactShapeType(L)) {
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactMeshShape::getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactMeshShape::getGImpactShapeType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactMeshShape::getGImpactShapeType() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		eGIMPACT_SHAPE_TYPE lret = self->getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btGImpactMeshShape::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btGImpactMeshShape::getName() const function, expected prototype:\nconst char * btGImpactMeshShape::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btGImpactMeshShape::getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btGImpactMeshShape::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGImpactMeshShape::rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btGImpactMeshShape::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btGImpactMeshShape::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGImpactMeshShape::rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rayTest(rayFrom, rayTo, resultCallback);

		return 0;
	}

	// void btGImpactMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShape::processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShape::processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// int btGImpactMeshShape::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShape::calculateSerializeBufferSize() const function, expected prototype:\nint btGImpactMeshShape::calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShape::calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const
	static int _bind_base_getBoundingSphere(lua_State *L) {
		if (!_lg_typecheck_base_getBoundingSphere(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const function, expected prototype:\nvoid btGImpactMeshShape::base_getBoundingSphere(btVector3 & center, float & radius) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btGImpactMeshShape::base_getBoundingSphere function");
		}
		btVector3 & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_getBoundingSphere(btVector3 &, float &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::getBoundingSphere(center, radius);

		lua_pushnumber(L,radius);
		return 1;
	}

	// float btGImpactMeshShape::base_getAngularMotionDisc() const
	static int _bind_base_getAngularMotionDisc(lua_State *L) {
		if (!_lg_typecheck_base_getAngularMotionDisc(L)) {
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShape::base_getAngularMotionDisc() const function, expected prototype:\nfloat btGImpactMeshShape::base_getAngularMotionDisc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btGImpactMeshShape::base_getAngularMotionDisc() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btGImpactMeshShape::getAngularMotionDisc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btGImpactMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const
	static int _bind_base_getContactBreakingThreshold(lua_State *L) {
		if (!_lg_typecheck_base_getContactBreakingThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const function, expected prototype:\nfloat btGImpactMeshShape::base_getContactBreakingThreshold(float defaultContactThresholdFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float defaultContactThresholdFactor=(float)lua_tonumber(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btGImpactMeshShape::base_getContactBreakingThreshold(float) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btGImpactMeshShape::getContactBreakingThreshold(defaultContactThresholdFactor);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btGImpactMeshShape::base_getAnisotropicRollingFrictionDirection() const
	static int _bind_base_getAnisotropicRollingFrictionDirection(lua_State *L) {
		if (!_lg_typecheck_base_getAnisotropicRollingFrictionDirection(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btGImpactMeshShape::base_getAnisotropicRollingFrictionDirection() const function, expected prototype:\nbtVector3 btGImpactMeshShape::base_getAnisotropicRollingFrictionDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btGImpactMeshShape::base_getAnisotropicRollingFrictionDirection() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->btGImpactMeshShape::getAnisotropicRollingFrictionDirection();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// float btGImpactMeshShape::base_getMargin() const
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in float btGImpactMeshShape::base_getMargin() const function, expected prototype:\nfloat btGImpactMeshShape::base_getMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float btGImpactMeshShape::base_getMargin() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->btGImpactMeshShape::getMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getAabb(lua_State *L) {
		if (!_lg_typecheck_base_getAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShape::base_getAabb(const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btTransform* t_ptr=(Luna< btTransform >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactMeshShape::base_getAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShape::base_getAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShape::base_getAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_getAabb(const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::getAabb(t, aabbMin, aabbMax);

		return 0;
	}

	// int btGImpactMeshShape::base_getShapeType() const
	static int _bind_base_getShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getShapeType(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShape::base_getShapeType() const function, expected prototype:\nint btGImpactMeshShape::base_getShapeType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShape::base_getShapeType() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btGImpactMeshShape::getShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const btVector3 & btGImpactMeshShape::base_getLocalScaling() const
	static int _bind_base_getLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_getLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btGImpactMeshShape::base_getLocalScaling() const function, expected prototype:\nconst btVector3 & btGImpactMeshShape::base_getLocalScaling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btGImpactMeshShape::base_getLocalScaling() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->btGImpactMeshShape::getLocalScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btGImpactMeshShape::base_setLocalScaling(const btVector3 & scaling)
	static int _bind_base_setLocalScaling(lua_State *L) {
		if (!_lg_typecheck_base_setLocalScaling(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_setLocalScaling(const btVector3 & scaling) function, expected prototype:\nvoid btGImpactMeshShape::base_setLocalScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btGImpactMeshShape::base_setLocalScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_setLocalScaling(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::setLocalScaling(scaling);

		return 0;
	}

	// void btGImpactMeshShape::base_setMargin(float margin)
	static int _bind_base_setMargin(lua_State *L) {
		if (!_lg_typecheck_base_setMargin(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_setMargin(float margin) function, expected prototype:\nvoid btGImpactMeshShape::base_setMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_setMargin(float). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::setMargin(margin);

		return 0;
	}

	// void btGImpactMeshShape::base_postUpdate()
	static int _bind_base_postUpdate(lua_State *L) {
		if (!_lg_typecheck_base_postUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_postUpdate() function, expected prototype:\nvoid btGImpactMeshShape::base_postUpdate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_postUpdate(). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::postUpdate();

		return 0;
	}

	// void btGImpactMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const
	static int _bind_base_calculateLocalInertia(lua_State *L) {
		if (!_lg_typecheck_base_calculateLocalInertia(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const function, expected prototype:\nvoid btGImpactMeshShape::base_calculateLocalInertia(float mass, btVector3 & inertia) const\nClass arguments details:\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		float mass=(float)lua_tonumber(L,2);
		btVector3* inertia_ptr=(Luna< btVector3 >::check(L,3));
		if( !inertia_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg inertia in btGImpactMeshShape::base_calculateLocalInertia function");
		}
		btVector3 & inertia=*inertia_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_calculateLocalInertia(float, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::calculateLocalInertia(mass, inertia);

		return 0;
	}

	// const btPrimitiveManagerBase * btGImpactMeshShape::base_getPrimitiveManager() const
	static int _bind_base_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_base_getPrimitiveManager(L)) {
			luaL_error(L, "luna typecheck failed in const btPrimitiveManagerBase * btGImpactMeshShape::base_getPrimitiveManager() const function, expected prototype:\nconst btPrimitiveManagerBase * btGImpactMeshShape::base_getPrimitiveManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btPrimitiveManagerBase * btGImpactMeshShape::base_getPrimitiveManager() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btPrimitiveManagerBase * lret = self->btGImpactMeshShape::getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}

	// int btGImpactMeshShape::base_getNumChildShapes() const
	static int _bind_base_getNumChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_getNumChildShapes(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShape::base_getNumChildShapes() const function, expected prototype:\nint btGImpactMeshShape::base_getNumChildShapes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShape::base_getNumChildShapes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btGImpactMeshShape::getNumChildShapes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactMeshShape::base_childrenHasTransform() const
	static int _bind_base_childrenHasTransform(lua_State *L) {
		if (!_lg_typecheck_base_childrenHasTransform(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShape::base_childrenHasTransform() const function, expected prototype:\nbool btGImpactMeshShape::base_childrenHasTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShape::base_childrenHasTransform() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btGImpactMeshShape::childrenHasTransform();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactMeshShape::base_needsRetrieveTriangles() const
	static int _bind_base_needsRetrieveTriangles(lua_State *L) {
		if (!_lg_typecheck_base_needsRetrieveTriangles(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShape::base_needsRetrieveTriangles() const function, expected prototype:\nbool btGImpactMeshShape::base_needsRetrieveTriangles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShape::base_needsRetrieveTriangles() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btGImpactMeshShape::needsRetrieveTriangles();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactMeshShape::base_needsRetrieveTetrahedrons() const
	static int _bind_base_needsRetrieveTetrahedrons(lua_State *L) {
		if (!_lg_typecheck_base_needsRetrieveTetrahedrons(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactMeshShape::base_needsRetrieveTetrahedrons() const function, expected prototype:\nbool btGImpactMeshShape::base_needsRetrieveTetrahedrons() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactMeshShape::base_needsRetrieveTetrahedrons() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->btGImpactMeshShape::needsRetrieveTetrahedrons();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btGImpactMeshShape::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const
	static int _bind_base_getBulletTriangle(lua_State *L) {
		if (!_lg_typecheck_base_getBulletTriangle(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const function, expected prototype:\nvoid btGImpactMeshShape::base_getBulletTriangle(int prim_index, btTriangleShapeEx & triangle) const\nClass arguments details:\narg 2 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTriangleShapeEx* triangle_ptr=(Luna< btCollisionShape >::checkSubType< btTriangleShapeEx >(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactMeshShape::base_getBulletTriangle function");
		}
		btTriangleShapeEx & triangle=*triangle_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_getBulletTriangle(int, btTriangleShapeEx &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::getBulletTriangle(prim_index, triangle);

		return 0;
	}

	// void btGImpactMeshShape::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const
	static int _bind_base_getBulletTetrahedron(lua_State *L) {
		if (!_lg_typecheck_base_getBulletTetrahedron(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const function, expected prototype:\nvoid btGImpactMeshShape::base_getBulletTetrahedron(int prim_index, btTetrahedronShapeEx & tetrahedron) const\nClass arguments details:\narg 2 ID = 58243831\n\n%s",luna_dumpStack(L).c_str());
		}

		int prim_index=(int)lua_tointeger(L,2);
		btTetrahedronShapeEx* tetrahedron_ptr=(Luna< btCollisionShape >::checkSubType< btTetrahedronShapeEx >(L,3));
		if( !tetrahedron_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tetrahedron in btGImpactMeshShape::base_getBulletTetrahedron function");
		}
		btTetrahedronShapeEx & tetrahedron=*tetrahedron_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_getBulletTetrahedron(int, btTetrahedronShapeEx &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::getBulletTetrahedron(prim_index, tetrahedron);

		return 0;
	}

	// void btGImpactMeshShape::base_lockChildShapes() const
	static int _bind_base_lockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_lockChildShapes(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_lockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShape::base_lockChildShapes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_lockChildShapes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::lockChildShapes();

		return 0;
	}

	// void btGImpactMeshShape::base_unlockChildShapes() const
	static int _bind_base_unlockChildShapes(lua_State *L) {
		if (!_lg_typecheck_base_unlockChildShapes(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_unlockChildShapes() const function, expected prototype:\nvoid btGImpactMeshShape::base_unlockChildShapes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_unlockChildShapes() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::unlockChildShapes();

		return 0;
	}

	// void btGImpactMeshShape::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const
	static int _bind_base_getChildAabb(lua_State *L) {
		if (!_lg_typecheck_base_getChildAabb(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShape::base_getChildAabb(int child_index, const btTransform & t, btVector3 & aabbMin, btVector3 & aabbMax) const\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\narg 4 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		int child_index=(int)lua_tointeger(L,2);
		const btTransform* t_ptr=(Luna< btTransform >::check(L,3));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in btGImpactMeshShape::base_getChildAabb function");
		}
		const btTransform & t=*t_ptr;
		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShape::base_getChildAabb function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,5));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShape::base_getChildAabb function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_getChildAabb(int, const btTransform &, btVector3 &, btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::getChildAabb(child_index, t, aabbMin, aabbMax);

		return 0;
	}

	// btCollisionShape * btGImpactMeshShape::base_getChildShape(int index)
	static int _bind_base_getChildShape_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getChildShape_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btCollisionShape * btGImpactMeshShape::base_getChildShape(int index) function, expected prototype:\nbtCollisionShape * btGImpactMeshShape::base_getChildShape(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btCollisionShape * btGImpactMeshShape::base_getChildShape(int). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btCollisionShape * lret = self->btGImpactMeshShape::getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// const btCollisionShape * btGImpactMeshShape::base_getChildShape(int index) const
	static int _bind_base_getChildShape_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getChildShape_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const btCollisionShape * btGImpactMeshShape::base_getChildShape(int index) const function, expected prototype:\nconst btCollisionShape * btGImpactMeshShape::base_getChildShape(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const btCollisionShape * btGImpactMeshShape::base_getChildShape(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btCollisionShape * lret = self->btGImpactMeshShape::getChildShape(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionShape >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btGImpactMeshShape::base_getChildShape
	static int _bind_base_getChildShape(lua_State *L) {
		if (_lg_typecheck_base_getChildShape_overload_1(L)) return _bind_base_getChildShape_overload_1(L);
		if (_lg_typecheck_base_getChildShape_overload_2(L)) return _bind_base_getChildShape_overload_2(L);

		luaL_error(L, "error in function base_getChildShape, cannot match any of the overloads for function base_getChildShape:\n  base_getChildShape(int)\n  base_getChildShape(int)\n");
		return 0;
	}

	// btTransform btGImpactMeshShape::base_getChildTransform(int index) const
	static int _bind_base_getChildTransform(lua_State *L) {
		if (!_lg_typecheck_base_getChildTransform(L)) {
			luaL_error(L, "luna typecheck failed in btTransform btGImpactMeshShape::base_getChildTransform(int index) const function, expected prototype:\nbtTransform btGImpactMeshShape::base_getChildTransform(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call btTransform btGImpactMeshShape::base_getChildTransform(int) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btTransform stack_lret = self->btGImpactMeshShape::getChildTransform(index);
		btTransform* lret = new btTransform(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTransform >::push(L,lret,true);

		return 1;
	}

	// void btGImpactMeshShape::base_setChildTransform(int index, const btTransform & transform)
	static int _bind_base_setChildTransform(lua_State *L) {
		if (!_lg_typecheck_base_setChildTransform(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_setChildTransform(int index, const btTransform & transform) function, expected prototype:\nvoid btGImpactMeshShape::base_setChildTransform(int index, const btTransform & transform)\nClass arguments details:\narg 2 ID = 13247377\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactMeshShape::base_setChildTransform function");
		}
		const btTransform & transform=*transform_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_setChildTransform(int, const btTransform &). Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::setChildTransform(index, transform);

		return 0;
	}

	// eGIMPACT_SHAPE_TYPE btGImpactMeshShape::base_getGImpactShapeType() const
	static int _bind_base_getGImpactShapeType(lua_State *L) {
		if (!_lg_typecheck_base_getGImpactShapeType(L)) {
			luaL_error(L, "luna typecheck failed in eGIMPACT_SHAPE_TYPE btGImpactMeshShape::base_getGImpactShapeType() const function, expected prototype:\neGIMPACT_SHAPE_TYPE btGImpactMeshShape::base_getGImpactShapeType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call eGIMPACT_SHAPE_TYPE btGImpactMeshShape::base_getGImpactShapeType() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		eGIMPACT_SHAPE_TYPE lret = self->btGImpactMeshShape::getGImpactShapeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * btGImpactMeshShape::base_getName() const
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in const char * btGImpactMeshShape::base_getName() const function, expected prototype:\nconst char * btGImpactMeshShape::base_getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btGImpactMeshShape::base_getName() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->btGImpactMeshShape::getName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void btGImpactMeshShape::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btGImpactMeshShape::base_rayTest(const btVector3 & rayFrom, const btVector3 & rayTo, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btGImpactMeshShape::base_rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btGImpactMeshShape::base_rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btGImpactMeshShape::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::rayTest(rayFrom, rayTo, resultCallback);

		return 0;
	}

	// void btGImpactMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_processAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_processAllTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btGImpactMeshShape::base_processAllTriangles(btTriangleCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 46793426\narg 2 ID = 91544891\narg 3 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		btTriangleCallback* callback=(Luna< btTriangleCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btGImpactMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btGImpactMeshShape::base_processAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactMeshShape::base_processAllTriangles(btTriangleCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->btGImpactMeshShape::processAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// int btGImpactMeshShape::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactMeshShape::base_calculateSerializeBufferSize() const function, expected prototype:\nint btGImpactMeshShape::base_calculateSerializeBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactMeshShape* self=Luna< btCollisionShape >::checkSubType< btGImpactMeshShape >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactMeshShape::base_calculateSerializeBufferSize() const. Got : '%s'\n%s",typeid(Luna< btCollisionShape >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->btGImpactMeshShape::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btGImpactMeshShape* LunaTraits< btGImpactMeshShape >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactMeshShape::_bind_ctor(L);
}

void LunaTraits< btGImpactMeshShape >::_bind_dtor(btGImpactMeshShape* obj) {
	delete obj;
}

const char LunaTraits< btGImpactMeshShape >::className[] = "btGImpactMeshShape";
const char LunaTraits< btGImpactMeshShape >::fullName[] = "btGImpactMeshShape";
const char LunaTraits< btGImpactMeshShape >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactMeshShape >::parents[] = {"bullet.btGImpactShapeInterface", 0};
const int LunaTraits< btGImpactMeshShape >::hash = 60236699;
const int LunaTraits< btGImpactMeshShape >::uniqueIDs[] = {58243831,0};

luna_RegType LunaTraits< btGImpactMeshShape >::methods[] = {
	{"getMeshInterface", &luna_wrapper_btGImpactMeshShape::_bind_getMeshInterface},
	{"getMeshPartCount", &luna_wrapper_btGImpactMeshShape::_bind_getMeshPartCount},
	{"getMeshPart", &luna_wrapper_btGImpactMeshShape::_bind_getMeshPart},
	{"setLocalScaling", &luna_wrapper_btGImpactMeshShape::_bind_setLocalScaling},
	{"setMargin", &luna_wrapper_btGImpactMeshShape::_bind_setMargin},
	{"postUpdate", &luna_wrapper_btGImpactMeshShape::_bind_postUpdate},
	{"calculateLocalInertia", &luna_wrapper_btGImpactMeshShape::_bind_calculateLocalInertia},
	{"getPrimitiveManager", &luna_wrapper_btGImpactMeshShape::_bind_getPrimitiveManager},
	{"getNumChildShapes", &luna_wrapper_btGImpactMeshShape::_bind_getNumChildShapes},
	{"childrenHasTransform", &luna_wrapper_btGImpactMeshShape::_bind_childrenHasTransform},
	{"needsRetrieveTriangles", &luna_wrapper_btGImpactMeshShape::_bind_needsRetrieveTriangles},
	{"needsRetrieveTetrahedrons", &luna_wrapper_btGImpactMeshShape::_bind_needsRetrieveTetrahedrons},
	{"getBulletTriangle", &luna_wrapper_btGImpactMeshShape::_bind_getBulletTriangle},
	{"getBulletTetrahedron", &luna_wrapper_btGImpactMeshShape::_bind_getBulletTetrahedron},
	{"lockChildShapes", &luna_wrapper_btGImpactMeshShape::_bind_lockChildShapes},
	{"unlockChildShapes", &luna_wrapper_btGImpactMeshShape::_bind_unlockChildShapes},
	{"getChildAabb", &luna_wrapper_btGImpactMeshShape::_bind_getChildAabb},
	{"getChildShape", &luna_wrapper_btGImpactMeshShape::_bind_getChildShape},
	{"getChildTransform", &luna_wrapper_btGImpactMeshShape::_bind_getChildTransform},
	{"setChildTransform", &luna_wrapper_btGImpactMeshShape::_bind_setChildTransform},
	{"getGImpactShapeType", &luna_wrapper_btGImpactMeshShape::_bind_getGImpactShapeType},
	{"getName", &luna_wrapper_btGImpactMeshShape::_bind_getName},
	{"rayTest", &luna_wrapper_btGImpactMeshShape::_bind_rayTest},
	{"processAllTriangles", &luna_wrapper_btGImpactMeshShape::_bind_processAllTriangles},
	{"calculateSerializeBufferSize", &luna_wrapper_btGImpactMeshShape::_bind_calculateSerializeBufferSize},
	{"base_getBoundingSphere", &luna_wrapper_btGImpactMeshShape::_bind_base_getBoundingSphere},
	{"base_getAngularMotionDisc", &luna_wrapper_btGImpactMeshShape::_bind_base_getAngularMotionDisc},
	{"base_getContactBreakingThreshold", &luna_wrapper_btGImpactMeshShape::_bind_base_getContactBreakingThreshold},
	{"base_getAnisotropicRollingFrictionDirection", &luna_wrapper_btGImpactMeshShape::_bind_base_getAnisotropicRollingFrictionDirection},
	{"base_getMargin", &luna_wrapper_btGImpactMeshShape::_bind_base_getMargin},
	{"base_getAabb", &luna_wrapper_btGImpactMeshShape::_bind_base_getAabb},
	{"base_getShapeType", &luna_wrapper_btGImpactMeshShape::_bind_base_getShapeType},
	{"base_getLocalScaling", &luna_wrapper_btGImpactMeshShape::_bind_base_getLocalScaling},
	{"base_setLocalScaling", &luna_wrapper_btGImpactMeshShape::_bind_base_setLocalScaling},
	{"base_setMargin", &luna_wrapper_btGImpactMeshShape::_bind_base_setMargin},
	{"base_postUpdate", &luna_wrapper_btGImpactMeshShape::_bind_base_postUpdate},
	{"base_calculateLocalInertia", &luna_wrapper_btGImpactMeshShape::_bind_base_calculateLocalInertia},
	{"base_getPrimitiveManager", &luna_wrapper_btGImpactMeshShape::_bind_base_getPrimitiveManager},
	{"base_getNumChildShapes", &luna_wrapper_btGImpactMeshShape::_bind_base_getNumChildShapes},
	{"base_childrenHasTransform", &luna_wrapper_btGImpactMeshShape::_bind_base_childrenHasTransform},
	{"base_needsRetrieveTriangles", &luna_wrapper_btGImpactMeshShape::_bind_base_needsRetrieveTriangles},
	{"base_needsRetrieveTetrahedrons", &luna_wrapper_btGImpactMeshShape::_bind_base_needsRetrieveTetrahedrons},
	{"base_getBulletTriangle", &luna_wrapper_btGImpactMeshShape::_bind_base_getBulletTriangle},
	{"base_getBulletTetrahedron", &luna_wrapper_btGImpactMeshShape::_bind_base_getBulletTetrahedron},
	{"base_lockChildShapes", &luna_wrapper_btGImpactMeshShape::_bind_base_lockChildShapes},
	{"base_unlockChildShapes", &luna_wrapper_btGImpactMeshShape::_bind_base_unlockChildShapes},
	{"base_getChildAabb", &luna_wrapper_btGImpactMeshShape::_bind_base_getChildAabb},
	{"base_getChildShape", &luna_wrapper_btGImpactMeshShape::_bind_base_getChildShape},
	{"base_getChildTransform", &luna_wrapper_btGImpactMeshShape::_bind_base_getChildTransform},
	{"base_setChildTransform", &luna_wrapper_btGImpactMeshShape::_bind_base_setChildTransform},
	{"base_getGImpactShapeType", &luna_wrapper_btGImpactMeshShape::_bind_base_getGImpactShapeType},
	{"base_getName", &luna_wrapper_btGImpactMeshShape::_bind_base_getName},
	{"base_rayTest", &luna_wrapper_btGImpactMeshShape::_bind_base_rayTest},
	{"base_processAllTriangles", &luna_wrapper_btGImpactMeshShape::_bind_base_processAllTriangles},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btGImpactMeshShape::_bind_base_calculateSerializeBufferSize},
	{"fromVoid", &luna_wrapper_btGImpactMeshShape::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactMeshShape::_bind_asVoid},
	{"getTable", &luna_wrapper_btGImpactMeshShape::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactMeshShape >::converters[] = {
	{"btCollisionShape", &luna_wrapper_btGImpactMeshShape::_cast_from_btCollisionShape},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactMeshShape >::enumValues[] = {
	{0,0}
};


