#ifndef _WRAPPERS_WRAPPER_BTDISCRETEDYNAMICSWORLD_H_
#define _WRAPPERS_WRAPPER_BTDISCRETEDYNAMICSWORLD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>

class wrapper_btDiscreteDynamicsWorld : public btDiscreteDynamicsWorld, public luna_wrapper_base {

public:
		

	~wrapper_btDiscreteDynamicsWorld() {
		logDEBUG3("Calling delete function for wrapper btDiscreteDynamicsWorld");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDiscreteDynamicsWorld*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDiscreteDynamicsWorld(lua_State* L, lua_Table* dum, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration) 
		: btDiscreteDynamicsWorld(dispatcher, pairCache, constraintSolver, collisionConfiguration), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void btDiscreteDynamicsWorld::predictUnconstraintMotion(float timeStep)
	void predictUnconstraintMotion(float timeStep) {
		if(_obj.pushFunction("predictUnconstraintMotion")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::predictUnconstraintMotion(timeStep);
	};

	// void btDiscreteDynamicsWorld::integrateTransforms(float timeStep)
	void integrateTransforms(float timeStep) {
		if(_obj.pushFunction("integrateTransforms")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::integrateTransforms(timeStep);
	};

	// void btDiscreteDynamicsWorld::calculateSimulationIslands()
	void calculateSimulationIslands() {
		if(_obj.pushFunction("calculateSimulationIslands")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::calculateSimulationIslands();
	};

	// void btDiscreteDynamicsWorld::solveConstraints(btContactSolverInfo & solverInfo)
	void solveConstraints(btContactSolverInfo & solverInfo) {
		if(_obj.pushFunction("solveConstraints")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(&solverInfo);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::solveConstraints(solverInfo);
	};

	// void btDiscreteDynamicsWorld::internalSingleStepSimulation(float timeStep)
	void internalSingleStepSimulation(float timeStep) {
		if(_obj.pushFunction("internalSingleStepSimulation")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::internalSingleStepSimulation(timeStep);
	};

	// void btDiscreteDynamicsWorld::saveKinematicState(float timeStep)
	void saveKinematicState(float timeStep) {
		if(_obj.pushFunction("saveKinematicState")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::saveKinematicState(timeStep);
	};

public:
	// Public virtual methods:
	// void btCollisionWorld::updateAabbs()
	void updateAabbs() {
		if(_obj.pushFunction("updateAabbs")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::updateAabbs();
	};

	// void btCollisionWorld::computeOverlappingPairs()
	void computeOverlappingPairs() {
		if(_obj.pushFunction("computeOverlappingPairs")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::computeOverlappingPairs();
	};

	// void btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer)
	void setDebugDrawer(btIDebugDraw * debugDrawer) {
		if(_obj.pushFunction("setDebugDrawer")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(debugDrawer);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::setDebugDrawer(debugDrawer);
	};

	// btIDebugDraw * btCollisionWorld::getDebugDrawer()
	btIDebugDraw * getDebugDrawer() {
		if(_obj.pushFunction("getDebugDrawer")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<btIDebugDraw*>());
		}

		return btDiscreteDynamicsWorld::getDebugDrawer();
	};

	// void btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	void debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) {
		if(_obj.pushFunction("debugDrawObject")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(&worldTransform);
			_obj.pushArg(shape);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::debugDrawObject(worldTransform, shape, color);
	};

	// void btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(&rayFromWorld);
			_obj.pushArg(&rayToWorld);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);
	};

	// void btCollisionWorld::performDiscreteCollisionDetection()
	void performDiscreteCollisionDetection() {
		if(_obj.pushFunction("performDiscreteCollisionDetection")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::performDiscreteCollisionDetection();
	};

	// int btDiscreteDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	int stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) {
		if(_obj.pushFunction("stepSimulation")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			_obj.pushArg(maxSubSteps);
			_obj.pushArg(fixedTimeStep);
			return (_obj.callFunction<int>());
		}

		return btDiscreteDynamicsWorld::stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
	};

	// void btDiscreteDynamicsWorld::synchronizeMotionStates()
	void synchronizeMotionStates() {
		if(_obj.pushFunction("synchronizeMotionStates")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::synchronizeMotionStates();
	};

	// void btDiscreteDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	void addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) {
		if(_obj.pushFunction("addConstraint")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(constraint);
			_obj.pushArg(disableCollisionsBetweenLinkedBodies);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addConstraint(constraint, disableCollisionsBetweenLinkedBodies);
	};

	// void btDiscreteDynamicsWorld::removeConstraint(btTypedConstraint * constraint)
	void removeConstraint(btTypedConstraint * constraint) {
		if(_obj.pushFunction("removeConstraint")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(constraint);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::removeConstraint(constraint);
	};

	// void btDiscreteDynamicsWorld::addAction(btActionInterface * arg1)
	void addAction(btActionInterface * arg1) {
		if(_obj.pushFunction("addAction")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addAction(arg1);
	};

	// void btDiscreteDynamicsWorld::removeAction(btActionInterface * arg1)
	void removeAction(btActionInterface * arg1) {
		if(_obj.pushFunction("removeAction")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::removeAction(arg1);
	};

	// void btDiscreteDynamicsWorld::setGravity(const btVector3 & gravity)
	void setGravity(const btVector3 & gravity) {
		if(_obj.pushFunction("setGravity")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(&gravity);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::setGravity(gravity);
	};

	// btVector3 btDiscreteDynamicsWorld::getGravity() const
	btVector3 getGravity() const {
		if(_obj.pushFunction("getGravity")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btDiscreteDynamicsWorld::getGravity();
	};

	// void btDiscreteDynamicsWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter)
	void addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::StaticFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter) {
		if(_obj.pushFunction("addCollisionObject")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(collisionObject);
			_obj.pushArg(collisionFilterGroup);
			_obj.pushArg(collisionFilterMask);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);
	};

	// void btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body)
	void addRigidBody(btRigidBody * body) {
		if(_obj.pushFunction("addRigidBody")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(body);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addRigidBody(body);
	};

	// void btDiscreteDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	void addRigidBody(btRigidBody * body, short group, short mask) {
		if(_obj.pushFunction("addRigidBody")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(body);
			_obj.pushArg(group);
			_obj.pushArg(mask);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addRigidBody(body, group, mask);
	};

	// void btDiscreteDynamicsWorld::removeRigidBody(btRigidBody * body)
	void removeRigidBody(btRigidBody * body) {
		if(_obj.pushFunction("removeRigidBody")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(body);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::removeRigidBody(body);
	};

	// void btDiscreteDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject)
	void removeCollisionObject(btCollisionObject * collisionObject) {
		if(_obj.pushFunction("removeCollisionObject")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(collisionObject);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::removeCollisionObject(collisionObject);
	};

	// void btDiscreteDynamicsWorld::debugDrawWorld()
	void debugDrawWorld() {
		if(_obj.pushFunction("debugDrawWorld")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::debugDrawWorld();
	};

	// void btDiscreteDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	void setConstraintSolver(btConstraintSolver * solver) {
		if(_obj.pushFunction("setConstraintSolver")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(solver);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::setConstraintSolver(solver);
	};

	// btConstraintSolver * btDiscreteDynamicsWorld::getConstraintSolver()
	btConstraintSolver * getConstraintSolver() {
		if(_obj.pushFunction("getConstraintSolver")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<btConstraintSolver*>());
		}

		return btDiscreteDynamicsWorld::getConstraintSolver();
	};

	// int btDiscreteDynamicsWorld::getNumConstraints() const
	int getNumConstraints() const {
		if(_obj.pushFunction("getNumConstraints")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<int>());
		}

		return btDiscreteDynamicsWorld::getNumConstraints();
	};

	// btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index)
	btTypedConstraint * getConstraint(int index) {
		if(_obj.pushFunction("getConstraint")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btTypedConstraint*>());
		}

		return btDiscreteDynamicsWorld::getConstraint(index);
	};

	// const btTypedConstraint * btDiscreteDynamicsWorld::getConstraint(int index) const
	const btTypedConstraint * getConstraint(int index) const {
		if(_obj.pushFunction("getConstraint")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btTypedConstraint*>());
		}

		return btDiscreteDynamicsWorld::getConstraint(index);
	};

	// btDynamicsWorldType btDiscreteDynamicsWorld::getWorldType() const
	btDynamicsWorldType getWorldType() const {
		if(_obj.pushFunction("getWorldType")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (btDynamicsWorldType)(_obj.callFunction<int>());
		}

		return btDiscreteDynamicsWorld::getWorldType();
	};

	// void btDiscreteDynamicsWorld::clearForces()
	void clearForces() {
		if(_obj.pushFunction("clearForces")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::clearForces();
	};

	// void btDiscreteDynamicsWorld::applyGravity()
	void applyGravity() {
		if(_obj.pushFunction("applyGravity")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::applyGravity();
	};

	// void btDiscreteDynamicsWorld::setNumTasks(int numTasks)
	void setNumTasks(int numTasks) {
		if(_obj.pushFunction("setNumTasks")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(numTasks);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::setNumTasks(numTasks);
	};

	// void btDiscreteDynamicsWorld::updateVehicles(float timeStep)
	void updateVehicles(float timeStep) {
		if(_obj.pushFunction("updateVehicles")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::updateVehicles(timeStep);
	};

	// void btDiscreteDynamicsWorld::addVehicle(btActionInterface * vehicle)
	void addVehicle(btActionInterface * vehicle) {
		if(_obj.pushFunction("addVehicle")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(vehicle);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addVehicle(vehicle);
	};

	// void btDiscreteDynamicsWorld::removeVehicle(btActionInterface * vehicle)
	void removeVehicle(btActionInterface * vehicle) {
		if(_obj.pushFunction("removeVehicle")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(vehicle);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::removeVehicle(vehicle);
	};

	// void btDiscreteDynamicsWorld::addCharacter(btActionInterface * character)
	void addCharacter(btActionInterface * character) {
		if(_obj.pushFunction("addCharacter")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(character);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::addCharacter(character);
	};

	// void btDiscreteDynamicsWorld::removeCharacter(btActionInterface * character)
	void removeCharacter(btActionInterface * character) {
		if(_obj.pushFunction("removeCharacter")) {
			_obj.pushArg((btDiscreteDynamicsWorld*)this);
			_obj.pushArg(character);
			return (_obj.callFunction<void>());
		}

		return btDiscreteDynamicsWorld::removeCharacter(character);
	};


	// Protected non-virtual methods:
	// void btDiscreteDynamicsWorld::updateActivationState(float timeStep)
	void public_updateActivationState(float timeStep) {
		return btDiscreteDynamicsWorld::updateActivationState(timeStep);
	};

	// void btDiscreteDynamicsWorld::updateActions(float timeStep)
	void public_updateActions(float timeStep) {
		return btDiscreteDynamicsWorld::updateActions(timeStep);
	};

	// void btDiscreteDynamicsWorld::startProfiling(float timeStep)
	void public_startProfiling(float timeStep) {
		return btDiscreteDynamicsWorld::startProfiling(timeStep);
	};

	// void btDiscreteDynamicsWorld::createPredictiveContacts(float timeStep)
	void public_createPredictiveContacts(float timeStep) {
		return btDiscreteDynamicsWorld::createPredictiveContacts(timeStep);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_updateActivationState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_updateActions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_startProfiling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createPredictiveContacts(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btDiscreteDynamicsWorld::public_updateActivationState(float timeStep)
	static int _bind_public_updateActivationState(lua_State *L) {
		if (!_lg_typecheck_public_updateActivationState(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::public_updateActivationState(float timeStep) function, expected prototype:\nvoid btDiscreteDynamicsWorld::public_updateActivationState(float timeStep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float timeStep=(float)lua_tonumber(L,2);

		wrapper_btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< wrapper_btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::public_updateActivationState(float). Got : '%s'\n%s",typeid(Luna< btCollisionWorld >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_updateActivationState(timeStep);

		return 0;
	}

	// void btDiscreteDynamicsWorld::public_updateActions(float timeStep)
	static int _bind_public_updateActions(lua_State *L) {
		if (!_lg_typecheck_public_updateActions(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::public_updateActions(float timeStep) function, expected prototype:\nvoid btDiscreteDynamicsWorld::public_updateActions(float timeStep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float timeStep=(float)lua_tonumber(L,2);

		wrapper_btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< wrapper_btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::public_updateActions(float). Got : '%s'\n%s",typeid(Luna< btCollisionWorld >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_updateActions(timeStep);

		return 0;
	}

	// void btDiscreteDynamicsWorld::public_startProfiling(float timeStep)
	static int _bind_public_startProfiling(lua_State *L) {
		if (!_lg_typecheck_public_startProfiling(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::public_startProfiling(float timeStep) function, expected prototype:\nvoid btDiscreteDynamicsWorld::public_startProfiling(float timeStep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float timeStep=(float)lua_tonumber(L,2);

		wrapper_btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< wrapper_btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::public_startProfiling(float). Got : '%s'\n%s",typeid(Luna< btCollisionWorld >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_startProfiling(timeStep);

		return 0;
	}

	// void btDiscreteDynamicsWorld::public_createPredictiveContacts(float timeStep)
	static int _bind_public_createPredictiveContacts(lua_State *L) {
		if (!_lg_typecheck_public_createPredictiveContacts(L)) {
			luaL_error(L, "luna typecheck failed in void btDiscreteDynamicsWorld::public_createPredictiveContacts(float timeStep) function, expected prototype:\nvoid btDiscreteDynamicsWorld::public_createPredictiveContacts(float timeStep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float timeStep=(float)lua_tonumber(L,2);

		wrapper_btDiscreteDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< wrapper_btDiscreteDynamicsWorld >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDiscreteDynamicsWorld::public_createPredictiveContacts(float). Got : '%s'\n%s",typeid(Luna< btCollisionWorld >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_createPredictiveContacts(timeStep);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"updateActivationState",_bind_public_updateActivationState},
		{"updateActions",_bind_public_updateActions},
		{"startProfiling",_bind_public_startProfiling},
		{"createPredictiveContacts",_bind_public_createPredictiveContacts},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

