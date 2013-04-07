#ifndef _WRAPPERS_WRAPPER_BTSIMPLEDYNAMICSWORLD_H_
#define _WRAPPERS_WRAPPER_BTSIMPLEDYNAMICSWORLD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <BulletDynamics/Dynamics/btSimpleDynamicsWorld.h>

class wrapper_btSimpleDynamicsWorld : public btSimpleDynamicsWorld, public luna_wrapper_base {

public:
		

	~wrapper_btSimpleDynamicsWorld() {
		logDEBUG3("Calling delete function for wrapper btSimpleDynamicsWorld");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSimpleDynamicsWorld*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSimpleDynamicsWorld(lua_State* L, lua_Table* dum, btDispatcher * dispatcher, btBroadphaseInterface * pairCache, btConstraintSolver * constraintSolver, btCollisionConfiguration * collisionConfiguration) 
		: btSimpleDynamicsWorld(dispatcher, pairCache, constraintSolver, collisionConfiguration), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionWorld::computeOverlappingPairs()
	void computeOverlappingPairs() {
		if(_obj.pushFunction("computeOverlappingPairs")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::computeOverlappingPairs();
	};

	// void btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer)
	void setDebugDrawer(btIDebugDraw * debugDrawer) {
		if(_obj.pushFunction("setDebugDrawer")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(debugDrawer);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::setDebugDrawer(debugDrawer);
	};

	// btIDebugDraw * btCollisionWorld::getDebugDrawer()
	btIDebugDraw * getDebugDrawer() {
		if(_obj.pushFunction("getDebugDrawer")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<btIDebugDraw*>());
		}

		return btSimpleDynamicsWorld::getDebugDrawer();
	};

	// void btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	void debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) {
		if(_obj.pushFunction("debugDrawObject")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(&worldTransform);
			_obj.pushArg(shape);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::debugDrawObject(worldTransform, shape, color);
	};

	// void btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(&rayFromWorld);
			_obj.pushArg(&rayToWorld);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);
	};

