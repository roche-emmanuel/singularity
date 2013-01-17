#include <plug_common.h>

#include <luna/wrappers/wrapper_btSimpleDynamicsWorld.h>

class luna_wrapper_btSimpleDynamicsWorld {
public:
	typedef Luna< btSimpleDynamicsWorld > luna_t;

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

	// Derived class converters:
	static int _cast_from_btCollisionWorld(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btSimpleDynamicsWorld* ptr= dynamic_cast< btSimpleDynamicsWorld* >(Luna< btCollisionWorld >::check(L,1));
		btSimpleDynamicsWorld* ptr= luna_caster< btCollisionWorld, btSimpleDynamicsWorld >::cast(Luna< btCollisionWorld >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btSimpleDynamicsWorld >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateAabbs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_synchronizeMotionStates(lua_State *L) {
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

	inline static bool _lg_typecheck_getWorldType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clearForces(lua_State *L) {
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

	inline static bool _lg_typecheck_base_addCollisionObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_performDiscreteCollisionDetection(lua_State *L) {
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

	inline static bool _lg_typecheck_base_stepSimulation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_base_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateAabbs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_synchronizeMotionStates(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getWorldType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clearForces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSimpleDynamicsWorld::btSimpleDynamicsWorld(btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)
	static btSimpleDynamicsWorld* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimpleDynamicsWorld::btSimpleDynamicsWorld(btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtSimpleDynamicsWorld::btSimpleDynamicsWorld(btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 1 ID = 71097681\narg 2 ID = 25261840\narg 3 ID = 53256621\narg 4 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,1));
		btBroadphaseInterface* pairCache=(Luna< btBroadphaseInterface >::check(L,2));
		btConstraintSolver* constraintSolver=(Luna< btConstraintSolver >::check(L,3));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,4));

		return new btSimpleDynamicsWorld(dispatcher, pairCache, constraintSolver, collisionConfiguration);
	}

	// btSimpleDynamicsWorld::btSimpleDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)
	static btSimpleDynamicsWorld* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btSimpleDynamicsWorld::btSimpleDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtSimpleDynamicsWorld::btSimpleDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 2 ID = 71097681\narg 3 ID = 25261840\narg 4 ID = 53256621\narg 5 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btBroadphaseInterface* pairCache=(Luna< btBroadphaseInterface >::check(L,3));
		btConstraintSolver* constraintSolver=(Luna< btConstraintSolver >::check(L,4));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,5));

		return new wrapper_btSimpleDynamicsWorld(L,NULL, dispatcher, pairCache, constraintSolver, collisionConfiguration);
	}

