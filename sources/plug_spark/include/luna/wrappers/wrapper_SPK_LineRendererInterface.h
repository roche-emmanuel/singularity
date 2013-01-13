#ifndef _WRAPPERS_WRAPPER_SPK_LINERENDERERINTERFACE_H_
#define _WRAPPERS_WRAPPER_SPK_LINERENDERERINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Extensions/Renderers/SPK_LineRendererInterface.h>

class wrapper_SPK_LineRendererInterface : public SPK::LineRendererInterface, public luna_wrapper_base {

public:
		

	~wrapper_SPK_LineRendererInterface() {
		logDEBUG3("Calling delete function for wrapper SPK_LineRendererInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::LineRendererInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_LineRendererInterface(lua_State* L, lua_Table* dum, float length = 1.0f, float width = 1.0f) 
		: SPK::LineRendererInterface(length, width), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::LineRendererInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void SPK::LineRendererInterface::setWidth(float width)
	void setWidth(float width) {
		if(_obj.pushFunction("setWidth")) {
			_obj.pushArg((SPK::LineRendererInterface*)this);
			_obj.pushArg(width);
			return (_obj.callFunction<void>());
		}

		return LineRendererInterface::setWidth(width);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