	// void btCollisionWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	void addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) {
		if(_obj.pushFunction("addCollisionObject")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(collisionObject);
			_obj.pushArg(collisionFilterGroup);
			_obj.pushArg(collisionFilterMask);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);
	};

	// void btCollisionWorld::performDiscreteCollisionDetection()
	void performDiscreteCollisionDetection() {
		if(_obj.pushFunction("performDiscreteCollisionDetection")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::performDiscreteCollisionDetection();
	};

	// void btDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	void addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) {
		if(_obj.pushFunction("addConstraint")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(constraint);
			_obj.pushArg(disableCollisionsBetweenLinkedBodies);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addConstraint(constraint, disableCollisionsBetweenLinkedBodies);
	};

	// void btDynamicsWorld::removeConstraint(btTypedConstraint * constraint)
	void removeConstraint(btTypedConstraint * constraint) {
		if(_obj.pushFunction("removeConstraint")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(constraint);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::removeConstraint(constraint);
	};

	// int btDynamicsWorld::getNumConstraints() const
	int getNumConstraints() const {
		if(_obj.pushFunction("getNumConstraints")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<int>());
		}

		return btSimpleDynamicsWorld::getNumConstraints();
	};

	// btTypedConstraint * btDynamicsWorld::getConstraint(int index)
	btTypedConstraint * getConstraint(int index) {
		if(_obj.pushFunction("getConstraint")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btTypedConstraint*>());
		}

		return btSimpleDynamicsWorld::getConstraint(index);
	};

	// const btTypedConstraint * btDynamicsWorld::getConstraint(int index) const
	const btTypedConstraint * getConstraint(int index) const {
		if(_obj.pushFunction("getConstraint")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btTypedConstraint*>());
		}

		return btSimpleDynamicsWorld::getConstraint(index);
	};

	// void btDynamicsWorld::addVehicle(btActionInterface * vehicle)
	void addVehicle(btActionInterface * vehicle) {
		if(_obj.pushFunction("addVehicle")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(vehicle);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addVehicle(vehicle);
	};

	// void btDynamicsWorld::removeVehicle(btActionInterface * vehicle)
	void removeVehicle(btActionInterface * vehicle) {
		if(_obj.pushFunction("removeVehicle")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(vehicle);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::removeVehicle(vehicle);
	};

	// void btDynamicsWorld::addCharacter(btActionInterface * character)
	void addCharacter(btActionInterface * character) {
		if(_obj.pushFunction("addCharacter")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(character);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addCharacter(character);
	};

	// void btDynamicsWorld::removeCharacter(btActionInterface * character)
	void removeCharacter(btActionInterface * character) {
		if(_obj.pushFunction("removeCharacter")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(character);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::removeCharacter(character);
	};

	// int btSimpleDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	int stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) {
		if(_obj.pushFunction("stepSimulation")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(timeStep);
			_obj.pushArg(maxSubSteps);
			_obj.pushArg(fixedTimeStep);
			return (_obj.callFunction<int>());
		}

		return btSimpleDynamicsWorld::stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
	};

	// void btSimpleDynamicsWorld::setGravity(const btVector3 & gravity)
	void setGravity(const btVector3 & gravity) {
		if(_obj.pushFunction("setGravity")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(&gravity);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::setGravity(gravity);
	};

	// btVector3 btSimpleDynamicsWorld::getGravity() const
	btVector3 getGravity() const {
		if(_obj.pushFunction("getGravity")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return *(_obj.callFunction<btVector3*>());
		}

		return btSimpleDynamicsWorld::getGravity();
	};

	// void btSimpleDynamicsWorld::addRigidBody(btRigidBody * body)
	void addRigidBody(btRigidBody * body) {
		if(_obj.pushFunction("addRigidBody")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(body);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addRigidBody(body);
	};

	// void btSimpleDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	void addRigidBody(btRigidBody * body, short group, short mask) {
		if(_obj.pushFunction("addRigidBody")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(body);
			_obj.pushArg(group);
			_obj.pushArg(mask);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addRigidBody(body, group, mask);
	};

	// void btSimpleDynamicsWorld::removeRigidBody(btRigidBody * body)
	void removeRigidBody(btRigidBody * body) {
		if(_obj.pushFunction("removeRigidBody")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(body);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::removeRigidBody(body);
	};

	// void btSimpleDynamicsWorld::debugDrawWorld()
	void debugDrawWorld() {
		if(_obj.pushFunction("debugDrawWorld")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::debugDrawWorld();
	};

	// void btSimpleDynamicsWorld::addAction(btActionInterface * action)
	void addAction(btActionInterface * action) {
		if(_obj.pushFunction("addAction")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(action);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::addAction(action);
	};

	// void btSimpleDynamicsWorld::removeAction(btActionInterface * action)
	void removeAction(btActionInterface * action) {
		if(_obj.pushFunction("removeAction")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(action);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::removeAction(action);
	};

	// void btSimpleDynamicsWorld::removeCollisionObject(btCollisionObject * collisionObject)
	void removeCollisionObject(btCollisionObject * collisionObject) {
		if(_obj.pushFunction("removeCollisionObject")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(collisionObject);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::removeCollisionObject(collisionObject);
	};

	// void btSimpleDynamicsWorld::updateAabbs()
	void updateAabbs() {
		if(_obj.pushFunction("updateAabbs")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::updateAabbs();
	};

	// void btSimpleDynamicsWorld::synchronizeMotionStates()
	void synchronizeMotionStates() {
		if(_obj.pushFunction("synchronizeMotionStates")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::synchronizeMotionStates();
	};

	// void btSimpleDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	void setConstraintSolver(btConstraintSolver * solver) {
		if(_obj.pushFunction("setConstraintSolver")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			_obj.pushArg(solver);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::setConstraintSolver(solver);
	};

	// btConstraintSolver * btSimpleDynamicsWorld::getConstraintSolver()
	btConstraintSolver * getConstraintSolver() {
		if(_obj.pushFunction("getConstraintSolver")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<btConstraintSolver*>());
		}

		return btSimpleDynamicsWorld::getConstraintSolver();
	};

	// btDynamicsWorldType btSimpleDynamicsWorld::getWorldType() const
	btDynamicsWorldType getWorldType() const {
		if(_obj.pushFunction("getWorldType")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (btDynamicsWorldType)(_obj.callFunction<int>());
		}

		return btSimpleDynamicsWorld::getWorldType();
	};

	// void btSimpleDynamicsWorld::clearForces()
	void clearForces() {
		if(_obj.pushFunction("clearForces")) {
			_obj.pushArg((btSimpleDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btSimpleDynamicsWorld::clearForces();
	};


	// Protected non-virtual methods:
	// void btSimpleDynamicsWorld::predictUnconstraintMotion(float timeStep)
	void public_predictUnconstraintMotion(float timeStep) {
		return btSimpleDynamicsWorld::predictUnconstraintMotion(timeStep);
	};

	// void btSimpleDynamicsWorld::integrateTransforms(float timeStep)
	void public_integrateTransforms(float timeStep) {
		return btSimpleDynamicsWorld::integrateTransforms(timeStep);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_predictUnconstraintMotion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_integrateTransforms(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btSimpleDynamicsWorld::public_predictUnconstraintMotion(float timeStep)
	static int _bind_public_predictUnconstraintMotion(lua_State *L) {
		if (!_lg_typecheck_public_predictUnconstraintMotion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::public_predictUnconstraintMotion(float timeStep) function, expected prototype:\nvoid btSimpleDynamicsWorld::public_predictUnconstraintMotion(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		wrapper_btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< wrapper_btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::public_predictUnconstraintMotion(float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->public_predictUnconstraintMotion(timeStep);

		return 0;
	}

	// void btSimpleDynamicsWorld::public_integrateTransforms(float timeStep)
	static int _bind_public_integrateTransforms(lua_State *L) {
		if (!_lg_typecheck_public_integrateTransforms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btSimpleDynamicsWorld::public_integrateTransforms(float timeStep) function, expected prototype:\nvoid btSimpleDynamicsWorld::public_integrateTransforms(float timeStep)\nClass arguments details:\n");
		}

		float timeStep=(float)lua_tonumber(L,2);

		wrapper_btSimpleDynamicsWorld* self=Luna< btCollisionWorld >::checkSubType< wrapper_btSimpleDynamicsWorld >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btSimpleDynamicsWorld::public_integrateTransforms(float). Got : '%s'",typeid(Luna< btCollisionWorld >::check(L,1)).name());
		}
		self->public_integrateTransforms(timeStep);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"predictUnconstraintMotion",_bind_public_predictUnconstraintMotion},
		{"integrateTransforms",_bind_public_integrateTransforms},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

