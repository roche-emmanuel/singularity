#ifndef _WRAPPERS_WRAPPER_SGT_TASKLISTENER_H_
#define _WRAPPERS_WRAPPER_SGT_TASKLISTENER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <taskgraph/Task.h>

class wrapper_sgt_TaskListener : public sgt::TaskListener, public luna_wrapper_base {

public:
		

	~wrapper_sgt_TaskListener() {
		logDEBUG3("Calling delete function for wrapper sgt_TaskListener");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgt::TaskListener*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_sgt_TaskListener(lua_State* L, lua_Table* dum) 
		: sgt::TaskListener(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((sgt::TaskListener*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void sgt::TaskListener::taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r)
	void taskStateChanged(sgt::Task * t, bool done, sgt::Task::reason r) {
		THROW_IF(!_obj.pushFunction("taskStateChanged"),"No implementation for abstract function sgt::TaskListener::taskStateChanged");
		_obj.pushArg((sgt::TaskListener*)this);
		_obj.pushArg(t);
		_obj.pushArg(done);
		_obj.pushArg((int)r);
		return (_obj.callFunction<void>());
	};

	// void sgt::TaskListener::completionDateChanged(sgt::Task * t, unsigned int date)
	void completionDateChanged(sgt::Task * t, unsigned int date) {
		THROW_IF(!_obj.pushFunction("completionDateChanged"),"No implementation for abstract function sgt::TaskListener::completionDateChanged");
		_obj.pushArg((sgt::TaskListener*)this);
		_obj.pushArg(t);
		_obj.pushArg(date);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

