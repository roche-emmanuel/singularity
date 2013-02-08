#ifndef _WRAPPERS_WRAPPER_BTDYNAMICSWORLD_H_
#define _WRAPPERS_WRAPPER_BTDYNAMICSWORLD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/Dynamics/btDynamicsWorld.h>

class wrapper_btDynamicsWorld : public btDynamicsWorld, public luna_wrapper_base {

public:
		

	~wrapper_btDynamicsWorld() {
		logDEBUG3("Calling delete function for wrapper btDynamicsWorld");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDynamicsWorld*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDynamicsWorld(lua_State* L, lua_Table* dum, btDispatcher * dispatcher, btBroadphaseInterface * broadphase, btCollisionConfiguration * collisionConfiguration) 
		: btDynamicsWorld(dispatcher, broadphase, collisionConfiguration), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionWorld::updateAabbs()
	void updateAabbs() {
		if(_obj.pushFunction("updateAabbs")) {
			_obj.pushArg((btDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::updateAabbs();
	};

	// void btCollisionWorld::computeOverlappingPairs()
	void computeOverlappingPairs() {
		if(_obj.pushFunction("computeOverlappingPairs")) {
			_obj.pushArg((btDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::computeOverlappingPairs();
	};

	// void btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer)
	void setDebugDrawer(btIDebugDraw * debugDrawer) {
		if(_obj.pushFunction("setDebugDrawer")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(debugDrawer);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::setDebugDrawer(debugDrawer);
	};

	// btIDebugDraw * btCollisionWorld::getDebugDrawer()
	btIDebugDraw * getDebugDrawer() {
		if(_obj.pushFunction("getDebugDrawer")) {
			_obj.pushArg((btDynamicsWorld*)this);
			return (_obj.callFunction<btIDebugDraw*>());
		}

		return btDynamicsWorld::getDebugDrawer();
	};

	// void btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	void debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) {
		if(_obj.pushFunction("debugDrawObject")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(&worldTransform);
			_obj.pushArg(shape);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::debugDrawObject(worldTransform, shape, color);
	};

	// void btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(&rayFromWorld);
			_obj.pushArg(&rayToWorld);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);
	};

	// void btCollisionWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	void addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) {
		if(_obj.pushFunction("addCollisionObject")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(collisionObject);
			_obj.pushArg(collisionFilterGroup);
			_obj.pushArg(collisionFilterMask);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);
	};

	// void btCollisionWorld::removeCollisionObject(btCollisionObject * collisionObject)
	void removeCollisionObject(btCollisionObject * collisionObject) {
		if(_obj.pushFunction("removeCollisionObject")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(collisionObject);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::removeCollisionObject(collisionObject);
	};

	// void btCollisionWorld::performDiscreteCollisionDetection()
	void performDiscreteCollisionDetection() {
		if(_obj.pushFunction("performDiscreteCollisionDetection")) {
			_obj.pushArg((btDynamicsWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::performDiscreteCollisionDetection();
	};

	// int btDynamicsWorld::stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.))
	int stepSimulation(float timeStep, int maxSubSteps = 1, float fixedTimeStep = float (1.)/ float (60.)) {
		THROW_IF(!_obj.pushFunction("stepSimulation"),"No implementation for abstract function btDynamicsWorld::stepSimulation");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(timeStep);
		_obj.pushArg(maxSubSteps);
		_obj.pushArg(fixedTimeStep);
		return (_obj.callFunction<int>());
	};

	// void btDynamicsWorld::debugDrawWorld()
	void debugDrawWorld() {
		THROW_IF(!_obj.pushFunction("debugDrawWorld"),"No implementation for abstract function btDynamicsWorld::debugDrawWorld");
		_obj.pushArg((btDynamicsWorld*)this);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false)
	void addConstraint(btTypedConstraint * constraint, bool disableCollisionsBetweenLinkedBodies = false) {
		if(_obj.pushFunction("addConstraint")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(constraint);
			_obj.pushArg(disableCollisionsBetweenLinkedBodies);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::addConstraint(constraint, disableCollisionsBetweenLinkedBodies);
	};

	// void btDynamicsWorld::removeConstraint(btTypedConstraint * constraint)
	void removeConstraint(btTypedConstraint * constraint) {
		if(_obj.pushFunction("removeConstraint")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(constraint);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::removeConstraint(constraint);
	};

	// void btDynamicsWorld::addAction(btActionInterface * action)
	void addAction(btActionInterface * action) {
		THROW_IF(!_obj.pushFunction("addAction"),"No implementation for abstract function btDynamicsWorld::addAction");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(action);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::removeAction(btActionInterface * action)
	void removeAction(btActionInterface * action) {
		THROW_IF(!_obj.pushFunction("removeAction"),"No implementation for abstract function btDynamicsWorld::removeAction");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(action);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::setGravity(const btVector3 & gravity)
	void setGravity(const btVector3 & gravity) {
		THROW_IF(!_obj.pushFunction("setGravity"),"No implementation for abstract function btDynamicsWorld::setGravity");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(&gravity);
		return (_obj.callFunction<void>());
	};

	// btVector3 btDynamicsWorld::getGravity() const
	btVector3 getGravity() const {
		THROW_IF(!_obj.pushFunction("getGravity"),"No implementation for abstract function btDynamicsWorld::getGravity");
		_obj.pushArg((btDynamicsWorld*)this);
		return *(_obj.callFunction<btVector3*>());
	};

	// void btDynamicsWorld::synchronizeMotionStates()
	void synchronizeMotionStates() {
		THROW_IF(!_obj.pushFunction("synchronizeMotionStates"),"No implementation for abstract function btDynamicsWorld::synchronizeMotionStates");
		_obj.pushArg((btDynamicsWorld*)this);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::addRigidBody(btRigidBody * body)
	void addRigidBody(btRigidBody * body) {
		THROW_IF(!_obj.pushFunction("addRigidBody"),"No implementation for abstract function btDynamicsWorld::addRigidBody");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(body);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::addRigidBody(btRigidBody * body, short group, short mask)
	void addRigidBody(btRigidBody * body, short group, short mask) {
		THROW_IF(!_obj.pushFunction("addRigidBody"),"No implementation for abstract function btDynamicsWorld::addRigidBody");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(body);
		_obj.pushArg(group);
		_obj.pushArg(mask);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::removeRigidBody(btRigidBody * body)
	void removeRigidBody(btRigidBody * body) {
		THROW_IF(!_obj.pushFunction("removeRigidBody"),"No implementation for abstract function btDynamicsWorld::removeRigidBody");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(body);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::setConstraintSolver(btConstraintSolver * solver)
	void setConstraintSolver(btConstraintSolver * solver) {
		THROW_IF(!_obj.pushFunction("setConstraintSolver"),"No implementation for abstract function btDynamicsWorld::setConstraintSolver");
		_obj.pushArg((btDynamicsWorld*)this);
		_obj.pushArg(solver);
		return (_obj.callFunction<void>());
	};

	// btConstraintSolver * btDynamicsWorld::getConstraintSolver()
	btConstraintSolver * getConstraintSolver() {
		THROW_IF(!_obj.pushFunction("getConstraintSolver"),"No implementation for abstract function btDynamicsWorld::getConstraintSolver");
		_obj.pushArg((btDynamicsWorld*)this);
		return (_obj.callFunction<btConstraintSolver*>());
	};

	// int btDynamicsWorld::getNumConstraints() const
	int getNumConstraints() const {
		if(_obj.pushFunction("getNumConstraints")) {
			_obj.pushArg((btDynamicsWorld*)this);
			return (_obj.callFunction<int>());
		}

		return btDynamicsWorld::getNumConstraints();
	};

	// btTypedConstraint * btDynamicsWorld::getConstraint(int index)
	btTypedConstraint * getConstraint(int index) {
		if(_obj.pushFunction("getConstraint")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btTypedConstraint*>());
		}

		return btDynamicsWorld::getConstraint(index);
	};

	// const btTypedConstraint * btDynamicsWorld::getConstraint(int index) const
	const btTypedConstraint * getConstraint(int index) const {
		if(_obj.pushFunction("getConstraint")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<btTypedConstraint*>());
		}

		return btDynamicsWorld::getConstraint(index);
	};

	// btDynamicsWorldType btDynamicsWorld::getWorldType() const
	btDynamicsWorldType getWorldType() const {
		THROW_IF(!_obj.pushFunction("getWorldType"),"No implementation for abstract function btDynamicsWorld::getWorldType");
		_obj.pushArg((btDynamicsWorld*)this);
		return (btDynamicsWorldType)(_obj.callFunction<int>());
	};

	// void btDynamicsWorld::clearForces()
	void clearForces() {
		THROW_IF(!_obj.pushFunction("clearForces"),"No implementation for abstract function btDynamicsWorld::clearForces");
		_obj.pushArg((btDynamicsWorld*)this);
		return (_obj.callFunction<void>());
	};

	// void btDynamicsWorld::addVehicle(btActionInterface * vehicle)
	void addVehicle(btActionInterface * vehicle) {
		if(_obj.pushFunction("addVehicle")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(vehicle);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::addVehicle(vehicle);
	};

	// void btDynamicsWorld::removeVehicle(btActionInterface * vehicle)
	void removeVehicle(btActionInterface * vehicle) {
		if(_obj.pushFunction("removeVehicle")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(vehicle);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::removeVehicle(vehicle);
	};

	// void btDynamicsWorld::addCharacter(btActionInterface * character)
	void addCharacter(btActionInterface * character) {
		if(_obj.pushFunction("addCharacter")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(character);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::addCharacter(character);
	};

	// void btDynamicsWorld::removeCharacter(btActionInterface * character)
	void removeCharacter(btActionInterface * character) {
		if(_obj.pushFunction("removeCharacter")) {
			_obj.pushArg((btDynamicsWorld*)this);
			_obj.pushArg(character);
			return (_obj.callFunction<void>());
		}

		return btDynamicsWorld::removeCharacter(character);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

