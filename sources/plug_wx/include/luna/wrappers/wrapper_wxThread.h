#ifndef _WRAPPERS_WRAPPER_WXTHREAD_H_
#define _WRAPPERS_WRAPPER_WXTHREAD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/thread.h>

class wrapper_wxThread : public wxThread, public luna_wrapper_base {

public:
		

	~wrapper_wxThread() {
		if(_obj.pushFunction("delete")) {
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


protected:
// void * wxThread::Entry()
void * Entry() {
	THROW_IF(true,"The function call void * wxThread::Entry() is not implemented in wrapper.");
};

};




#endif

