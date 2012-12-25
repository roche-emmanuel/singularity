#ifndef _WRAPPERS_WRAPPER_WXZIPOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXZIPOUTPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/zipstrm.h>

class wrapper_wxZipOutputStream : public wxZipOutputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxZipOutputStream() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:


	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

