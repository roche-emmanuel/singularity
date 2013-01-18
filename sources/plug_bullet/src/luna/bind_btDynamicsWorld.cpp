#include <plug_common.h>

#include <luna/wrappers/wrapper_btDynamicsWorld.h>

class luna_wrapper_btDynamicsWorld {
public:
	typedef Luna< btDynamicsWorld > luna_t;

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

		btDynamicsWorld* self= (btDynamicsWorld*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDynamicsWorld >::push(L,self,false);
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
		//btDynamicsWorld* ptr= dynamic_cast< btDynamicsWorld* >(Luna< btCollisionWorld >::check(L,1));
		btDynamicsWorld* ptr= luna_caster< btCollisionWorld, btDynamicsWorld >::cast(Luna< btCollisionWorld >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDynamicsWorld >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71097681)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25261840)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31901746)) ) return false;
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

	inline static bool _lg_typecheck_debugDrawWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_synchronizeMotionStates(lua_State *L) {
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

	inline static bool _lg_typecheck_setWorldUserInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldUserInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSolverInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_addCollisionObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeCollisionObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85758361)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDynamicsWorld::btDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * broadphase, btCollisionConfiguration * collisionConfiguration)
	static btDynamicsWorld* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDynamicsWorld::btDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * broadphase, btCollisionConfiguration * collisionConfiguration) function, expected prototype:\nbtDynamicsWorld::btDynamicsWorld(lua_Table * data, btDispatcher * dispatcher, btBroadphaseInterface * broadphase, btCollisionConfiguration * collisionConfiguration)\nClass arguments details:\narg 2 ID = 71097681\narg 3 ID = 25261840\narg 4 ID = 31901746\n");
		}

		btDispatcher* dispatcher=(Luna< btDispatcher >::check(L,2));
		btBroadphaseInterface* broadphase=(Luna< btBroadphaseInterface >::check(L,3));
		btCollisionConfiguration* collisionConfiguration=(Luna< btCollisionConfiguration >::check(L,4));

		return new wrapper_btDynamicsWorld(L,NULL, dispatcher, broadphase, collisionConfiguration);
	}


	// Function binds:
	// int btDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	static int _bind_stepSimulation(lua_State *L) {
		if (!_lg_typecheck_stepSimulation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) function, expected prototype:\nint btDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float timeStep=(float)lua_tonumber(L,2);
		int maxSubSteps=luatop>2 ? (int)lua_tointeger(L,3) : 1;
		float fixedTimeStep=luatop>3 ? (float)lua_tonumber(L,4) : float (1.)/ float (60.);

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDynamicsWorld::stepSimulation(float, int, float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDynamicsWorld::debugDrawWorld()
	static int _bind_debugDrawWorld(lua_State *L) {
		if (!_lg_typecheck_debugDrawWorld(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::debugDrawWorld() function, expected prototype:\nvoid btDynamicsWorld::debugDrawWorld()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::debugDrawWorld(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->debugDrawWorld();

		return 0;
	}

	// void btDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	static int _bind_addConstraint(lua_State *L) {
		if (!_lg_typecheck_addConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) function, expected prototype:\nvoid btDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));
		bool disableCollisionsBetweenLinkedBodies=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::addConstraint(btTypedConstraint *, bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addConstraint(constraint, disableCollisionsBetweenLinkedBodies);

		return 0;
	}

	// void btDynamicsWorld::removeConstraint(btTypedConstraint * constraint)
	static int _bind_removeConstraint(lua_State *L) {
		if (!_lg_typecheck_removeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::removeConstraint(btTypedConstraint * constraint) function, expected prototype:\nvoid btDynamicsWorld::removeConstraint(btTypedConstraint * constraint)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::removeConstraint(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeConstraint(constraint);

		return 0;
	}

	// void btDynamicsWorld::addAction(btActionInterface * action)
	static int _bind_addAction(lua_State *L) {
		if (!_lg_typecheck_addAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::addAction(btActionInterface * action) function, expected prototype:\nvoid btDynamicsWorld::addAction(btActionInterface * action)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* action=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::addAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addAction(action);

		return 0;
	}

	// void btDynamicsWorld::removeAction(btActionInterface * action)
	static int _bind_removeAction(lua_State *L) {
		if (!_lg_typecheck_removeAction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::removeAction(btActionInterface * action) function, expected prototype:\nvoid btDynamicsWorld::removeAction(btActionInterface * action)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* action=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::removeAction(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeAction(action);

		return 0;
	}

	// void btDynamicsWorld::setGravity(const btVector3 & gravity)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::setGravity(const btVector3 & gravity) function, expected prototype:\nvoid btDynamicsWorld::setGravity(const btVector3 & gravity)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* gravity_ptr=(Luna< btVector3 >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in btDynamicsWorld::setGravity function");
		}
		const btVector3 & gravity=*gravity_ptr;

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::setGravity(const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setGravity(gravity);

		return 0;
	}

	// btVector3 btDynamicsWorld::getGravity() const
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btDynamicsWorld::getGravity() const function, expected prototype:\nbtVector3 btDynamicsWorld::getGravity() const\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btDynamicsWorld::getGravity() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btVector3 stack_lret = self->getGravity();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// void btDynamicsWorld::synchronizeMotionStates()
	static int _bind_synchronizeMotionStates(lua_State *L) {
		if (!_lg_typecheck_synchronizeMotionStates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::synchronizeMotionStates() function, expected prototype:\nvoid btDynamicsWorld::synchronizeMotionStates()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::synchronizeMotionStates(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->synchronizeMotionStates();

		return 0;
	}

	// void btDynamicsWorld::addRigidBody(btRigidBody * body)
	static int _bind_addRigidBody_overload_1(lua_State *L) {
		if (!_lg_typecheck_addRigidBody_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::addRigidBody(btRigidBody * body) function, expected prototype:\nvoid btDynamicsWorld::addRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::addRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addRigidBody(body);

		return 0;
	}

	// void btDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	static int _bind_addRigidBody_overload_2(lua_State *L) {
		if (!_lg_typecheck_addRigidBody_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask) function, expected prototype:\nvoid btDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));
		short group=(short)lua_tointeger(L,3);
		short mask=(short)lua_tointeger(L,4);

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::addRigidBody(btRigidBody *, short, short). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addRigidBody(body, group, mask);

		return 0;
	}

	// Overload binder for btDynamicsWorld::addRigidBody
	static int _bind_addRigidBody(lua_State *L) {
		if (_lg_typecheck_addRigidBody_overload_1(L)) return _bind_addRigidBody_overload_1(L);
		if (_lg_typecheck_addRigidBody_overload_2(L)) return _bind_addRigidBody_overload_2(L);

		luaL_error(L, "error in function addRigidBody, cannot match any of the overloads for function addRigidBody:\n  addRigidBody(btRigidBody *)\n  addRigidBody(btRigidBody *, short, short)\n");
		return 0;
	}

	// void btDynamicsWorld::removeRigidBody(btRigidBody * body)
	static int _bind_removeRigidBody(lua_State *L) {
		if (!_lg_typecheck_removeRigidBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::removeRigidBody(btRigidBody * body) function, expected prototype:\nvoid btDynamicsWorld::removeRigidBody(btRigidBody * body)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btRigidBody* body=(Luna< btCollisionObject >::checkSubType< btRigidBody >(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::removeRigidBody(btRigidBody *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeRigidBody(body);

		return 0;
	}

	// void btDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	static int _bind_setConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_setConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::setConstraintSolver(btConstraintSolver * solver) function, expected prototype:\nvoid btDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)\nClass arguments details:\narg 1 ID = 53256621\n");
		}

		btConstraintSolver* solver=(Luna< btConstraintSolver >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::setConstraintSolver(btConstraintSolver *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setConstraintSolver(solver);

		return 0;
	}

	// btConstraintSolver * btDynamicsWorld::getConstraintSolver()
	static int _bind_getConstraintSolver(lua_State *L) {
		if (!_lg_typecheck_getConstraintSolver(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConstraintSolver * btDynamicsWorld::getConstraintSolver() function, expected prototype:\nbtConstraintSolver * btDynamicsWorld::getConstraintSolver()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btConstraintSolver * btDynamicsWorld::getConstraintSolver(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btConstraintSolver * lret = self->getConstraintSolver();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btConstraintSolver >::push(L,lret,false);

		return 1;
	}

	// int btDynamicsWorld::getNumConstraints() const
	static int _bind_getNumConstraints(lua_State *L) {
		if (!_lg_typecheck_getNumConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDynamicsWorld::getNumConstraints() const function, expected prototype:\nint btDynamicsWorld::getNumConstraints() const\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDynamicsWorld::getNumConstraints() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->getNumConstraints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTypedConstraint * btDynamicsWorld::getConstraint(int index)
	static int _bind_getConstraint_overload_1(lua_State *L) {
		if (!_lg_typecheck_getConstraint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint * btDynamicsWorld::getConstraint(int index) function, expected prototype:\nbtTypedConstraint * btDynamicsWorld::getConstraint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraint * btDynamicsWorld::getConstraint(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btTypedConstraint * lret = self->getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// const btTypedConstraint * btDynamicsWorld::getConstraint(int index) const
	static int _bind_getConstraint_overload_2(lua_State *L) {
		if (!_lg_typecheck_getConstraint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTypedConstraint * btDynamicsWorld::getConstraint(int index) const function, expected prototype:\nconst btTypedConstraint * btDynamicsWorld::getConstraint(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTypedConstraint * btDynamicsWorld::getConstraint(int) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btTypedConstraint * lret = self->getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDynamicsWorld::getConstraint
	static int _bind_getConstraint(lua_State *L) {
		if (_lg_typecheck_getConstraint_overload_1(L)) return _bind_getConstraint_overload_1(L);
		if (_lg_typecheck_getConstraint_overload_2(L)) return _bind_getConstraint_overload_2(L);

		luaL_error(L, "error in function getConstraint, cannot match any of the overloads for function getConstraint:\n  getConstraint(int)\n  getConstraint(int)\n");
		return 0;
	}

	// btDynamicsWorldType btDynamicsWorld::getWorldType() const
	static int _bind_getWorldType(lua_State *L) {
		if (!_lg_typecheck_getWorldType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDynamicsWorldType btDynamicsWorld::getWorldType() const function, expected prototype:\nbtDynamicsWorldType btDynamicsWorld::getWorldType() const\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDynamicsWorldType btDynamicsWorld::getWorldType() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btDynamicsWorldType lret = self->getWorldType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDynamicsWorld::clearForces()
	static int _bind_clearForces(lua_State *L) {
		if (!_lg_typecheck_clearForces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::clearForces() function, expected prototype:\nvoid btDynamicsWorld::clearForces()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::clearForces(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->clearForces();

		return 0;
	}

	// void btDynamicsWorld::setWorldUserInfo(void * worldUserInfo)
	static int _bind_setWorldUserInfo(lua_State *L) {
		if (!_lg_typecheck_setWorldUserInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::setWorldUserInfo(void * worldUserInfo) function, expected prototype:\nvoid btDynamicsWorld::setWorldUserInfo(void * worldUserInfo)\nClass arguments details:\n");
		}

		void* worldUserInfo=(Luna< void >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::setWorldUserInfo(void *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->setWorldUserInfo(worldUserInfo);

		return 0;
	}

	// void * btDynamicsWorld::getWorldUserInfo() const
	static int _bind_getWorldUserInfo(lua_State *L) {
		if (!_lg_typecheck_getWorldUserInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDynamicsWorld::getWorldUserInfo() const function, expected prototype:\nvoid * btDynamicsWorld::getWorldUserInfo() const\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDynamicsWorld::getWorldUserInfo() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		void * lret = self->getWorldUserInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// btContactSolverInfo & btDynamicsWorld::getSolverInfo()
	static int _bind_getSolverInfo(lua_State *L) {
		if (!_lg_typecheck_getSolverInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btContactSolverInfo & btDynamicsWorld::getSolverInfo() function, expected prototype:\nbtContactSolverInfo & btDynamicsWorld::getSolverInfo()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btContactSolverInfo & btDynamicsWorld::getSolverInfo(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btContactSolverInfo* lret = &self->getSolverInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btContactSolverInfo >::push(L,lret,false);

		return 1;
	}

	// void btDynamicsWorld::addVehicle(btActionInterface * vehicle)
	static int _bind_addVehicle(lua_State *L) {
		if (!_lg_typecheck_addVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::addVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDynamicsWorld::addVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::addVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addVehicle(vehicle);

		return 0;
	}

	// void btDynamicsWorld::removeVehicle(btActionInterface * vehicle)
	static int _bind_removeVehicle(lua_State *L) {
		if (!_lg_typecheck_removeVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::removeVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDynamicsWorld::removeVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::removeVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeVehicle(vehicle);

		return 0;
	}

	// void btDynamicsWorld::addCharacter(btActionInterface * character)
	static int _bind_addCharacter(lua_State *L) {
		if (!_lg_typecheck_addCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::addCharacter(btActionInterface * character) function, expected prototype:\nvoid btDynamicsWorld::addCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::addCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->addCharacter(character);

		return 0;
	}

	// void btDynamicsWorld::removeCharacter(btActionInterface * character)
	static int _bind_removeCharacter(lua_State *L) {
		if (!_lg_typecheck_removeCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::removeCharacter(btActionInterface * character) function, expected prototype:\nvoid btDynamicsWorld::removeCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::removeCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->removeCharacter(character);

		return 0;
	}

	// void btDynamicsWorld::base_updateAabbs()
	static int _bind_base_updateAabbs(lua_State *L) {
		if (!_lg_typecheck_base_updateAabbs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_updateAabbs() function, expected prototype:\nvoid btDynamicsWorld::base_updateAabbs()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_updateAabbs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::updateAabbs();

		return 0;
	}

	// void btDynamicsWorld::base_computeOverlappingPairs()
	static int _bind_base_computeOverlappingPairs(lua_State *L) {
		if (!_lg_typecheck_base_computeOverlappingPairs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_computeOverlappingPairs() function, expected prototype:\nvoid btDynamicsWorld::base_computeOverlappingPairs()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_computeOverlappingPairs(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::computeOverlappingPairs();

		return 0;
	}

	// void btDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)
	static int _bind_base_setDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_setDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer) function, expected prototype:\nvoid btDynamicsWorld::base_setDebugDrawer(btIDebugDraw * debugDrawer)\nClass arguments details:\narg 1 ID = 63441741\n");
		}

		btIDebugDraw* debugDrawer=(Luna< btIDebugDraw >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_setDebugDrawer(btIDebugDraw *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::setDebugDrawer(debugDrawer);

		return 0;
	}

	// btIDebugDraw * btDynamicsWorld::base_getDebugDrawer()
	static int _bind_base_getDebugDrawer(lua_State *L) {
		if (!_lg_typecheck_base_getDebugDrawer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw * btDynamicsWorld::base_getDebugDrawer() function, expected prototype:\nbtIDebugDraw * btDynamicsWorld::base_getDebugDrawer()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btIDebugDraw * btDynamicsWorld::base_getDebugDrawer(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btIDebugDraw * lret = self->btDynamicsWorld::getDebugDrawer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btIDebugDraw >::push(L,lret,false);

		return 1;
	}

	// void btDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	static int _bind_base_debugDrawObject(lua_State *L) {
		if (!_lg_typecheck_base_debugDrawObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) function, expected prototype:\nvoid btDynamicsWorld::base_debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 58243831\narg 3 ID = 91544891\n");
		}

		const btTransform* worldTransform_ptr=(Luna< btTransform >::check(L,2));
		if( !worldTransform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldTransform in btDynamicsWorld::base_debugDrawObject function");
		}
		const btTransform & worldTransform=*worldTransform_ptr;
		const btCollisionShape* shape=(Luna< btCollisionShape >::check(L,3));
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btDynamicsWorld::base_debugDrawObject function");
		}
		const btVector3 & color=*color_ptr;

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_debugDrawObject(const btTransform &, const btCollisionShape *, const btVector3 &). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::debugDrawObject(worldTransform, shape, color);

		return 0;
	}

	// void btDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	static int _bind_base_rayTest(lua_State *L) {
		if (!_lg_typecheck_base_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const function, expected prototype:\nvoid btDynamicsWorld::base_rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 44790882\n");
		}

		const btVector3* rayFromWorld_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFromWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFromWorld in btDynamicsWorld::base_rayTest function");
		}
		const btVector3 & rayFromWorld=*rayFromWorld_ptr;
		const btVector3* rayToWorld_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayToWorld in btDynamicsWorld::base_rayTest function");
		}
		const btVector3 & rayToWorld=*rayToWorld_ptr;
		btCollisionWorld::RayResultCallback* resultCallback_ptr=(Luna< btCollisionWorld::RayResultCallback >::check(L,4));
		if( !resultCallback_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultCallback in btDynamicsWorld::base_rayTest function");
		}
		btCollisionWorld::RayResultCallback & resultCallback=*resultCallback_ptr;

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_rayTest(const btVector3 &, const btVector3 &, btCollisionWorld::RayResultCallback &) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);

		return 0;
	}

	// void btDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	static int _bind_base_addCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_addCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) function, expected prototype:\nvoid btDynamicsWorld::base_addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		int luatop = lua_gettop(L);

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));
		short int collisionFilterGroup=luatop>2 ? (short int)lua_tointeger(L,3) : btBroadphaseProxy::DefaultFilter;
		short int collisionFilterMask=luatop>3 ? (short int)lua_tointeger(L,4) : btBroadphaseProxy::AllFilter;

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_addCollisionObject(btCollisionObject *, short int, short int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);

		return 0;
	}

	// void btDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject)
	static int _bind_base_removeCollisionObject(lua_State *L) {
		if (!_lg_typecheck_base_removeCollisionObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject) function, expected prototype:\nvoid btDynamicsWorld::base_removeCollisionObject(btCollisionObject * collisionObject)\nClass arguments details:\narg 1 ID = 85758361\n");
		}

		btCollisionObject* collisionObject=(Luna< btCollisionObject >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_removeCollisionObject(btCollisionObject *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::removeCollisionObject(collisionObject);

		return 0;
	}

	// void btDynamicsWorld::base_performDiscreteCollisionDetection()
	static int _bind_base_performDiscreteCollisionDetection(lua_State *L) {
		if (!_lg_typecheck_base_performDiscreteCollisionDetection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_performDiscreteCollisionDetection() function, expected prototype:\nvoid btDynamicsWorld::base_performDiscreteCollisionDetection()\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_performDiscreteCollisionDetection(). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::performDiscreteCollisionDetection();

		return 0;
	}

	// void btDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	static int _bind_base_addConstraint(lua_State *L) {
		if (!_lg_typecheck_base_addConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) function, expected prototype:\nvoid btDynamicsWorld::base_addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		int luatop = lua_gettop(L);

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));
		bool disableCollisionsBetweenLinkedBodies=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_addConstraint(btTypedConstraint *, bool). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::addConstraint(constraint, disableCollisionsBetweenLinkedBodies);

		return 0;
	}

	// void btDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint)
	static int _bind_base_removeConstraint(lua_State *L) {
		if (!_lg_typecheck_base_removeConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint) function, expected prototype:\nvoid btDynamicsWorld::base_removeConstraint(btTypedConstraint * constraint)\nClass arguments details:\narg 1 ID = 66271199\n");
		}

		btTypedConstraint* constraint=(Luna< btTypedObject >::checkSubType< btTypedConstraint >(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_removeConstraint(btTypedConstraint *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::removeConstraint(constraint);

		return 0;
	}

	// int btDynamicsWorld::base_getNumConstraints() const
	static int _bind_base_getNumConstraints(lua_State *L) {
		if (!_lg_typecheck_base_getNumConstraints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDynamicsWorld::base_getNumConstraints() const function, expected prototype:\nint btDynamicsWorld::base_getNumConstraints() const\nClass arguments details:\n");
		}


		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDynamicsWorld::base_getNumConstraints() const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		int lret = self->btDynamicsWorld::getNumConstraints();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btTypedConstraint * btDynamicsWorld::base_getConstraint(int index)
	static int _bind_base_getConstraint_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getConstraint_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTypedConstraint * btDynamicsWorld::base_getConstraint(int index) function, expected prototype:\nbtTypedConstraint * btDynamicsWorld::base_getConstraint(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btTypedConstraint * btDynamicsWorld::base_getConstraint(int). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		btTypedConstraint * lret = self->btDynamicsWorld::getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// const btTypedConstraint * btDynamicsWorld::base_getConstraint(int index) const
	static int _bind_base_getConstraint_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getConstraint_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btTypedConstraint * btDynamicsWorld::base_getConstraint(int index) const function, expected prototype:\nconst btTypedConstraint * btDynamicsWorld::base_getConstraint(int index) const\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btTypedConstraint * btDynamicsWorld::base_getConstraint(int) const. Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		const btTypedConstraint * lret = self->btDynamicsWorld::getConstraint(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btTypedConstraint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btDynamicsWorld::base_getConstraint
	static int _bind_base_getConstraint(lua_State *L) {
		if (_lg_typecheck_base_getConstraint_overload_1(L)) return _bind_base_getConstraint_overload_1(L);
		if (_lg_typecheck_base_getConstraint_overload_2(L)) return _bind_base_getConstraint_overload_2(L);

		luaL_error(L, "error in function base_getConstraint, cannot match any of the overloads for function base_getConstraint:\n  base_getConstraint(int)\n  base_getConstraint(int)\n");
		return 0;
	}

	// void btDynamicsWorld::base_addVehicle(btActionInterface * vehicle)
	static int _bind_base_addVehicle(lua_State *L) {
		if (!_lg_typecheck_base_addVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_addVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDynamicsWorld::base_addVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_addVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::addVehicle(vehicle);

		return 0;
	}

	// void btDynamicsWorld::base_removeVehicle(btActionInterface * vehicle)
	static int _bind_base_removeVehicle(lua_State *L) {
		if (!_lg_typecheck_base_removeVehicle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_removeVehicle(btActionInterface * vehicle) function, expected prototype:\nvoid btDynamicsWorld::base_removeVehicle(btActionInterface * vehicle)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* vehicle=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_removeVehicle(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::removeVehicle(vehicle);

		return 0;
	}

	// void btDynamicsWorld::base_addCharacter(btActionInterface * character)
	static int _bind_base_addCharacter(lua_State *L) {
		if (!_lg_typecheck_base_addCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_addCharacter(btActionInterface * character) function, expected prototype:\nvoid btDynamicsWorld::base_addCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_addCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::addCharacter(character);

		return 0;
	}

	// void btDynamicsWorld::base_removeCharacter(btActionInterface * character)
	static int _bind_base_removeCharacter(lua_State *L) {
		if (!_lg_typecheck_base_removeCharacter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDynamicsWorld::base_removeCharacter(btActionInterface * character) function, expected prototype:\nvoid btDynamicsWorld::base_removeCharacter(btActionInterface * character)\nClass arguments details:\narg 1 ID = 91159321\n");
		}

		btActionInterface* character=(Luna< btActionInterface >::check(L,2));

		btDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< btDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDynamicsWorld::base_removeCharacter(btActionInterface *). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->btDynamicsWorld::removeCharacter(character);

		return 0;
	}


	// Operator binds:

};

btDynamicsWorld* LunaTraits< btDynamicsWorld >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDynamicsWorld::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int btDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	// void btDynamicsWorld::debugDrawWorld()
	// void btDynamicsWorld::addAction(btActionInterface * action)
	// void btDynamicsWorld::removeAction(btActionInterface * action)
	// void btDynamicsWorld::setGravity(const btVector3 & gravity)
	// btVector3 btDynamicsWorld::getGravity() const
	// void btDynamicsWorld::synchronizeMotionStates()
	// void btDynamicsWorld::addRigidBody(btRigidBody * body)
	// void btDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	// void btDynamicsWorld::removeRigidBody(btRigidBody * body)
	// void btDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	// btConstraintSolver * btDynamicsWorld::getConstraintSolver()
	// btDynamicsWorldType btDynamicsWorld::getWorldType() const
	// void btDynamicsWorld::clearForces()
}

void LunaTraits< btDynamicsWorld >::_bind_dtor(btDynamicsWorld* obj) {
	delete obj;
}

const char LunaTraits< btDynamicsWorld >::className[] = "btDynamicsWorld";
const char LunaTraits< btDynamicsWorld >::fullName[] = "btDynamicsWorld";
const char LunaTraits< btDynamicsWorld >::moduleName[] = "bullet";
const char* LunaTraits< btDynamicsWorld >::parents[] = {"bullet.btCollisionWorld", 0};
const int LunaTraits< btDynamicsWorld >::hash = 34619043;
const int LunaTraits< btDynamicsWorld >::uniqueIDs[] = {62162664,0};

luna_RegType LunaTraits< btDynamicsWorld >::methods[] = {
	{"stepSimulation", &luna_wrapper_btDynamicsWorld::_bind_stepSimulation},
	{"debugDrawWorld", &luna_wrapper_btDynamicsWorld::_bind_debugDrawWorld},
	{"addConstraint", &luna_wrapper_btDynamicsWorld::_bind_addConstraint},
	{"removeConstraint", &luna_wrapper_btDynamicsWorld::_bind_removeConstraint},
	{"addAction", &luna_wrapper_btDynamicsWorld::_bind_addAction},
	{"removeAction", &luna_wrapper_btDynamicsWorld::_bind_removeAction},
	{"setGravity", &luna_wrapper_btDynamicsWorld::_bind_setGravity},
	{"getGravity", &luna_wrapper_btDynamicsWorld::_bind_getGravity},
	{"synchronizeMotionStates", &luna_wrapper_btDynamicsWorld::_bind_synchronizeMotionStates},
	{"addRigidBody", &luna_wrapper_btDynamicsWorld::_bind_addRigidBody},
	{"removeRigidBody", &luna_wrapper_btDynamicsWorld::_bind_removeRigidBody},
	{"setConstraintSolver", &luna_wrapper_btDynamicsWorld::_bind_setConstraintSolver},
	{"getConstraintSolver", &luna_wrapper_btDynamicsWorld::_bind_getConstraintSolver},
	{"getNumConstraints", &luna_wrapper_btDynamicsWorld::_bind_getNumConstraints},
	{"getConstraint", &luna_wrapper_btDynamicsWorld::_bind_getConstraint},
	{"getWorldType", &luna_wrapper_btDynamicsWorld::_bind_getWorldType},
	{"clearForces", &luna_wrapper_btDynamicsWorld::_bind_clearForces},
	{"setWorldUserInfo", &luna_wrapper_btDynamicsWorld::_bind_setWorldUserInfo},
	{"getWorldUserInfo", &luna_wrapper_btDynamicsWorld::_bind_getWorldUserInfo},
	{"getSolverInfo", &luna_wrapper_btDynamicsWorld::_bind_getSolverInfo},
	{"addVehicle", &luna_wrapper_btDynamicsWorld::_bind_addVehicle},
	{"removeVehicle", &luna_wrapper_btDynamicsWorld::_bind_removeVehicle},
	{"addCharacter", &luna_wrapper_btDynamicsWorld::_bind_addCharacter},
	{"removeCharacter", &luna_wrapper_btDynamicsWorld::_bind_removeCharacter},
	{"base_updateAabbs", &luna_wrapper_btDynamicsWorld::_bind_base_updateAabbs},
	{"base_computeOverlappingPairs", &luna_wrapper_btDynamicsWorld::_bind_base_computeOverlappingPairs},
	{"base_setDebugDrawer", &luna_wrapper_btDynamicsWorld::_bind_base_setDebugDrawer},
	{"base_getDebugDrawer", &luna_wrapper_btDynamicsWorld::_bind_base_getDebugDrawer},
	{"base_debugDrawObject", &luna_wrapper_btDynamicsWorld::_bind_base_debugDrawObject},
	{"base_rayTest", &luna_wrapper_btDynamicsWorld::_bind_base_rayTest},
	{"base_addCollisionObject", &luna_wrapper_btDynamicsWorld::_bind_base_addCollisionObject},
	{"base_removeCollisionObject", &luna_wrapper_btDynamicsWorld::_bind_base_removeCollisionObject},
	{"base_performDiscreteCollisionDetection", &luna_wrapper_btDynamicsWorld::_bind_base_performDiscreteCollisionDetection},
	{"base_addConstraint", &luna_wrapper_btDynamicsWorld::_bind_base_addConstraint},
	{"base_removeConstraint", &luna_wrapper_btDynamicsWorld::_bind_base_removeConstraint},
	{"base_getNumConstraints", &luna_wrapper_btDynamicsWorld::_bind_base_getNumConstraints},
	{"base_getConstraint", &luna_wrapper_btDynamicsWorld::_bind_base_getConstraint},
	{"base_addVehicle", &luna_wrapper_btDynamicsWorld::_bind_base_addVehicle},
	{"base_removeVehicle", &luna_wrapper_btDynamicsWorld::_bind_base_removeVehicle},
	{"base_addCharacter", &luna_wrapper_btDynamicsWorld::_bind_base_addCharacter},
	{"base_removeCharacter", &luna_wrapper_btDynamicsWorld::_bind_base_removeCharacter},
	{"__eq", &luna_wrapper_btDynamicsWorld::_bind___eq},
	{"fromVoid", &luna_wrapper_btDynamicsWorld::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDynamicsWorld::_bind_asVoid},
	{"getTable", &luna_wrapper_btDynamicsWorld::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDynamicsWorld >::converters[] = {
	{"btCollisionWorld", &luna_wrapper_btDynamicsWorld::_cast_from_btCollisionWorld},
	{0,0}
};

luna_RegEnumType LunaTraits< btDynamicsWorld >::enumValues[] = {
	{0,0}
};


