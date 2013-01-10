#ifndef _WRAPPERS_WRAPPER_SPK_POINTRENDERERINTERFACE_H_
#define _WRAPPERS_WRAPPER_SPK_POINTRENDERERINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Extensions/Renderers/SPK_PointRendererInterface.h>

class wrapper_SPK_PointRendererInterface : public SPK::PointRendererInterface, public luna_wrapper_base {

public:
		

	~wrapper_SPK_PointRendererInterface() {
		logDEBUG3("Calling delete function for wrapper SPK_PointRendererInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::PointRendererInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_PointRendererInterface(lua_State* L, lua_Table* dum, SPK::PointType type = SPK::POINT_SQUARE, float size = 1.0f) 
		: SPK::PointRendererInterface(type, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::PointRendererInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool SPK::PointRendererInterface::setType(SPK::PointType type)
	bool setType(SPK::PointType type) {
		if(_obj.pushFunction("setType")) {
			_obj.pushArg((SPK::PointRendererInterface*)this);
			_obj.pushArg(type);
			return (_obj.callFunction<bool>());
		}

		return PointRendererInterface::setType(type);
	};

	// void SPK::PointRendererInterface::setSize(float size)
	void setSize(float size) {
		if(_obj.pushFunction("setSize")) {
			_obj.pushArg((SPK::PointRendererInterface*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return PointRendererInterface::setSize(size);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

