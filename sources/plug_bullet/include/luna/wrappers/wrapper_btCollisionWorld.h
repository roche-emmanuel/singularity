#ifndef _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_H_
#define _WRAPPERS_WRAPPER_BTCOLLISIONWORLD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>

class wrapper_btCollisionWorld : public btCollisionWorld, public luna_wrapper_base {

public:
		

	~wrapper_btCollisionWorld() {
		logDEBUG3("Calling delete function for wrapper btCollisionWorld");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btCollisionWorld*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btCollisionWorld(lua_State* L, lua_Table* dum, btDispatcher * dispatcher, btBroadphaseInterface * broadphasePairCache, btCollisionConfiguration * collisionConfiguration) 
		: btCollisionWorld(dispatcher, broadphasePairCache, collisionConfiguration), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btCollisionWorld*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btCollisionWorld::updateAabbs()
	void updateAabbs() {
		if(_obj.pushFunction("updateAabbs")) {
			_obj.pushArg((btCollisionWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::updateAabbs();
	};

	// void btCollisionWorld::computeOverlappingPairs()
	void computeOverlappingPairs() {
		if(_obj.pushFunction("computeOverlappingPairs")) {
			_obj.pushArg((btCollisionWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::computeOverlappingPairs();
	};

	// void btCollisionWorld::setDebugDrawer(btIDebugDraw * debugDrawer)
	void setDebugDrawer(btIDebugDraw * debugDrawer) {
		if(_obj.pushFunction("setDebugDrawer")) {
			_obj.pushArg((btCollisionWorld*)this);
			_obj.pushArg(debugDrawer);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::setDebugDrawer(debugDrawer);
	};

	// btIDebugDraw * btCollisionWorld::getDebugDrawer()
	btIDebugDraw * getDebugDrawer() {
		if(_obj.pushFunction("getDebugDrawer")) {
			_obj.pushArg((btCollisionWorld*)this);
			return (_obj.callFunction<btIDebugDraw*>());
		}

		return btCollisionWorld::getDebugDrawer();
	};

	// void btCollisionWorld::debugDrawWorld()
	void debugDrawWorld() {
		if(_obj.pushFunction("debugDrawWorld")) {
			_obj.pushArg((btCollisionWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::debugDrawWorld();
	};

	// void btCollisionWorld::debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color)
	void debugDrawObject(const btTransform & worldTransform, const btCollisionShape * shape, const btVector3 & color) {
		if(_obj.pushFunction("debugDrawObject")) {
			_obj.pushArg((btCollisionWorld*)this);
			_obj.pushArg(&worldTransform);
			_obj.pushArg(shape);
			_obj.pushArg(&color);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::debugDrawObject(worldTransform, shape, color);
	};

	// void btCollisionWorld::rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const
	void rayTest(const btVector3 & rayFromWorld, const btVector3 & rayToWorld, btCollisionWorld::RayResultCallback & resultCallback) const {
		if(_obj.pushFunction("rayTest")) {
			_obj.pushArg((btCollisionWorld*)this);
			_obj.pushArg(&rayFromWorld);
			_obj.pushArg(&rayToWorld);
			_obj.pushArg(&resultCallback);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::rayTest(rayFromWorld, rayToWorld, resultCallback);
	};

	// void btCollisionWorld::addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter)
	void addCollisionObject(btCollisionObject * collisionObject, short int collisionFilterGroup = btBroadphaseProxy::DefaultFilter, short int collisionFilterMask = btBroadphaseProxy::AllFilter) {
		if(_obj.pushFunction("addCollisionObject")) {
			_obj.pushArg((btCollisionWorld*)this);
			_obj.pushArg(collisionObject);
			_obj.pushArg(collisionFilterGroup);
			_obj.pushArg(collisionFilterMask);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);
	};

	// void btCollisionWorld::removeCollisionObject(btCollisionObject * collisionObject)
	void removeCollisionObject(btCollisionObject * collisionObject) {
		if(_obj.pushFunction("removeCollisionObject")) {
			_obj.pushArg((btCollisionWorld*)this);
			_obj.pushArg(collisionObject);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::removeCollisionObject(collisionObject);
	};

	// void btCollisionWorld::performDiscreteCollisionDetection()
	void performDiscreteCollisionDetection() {
		if(_obj.pushFunction("performDiscreteCollisionDetection")) {
			_obj.pushArg((btCollisionWorld*)this);
			return (_obj.callFunction<void>());
		}

		return btCollisionWorld::performDiscreteCollisionDetection();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

