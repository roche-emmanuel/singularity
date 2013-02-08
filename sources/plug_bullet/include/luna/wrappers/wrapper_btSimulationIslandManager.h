#ifndef _WRAPPERS_WRAPPER_BTSIMULATIONISLANDMANAGER_H_
#define _WRAPPERS_WRAPPER_BTSIMULATIONISLANDMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionDispatch/btSimulationIslandManager.h>

class wrapper_btSimulationIslandManager : public btSimulationIslandManager, public luna_wrapper_base {

public:
		

	~wrapper_btSimulationIslandManager() {
		logDEBUG3("Calling delete function for wrapper btSimulationIslandManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSimulationIslandManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSimulationIslandManager(lua_State* L, lua_Table* dum) 
		: btSimulationIslandManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSimulationIslandManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void btSimulationIslandManager::updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher)
	void updateActivationState(btCollisionWorld * colWorld, btDispatcher * dispatcher) {
		if(_obj.pushFunction("updateActivationState")) {
			_obj.pushArg((btSimulationIslandManager*)this);
			_obj.pushArg(colWorld);
			_obj.pushArg(dispatcher);
			return (_obj.callFunction<void>());
		}

		return btSimulationIslandManager::updateActivationState(colWorld, dispatcher);
	};

	// void btSimulationIslandManager::storeIslandActivationState(btCollisionWorld * world)
	void storeIslandActivationState(btCollisionWorld * world) {
		if(_obj.pushFunction("storeIslandActivationState")) {
			_obj.pushArg((btSimulationIslandManager*)this);
			_obj.pushArg(world);
			return (_obj.callFunction<void>());
		}

		return btSimulationIslandManager::storeIslandActivationState(world);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

