#ifndef _WRAPPERS_WRAPPER_WXPREVIEWCANVAS_H_
#define _WRAPPERS_WRAPPER_WXPREVIEWCANVAS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/print.h>

class wrapper_wxPreviewCanvas : public wxPreviewCanvas, public luna_wrapper_base {

public:
		

	~wrapper_wxPreviewCanvas() {
		logDEBUG3("Calling delete function for wrapper wxPreviewCanvas");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPreviewCanvas*)this); // No this argument or the object will be referenced again!
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


};




#endif

