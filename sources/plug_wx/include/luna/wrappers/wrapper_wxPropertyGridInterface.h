#ifndef _WRAPPERS_WRAPPER_WXPROPERTYGRIDINTERFACE_H_
#define _WRAPPERS_WRAPPER_WXPROPERTYGRIDINTERFACE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/propgrid/propgridiface.h>

class wrapper_wxPropertyGridInterface : public wxPropertyGridInterface, public luna_wrapper_base {

public:
		

	~wrapper_wxPropertyGridInterface() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxPropertyGridInterface::Clear()
	void Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function wxPropertyGridInterface::Clear");
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

