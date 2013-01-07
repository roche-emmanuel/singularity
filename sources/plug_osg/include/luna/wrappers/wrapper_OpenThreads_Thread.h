#ifndef _WRAPPERS_WRAPPER_OPENTHREADS_THREAD_H_
#define _WRAPPERS_WRAPPER_OPENTHREADS_THREAD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <OpenThreads/Thread>

class wrapper_OpenThreads_Thread : public OpenThreads::Thread, public luna_wrapper_base {

public:
		

	~wrapper_OpenThreads_Thread() {
		logDEBUG3("Calling delete function for wrapper OpenThreads_Thread");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_OpenThreads_Thread(lua_State* L, lua_Table* dum) : OpenThreads::Thread(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int OpenThreads::Thread::cancel()
	int cancel() {
		if(_obj.pushFunction("cancel")) {
			return (_obj.callFunction<int>());
		}

		return Thread::cancel();
	};

	// void OpenThreads::Thread::run()
	void run() {
		THROW_IF(!_obj.pushFunction("run"),"No implementation for abstract function OpenThreads::Thread::run");
		return (_obj.callFunction<void>());
	};

	// void OpenThreads::Thread::cancelCleanup()
	void cancelCleanup() {
		if(_obj.pushFunction("cancelCleanup")) {
			return (_obj.callFunction<void>());
		}

		return Thread::cancelCleanup();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

