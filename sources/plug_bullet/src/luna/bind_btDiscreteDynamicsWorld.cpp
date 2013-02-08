#include <plug_common.h>

#include <luna/wrappers/wrapper_btDiscreteDynamicsWorld.h>

class luna_wrapper_btDiscreteDynamicsWorld {
public:
	typedef Luna< btDiscreteDynamicsWorld > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btCollisionWorld,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62162664) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btCollisionWorld*)");
		}

		btCollisionWorld* rhs =(Luna< btCollisionWorld >::check(L,2));
		btCollisionWorld* self=(Luna< btCollisionWorld >::check(L,1));
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

		btDiscreteDynamicsWorld* self= (btDiscreteDynamicsWorld*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDiscreteDynamicsWorld >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62162664) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btCollisionWorld >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btCollisionWorld(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btDiscreteDynamicsWorld* ptr= dynamic_cast< btDiscreteDynamicsWorld* >(Luna< btCollisionWorld >::check(L,1));
		btDiscreteDynamicsWorld* ptr= luna_caster< btCollisionWorld, btDiscreteDynamicsWorld >::cast(Luna< btCollisionWorld >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDiscreteDynamicsWorld >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,71097681)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btDispatcher >::check(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25261840)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btBroadphaseInterface >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,53256621)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btConstraintSolver >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31901746)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btCollisionConfiguration >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDispatcher >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25261840)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btBroadphaseInterface >::check(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,53256621)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< btConstraintSolver >::check(L,4)) ) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,31901746)) ) return false;
		if( (lua_isnil(L,5)==0 && !(Luna< btCollisionConfiguration >::check(L,5)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_stepSimulation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_synchronizeMotionStates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_synchronizeSingleMotionState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addConstraint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeConstraint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addAction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSimulationIslandManager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSimulationIslandManager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCollisionWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addCollisionObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addRigidBody_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addRigidBody_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeRigidBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_debugDrawConstraint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConstraintSolver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53256621)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstraintSolver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConstraint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstraint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clearForces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumTasks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateVehicles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVehicle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeVehicle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCharacter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeCharacter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSynchronizeAllMotionStates(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSynchronizeAllMotionStates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setApplySpeculativeContactRestitution(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplySpeculativeContactRestitution(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_updateAabbs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeOverlappingPairs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDebugDrawer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63441741)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDebugDrawer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_debugDrawObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,58243831)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,44790882) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_performDiscreteCollisionDetection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_stepSimulation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_synchronizeMotionStates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addConstraint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeConstraint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66271199)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addAction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeAction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addCollisionObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addRigidBody_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addRigidBody_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeRigidBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setConstraintSolver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53256621)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getConstraintSolver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getConstraint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getConstraint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getWorldType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clearForces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_applyGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setNumTasks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateVehicles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addVehicle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeVehicle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCharacter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeCharacter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91159321)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDiscreteDynamicsWorld::btDiscreteDynamicsWorld(btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)
	static btDiscreteDynamicsWorld* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDiscreteDynamicsWorld::btDiscreteDynamicsWorld(btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtDiscreteDynamicsWorld::btDiscreteDynamicsWorld(btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 25261840\narg 3 ID = 53256621\narg 4 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,1));
		btBroadphaseInterface* pairCache=(Luna< btBroadphaseInterface >::check(L,2));
		btConstraintSolver* constraintSolver=(Luna< btConstraintSolver >::check(L,3));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,4));

		return new btDiscreteDynamicsWorld(dispatcher, pairCache, constraintSolver, collisionConfiguration);
	}

	// btDiscreteDynamicsWorld::btDiscreteDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)
	static btDiscreteDynamicsWorld* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDiscreteDynamicsWorld::btDiscreteDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtDiscreteDynamicsWorld::btDiscreteDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 2 ID = 71097681\narg 3 ID = 25261840\narg 4 ID = 53256621\narg 5 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btBroadphaseInterface* pairCache=(Luna< btBroadphaseInterface >::check(L,3));
		btConstraintSolver* constraintSolver=(Luna< btConstraintSolver >::check(L,4));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,5));

		return new wrapper_btDiscreteDynamicsWorld(L,NULL, dispatcher, pairCache, constraintSolver, collisionConfiguration);
	}

	// Overload binder for btDiscreteDynamicsWorld::btDiscreteDynamicsWorld
	static btDiscreteDynamicsWorld* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btDiscreteDynamicsWorld, cannot match any of the overloads for function btDiscreteDynamicsWorld:\n  btDiscreteDynamicsWorld(btDispatcher *, btBroadphaseInterface *, btConstraintSolver *, btCollisionConfiguration *)\n  btDiscreteDynamicsWorld(lua_Table *, btDispatcher *, btBroadphaseInterface *, btConstraintSolver *, btCollisionConfiguration *)\n");
		return NULL;
	}


	// Function binds:
	// int btDiscreteDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	static int _bind_stepSimulation(lua_State *L) {
		if (!_lg_typecheck_stepSimulation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDiscreteDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) function, expected prototype:\nint btDiscreteDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float timeStep=(float)lua_tonumber(L,2);
		int maxSubSteps=luatop>2 ? (int)lua_tointeger(L,3) : 1;
		float fixedTimeStep=luatop>3 ? (float)lua_tonumber(L,4) : float (1.)/ float (60.);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDiscreteDynamicsWorld::stepSimulation(float, int, float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDiscreteDynamicsWorld::synchronizeMotionStates()
	static int _bind_synchronizeMotionStates(lua_State *L) {
		if (!_lg_typecheck_synchronizeMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::synchronizeMotionStates() function, expected prototype:\nvoid btDiscreteDynamicsWorld::synchronizeMotionStates()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::synchronizeMotionStates(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->synchronizeMotionStates();

		return 0;
	}

	// void btDiscreteDynamicsWorld::synchronizeSingleMotionState(btRigidBody * body)
	static int _bind_synchronizeSingleMotionState(lua_State *L) {
		if (!_lg_typecheck_synchronizeSingleMotionState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::synchronizeSingleMotionState(btRigidBody * body) function, expected prototype:\nvoid btDiscreteDynamicsWorld::synchronizeSingleMotionState(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::synchronizeSingleMotionState(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->synchronizeSingleMotionState(body);

		return 0;
	}

	// void btDiscreteDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	static int _bind_addConstraint(lua_State *L) {
		if (!_lg_typecheck_addConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));
		bool disableCollisionsBetweenLinkedBodies=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addConstraint(btTypedConstraint *, bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addConstraint(constraint, disableCollisionsBetweenLinkedBodies);

		return 0;
	}

	// void btDiscreteDynamicsWorld::removeConstraint(btTypedConstraint * constraint)
	static int _bind_removeConstraint(lua_State *L) {
		if (!_lg_typecheck_removeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::removeConstraint(btTypedConstraint * constraint) function, expected prototype:\nvoid btDiscreteDynamicsWorld::removeConstraint(btTypedConstraint * constraint)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::removeConstraint(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeConstraint(constraint);

		return 0;
	}

	// void btDiscreteDynamicsWorld::addAction(btActionInterface * arg1)
	static int _bind_addAction(lua_State *L) {
		if (!_lg_typecheck_addAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addAction(btActionInterface * arg1) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addAction(btActionInterface * arg1)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* _arg1=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addAction(_arg1);

		return 0;
	}

	// void btDiscreteDynamicsWorld::removeAction(btActionInterface * arg1)
	static int _bind_removeAction(lua_State *L) {
		if (!_lg_typecheck_removeAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::removeAction(btActionInterface * arg1) function, expected prototype:\nvoid btDiscreteDynamicsWorld::removeAction(btActionInterface * arg1)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* _arg1=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::removeAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeAction(_arg1);

		return 0;
	}

	// btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager()
	static int _bind_getSimulationIslandManager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSimulationIslandManager_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager() function, expected prototype:\nbtSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btSimulationIslandManager * lret = self->getSimulationIslandManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSimulationIslandManager >::push(L,lret,false);

		return 1;
	}

	// const btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager() const
	static int _bind_getSimulationIslandManager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSimulationIslandManager_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager() const function, expected prototype:\nconst btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btSimulationIslandManager * btDiscreteDynamicsWorld::getSimulationIslandManager() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btSimulationIslandManager * lret = self->getSimulationIslandManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btSimulationIslandManager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDiscreteDynamicsWorld::getSimulationIslandManager
	static int _bind_getSimulationIslandManager(lua_State *L) {
		if (_lg_typecheck_getSimulationIslandManager_overload_1(L)) return _bind_getSimulationIslandManager_overload_1(L);
		if (_lg_typecheck_getSimulationIslandManager_overload_2(L)) return _bind_getSimulationIslandManager_overload_2(L);

		luaL_error(L, "error in function getSimulationIslandManager, cannot match any of the overloads for function getSimulationIslandManager:\n  getSimulationIslandManager()\n  getSimulationIslandManager()\n");
		return 0;
	}

	// btCollisionWorld * btDiscreteDynamicsWorld::getCollisionWorld()
	static int _bind_getCollisionWorld(lua_State *L) {
		if (!_lg_typecheck_getCollisionWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btCollisionWorld * btDiscreteDynamicsWorld::getCollisionWorld() function, expected prototype:\nbtCollisionWorld * btDiscreteDynamicsWorld::getCollisionWorld()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btCollisionWorld * btDiscreteDynamicsWorld::getCollisionWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btCollisionWorld * lret = self->getCollisionWorld();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btCollisionWorld >::push(L,lret,false);

		return 1;
	}

	// void btDiscreteDynamicsWorld::setGravity(const btVector3 & gravity)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::setGravity(const btVector3 & gravity) function, expected prototype:\nvoid btDiscreteDynamicsWorld::setGravity(const btVector3 & gravity)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* gravity_ptr=(Luna< btVector3 >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in btDiscreteDynamicsWorld::setGravity function");
		}
		const btVector3 & gravity=*gravity_ptr;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::setGravity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setGravity(gravity);

		return 0;
	}

	// btVector3 btDiscreteDynamicsWorld::getGravity() const
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btDiscreteDynamicsWorld::getGravity() const function, expected prototype:\nbtVector3 btDiscreteDynamicsWorld::getGravity() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btDiscreteDynamicsWorld::getGravity() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getGravity();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btDiscreteDynamicsWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter)
	static int _bind_addCollisionObject(lua_State *L) {
		if (!_lg_typecheck_addCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));
		short int collisionFilterGroup=luatop>2 ? (short int)lua_tointeger(L,3) : btBroadphaseProxy::StaticFilter;
		short int collisionFilterMask=luatop>3 ? (short int)lua_tointeger(L,4) : btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addCollisionObject(btCollisionObject *, short int, short int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);

		return 0;
	}

	// void btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body)
	static int _bind_addRigidBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_addRigidBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addRigidBody(body);

		return 0;
	}

	// void btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	static int _bind_addRigidBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_addRigidBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		short group=(short)lua_tointeger(L,3);
		short mask=(short)lua_tointeger(L,4);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addRigidBody(btRigidBody *, short, short). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addRigidBody(body, group, mask);

		return 0;
	}

	// Overload binder for btDiscreteDynamicsWorld::addRigidBody
	static int _bind_addRigidBody(lua_State *L) {
		if (_lg_typecheck_addRigidBody_overload_1(L)) return _bind_addRigidBody_overload_1(L);
		if (_lg_typecheck_addRigidBody_overload_2(L)) return _bind_addRigidBody_overload_2(L);

		luaL_error(L, "error in function addRigidBody, cannot match any of the overloads for function addRigidBody:\n  addRigidBody(btRigidBody *)\n  addRigidBody(btRigidBody *, short, short)\n");
		return 0;
	}

	// void btDiscreteDynamicsWorld::removeRigidBody(btRigidBody * body)
	static int _bind_removeRigidBody(lua_State *L) {
		if (!_lg_typecheck_removeRigidBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::removeRigidBody(btRigidBody * body) function, expected prototype:\nvoid btDiscreteDynamicsWorld::removeRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::removeRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeRigidBody(body);

		return 0;
	}

	// void btDiscreteDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btDiscreteDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeCollisionObject(collisionObject);

		return 0;
	}

	// void btDiscreteDynamicsWorld::debugDrawConstraint(btTypedConstraint * constraint)
	static int _bind_debugDrawConstraint(lua_State *L) {
		if (!_lg_typecheck_debugDrawConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::debugDrawConstraint(btTypedConstraint * constraint) function, expected prototype:\nvoid btDiscreteDynamicsWorld::debugDrawConstraint(btTypedConstraint * constraint)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::debugDrawConstraint(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->debugDrawConstraint(constraint);

		return 0;
	}

	// void btDiscreteDynamicsWorld::debugDrawWorld()
	static int _bind_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::debugDrawWorld() function, expected prototype:\nvoid btDiscreteDynamicsWorld::debugDrawWorld()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->debugDrawWorld();

		return 0;
	}

	// void btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	static int _bind_setConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_setConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver * solver) function, expected prototype:\nvoid btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)\nClass arguments details:\narg 1 ID = 53256621\n");
		}

		btConstraintSolver* solver=(Luna< btConstraintSolver >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setConstraintSolver(solver);

		return 0;
	}

	// btConstraintSolver * btDiscreteDynamicsWorld::getConstraintSolver()
	static int _bind_getConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_getConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSolver * btDiscreteDynamicsWorld::getConstraintSolver() function, expected prototype:\nbtConstraintSolver * btDiscreteDynamicsWorld::getConstraintSolver()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConstraintSolver * btDiscreteDynamicsWorld::getConstraintSolver(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btConstraintSolver * lret = self->getConstraintSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConstraintSolver >::push(L,lret,false);

		return 1;
	}

	// int btDiscreteDynamicsWorld::getNumConstraints() const
	static int _bind_getNumConstraints(lua_State *L) {
		if (!_lg_typecheck_getNumConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDiscreteDynamicsWorld::getNumConstraints() const function, expected prototype:\nint btDiscreteDynamicsWorld::getNumConstraints() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDiscreteDynamicsWorld::getNumConstraints() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->getNumConstraints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index)
	static int _bind_getConstraint_overload_1(lua_State *L) {
		if (!_lg_typecheck_getConstraint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index) function, expected prototype:\nbtTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btTypedConstraint * lret = self->getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// const btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index) const
	static int _bind_getConstraint_overload_2(lua_State *L) {
		if (!_lg_typecheck_getConstraint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index) const function, expected prototype:\nconst btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btTypedConstraint * lret = self->getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDiscreteDynamicsWorld::getConstraint
	static int _bind_getConstraint(lua_State *L) {
		if (_lg_typecheck_getConstraint_overload_1(L)) return _bind_getConstraint_overload_1(L);
		if (_lg_typecheck_getConstraint_overload_2(L)) return _bind_getConstraint_overload_2(L);

		luaL_error(L, "error in function getConstraint, cannot match any of the overloads for function getConstraint:\n  getConstraint(int)\n  getConstraint(int)\n");
		return 0;
	}

	// btDynamicsWorldType btDiscreteDynamicsWorld::getWorldType() const
	static int _bind_getWorldType(lua_State *L) {
		if (!_lg_typecheck_getWorldType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDynamicsWorldType btDiscreteDynamicsWorld::getWorldType() const function, expected prototype:\nbtDynamicsWorldType btDiscreteDynamicsWorld::getWorldType() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDynamicsWorldType btDiscreteDynamicsWorld::getWorldType() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btDynamicsWorldType lret = self->getWorldType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDiscreteDynamicsWorld::clearForces()
	static int _bind_clearForces(lua_State *L) {
		if (!_lg_typecheck_clearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::clearForces() function, expected prototype:\nvoid btDiscreteDynamicsWorld::clearForces()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::clearForces(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->clearForces();

		return 0;
	}

	// void btDiscreteDynamicsWorld::applyGravity()
	static int _bind_applyGravity(lua_State *L) {
		if (!_lg_typecheck_applyGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::applyGravity() function, expected prototype:\nvoid btDiscreteDynamicsWorld::applyGravity()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::applyGravity(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->applyGravity();

		return 0;
	}

	// void btDiscreteDynamicsWorld::setNumTasks(int numTasks)
	static int _bind_setNumTasks(lua_State *L) {
		if (!_lg_typecheck_setNumTasks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::setNumTasks(int numTasks) function, expected prototype:\nvoid btDiscreteDynamicsWorld::setNumTasks(int numTasks)\nClass arguments details:\n");
		}

		int numTasks=(int)lua_tointeger(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::setNumTasks(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setNumTasks(numTasks);

		return 0;
	}

	// void btDiscreteDynamicsWorld::updateVehicles(float timeStep)
	static int _bind_updateVehicles(lua_State *L) {
		if (!_lg_typecheck_updateVehicles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::updateVehicles(float timeStep) function, expected prototype:\nvoid btDiscreteDynamicsWorld::updateVehicles(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::updateVehicles(float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->updateVehicles(timeStep);

		return 0;
	}

	// void btDiscreteDynamicsWorld::addVehicle(btActionInterface * vehicle)
	static int _bind_addVehicle(lua_State *L) {
		if (!_lg_typecheck_addVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addVehicle(vehicle);

		return 0;
	}

	// void btDiscreteDynamicsWorld::removeVehicle(btActionInterface * vehicle)
	static int _bind_removeVehicle(lua_State *L) {
		if (!_lg_typecheck_removeVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::removeVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDiscreteDynamicsWorld::removeVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::removeVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeVehicle(vehicle);

		return 0;
	}

	// void btDiscreteDynamicsWorld::addCharacter(btActionInterface * character)
	static int _bind_addCharacter(lua_State *L) {
		if (!_lg_typecheck_addCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::addCharacter(btActionInterface * character) function, expected prototype:\nvoid btDiscreteDynamicsWorld::addCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::addCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addCharacter(character);

		return 0;
	}

	// void btDiscreteDynamicsWorld::removeCharacter(btActionInterface * character)
	static int _bind_removeCharacter(lua_State *L) {
		if (!_lg_typecheck_removeCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::removeCharacter(btActionInterface * character) function, expected prototype:\nvoid btDiscreteDynamicsWorld::removeCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::removeCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeCharacter(character);

		return 0;
	}

	// void btDiscreteDynamicsWorld::setSynchronizeAllMotionStates(bool synchronizeAll)
	static int _bind_setSynchronizeAllMotionStates(lua_State *L) {
		if (!_lg_typecheck_setSynchronizeAllMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::setSynchronizeAllMotionStates(bool synchronizeAll) function, expected prototype:\nvoid btDiscreteDynamicsWorld::setSynchronizeAllMotionStates(bool synchronizeAll)\nClass arguments details:\n");
		}

		bool synchronizeAll=(bool)(lua_toboolean(L,2)==1);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::setSynchronizeAllMotionStates(bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setSynchronizeAllMotionStates(synchronizeAll);

		return 0;
	}

	// bool btDiscreteDynamicsWorld::getSynchronizeAllMotionStates() const
	static int _bind_getSynchronizeAllMotionStates(lua_State *L) {
		if (!_lg_typecheck_getSynchronizeAllMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDiscreteDynamicsWorld::getSynchronizeAllMotionStates() const function, expected prototype:\nbool btDiscreteDynamicsWorld::getSynchronizeAllMotionStates() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDiscreteDynamicsWorld::getSynchronizeAllMotionStates() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		bool lret = self->getSynchronizeAllMotionStates();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btDiscreteDynamicsWorld::setApplySpeculativeContactRestitution(bool enable)
	static int _bind_setApplySpeculativeContactRestitution(lua_State *L) {
		if (!_lg_typecheck_setApplySpeculativeContactRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::setApplySpeculativeContactRestitution(bool enable) function, expected prototype:\nvoid btDiscreteDynamicsWorld::setApplySpeculativeContactRestitution(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::setApplySpeculativeContactRestitution(bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setApplySpeculativeContactRestitution(enable);

		return 0;
	}

	// bool btDiscreteDynamicsWorld::getApplySpeculativeContactRestitution() const
	static int _bind_getApplySpeculativeContactRestitution(lua_State *L) {
		if (!_lg_typecheck_getApplySpeculativeContactRestitution(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDiscreteDynamicsWorld::getApplySpeculativeContactRestitution() const function, expected prototype:\nbool btDiscreteDynamicsWorld::getApplySpeculativeContactRestitution() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDiscreteDynamicsWorld::getApplySpeculativeContactRestitution() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		bool lret = self->getApplySpeculativeContactRestitution();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btDiscreteDynamicsWorld::base_updateAabbs()
	static int _bind_base_updateAabbs(lua_State *L) {
		if (!_lg_typecheck_base_updateAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_updateAabbs() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_updateAabbs()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_updateAabbs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::updateAabbs();

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_computeOverlappingPairs()
	static int _bind_base_computeOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_computeOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_computeOverlappingPairs() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_computeOverlappingPairs()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_computeOverlappingPairs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::computeOverlappingPairs();

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)
	static int _bind_base_setDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_setDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_setDebugDrawer(btIDebugDraw *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::setDebugDrawer(debugDrawer);

		return 0;
	}

	// btIDebugDraw * btDiscreteDynamicsWorld::base_getDebugDrawer()
	static int _bind_base_getDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_getDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw * btDiscreteDynamicsWorld::base_getDebugDrawer() function, expected prototype:\nbtIDebugDraw * btDiscreteDynamicsWorld::base_getDebugDrawer()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIDebugDraw * btDiscreteDynamicsWorld::base_getDebugDrawer(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btIDebugDraw * lret = self->btDiscreteDynamicsWorld::getDebugDrawer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// void btDiscreteDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	static int _bind_base_debugDrawObject(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\narg 3 ID = 91544891\n");
		}

		const btTransform* worldTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTransform in btDiscreteDynamicsWorld::base_debugDrawObject function");
		}
		const btTransform & worldTransform=*worldTransform_ptr;
		const btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btDiscreteDynamicsWorld::base_debugDrawObject function");
		}
		const btVector3 & color=*color_ptr;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_debugDrawObject(const btTransform &, const btCollisionShape *, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::debugDrawObject(worldTransform, shape, color);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btDiscreteDynamicsWorld::base_rayTest function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btDiscreteDynamicsWorld::base_rayTest function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btDiscreteDynamicsWorld::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_performDiscreteCollisionDetection()
	static int _bind_base_performDiscreteCollisionDetection(lua_State *L) {
		if (!_lg_typecheck_base_performDiscreteCollisionDetection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_performDiscreteCollisionDetection() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_performDiscreteCollisionDetection()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_performDiscreteCollisionDetection(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::performDiscreteCollisionDetection();

		return 0;
	}

	// int btDiscreteDynamicsWorld::base_stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	static int _bind_base_stepSimulation(lua_State *L) {
		if (!_lg_typecheck_base_stepSimulation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDiscreteDynamicsWorld::base_stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) function, expected prototype:\nint btDiscreteDynamicsWorld::base_stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float timeStep=(float)lua_tonumber(L,2);
		int maxSubSteps=luatop>2 ? (int)lua_tointeger(L,3) : 1;
		float fixedTimeStep=luatop>3 ? (float)lua_tonumber(L,4) : float (1.)/ float (60.);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDiscreteDynamicsWorld::base_stepSimulation(float, int, float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->btDiscreteDynamicsWorld::stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDiscreteDynamicsWorld::base_synchronizeMotionStates()
	static int _bind_base_synchronizeMotionStates(lua_State *L) {
		if (!_lg_typecheck_base_synchronizeMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_synchronizeMotionStates() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_synchronizeMotionStates()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_synchronizeMotionStates(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::synchronizeMotionStates();

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	static int _bind_base_addConstraint(lua_State *L) {
		if (!_lg_typecheck_base_addConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));
		bool disableCollisionsBetweenLinkedBodies=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addConstraint(btTypedConstraint *, bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addConstraint(constraint, disableCollisionsBetweenLinkedBodies);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint)
	static int _bind_base_removeConstraint(lua_State *L) {
		if (!_lg_typecheck_base_removeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_removeConstraint(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::removeConstraint(constraint);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_addAction(btActionInterface * arg1)
	static int _bind_base_addAction(lua_State *L) {
		if (!_lg_typecheck_base_addAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addAction(btActionInterface * arg1) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addAction(btActionInterface * arg1)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* _arg1=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addAction(_arg1);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_removeAction(btActionInterface * arg1)
	static int _bind_base_removeAction(lua_State *L) {
		if (!_lg_typecheck_base_removeAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_removeAction(btActionInterface * arg1) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_removeAction(btActionInterface * arg1)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* _arg1=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_removeAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::removeAction(_arg1);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_setGravity(const btVector3 & gravity)
	static int _bind_base_setGravity(lua_State *L) {
		if (!_lg_typecheck_base_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_setGravity(const btVector3 & gravity) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_setGravity(const btVector3 & gravity)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* gravity_ptr=(Luna< btVector3 >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in btDiscreteDynamicsWorld::base_setGravity function");
		}
		const btVector3 & gravity=*gravity_ptr;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_setGravity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::setGravity(gravity);

		return 0;
	}

	// btVector3 btDiscreteDynamicsWorld::base_getGravity() const
	static int _bind_base_getGravity(lua_State *L) {
		if (!_lg_typecheck_base_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btDiscreteDynamicsWorld::base_getGravity() const function, expected prototype:\nbtVector3 btDiscreteDynamicsWorld::base_getGravity() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btDiscreteDynamicsWorld::base_getGravity() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btDiscreteDynamicsWorld::getGravity();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btDiscreteDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter)
	static int _bind_base_addCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_addCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));
		short int collisionFilterGroup=luatop>2 ? (short int)lua_tointeger(L,3) : btBroadphaseProxy::StaticFilter;
		short int collisionFilterMask=luatop>3 ? (short int)lua_tointeger(L,4) : btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter;

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addCollisionObject(btCollisionObject *, short int, short int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody * body)
	static int _bind_base_addRigidBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addRigidBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody * body) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addRigidBody(body);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody * body, short group, short mask)
	static int _bind_base_addRigidBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addRigidBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody * body, short group, short mask) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody * body, short group, short mask)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		short group=(short)lua_tointeger(L,3);
		short mask=(short)lua_tointeger(L,4);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addRigidBody(btRigidBody *, short, short). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addRigidBody(body, group, mask);

		return 0;
	}

	// Overload binder for btDiscreteDynamicsWorld::base_addRigidBody
	static int _bind_base_addRigidBody(lua_State *L) {
		if (_lg_typecheck_base_addRigidBody_overload_1(L)) return _bind_base_addRigidBody_overload_1(L);
		if (_lg_typecheck_base_addRigidBody_overload_2(L)) return _bind_base_addRigidBody_overload_2(L);

		luaL_error(L, "error in function base_addRigidBody, cannot match any of the overloads for function base_addRigidBody:\n  base_addRigidBody(btRigidBody *)\n  base_addRigidBody(btRigidBody *, short, short)\n");
		return 0;
	}

	// void btDiscreteDynamicsWorld::base_removeRigidBody(btRigidBody * body)
	static int _bind_base_removeRigidBody(lua_State *L) {
		if (!_lg_typecheck_base_removeRigidBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_removeRigidBody(btRigidBody * body) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_removeRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_removeRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::removeRigidBody(body);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_base_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::removeCollisionObject(collisionObject);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_debugDrawWorld()
	static int _bind_base_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_debugDrawWorld() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_debugDrawWorld()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::debugDrawWorld();

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_setConstraintSolver(btConstraintSolver * solver)
	static int _bind_base_setConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_base_setConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_setConstraintSolver(btConstraintSolver * solver) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_setConstraintSolver(btConstraintSolver * solver)\nClass arguments details:\narg 1 ID = 53256621\n");
		}

		btConstraintSolver* solver=(Luna< btConstraintSolver >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_setConstraintSolver(btConstraintSolver *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::setConstraintSolver(solver);

		return 0;
	}

	// btConstraintSolver * btDiscreteDynamicsWorld::base_getConstraintSolver()
	static int _bind_base_getConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_base_getConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSolver * btDiscreteDynamicsWorld::base_getConstraintSolver() function, expected prototype:\nbtConstraintSolver * btDiscreteDynamicsWorld::base_getConstraintSolver()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConstraintSolver * btDiscreteDynamicsWorld::base_getConstraintSolver(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btConstraintSolver * lret = self->btDiscreteDynamicsWorld::getConstraintSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConstraintSolver >::push(L,lret,false);

		return 1;
	}

	// int btDiscreteDynamicsWorld::base_getNumConstraints() const
	static int _bind_base_getNumConstraints(lua_State *L) {
		if (!_lg_typecheck_base_getNumConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDiscreteDynamicsWorld::base_getNumConstraints() const function, expected prototype:\nint btDiscreteDynamicsWorld::base_getNumConstraints() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDiscreteDynamicsWorld::base_getNumConstraints() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->btDiscreteDynamicsWorld::getNumConstraints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int index)
	static int _bind_base_getConstraint_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getConstraint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int index) function, expected prototype:\nbtTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btTypedConstraint * lret = self->btDiscreteDynamicsWorld::getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// const btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int index) const
	static int _bind_base_getConstraint_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getConstraint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int index) const function, expected prototype:\nconst btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTypedConstraint * btDiscreteDynamicsWorld::base_getConstraint(int) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btTypedConstraint * lret = self->btDiscreteDynamicsWorld::getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDiscreteDynamicsWorld::base_getConstraint
	static int _bind_base_getConstraint(lua_State *L) {
		if (_lg_typecheck_base_getConstraint_overload_1(L)) return _bind_base_getConstraint_overload_1(L);
		if (_lg_typecheck_base_getConstraint_overload_2(L)) return _bind_base_getConstraint_overload_2(L);

		luaL_error(L, "error in function base_getConstraint, cannot match any of the overloads for function base_getConstraint:\n  base_getConstraint(int)\n  base_getConstraint(int)\n");
		return 0;
	}

	// btDynamicsWorldType btDiscreteDynamicsWorld::base_getWorldType() const
	static int _bind_base_getWorldType(lua_State *L) {
		if (!_lg_typecheck_base_getWorldType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDynamicsWorldType btDiscreteDynamicsWorld::base_getWorldType() const function, expected prototype:\nbtDynamicsWorldType btDiscreteDynamicsWorld::base_getWorldType() const\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDynamicsWorldType btDiscreteDynamicsWorld::base_getWorldType() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btDynamicsWorldType lret = self->btDiscreteDynamicsWorld::getWorldType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDiscreteDynamicsWorld::base_clearForces()
	static int _bind_base_clearForces(lua_State *L) {
		if (!_lg_typecheck_base_clearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_clearForces() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_clearForces()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_clearForces(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::clearForces();

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_applyGravity()
	static int _bind_base_applyGravity(lua_State *L) {
		if (!_lg_typecheck_base_applyGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_applyGravity() function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_applyGravity()\nClass arguments details:\n");
		}


		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_applyGravity(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::applyGravity();

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_setNumTasks(int numTasks)
	static int _bind_base_setNumTasks(lua_State *L) {
		if (!_lg_typecheck_base_setNumTasks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_setNumTasks(int numTasks) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_setNumTasks(int numTasks)\nClass arguments details:\n");
		}

		int numTasks=(int)lua_tointeger(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_setNumTasks(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::setNumTasks(numTasks);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_updateVehicles(float timeStep)
	static int _bind_base_updateVehicles(lua_State *L) {
		if (!_lg_typecheck_base_updateVehicles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_updateVehicles(float timeStep) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_updateVehicles(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_updateVehicles(float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::updateVehicles(timeStep);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_addVehicle(btActionInterface * vehicle)
	static int _bind_base_addVehicle(lua_State *L) {
		if (!_lg_typecheck_base_addVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addVehicle(vehicle);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_removeVehicle(btActionInterface * vehicle)
	static int _bind_base_removeVehicle(lua_State *L) {
		if (!_lg_typecheck_base_removeVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_removeVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_removeVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_removeVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::removeVehicle(vehicle);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_addCharacter(btActionInterface * character)
	static int _bind_base_addCharacter(lua_State *L) {
		if (!_lg_typecheck_base_addCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_addCharacter(btActionInterface * character) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_addCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_addCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::addCharacter(character);

		return 0;
	}

	// void btDiscreteDynamicsWorld::base_removeCharacter(btActionInterface * character)
	static int _bind_base_removeCharacter(lua_State *L) {
		if (!_lg_typecheck_base_removeCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::base_removeCharacter(btActionInterface * character) function, expected prototype:\nvoid btDiscreteDynamicsWorld::base_removeCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::base_removeCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDiscreteDynamicsWorld::removeCharacter(character);

		return 0;
	}


	// Operator binds:

};

btDiscreteDynamicsWorld* LunaTraits< btDiscreteDynamicsWorld >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDiscreteDynamicsWorld::_bind_ctor(L);
}

void LunaTraits< btDiscreteDynamicsWorld >::_bind_dtor(btDiscreteDynamicsWorld* obj) {
	delete obj;
}

const char LunaTraits< btDiscreteDynamicsWorld >::className[] = "btDiscreteDynamicsWorld";
const char LunaTraits< btDiscreteDynamicsWorld >::fullName[] = "btDiscreteDynamicsWorld";
const char LunaTraits< btDiscreteDynamicsWorld >::moduleName[] = "bullet";
const char* LunaTraits< btDiscreteDynamicsWorld >::parents[] = {"bullet.btDynamicsWorld", 0};
const int LunaTraits< btDiscreteDynamicsWorld >::hash = 1625451;
const int LunaTraits< btDiscreteDynamicsWorld >::uniqueIDs[] = {62162664,0};

luna_RegType LunaTraits< btDiscreteDynamicsWorld >::methods[] = {
	{"stepSimulation", &luna_wrapper_btDiscreteDynamicsWorld::_bind_stepSimulation},
	{"synchronizeMotionStates", &luna_wrapper_btDiscreteDynamicsWorld::_bind_synchronizeMotionStates},
	{"synchronizeSingleMotionState", &luna_wrapper_btDiscreteDynamicsWorld::_bind_synchronizeSingleMotionState},
	{"addConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_addConstraint},
	{"removeConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_removeConstraint},
	{"addAction", &luna_wrapper_btDiscreteDynamicsWorld::_bind_addAction},
	{"removeAction", &luna_wrapper_btDiscreteDynamicsWorld::_bind_removeAction},
	{"getSimulationIslandManager", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getSimulationIslandManager},
	{"getCollisionWorld", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getCollisionWorld},
	{"setGravity", &luna_wrapper_btDiscreteDynamicsWorld::_bind_setGravity},
	{"getGravity", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getGravity},
	{"addCollisionObject", &luna_wrapper_btDiscreteDynamicsWorld::_bind_addCollisionObject},
	{"addRigidBody", &luna_wrapper_btDiscreteDynamicsWorld::_bind_addRigidBody},
	{"removeRigidBody", &luna_wrapper_btDiscreteDynamicsWorld::_bind_removeRigidBody},
	{"removeCollisionObject", &luna_wrapper_btDiscreteDynamicsWorld::_bind_removeCollisionObject},
	{"debugDrawConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_debugDrawConstraint},
	{"debugDrawWorld", &luna_wrapper_btDiscreteDynamicsWorld::_bind_debugDrawWorld},
	{"setConstraintSolver", &luna_wrapper_btDiscreteDynamicsWorld::_bind_setConstraintSolver},
	{"getConstraintSolver", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getConstraintSolver},
	{"getNumConstraints", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getNumConstraints},
	{"getConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getConstraint},
	{"getWorldType", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getWorldType},
	{"clearForces", &luna_wrapper_btDiscreteDynamicsWorld::_bind_clearForces},
	{"applyGravity", &luna_wrapper_btDiscreteDynamicsWorld::_bind_applyGravity},
	{"setNumTasks", &luna_wrapper_btDiscreteDynamicsWorld::_bind_setNumTasks},
	{"updateVehicles", &luna_wrapper_btDiscreteDynamicsWorld::_bind_updateVehicles},
	{"addVehicle", &luna_wrapper_btDiscreteDynamicsWorld::_bind_addVehicle},
	{"removeVehicle", &luna_wrapper_btDiscreteDynamicsWorld::_bind_removeVehicle},
	{"addCharacter", &luna_wrapper_btDiscreteDynamicsWorld::_bind_addCharacter},
	{"removeCharacter", &luna_wrapper_btDiscreteDynamicsWorld::_bind_removeCharacter},
	{"setSynchronizeAllMotionStates", &luna_wrapper_btDiscreteDynamicsWorld::_bind_setSynchronizeAllMotionStates},
	{"getSynchronizeAllMotionStates", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getSynchronizeAllMotionStates},
	{"setApplySpeculativeContactRestitution", &luna_wrapper_btDiscreteDynamicsWorld::_bind_setApplySpeculativeContactRestitution},
	{"getApplySpeculativeContactRestitution", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getApplySpeculativeContactRestitution},
	{"base_updateAabbs", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_updateAabbs},
	{"base_computeOverlappingPairs", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_computeOverlappingPairs},
	{"base_setDebugDrawer", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_setDebugDrawer},
	{"base_getDebugDrawer", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_getDebugDrawer},
	{"base_debugDrawObject", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_debugDrawObject},
	{"base_rayTest", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_rayTest},
	{"base_performDiscreteCollisionDetection", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_performDiscreteCollisionDetection},
	{"base_stepSimulation", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_stepSimulation},
	{"base_synchronizeMotionStates", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_synchronizeMotionStates},
	{"base_addConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_addConstraint},
	{"base_removeConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_removeConstraint},
	{"base_addAction", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_addAction},
	{"base_removeAction", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_removeAction},
	{"base_setGravity", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_setGravity},
	{"base_getGravity", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_getGravity},
	{"base_addCollisionObject", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_addCollisionObject},
	{"base_addRigidBody", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_addRigidBody},
	{"base_removeRigidBody", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_removeRigidBody},
	{"base_removeCollisionObject", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_removeCollisionObject},
	{"base_debugDrawWorld", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_debugDrawWorld},
	{"base_setConstraintSolver", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_setConstraintSolver},
	{"base_getConstraintSolver", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_getConstraintSolver},
	{"base_getNumConstraints", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_getNumConstraints},
	{"base_getConstraint", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_getConstraint},
	{"base_getWorldType", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_getWorldType},
	{"base_clearForces", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_clearForces},
	{"base_applyGravity", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_applyGravity},
	{"base_setNumTasks", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_setNumTasks},
	{"base_updateVehicles", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_updateVehicles},
	{"base_addVehicle", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_addVehicle},
	{"base_removeVehicle", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_removeVehicle},
	{"base_addCharacter", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_addCharacter},
	{"base_removeCharacter", &luna_wrapper_btDiscreteDynamicsWorld::_bind_base_removeCharacter},
	{"__eq", &luna_wrapper_btDiscreteDynamicsWorld::_bind___eq},
	{"fromVoid", &luna_wrapper_btDiscreteDynamicsWorld::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDiscreteDynamicsWorld::_bind_asVoid},
	{"getTable", &luna_wrapper_btDiscreteDynamicsWorld::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDiscreteDynamicsWorld >::converters[] = {
	{"btCollisionWorld", &luna_wrapper_btDiscreteDynamicsWorld::_cast_from_btCollisionWorld},
	{0,0}
};

luna_RegEnumType LunaTraits< btDiscreteDynamicsWorld >::enumValues[] = {
	{0,0}
};


