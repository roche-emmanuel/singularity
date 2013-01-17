#ifndef _WRAPPERS_WRAPPER_BTSIMULATIONISLANDMANAGER_ISLANDCALLBACK_H_
#define _WRAPPERS_WRAPPER_BTSIMULATIONISLANDMANAGER_ISLANDCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btSimulationIslandManager.h>

class wrapper_btSimulationIslandManager_IslandCallback : public btSimulationIslandManager::IslandCallback, public luna_wrapper_base {

public:
		

	~wrapper_btSimulationIslandManager_IslandCallback() {
		logDEBUG3("Calling delete function for wrapper btSimulationIslandManager_IslandCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSimulationIslandManager::IslandCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSimulationIslandManager_IslandCallback(lua_State* L, lua_Table* dum) 
		: btSimulationIslandManager::IslandCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSimulationIslandManager::IslandCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void btSimulationIslandManager::IslandCallback::processIsland(btCollisionObject ** bodies, int numBodies, class btPersistentManifold ** manifolds, int numManifolds, int islandId)
void processIsland(btCollisionObject **, int, class btPersistentManifold **, int, int) {
	THROW_IF(true,"The function call void btSimulationIslandManager::IslandCallback::processIsland(btCollisionObject **, int, class btPersistentManifold **, int, int) is not implemented in wrapper.");
};

};




#endif

