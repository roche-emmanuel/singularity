#ifndef _WRAPPERS_WRAPPER_BTDEFAULTVEHICLERAYCASTER_H_
#define _WRAPPERS_WRAPPER_BTDEFAULTVEHICLERAYCASTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/Vehicle/btRaycastVehicle.h>

class wrapper_btDefaultVehicleRaycaster : public btDefaultVehicleRaycaster, public luna_wrapper_base {

public:
		

	~wrapper_btDefaultVehicleRaycaster() {
		logDEBUG3("Calling delete function for wrapper btDefaultVehicleRaycaster");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDefaultVehicleRaycaster*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDefaultVehicleRaycaster(lua_State* L, lua_Table* dum, btDynamicsWorld * world) 
		: btDefaultVehicleRaycaster(world), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDefaultVehicleRaycaster*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void * btDefaultVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)
	void * castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result) {
		if(_obj.pushFunction("castRay")) {
			_obj.pushArg((btDefaultVehicleRaycaster*)this);
			_obj.pushArg(&from);
			_obj.pushArg(&to);
			_obj.pushArg(&result);
			return (_obj.callFunction<void*>());
		}

		return btDefaultVehicleRaycaster::castRay(from, to, result);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

