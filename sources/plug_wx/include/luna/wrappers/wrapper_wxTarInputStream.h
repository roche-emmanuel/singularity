#ifndef _WRAPPERS_WRAPPER_WXTARINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXTARINPUTSTREAM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/tarstrm.h>

class wrapper_wxTarInputStream : public wxTarInputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxTarInputStream() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// bool wxTarInputStream::CloseEntry()
	bool CloseEntry() {
		if(_obj.pushFunction("CloseEntry")) {
			return (_obj.callFunction<bool>());
		}

		return wxTarInputStream::CloseEntry();
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

