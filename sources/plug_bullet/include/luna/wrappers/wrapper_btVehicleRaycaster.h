#ifndef _WRAPPERS_WRAPPER_BTVEHICLERAYCASTER_H_
#define _WRAPPERS_WRAPPER_BTVEHICLERAYCASTER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletDynamics/Vehicle/btVehicleRaycaster.h>

class wrapper_btVehicleRaycaster : public btVehicleRaycaster, public luna_wrapper_base {

public:
		

	~wrapper_btVehicleRaycaster() {
		logDEBUG3("Calling delete function for wrapper btVehicleRaycaster");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btVehicleRaycaster*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btVehicleRaycaster(lua_State* L, lua_Table* dum) 
		: btVehicleRaycaster(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btVehicleRaycaster*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void * btVehicleRaycaster::castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result)
	void * castRay(const btVector3 & from, const btVector3 & to, btVehicleRaycaster::btVehicleRaycasterResult & result) {
		THROW_IF(!_obj.pushFunction("castRay"),"No implementation for abstract function btVehicleRaycaster::castRay");
		_obj.pushArg((btVehicleRaycaster*)this);
		_obj.pushArg(&from);
		_obj.pushArg(&to);
		_obj.pushArg(&result);
		return (_obj.callFunction<void*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