	// Overload binder for btSimpleDynamicsWorld::btSimpleDynamicsWorld
	static btSimpleDynamicsWorld* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btSimpleDynamicsWorld, cannot match any of the overloads for function btSimpleDynamicsWorld:\n  btSimpleDynamicsWorld(btDispatcher *, btBroadphaseInterface *, btConstraintSolver *, btCollisionConfiguration *)\n  btSimpleDynamicsWorld(lua_Table *, btDispatcher *, btBroadphaseInterface *, btConstraintSolver *, btCollisionConfiguration *)\n");
		return NULL;
	}


	// Function binds:
	// int btSimpleDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	static int _bind_stepSimulation(lua_State *L) {
		if (!_lg_typecheck_stepSimulation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSimpleDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) function, expected prototype:\nint btSimpleDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float timeStep=(float)lua_tonumber(L,2);
		int maxSubSteps=luatop>2 ? (int)lua_tointeger(L,3) : 1;
		float fixedTimeStep=luatop>3 ? (float)lua_tonumber(L,4) : float (1.)/ float (60.);

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSimpleDynamicsWorld::stepSimulation(float, int, float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSimpleDynamicsWorld::setGravity(const btVector3 & gravity)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::setGravity(const btVector3 & gravity) function, expected prototype:\nvoid btSimpleDynamicsWorld::setGravity(const btVector3 & gravity)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* gravity_ptr=(Luna< btVector3 >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in btSimpleDynamicsWorld::setGravity function");
		}
		const btVector3 & gravity=*gravity_ptr;

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::setGravity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setGravity(gravity);

		return 0;
	}

	// btVector3 btSimpleDynamicsWorld::getGravity() const
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSimpleDynamicsWorld::getGravity() const function, expected prototype:\nbtVector3 btSimpleDynamicsWorld::getGravity() const\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSimpleDynamicsWorld::getGravity() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getGravity();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btSimpleDynamicsWorld::addRigidBody(btRigidBody * body)
	static int _bind_addRigidBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_addRigidBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::addRigidBody(btRigidBody * body) function, expected prototype:\nvoid btSimpleDynamicsWorld::addRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::addRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addRigidBody(body);

		return 0;
	}

	// void btSimpleDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	static int _bind_addRigidBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_addRigidBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask) function, expected prototype:\nvoid btSimpleDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		short group=(short)lua_tointeger(L,3);
		short mask=(short)lua_tointeger(L,4);

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::addRigidBody(btRigidBody *, short, short). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addRigidBody(body, group, mask);

		return 0;
	}

	// Overload binder for btSimpleDynamicsWorld::addRigidBody
	static int _bind_addRigidBody(lua_State *L) {
		if (_lg_typecheck_addRigidBody_overload_1(L)) return _bind_addRigidBody_overload_1(L);
		if (_lg_typecheck_addRigidBody_overload_2(L)) return _bind_addRigidBody_overload_2(L);

		luaL_error(L, "error in function addRigidBody, cannot match any of the overloads for function addRigidBody:\n  addRigidBody(btRigidBody *)\n  addRigidBody(btRigidBody *, short, short)\n");
		return 0;
	}

	// void btSimpleDynamicsWorld::removeRigidBody(btRigidBody * body)
	static int _bind_removeRigidBody(lua_State *L) {
		if (!_lg_typecheck_removeRigidBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::removeRigidBody(btRigidBody * body) function, expected prototype:\nvoid btSimpleDynamicsWorld::removeRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::removeRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeRigidBody(body);

		return 0;
	}

	// void btSimpleDynamicsWorld::debugDrawWorld()
	static int _bind_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::debugDrawWorld() function, expected prototype:\nvoid btSimpleDynamicsWorld::debugDrawWorld()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->debugDrawWorld();

		return 0;
	}

	// void btSimpleDynamicsWorld::addAction(btActionInterface * action)
	static int _bind_addAction(lua_State *L) {
		if (!_lg_typecheck_addAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::addAction(btActionInterface * action) function, expected prototype:\nvoid btSimpleDynamicsWorld::addAction(btActionInterface * action)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* action=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::addAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addAction(action);

		return 0;
	}

	// void btSimpleDynamicsWorld::removeAction(btActionInterface * action)
	static int _bind_removeAction(lua_State *L) {
		if (!_lg_typecheck_removeAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::removeAction(btActionInterface * action) function, expected prototype:\nvoid btSimpleDynamicsWorld::removeAction(btActionInterface * action)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* action=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::removeAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeAction(action);

		return 0;
	}

	// void btSimpleDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btSimpleDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeCollisionObject(collisionObject);

		return 0;
	}

	// void btSimpleDynamicsWorld::updateAabbs()
	static int _bind_updateAabbs(lua_State *L) {
		if (!_lg_typecheck_updateAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::updateAabbs() function, expected prototype:\nvoid btSimpleDynamicsWorld::updateAabbs()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::updateAabbs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->updateAabbs();

		return 0;
	}

	// void btSimpleDynamicsWorld::synchronizeMotionStates()
	static int _bind_synchronizeMotionStates(lua_State *L) {
		if (!_lg_typecheck_synchronizeMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::synchronizeMotionStates() function, expected prototype:\nvoid btSimpleDynamicsWorld::synchronizeMotionStates()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::synchronizeMotionStates(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->synchronizeMotionStates();

		return 0;
	}

	// void btSimpleDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	static int _bind_setConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_setConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::setConstraintSolver(btConstraintSolver * solver) function, expected prototype:\nvoid btSimpleDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)\nClass arguments details:\narg 1 ID = 53256621\n");
		}

		btConstraintSolver* solver=(Luna< btConstraintSolver >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::setConstraintSolver(btConstraintSolver *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setConstraintSolver(solver);

		return 0;
	}

	// btConstraintSolver * btSimpleDynamicsWorld::getConstraintSolver()
	static int _bind_getConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_getConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSolver * btSimpleDynamicsWorld::getConstraintSolver() function, expected prototype:\nbtConstraintSolver * btSimpleDynamicsWorld::getConstraintSolver()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConstraintSolver * btSimpleDynamicsWorld::getConstraintSolver(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btConstraintSolver * lret = self->getConstraintSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConstraintSolver >::push(L,lret,false);

		return 1;
	}

	// btDynamicsWorldType btSimpleDynamicsWorld::getWorldType() const
	static int _bind_getWorldType(lua_State *L) {
		if (!_lg_typecheck_getWorldType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDynamicsWorldType btSimpleDynamicsWorld::getWorldType() const function, expected prototype:\nbtDynamicsWorldType btSimpleDynamicsWorld::getWorldType() const\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDynamicsWorldType btSimpleDynamicsWorld::getWorldType() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btDynamicsWorldType lret = self->getWorldType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSimpleDynamicsWorld::clearForces()
	static int _bind_clearForces(lua_State *L) {
		if (!_lg_typecheck_clearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::clearForces() function, expected prototype:\nvoid btSimpleDynamicsWorld::clearForces()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::clearForces(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->clearForces();

		return 0;
	}

	// void btSimpleDynamicsWorld::base_computeOverlappingPairs()
	static int _bind_base_computeOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_computeOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_computeOverlappingPairs() function, expected prototype:\nvoid btSimpleDynamicsWorld::base_computeOverlappingPairs()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_computeOverlappingPairs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::computeOverlappingPairs();

		return 0;
	}

	// void btSimpleDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)
	static int _bind_base_setDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_setDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_setDebugDrawer(btIDebugDraw *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::setDebugDrawer(debugDrawer);

		return 0;
	}

	// btIDebugDraw * btSimpleDynamicsWorld::base_getDebugDrawer()
	static int _bind_base_getDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_getDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw * btSimpleDynamicsWorld::base_getDebugDrawer() function, expected prototype:\nbtIDebugDraw * btSimpleDynamicsWorld::base_getDebugDrawer()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIDebugDraw * btSimpleDynamicsWorld::base_getDebugDrawer(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btIDebugDraw * lret = self->btSimpleDynamicsWorld::getDebugDrawer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// void btSimpleDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	static int _bind_base_debugDrawObject(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\narg 3 ID = 91544891\n");
		}

		const btTransform* worldTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTransform in btSimpleDynamicsWorld::base_debugDrawObject function");
		}
		const btTransform & worldTransform=*worldTransform_ptr;
		const btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btSimpleDynamicsWorld::base_debugDrawObject function");
		}
		const btVector3 & color=*color_ptr;

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_debugDrawObject(const btTransform &, const btCollisionShape *, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::debugDrawObject(worldTransform, shape, color);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btSimpleDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btSimpleDynamicsWorld::base_rayTest function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btSimpleDynamicsWorld::base_rayTest function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btSimpleDynamicsWorld::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	static int _bind_base_addCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_addCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));
		short int collisionFilterGroup=luatop>2 ? (short int)lua_tointeger(L,3) : btBroadphaseProxy::DefaultFilter;
		short int collisionFilterMask=luatop>3 ? (short int)lua_tointeger(L,4) : btBroadphaseProxy::AllFilter;

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addCollisionObject(btCollisionObject *, short int, short int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_performDiscreteCollisionDetection()
	static int _bind_base_performDiscreteCollisionDetection(lua_State *L) {
		if (!_lg_typecheck_base_performDiscreteCollisionDetection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_performDiscreteCollisionDetection() function, expected prototype:\nvoid btSimpleDynamicsWorld::base_performDiscreteCollisionDetection()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_performDiscreteCollisionDetection(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::performDiscreteCollisionDetection();

		return 0;
	}

	// void btSimpleDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	static int _bind_base_addConstraint(lua_State *L) {
		if (!_lg_typecheck_base_addConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));
		bool disableCollisionsBetweenLinkedBodies=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addConstraint(btTypedConstraint *, bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addConstraint(constraint, disableCollisionsBetweenLinkedBodies);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint)
	static int _bind_base_removeConstraint(lua_State *L) {
		if (!_lg_typecheck_base_removeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_removeConstraint(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::removeConstraint(constraint);

		return 0;
	}

	// int btSimpleDynamicsWorld::base_getNumConstraints() const
	static int _bind_base_getNumConstraints(lua_State *L) {
		if (!_lg_typecheck_base_getNumConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSimpleDynamicsWorld::base_getNumConstraints() const function, expected prototype:\nint btSimpleDynamicsWorld::base_getNumConstraints() const\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSimpleDynamicsWorld::base_getNumConstraints() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->btSimpleDynamicsWorld::getNumConstraints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int index)
	static int _bind_base_getConstraint_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getConstraint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int index) function, expected prototype:\nbtTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btTypedConstraint * lret = self->btSimpleDynamicsWorld::getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// const btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int index) const
	static int _bind_base_getConstraint_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getConstraint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int index) const function, expected prototype:\nconst btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTypedConstraint * btSimpleDynamicsWorld::base_getConstraint(int) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btTypedConstraint * lret = self->btSimpleDynamicsWorld::getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btSimpleDynamicsWorld::base_getConstraint
	static int _bind_base_getConstraint(lua_State *L) {
		if (_lg_typecheck_base_getConstraint_overload_1(L)) return _bind_base_getConstraint_overload_1(L);
		if (_lg_typecheck_base_getConstraint_overload_2(L)) return _bind_base_getConstraint_overload_2(L);

		luaL_error(L, "error in function base_getConstraint, cannot match any of the overloads for function base_getConstraint:\n  base_getConstraint(int)\n  base_getConstraint(int)\n");
		return 0;
	}

	// void btSimpleDynamicsWorld::base_addVehicle(btActionInterface * vehicle)
	static int _bind_base_addVehicle(lua_State *L) {
		if (!_lg_typecheck_base_addVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addVehicle(vehicle);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_removeVehicle(btActionInterface * vehicle)
	static int _bind_base_removeVehicle(lua_State *L) {
		if (!_lg_typecheck_base_removeVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_removeVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_removeVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_removeVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::removeVehicle(vehicle);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_addCharacter(btActionInterface * character)
	static int _bind_base_addCharacter(lua_State *L) {
		if (!_lg_typecheck_base_addCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addCharacter(btActionInterface * character) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addCharacter(character);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_removeCharacter(btActionInterface * character)
	static int _bind_base_removeCharacter(lua_State *L) {
		if (!_lg_typecheck_base_removeCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_removeCharacter(btActionInterface * character) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_removeCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_removeCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::removeCharacter(character);

		return 0;
	}

	// int btSimpleDynamicsWorld::base_stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	static int _bind_base_stepSimulation(lua_State *L) {
		if (!_lg_typecheck_base_stepSimulation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btSimpleDynamicsWorld::base_stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) function, expected prototype:\nint btSimpleDynamicsWorld::base_stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float timeStep=(float)lua_tonumber(L,2);
		int maxSubSteps=luatop>2 ? (int)lua_tointeger(L,3) : 1;
		float fixedTimeStep=luatop>3 ? (float)lua_tonumber(L,4) : float (1.)/ float (60.);

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btSimpleDynamicsWorld::base_stepSimulation(float, int, float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->btSimpleDynamicsWorld::stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSimpleDynamicsWorld::base_setGravity(const btVector3 & gravity)
	static int _bind_base_setGravity(lua_State *L) {
		if (!_lg_typecheck_base_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_setGravity(const btVector3 & gravity) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_setGravity(const btVector3 & gravity)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* gravity_ptr=(Luna< btVector3 >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in btSimpleDynamicsWorld::base_setGravity function");
		}
		const btVector3 & gravity=*gravity_ptr;

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_setGravity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::setGravity(gravity);

		return 0;
	}

	// btVector3 btSimpleDynamicsWorld::base_getGravity() const
	static int _bind_base_getGravity(lua_State *L) {
		if (!_lg_typecheck_base_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btSimpleDynamicsWorld::base_getGravity() const function, expected prototype:\nbtVector3 btSimpleDynamicsWorld::base_getGravity() const\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btSimpleDynamicsWorld::base_getGravity() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btVector3 stack_lret = self->btSimpleDynamicsWorld::getGravity();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btSimpleDynamicsWorld::base_addRigidBody(btRigidBody * body)
	static int _bind_base_addRigidBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addRigidBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addRigidBody(btRigidBody * body) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addRigidBody(body);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_addRigidBody(btRigidBody * body, short group, short mask)
	static int _bind_base_addRigidBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addRigidBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addRigidBody(btRigidBody * body, short group, short mask) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addRigidBody(btRigidBody * body, short group, short mask)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		short group=(short)lua_tointeger(L,3);
		short mask=(short)lua_tointeger(L,4);

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addRigidBody(btRigidBody *, short, short). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addRigidBody(body, group, mask);

		return 0;
	}

	// Overload binder for btSimpleDynamicsWorld::base_addRigidBody
	static int _bind_base_addRigidBody(lua_State *L) {
		if (_lg_typecheck_base_addRigidBody_overload_1(L)) return _bind_base_addRigidBody_overload_1(L);
		if (_lg_typecheck_base_addRigidBody_overload_2(L)) return _bind_base_addRigidBody_overload_2(L);

		luaL_error(L, "error in function base_addRigidBody, cannot match any of the overloads for function base_addRigidBody:\n  base_addRigidBody(btRigidBody *)\n  base_addRigidBody(btRigidBody *, short, short)\n");
		return 0;
	}

	// void btSimpleDynamicsWorld::base_removeRigidBody(btRigidBody * body)
	static int _bind_base_removeRigidBody(lua_State *L) {
		if (!_lg_typecheck_base_removeRigidBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_removeRigidBody(btRigidBody * body) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_removeRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_removeRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::removeRigidBody(body);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_debugDrawWorld()
	static int _bind_base_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_debugDrawWorld() function, expected prototype:\nvoid btSimpleDynamicsWorld::base_debugDrawWorld()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::debugDrawWorld();

		return 0;
	}

	// void btSimpleDynamicsWorld::base_addAction(btActionInterface * action)
	static int _bind_base_addAction(lua_State *L) {
		if (!_lg_typecheck_base_addAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_addAction(btActionInterface * action) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_addAction(btActionInterface * action)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* action=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_addAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::addAction(action);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_removeAction(btActionInterface * action)
	static int _bind_base_removeAction(lua_State *L) {
		if (!_lg_typecheck_base_removeAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_removeAction(btActionInterface * action) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_removeAction(btActionInterface * action)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* action=(Luna< btActionInterface >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_removeAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::removeAction(action);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_base_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::removeCollisionObject(collisionObject);

		return 0;
	}

	// void btSimpleDynamicsWorld::base_updateAabbs()
	static int _bind_base_updateAabbs(lua_State *L) {
		if (!_lg_typecheck_base_updateAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_updateAabbs() function, expected prototype:\nvoid btSimpleDynamicsWorld::base_updateAabbs()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_updateAabbs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::updateAabbs();

		return 0;
	}

	// void btSimpleDynamicsWorld::base_synchronizeMotionStates()
	static int _bind_base_synchronizeMotionStates(lua_State *L) {
		if (!_lg_typecheck_base_synchronizeMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_synchronizeMotionStates() function, expected prototype:\nvoid btSimpleDynamicsWorld::base_synchronizeMotionStates()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_synchronizeMotionStates(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::synchronizeMotionStates();

		return 0;
	}

	// void btSimpleDynamicsWorld::base_setConstraintSolver(btConstraintSolver * solver)
	static int _bind_base_setConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_base_setConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_setConstraintSolver(btConstraintSolver * solver) function, expected prototype:\nvoid btSimpleDynamicsWorld::base_setConstraintSolver(btConstraintSolver * solver)\nClass arguments details:\narg 1 ID = 53256621\n");
		}

		btConstraintSolver* solver=(Luna< btConstraintSolver >::check(L,2));

		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_setConstraintSolver(btConstraintSolver *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::setConstraintSolver(solver);

		return 0;
	}

	// btConstraintSolver * btSimpleDynamicsWorld::base_getConstraintSolver()
	static int _bind_base_getConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_base_getConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSolver * btSimpleDynamicsWorld::base_getConstraintSolver() function, expected prototype:\nbtConstraintSolver * btSimpleDynamicsWorld::base_getConstraintSolver()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConstraintSolver * btSimpleDynamicsWorld::base_getConstraintSolver(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btConstraintSolver * lret = self->btSimpleDynamicsWorld::getConstraintSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConstraintSolver >::push(L,lret,false);

		return 1;
	}

	// btDynamicsWorldType btSimpleDynamicsWorld::base_getWorldType() const
	static int _bind_base_getWorldType(lua_State *L) {
		if (!_lg_typecheck_base_getWorldType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDynamicsWorldType btSimpleDynamicsWorld::base_getWorldType() const function, expected prototype:\nbtDynamicsWorldType btSimpleDynamicsWorld::base_getWorldType() const\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDynamicsWorldType btSimpleDynamicsWorld::base_getWorldType() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btDynamicsWorldType lret = self->btSimpleDynamicsWorld::getWorldType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSimpleDynamicsWorld::base_clearForces()
	static int _bind_base_clearForces(lua_State *L) {
		if (!_lg_typecheck_base_clearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::base_clearForces() function, expected prototype:\nvoid btSimpleDynamicsWorld::base_clearForces()\nClass arguments details:\n");
		}


		btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::base_clearForces(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btSimpleDynamicsWorld::clearForces();

		return 0;
	}


	// Operator binds:

};

btSimpleDynamicsWorld* LunaTraits< btSimpleDynamicsWorld >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSimpleDynamicsWorld::_bind_ctor(L);
}

void LunaTraits< btSimpleDynamicsWorld >::_bind_dtor(btSimpleDynamicsWorld* obj) {
	delete obj;
}

const char LunaTraits< btSimpleDynamicsWorld >::className[] = "btSimpleDynamicsWorld";
const char LunaTraits< btSimpleDynamicsWorld >::fullName[] = "btSimpleDynamicsWorld";
const char LunaTraits< btSimpleDynamicsWorld >::moduleName[] = "bullet";
const char* LunaTraits< btSimpleDynamicsWorld >::parents[] = {"bullet.btDynamicsWorld", 0};
const int LunaTraits< btSimpleDynamicsWorld >::hash = 3312744;
const int LunaTraits< btSimpleDynamicsWorld >::uniqueIDs[] = {62162664,0};

luna_RegType LunaTraits< btSimpleDynamicsWorld >::methods[] = {
	{"stepSimulation", &luna_wrapper_btSimpleDynamicsWorld::_bind_stepSimulation},
	{"setGravity", &luna_wrapper_btSimpleDynamicsWorld::_bind_setGravity},
	{"getGravity", &luna_wrapper_btSimpleDynamicsWorld::_bind_getGravity},
	{"addRigidBody", &luna_wrapper_btSimpleDynamicsWorld::_bind_addRigidBody},
	{"removeRigidBody", &luna_wrapper_btSimpleDynamicsWorld::_bind_removeRigidBody},
	{"debugDrawWorld", &luna_wrapper_btSimpleDynamicsWorld::_bind_debugDrawWorld},
	{"addAction", &luna_wrapper_btSimpleDynamicsWorld::_bind_addAction},
	{"removeAction", &luna_wrapper_btSimpleDynamicsWorld::_bind_removeAction},
	{"removeCollisionObject", &luna_wrapper_btSimpleDynamicsWorld::_bind_removeCollisionObject},
	{"updateAabbs", &luna_wrapper_btSimpleDynamicsWorld::_bind_updateAabbs},
	{"synchronizeMotionStates", &luna_wrapper_btSimpleDynamicsWorld::_bind_synchronizeMotionStates},
	{"setConstraintSolver", &luna_wrapper_btSimpleDynamicsWorld::_bind_setConstraintSolver},
	{"getConstraintSolver", &luna_wrapper_btSimpleDynamicsWorld::_bind_getConstraintSolver},
	{"getWorldType", &luna_wrapper_btSimpleDynamicsWorld::_bind_getWorldType},
	{"clearForces", &luna_wrapper_btSimpleDynamicsWorld::_bind_clearForces},
	{"base_computeOverlappingPairs", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_computeOverlappingPairs},
	{"base_setDebugDrawer", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_setDebugDrawer},
	{"base_getDebugDrawer", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_getDebugDrawer},
	{"base_debugDrawObject", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_debugDrawObject},
	{"base_rayTest", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_rayTest},
	{"base_addCollisionObject", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_addCollisionObject},
	{"base_performDiscreteCollisionDetection", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_performDiscreteCollisionDetection},
	{"base_addConstraint", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_addConstraint},
	{"base_removeConstraint", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_removeConstraint},
	{"base_getNumConstraints", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_getNumConstraints},
	{"base_getConstraint", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_getConstraint},
	{"base_addVehicle", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_addVehicle},
	{"base_removeVehicle", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_removeVehicle},
	{"base_addCharacter", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_addCharacter},
	{"base_removeCharacter", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_removeCharacter},
	{"base_stepSimulation", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_stepSimulation},
	{"base_setGravity", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_setGravity},
	{"base_getGravity", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_getGravity},
	{"base_addRigidBody", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_addRigidBody},
	{"base_removeRigidBody", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_removeRigidBody},
	{"base_debugDrawWorld", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_debugDrawWorld},
	{"base_addAction", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_addAction},
	{"base_removeAction", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_removeAction},
	{"base_removeCollisionObject", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_removeCollisionObject},
	{"base_updateAabbs", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_updateAabbs},
	{"base_synchronizeMotionStates", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_synchronizeMotionStates},
	{"base_setConstraintSolver", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_setConstraintSolver},
	{"base_getConstraintSolver", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_getConstraintSolver},
	{"base_getWorldType", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_getWorldType},
	{"base_clearForces", &luna_wrapper_btSimpleDynamicsWorld::_bind_base_clearForces},
	{"__eq", &luna_wrapper_btSimpleDynamicsWorld::_bind___eq},
	{"getTable", &luna_wrapper_btSimpleDynamicsWorld::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSimpleDynamicsWorld >::converters[] = {
	{"btCollisionWorld", &luna_wrapper_btSimpleDynamicsWorld::_cast_from_btCollisionWorld},
	{0,0}
};

luna_RegEnumType LunaTraits< btSimpleDynamicsWorld >::enumValues[] = {
	{0,0}
};


